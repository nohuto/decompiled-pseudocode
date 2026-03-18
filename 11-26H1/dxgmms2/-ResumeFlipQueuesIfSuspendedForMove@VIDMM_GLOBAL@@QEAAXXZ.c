/*
 * XREFs of ?ResumeFlipQueuesIfSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400D1870
 * Callers:
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D1528 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 * Callees:
 *     VidSchiUnwaitFlipQueueUnderSchedulerSpinLock @ 0x1400073C8 (VidSchiUnwaitFlipQueueUnderSchedulerSpinLock.c)
 *     VidSchiMarkFlipQueuesRunningStateOnPresentInfo @ 0x14003C19C (VidSchiMarkFlipQueuesRunningStateOnPresentInfo.c)
 */

void __fastcall VIDMM_GLOBAL::ResumeFlipQueuesIfSuspendedForMove(VIDMM_GLOBAL *this)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdx

  if ( *((_BYTE *)this + 45216) )
  {
    v2 = 0LL;
    v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 744LL);
    if ( *(_DWORD *)(v3 + 48) )
    {
      do
      {
        if ( 1 << v2 )
        {
          v4 = *(_QWORD *)(v3 + 8 * v2 + 3448);
          if ( v4 )
            VidSchiMarkFlipQueuesRunningStateOnPresentInfo(v3, v4, 1u, 0LL);
        }
        v2 = (unsigned int)(v2 + 1);
      }
      while ( (unsigned int)v2 < *(_DWORD *)(v3 + 48) );
    }
    VidSchiUnwaitFlipQueueUnderSchedulerSpinLock(v3);
    *((_BYTE *)this + 45216) = 0;
  }
}
