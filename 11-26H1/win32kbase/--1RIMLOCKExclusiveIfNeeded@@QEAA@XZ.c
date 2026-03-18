/*
 * XREFs of ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1401690CC
 * Callers:
 *     RIMCreateHidDesc @ 0x1400780EC (RIMCreateHidDesc.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x140130784 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RawInputManagerObjectDelete @ 0x140130BFC (RawInputManagerObjectDelete.c)
 *     RIMTransformCoordinatesFromDigitizer @ 0x140205ED0 (RIMTransformCoordinatesFromDigitizer.c)
 *     RIMTransformDimensionFromDigitizer @ 0x140205FC0 (RIMTransformDimensionFromDigitizer.c)
 *     RIMIDECreateHIDDesc @ 0x14020749C (RIMIDECreateHIDDesc.c)
 *     rimObsStartStopDeviceRead @ 0x1402102A4 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 */

void __fastcall RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded(RIMLOCKExclusiveIfNeeded *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    RIMUnlockExclusive(v2);
    *(_QWORD *)this = 0LL;
  }
}
