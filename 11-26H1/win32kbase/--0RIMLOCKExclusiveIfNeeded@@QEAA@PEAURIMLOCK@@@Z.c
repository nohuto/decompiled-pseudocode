/*
 * XREFs of ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1401316BC
 * Callers:
 *     RIMCreateHidDesc @ 0x1400780EC (RIMCreateHidDesc.c)
 *     RIMFreeHidTLCInfo @ 0x1401305B0 (RIMFreeHidTLCInfo.c)
 *     RIMEndAllActiveContacts @ 0x140130700 (RIMEndAllActiveContacts.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x140130784 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RawInputManagerObjectDelete @ 0x140130BFC (RawInputManagerObjectDelete.c)
 *     RIMRemoveFromActiveDevices @ 0x140131468 (RIMRemoveFromActiveDevices.c)
 *     RIMTransformCoordinatesFromDigitizer @ 0x140205ED0 (RIMTransformCoordinatesFromDigitizer.c)
 *     RIMTransformDimensionFromDigitizer @ 0x140205FC0 (RIMTransformDimensionFromDigitizer.c)
 *     RIMIDECreateHIDDesc @ 0x14020749C (RIMIDECreateHIDDesc.c)
 *     rimObsStartStopDeviceRead @ 0x1402102A4 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     <none>
 */

RIMLOCKExclusiveIfNeeded *__fastcall RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
        RIMLOCKExclusiveIfNeeded *this,
        struct RIMLOCK *a2)
{
  *(_QWORD *)this = 0LL;
  if ( *((struct _KTHREAD **)a2 + 1) != KeGetCurrentThread() )
  {
    *(_QWORD *)this = a2;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(a2, 0LL);
    *((_QWORD *)a2 + 1) = KeGetCurrentThread();
  }
  return this;
}
