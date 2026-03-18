/*
 * XREFs of Controller_IsHandlePresentInCollection @ 0x1400169E8
 * Callers:
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1400165A0 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x140044080 (Controller_UcxEvtStopTrackingForTimeSync.c)
 * Callees:
 *     DynamicLock_Acquire @ 0x14000D6C0 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x14000D7D0 (DynamicLock_Release.c)
 *     Controller_IsHandlePresentInCollectionLocked @ 0x140016A38 (Controller_IsHandlePresentInCollectionLocked.c)
 */

char __fastcall Controller_IsHandlePresentInCollection(__int64 a1, __int64 a2)
{
  DynamicLock_Acquire(*(_QWORD *)(a1 + 1072));
  LOBYTE(a2) = Controller_IsHandlePresentInCollectionLocked(*(_QWORD *)(a1 + 1088), a2);
  DynamicLock_Release(*(_QWORD *)(a1 + 1072));
  return a2;
}
