/*
 * XREFs of EtwpUnreferenceDataBlock @ 0x140914C04
 * Callers:
 *     SendCaptureStateNotificationsWorker @ 0x140833730 (SendCaptureStateNotificationsWorker.c)
 *     EtwpDeleteRegistrationObject @ 0x140911650 (EtwpDeleteRegistrationObject.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140912F1C (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpNotifyGuid @ 0x140913FD4 (EtwpNotifyGuid.c)
 *     EtwpRundownNotifications @ 0x140914A30 (EtwpRundownNotifications.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x14091555C (EtwpNotifyDisallowedGuidChange.c)
 *     EtwpQueueReply @ 0x140A8BB90 (EtwpQueueReply.c)
 *     EtwpEnableGuid @ 0x140AD6AB8 (EtwpEnableGuid.c)
 *     EtwpReceiveReplyDataBlock @ 0x140B0F318 (EtwpReceiveReplyDataBlock.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpUnreferenceDataBlock(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
