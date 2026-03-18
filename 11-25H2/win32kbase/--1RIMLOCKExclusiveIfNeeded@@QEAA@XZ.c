/*
 * XREFs of ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1401305CC
 * Callers:
 *     RIMDeviceIoControl @ 0x14017EA70 (RIMDeviceIoControl.c)
 *     RIMCreateHidDesc @ 0x1401DF458 (RIMCreateHidDesc.c)
 *     RIMRemoveFromActiveDevices @ 0x1401E4710 (RIMRemoveFromActiveDevices.c)
 *     RIMTransformCoordinatesFromDigitizer @ 0x1401E5610 (RIMTransformCoordinatesFromDigitizer.c)
 *     RIMTransformDimensionFromDigitizer @ 0x1401E5700 (RIMTransformDimensionFromDigitizer.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1401E68A4 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMFreeHidTLCInfo @ 0x1401E6AF0 (RIMFreeHidTLCInfo.c)
 *     RawInputManagerObjectDelete @ 0x1401E6DF8 (RawInputManagerObjectDelete.c)
 *     rimObsStartStopDeviceRead @ 0x1401F4828 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
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
