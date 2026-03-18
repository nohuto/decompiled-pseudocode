/*
 * XREFs of EtwpUnreferenceDataBlock @ 0x140939064
 * Callers:
 *     SendCaptureStateNotificationsWorker @ 0x14082D4F0 (SendCaptureStateNotificationsWorker.c)
 *     EtwpDeleteRegistrationObject @ 0x140935AA0 (EtwpDeleteRegistrationObject.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x14093737C (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpNotifyGuid @ 0x140938434 (EtwpNotifyGuid.c)
 *     EtwpRundownNotifications @ 0x140938E90 (EtwpRundownNotifications.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1409399BC (EtwpNotifyDisallowedGuidChange.c)
 *     EtwpQueueReply @ 0x140A86C10 (EtwpQueueReply.c)
 *     EtwpEnableGuid @ 0x140ADA008 (EtwpEnableGuid.c)
 *     EtwpReceiveReplyDataBlock @ 0x140B0DBC8 (EtwpReceiveReplyDataBlock.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpUnreferenceDataBlock(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
