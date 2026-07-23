/*
 * XREFs of KiSrcuProcessorInitialize @ 0x14052FBD8
 * Callers:
 *     KiRcuProcessorInitialize @ 0x14050CA2C (KiRcuProcessorInitialize.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSrcuNotifyGracePeriodStartedOnCpu @ 0x1405F801C (KiSrcuNotifyGracePeriodStartedOnCpu.c)
 *     KiSrcuProcessorAddToTopologyTree @ 0x1405F8284 (KiSrcuProcessorAddToTopologyTree.c)
 */

void __fastcall KiSrcuProcessorInitialize(__int64 a1, unsigned int a2)
{
  __int64 v4; // r8
  KIRQL v5; // al
  __int64 *v6; // rbx
  KIRQL v7; // di

  LOBYTE(v4) = KeAcquireSpinLockRaiseToDpc(&qword_140F14FB8);
  if ( byte_140F14FC0 )
    KiSrcuProcessorAddToTopologyTree(a1, a2, v4);
  KeReleaseSpinLock(&qword_140F14FB8, v4);
  if ( a2 )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&qword_140F14FB0);
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
    KeReleaseSpinLock(&qword_140F14FB0, v7);
  }
}
