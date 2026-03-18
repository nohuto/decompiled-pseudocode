/*
 * XREFs of VidSchiResumeFlipQueues @ 0x14011659C
 * Callers:
 *     VidSchResumeSchedulerForSource @ 0x140116580 (VidSchResumeSchedulerForSource.c)
 * Callees:
 *     VidSchiUnwaitFlipQueueUnderSchedulerSpinLock @ 0x1400073C8 (VidSchiUnwaitFlipQueueUnderSchedulerSpinLock.c)
 *     VidSchiMarkFlipQueuesRunningStateOnPresentInfo @ 0x14003C19C (VidSchiMarkFlipQueuesRunningStateOnPresentInfo.c)
 */

void __fastcall VidSchiResumeFlipQueues(__int64 a1, int a2)
{
  __int64 i; // rdi
  __int64 v5; // rdx

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 48); i = (unsigned int)(i + 1) )
  {
    if ( _bittest(&a2, i) )
    {
      v5 = *(_QWORD *)(a1 + 8 * i + 3448);
      if ( v5 )
        VidSchiMarkFlipQueuesRunningStateOnPresentInfo(a1, v5, 1u, 0LL);
    }
  }
  VidSchiUnwaitFlipQueueUnderSchedulerSpinLock(a1);
}
