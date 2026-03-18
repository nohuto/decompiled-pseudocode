/*
 * XREFs of ObReferenceObjectByPointerWithTag @ 0x14043DAF0
 * Callers:
 *     PopPushPowerStateTransitionRecordWithCallback @ 0x14060769C (PopPushPowerStateTransitionRecordWithCallback.c)
 *     DifObReferenceObjectByPointerWithTagWrapper @ 0x140692410 (DifObReferenceObjectByPointerWithTagWrapper.c)
 *     DifObReferenceObjectByPointerWrapper @ 0x1406925B0 (DifObReferenceObjectByPointerWrapper.c)
 *     PspCriticalProcessDeathBlamedThreadTryGet @ 0x1407FAA68 (PspCriticalProcessDeathBlamedThreadTryGet.c)
 *     IoRegisterPlugPlayNotification @ 0x140908ED0 (IoRegisterPlugPlayNotification.c)
 *     ObOpenObjectByPointer @ 0x14092AFF0 (ObOpenObjectByPointer.c)
 *     PspSchedulerSharedDataRegionCreate @ 0x1409B7374 (PspSchedulerSharedDataRegionCreate.c)
 *     PspSchedulerSharedDataRegionSlotAllocate @ 0x140A83A6C (PspSchedulerSharedDataRegionSlotAllocate.c)
 * Callees:
 *     ObpTraceObjectReferenceIfActive @ 0x140278BB0 (ObpTraceObjectReferenceIfActive.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

NTSTATUS __stdcall ObReferenceObjectByPointerWithTag(
        PVOID Object,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode,
        ULONG Tag)
{
  volatile signed __int64 *v5; // rbx
  signed __int64 BugCheckParameter4; // rdi

  if ( ObjectType )
  {
    v5 = (volatile signed __int64 *)((char *)Object - 48);
    if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*((char *)Object - 24) ^ ((unsigned __int16)((_WORD)Object - 48) >> 8))) != ObjectType->Index )
      return -1073741788;
  }
  else
  {
    if ( AccessMode )
      return -1073741788;
    v5 = (volatile signed __int64 *)((char *)Object - 48);
  }
  ObpTraceObjectReferenceIfActive((__int64)v5, 1, Tag);
  BugCheckParameter4 = _InterlockedIncrement64(v5);
  if ( BugCheckParameter4 <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(v5 + 6), 0x10uLL, BugCheckParameter4);
  return 0;
}
