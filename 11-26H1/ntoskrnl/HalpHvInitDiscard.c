/*
 * XREFs of HalpHvInitDiscard @ 0x140CAF3C0
 * Callers:
 *     HalpHvInitSystem @ 0x140BEB300 (HalpHvInitSystem.c)
 * Callees:
 *     HalpEnlightenmentInitialize @ 0x140585848 (HalpEnlightenmentInitialize.c)
 */

__int64 __fastcall HalpHvInitDiscard(__int64 a1)
{
  HalpEnlightenmentInitialize();
  if ( HalpHvCpuManager )
  {
    BYTE5(HalpDeviceBlockUnblockPushLock.TracingPrivate[0]) = 1;
    if ( qword_140FBB050 )
      HalpHvSleepEnlightenedCpuManager = 1;
    if ( qword_140FBB090 )
      HalpHvWheaEnlightenedCpuManager = 1;
  }
  else if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x200) != 0 )
  {
    BYTE5(HalpDeviceBlockUnblockPushLock.TracingPrivate[0]) = 1;
  }
  if ( qword_140FBB0C0 )
    BYTE4(HalpDeviceBlockUnblockPushLock.SchedulerAssist) = 1;
  off_140E008F8[0] = (__int64 (__fastcall *)())HalpPrepareForBugcheck;
  off_140E00A00[0] = HalpSaveAndDisableEnlightenment;
  off_140E00A08[0] = HalpRestoreHvEnlightenment;
  return 0LL;
}
