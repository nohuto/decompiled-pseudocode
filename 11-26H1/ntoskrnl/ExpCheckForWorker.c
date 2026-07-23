/*
 * XREFs of ExpCheckForWorker @ 0x140346C58
 * Callers:
 *     ExpFreePoolChecks @ 0x140346B10 (ExpFreePoolChecks.c)
 *     ExFreeHeapPool @ 0x1403A9910 (ExFreeHeapPool.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     PsGetNextPartition @ 0x1402598D8 (PsGetNextPartition.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KeIsNodeInitialized @ 0x14038402C (KeIsNodeInitialized.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

_QWORD *__fastcall ExpCheckForWorker(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  void *i; // rcx
  _QWORD *result; // rax
  _QWORD *v5; // rbx
  unsigned __int16 j; // di
  __int64 v7; // r8
  int v8; // r9d
  unsigned __int64 v9; // r10
  unsigned __int16 *v10; // r12
  int k; // r14d
  unsigned int m; // r15d
  volatile signed __int32 *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int8 CurrentIrql; // bp
  int v17; // ecx
  volatile signed __int32 **v18; // rdx
  volatile signed __int32 *n; // r8
  ULONG_PTR BugCheckParameter4; // [rsp+60h] [rbp+8h]

  BugCheckParameter4 = a2 + BugCheckParameter3;
  for ( i = 0LL; ; i = v5 )
  {
    result = PsGetNextPartition(i);
    v5 = result;
    if ( !result )
      break;
    if ( result != PspSystemPartition || result[2] )
    {
      for ( j = 0; j < (unsigned __int16)KeNumberNodes; j += v8 )
      {
        if ( (unsigned __int8)KeIsNodeInitialized(j) )
          v10 = (unsigned __int16 *)KeNodeBlock[j];
        else
          v10 = (unsigned __int16 *)v7;
        for ( k = v7; k < 8; k += v8 )
        {
          for ( m = v7; m < *((_DWORD *)v10 + 30); m += v8 )
          {
            v13 = (volatile signed __int32 *)v7;
            v14 = *(_QWORD *)(v5[2] + 8LL);
            v15 = m + *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[72] * (k + 8 * *v10);
            if ( ((unsigned __int8)*(_QWORD *)(v14 + 8 * v15) & (unsigned __int8)v8) == 0 )
              v13 = *(volatile signed __int32 **)(v14 + 8 * v15);
            if ( v13 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql != (_BYTE)v9 )
                __writecr8(v9);
              if ( KiIrqlFlags != (_DWORD)v7 )
              {
                LOBYTE(v15) = v9;
                LOBYTE(v14) = CurrentIrql;
                KiRaiseIrqlProcessIrqlFlags(v14, v15);
              }
              KiAcquireKobjectLockSafe(v13, v15, v7);
              v17 = 0;
              v18 = (volatile signed __int32 **)(v13 + 6);
              while ( v17 < 32 )
              {
                for ( n = *v18; n != &v13[4 * v17 + 6]; n = *(volatile signed __int32 **)n )
                {
                  if ( (unsigned __int64)n >= BugCheckParameter3 && (unsigned __int64)n < BugCheckParameter4 )
                    KeBugCheckEx(0xE4u, 0LL, (ULONG_PTR)n, BugCheckParameter3, BugCheckParameter4);
                }
                ++v17;
                v18 += 2;
              }
              _InterlockedAnd(v13, 0xFFFFFF7F);
              v7 = 0LL;
              if ( KiIrqlFlags )
              {
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
                v7 = 0LL;
              }
              __writecr8(CurrentIrql);
              v8 = 1;
              v9 = 2LL;
            }
          }
        }
      }
    }
  }
  return result;
}
