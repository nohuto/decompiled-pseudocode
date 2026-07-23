/*
 * XREFs of HalpCmcInitializePolling @ 0x14057CED4
 * Callers:
 *     HalpInitializeCmc @ 0x140BEFDA8 (HalpInitializeCmc.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpCmcInitializeErrorPacketContents @ 0x14044CD30 (HalpCmcInitializeErrorPacketContents.c)
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
    qword_140E108F0 = (__int64)HalpCmcDeferredRoutine;
    qword_140E10928 = (__int64)HalpCmcWorkerRoutine;
    HalpCmcContext = v3;
    qword_140E10898 = 8LL;
    qword_140E108A8 = (__int64)&qword_140E108A0;
    qword_140E108A0 = (__int64)&qword_140E108A0;
    dword_140E108D8 = 275;
    qword_140E108F8 = (__int64)&HalpCmcContext;
    qword_140E10910 = 0LL;
    qword_140E108E8 = 0LL;
    qword_140E10930 = (__int64)&HalpCmcContext;
    qword_140E10918 = 0LL;
    qword_140E108B0 = 0LL;
    dword_140E108D4 = 0;
    word_140E108D0 = 0;
    byte_140E108D3 = 0;
    HalpCmcPollingInitialized = 1;
  }
  KeReleaseSpinLock(&HalpCmcFallbackLock, v2);
}
