/*
 * XREFs of KiSrcuProcessorInitialize @ 0x14052D6B8
 * Callers:
 *     KiRcuProcessorInitialize @ 0x140512FBC (KiRcuProcessorInitialize.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSrcuNotifyGracePeriodStartedOnCpu @ 0x1405F565C (KiSrcuNotifyGracePeriodStartedOnCpu.c)
 *     KiSrcuProcessorAddToTopologyTree @ 0x1405F58C4 (KiSrcuProcessorAddToTopologyTree.c)
 */

void __fastcall KiSrcuProcessorInitialize(__int64 a1, unsigned int a2)
{
  __int64 v4; // r8
  KIRQL v5; // al
  __int64 *v6; // rbx
  KIRQL v7; // di

  LOBYTE(v4) = KeAcquireSpinLockRaiseToDpc(&qword_140F14C78);
  if ( byte_140F14C80 )
    KiSrcuProcessorAddToTopologyTree(a1, a2, v4);
  KeReleaseSpinLock(&qword_140F14C78, v4);
  if ( a2 )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&qword_140F14C70);
    v6 = (__int64 *)KiSrcuState;
    v7 = v5;
    if ( KiSrcuState )
    {
      while ( v6 != &KiSrcuState )
      {
        KiSrcuNotifyGracePeriodStartedOnCpu(v6, a1);
        v6 = (__int64 *)*v6;
      }
    }
    KeReleaseSpinLock(&qword_140F14C70, v7);
  }
}
