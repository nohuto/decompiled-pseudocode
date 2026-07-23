/*
 * XREFs of MiRelockFaultState @ 0x14038DE50
 * Callers:
 *     MiWaitForCollidedFaultComplete @ 0x14038D338 (MiWaitForCollidedFaultComplete.c)
 *     MiIssueHardFault @ 0x14038F100 (MiIssueHardFault.c)
 *     MiPrivateFixup @ 0x14051FCB0 (MiPrivateFixup.c)
 *     MiKernelWriteToExecutableMemory @ 0x14070424C (MiKernelWriteToExecutableMemory.c)
 *     MiSoftFaultClusterTradeAcquireLocks @ 0x140717048 (MiSoftFaultClusterTradeAcquireLocks.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14027DB10 (MiLockWorkingSetExclusive.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockLowestValidPageTableEx @ 0x1402E2690 (MiLockLowestValidPageTableEx.c)
 */

unsigned __int64 __fastcall MiRelockFaultState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // rdi
  unsigned __int8 v7; // r14
  unsigned __int64 result; // rax
  unsigned __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)a1;
  v4 = 0LL;
  if ( a2 )
  {
    v7 = MiLockWorkingSetShared(*(_QWORD *)a1, a2, a3);
    result = MiLockLowestValidPageTableEx(v3, a2 << 25 >> 16, &v9, 0);
    v4 = result;
    if ( result == a2 )
    {
      if ( result )
      {
        *(_QWORD *)(a1 + 16) = result;
        return result;
      }
    }
    else
    {
      MiUnlockPageTableInternal(v3, result);
      MiUnlockWorkingSetShared(v3, v7);
      v4 = 0LL;
    }
  }
  *(_BYTE *)(a1 + 13) |= 1u;
  result = MiLockWorkingSetExclusive(v3, a2, a3);
  *(_QWORD *)(a1 + 16) = v4;
  return result;
}
