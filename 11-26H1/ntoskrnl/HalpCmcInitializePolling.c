/*
 * XREFs of HalpCmcInitializePolling @ 0x14057A9A4
 * Callers:
 *     HalpInitializeCmc @ 0x140BE9DA8 (HalpInitializeCmc.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpCmcInitializeErrorPacketContents @ 0x140454C00 (HalpCmcInitializeErrorPacketContents.c)
 */

void __fastcall HalpCmcInitializePolling(__int64 a1)
{
  KIRQL v2; // bl
  int v3; // ecx

  v2 = KeAcquireSpinLockRaiseToDpc(&HalpCmcFallbackLock);
  if ( !HalpCmcPollingInitialized )
  {
    HalpCmcErrorPacket = (__int64)&HalpCmcReserveErrorPacket;
    HalpCmcInitializeErrorPacketContents((GUID *)&HalpCmcReserveErrorPacket);
    v3 = *(_DWORD *)(a1 + 52);
    qword_140E107C0 = (__int64)HalpCmcDeferredRoutine;
    qword_140E107F8 = (__int64)HalpCmcWorkerRoutine;
    HalpCmcContext = v3;
    qword_140E10768 = 8LL;
    qword_140E10778 = (__int64)&qword_140E10770;
    qword_140E10770 = (__int64)&qword_140E10770;
    dword_140E107A8 = 275;
    qword_140E107C8 = (__int64)&HalpCmcContext;
    qword_140E107E0 = 0LL;
    qword_140E107B8 = 0LL;
    qword_140E10800 = (__int64)&HalpCmcContext;
    qword_140E107E8 = 0LL;
    qword_140E10780 = 0LL;
    dword_140E107A4 = 0;
    word_140E107A0 = 0;
    byte_140E107A3 = 0;
    HalpCmcPollingInitialized = 1;
  }
  KeReleaseSpinLock(&HalpCmcFallbackLock, v2);
}
