/*
 * XREFs of HalpHvInitDiscard @ 0x140CB5400
 * Callers:
 *     HalpHvInitSystem @ 0x140BF1300 (HalpHvInitSystem.c)
 * Callees:
 *     HalpEnlightenmentInitialize @ 0x140587D68 (HalpEnlightenmentInitialize.c)
 */

__int64 __fastcall HalpHvInitDiscard(__int64 a1)
{
  HalpEnlightenmentInitialize();
  if ( HalpHvCpuManager )
  {
    LOBYTE(HalpDeviceBlockUnblockPushLock.OtherTransferCount) = 1;
    if ( (_QWORD)xmmword_140FBB3F0 )
      HalpHvSleepEnlightenedCpuManager = 1;
    if ( qword_140FBB430 )
      HalpHvWheaEnlightenedCpuManager = 1;
  }
  else if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x200) != 0 )
  {
    LOBYTE(HalpDeviceBlockUnblockPushLock.OtherTransferCount) = 1;
  }
  if ( qword_140FBB460 )
    BYTE1(HalpDeviceBlockUnblockPushLock.OtherTransferCount) = 1;
  off_140E008F8[0] = (__int64 (__fastcall *)())HalpPrepareForBugcheck;
  off_140E00A00[0] = HalpSaveAndDisableEnlightenment;
  off_140E00A08[0] = HalpRestoreHvEnlightenment;
  return 0LL;
}
