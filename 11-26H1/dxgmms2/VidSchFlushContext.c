/*
 * XREFs of VidSchFlushContext @ 0x140116BF0
 * Callers:
 *     VidSchTerminateContext @ 0x140116930 (VidSchTerminateContext.c)
 * Callees:
 *     VidSchiCleanupDeferredWaiterContext @ 0x1400064D8 (VidSchiCleanupDeferredWaiterContext.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     VidSchiInterlockedReadUlong @ 0x14003F594 (VidSchiInterlockedReadUlong.c)
 *     VidSchiCancelDelayTimerContext @ 0x140041090 (VidSchiCancelDelayTimerContext.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1400413A8 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     VidSchiWaitFlushCompletion @ 0x140116D6C (VidSchiWaitFlushCompletion.c)
 */

__int64 __fastcall VidSchFlushContext(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax
  union _LARGE_INTEGER v9; // [rsp+28h] [rbp-79h]
  _QWORD v10[20]; // [rsp+58h] [rbp-49h] BYREF

  if ( a1 && a2 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL);
    VidSchRundownUnorderedWaiter<_VIDSCH_CONTEXT>(a1, v5, *a2, a4, v9);
    VidSchiCleanupDeferredWaiterContext(a1);
    memset(v10, 0, sizeof(v10));
    if ( *(_DWORD *)(a1 + 792) )
    {
      v8 = *(_QWORD *)(a1 + 96);
      LODWORD(v10[4]) |= 0x50u;
      LODWORD(v10[2]) = 1;
      v10[5] = a1 + 792;
      LODWORD(v10[6]) = *(unsigned __int16 *)(v8 + 4);
      VidSchiWaitFlushCompletion(v5, v10, 22LL);
    }
    VidSchiInterlockedReadUlong((KSPIN_LOCK *)(v5 + 2016), (_DWORD *)(a1 + 792));
    if ( *(_DWORD *)(a1 + 800) )
    {
      memset(v10, 0, sizeof(v10));
      LODWORD(v10[4]) |= 0x10u;
      LODWORD(v10[2]) = 3;
      v10[5] = a1 + 800;
      VidSchiWaitFlushCompletion(v5, v10, 22LL);
    }
    VidSchiCancelDelayTimerContext(0LL, a1);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    WdLogGlobalForLineNumber = 5743;
    DxgkLogInternalTriageEvent(v7, 0x40000LL);
    return 3221225485LL;
  }
}
