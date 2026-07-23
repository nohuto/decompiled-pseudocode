/*
 * XREFs of MiFlushAllPages @ 0x1404FE17C
 * Callers:
 *     MmFlushAllPagesEx @ 0x1406FDDA0 (MmFlushAllPagesEx.c)
 *     MmPerformMemoryListCommand @ 0x140C12670 (MmPerformMemoryListCommand.c)
 * Callees:
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140207CD0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1403C5D10 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiFlushAllPagesWorker @ 0x1403E3C5C (MiFlushAllPagesWorker.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiFlushAllPages(__int64 a1, char a2, unsigned int a3)
{
  ULONG64 v5; // r14
  ULONG64 v6; // rbp
  __int64 result; // rax
  struct _KPROCESS *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 QpcTimeStamp; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  v5 = 10000000LL * a3;
  v6 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
  result = MiFlushAllPagesWorker(a1, v6, v5, 0LL);
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 1300) != -1 )
    {
      v8 = *(struct _KPROCESS **)(a1 + 2056);
      KeStackAttachProcess(v8, &ApcState);
      MiEmptyWorkingSetPrivatePagesByVa((__int64)&v8[2].ReadyListHead.Blink, 0, v9, v10);
      KiUnstackDetachProcess((__int64)&ApcState, 0);
      return MiFlushAllPagesWorker(a1, v6, v5, 0LL);
    }
  }
  return result;
}
