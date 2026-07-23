/*
 * XREFs of RtlNtStatusToDosError @ 0x180040BE0
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x18003F580 (EtwpProviderArrivalCallback.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18003FCD0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwEventActivityIdControl @ 0x180040A60 (EtwEventActivityIdControl.c)
 *     EtwpSetProviderTraits @ 0x180041D70 (EtwpSetProviderTraits.c)
 *     EtwpRegisterProvider @ 0x180042360 (EtwpRegisterProvider.c)
 *     EtwEventWrite @ 0x18005A490 (EtwEventWrite.c)
 *     EtwEventWriteTransfer @ 0x18005A770 (EtwEventWriteTransfer.c)
 *     EtwpEventWriteFull @ 0x18005AAB0 (EtwpEventWriteFull.c)
 *     EtwLogTraceEvent @ 0x18005C190 (EtwLogTraceEvent.c)
 *     EtwpStopUmLogger @ 0x180064E98 (EtwpStopUmLogger.c)
 *     EtwpIncrementUmLoggerFile @ 0x1800653DC (EtwpIncrementUmLoggerFile.c)
 *     EtwpUpdateUmLogger @ 0x1800654B8 (EtwpUpdateUmLogger.c)
 *     EtwpStartUmLogger @ 0x1800656DC (EtwpStartUmLogger.c)
 *     EtwpFinalizeLogFileHeader @ 0x180067224 (EtwpFinalizeLogFileHeader.c)
 *     EtwEventWriteString @ 0x18008D980 (EtwEventWriteString.c)
 *     EtwTraceMessage @ 0x1800BB270 (EtwTraceMessage.c)
 *     EtwTraceMessageVa @ 0x1800BB360 (EtwTraceMessageVa.c)
 *     EtwEventWriteNoRegistration @ 0x1800CBC90 (EtwEventWriteNoRegistration.c)
 *     EtwSendNotification @ 0x1800DE720 (EtwSendNotification.c)
 *     EtwpReceiveReplyDataBlock @ 0x1800DE9A8 (EtwpReceiveReplyDataBlock.c)
 *     EtwWriteUMSecurityEvent @ 0x1800E6120 (EtwWriteUMSecurityEvent.c)
 *     RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x1800FD4E0 (RtlSetLastWin32ErrorAndNtStatusFromNtStatus.c)
 *     EtwReplyNotification @ 0x18010ACF0 (EtwReplyNotification.c)
 *     EtwpTrackProviderBinary @ 0x180117C5C (EtwpTrackProviderBinary.c)
 *     LdrpSnapModule @ 0x18011B2E0 (LdrpSnapModule.c)
 *     EtwTraceEventInstance @ 0x180125E80 (EtwTraceEventInstance.c)
 *     EtwRegisterSecurityProvider @ 0x180158B80 (EtwRegisterSecurityProvider.c)
 *     EtwpUseDescriptorType @ 0x180158BDC (EtwpUseDescriptorType.c)
 *     EtwSetMark @ 0x180158D80 (EtwSetMark.c)
 *     EtwpBufferingModeFlush @ 0x180158DAC (EtwpBufferingModeFlush.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x180004B80 (RtlNtStatusToDosErrorNoTeb.c)
 */

ULONG __stdcall RtlNtStatusToDosError(NTSTATUS Status)
{
  struct _TEB *v1; // rax

  v1 = NtCurrentTeb();
  if ( v1 )
    v1->LastStatusValue = Status;
  return RtlNtStatusToDosErrorNoTeb(Status);
}
