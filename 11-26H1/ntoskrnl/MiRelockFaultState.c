/*
 * XREFs of MiRelockFaultState @ 0x14038C0A0
 * Callers:
 *     MiWaitForCollidedFaultComplete @ 0x14038B588 (MiWaitForCollidedFaultComplete.c)
 *     MiIssueHardFault @ 0x14038D350 (MiIssueHardFault.c)
 *     MiPrivateFixup @ 0x14051D784 (MiPrivateFixup.c)
 *     MiKernelWriteToExecutableMemory @ 0x1406FF57C (MiKernelWriteToExecutableMemory.c)
 *     MiSoftFaultClusterTradeAcquireLocks @ 0x140712350 (MiSoftFaultClusterTradeAcquireLocks.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14027E5A0 (MiLockWorkingSetExclusive.c)
 *     MiUnlockPageTableInternal @ 0x1402D13E0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402EDD60 (MiLockWorkingSetShared.c)
 *     MiLockLowestValidPageTableEx @ 0x140300610 (MiLockLowestValidPageTableEx.c)
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
