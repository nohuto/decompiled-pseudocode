/*
 * XREFs of RtlNtStatusToDosError @ 0x180056660
 * Callers:
 *     EtwEventWrite @ 0x18000ED60 (EtwEventWrite.c)
 *     EtwEventWriteTransfer @ 0x18000F040 (EtwEventWriteTransfer.c)
 *     EtwpEventWriteFull @ 0x18000F380 (EtwpEventWriteFull.c)
 *     EtwLogTraceEvent @ 0x180010A60 (EtwLogTraceEvent.c)
 *     EtwpProviderArrivalCallback @ 0x180055000 (EtwpProviderArrivalCallback.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180055750 (EtwpAddLogHeaderToLogFile.c)
 *     EtwEventActivityIdControl @ 0x1800564E0 (EtwEventActivityIdControl.c)
 *     EtwpSetProviderTraits @ 0x1800577F0 (EtwpSetProviderTraits.c)
 *     EtwpRegisterProvider @ 0x180057DE0 (EtwpRegisterProvider.c)
 *     EtwEventWriteString @ 0x18006D530 (EtwEventWriteString.c)
 *     EtwpStopUmLogger @ 0x180076678 (EtwpStopUmLogger.c)
 *     EtwpIncrementUmLoggerFile @ 0x180076BBC (EtwpIncrementUmLoggerFile.c)
 *     EtwpUpdateUmLogger @ 0x180076C98 (EtwpUpdateUmLogger.c)
 *     EtwpStartUmLogger @ 0x180076EBC (EtwpStartUmLogger.c)
 *     EtwpFinalizeLogFileHeader @ 0x180078A04 (EtwpFinalizeLogFileHeader.c)
 *     EtwTraceMessage @ 0x1800BD810 (EtwTraceMessage.c)
 *     EtwTraceMessageVa @ 0x1800BD900 (EtwTraceMessageVa.c)
 *     EtwEventWriteNoRegistration @ 0x1800CE520 (EtwEventWriteNoRegistration.c)
 *     EtwSendNotification @ 0x1800E0E80 (EtwSendNotification.c)
 *     EtwpReceiveReplyDataBlock @ 0x1800E1108 (EtwpReceiveReplyDataBlock.c)
 *     EtwWriteUMSecurityEvent @ 0x1800E76C0 (EtwWriteUMSecurityEvent.c)
 *     RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x1800FDD90 (RtlSetLastWin32ErrorAndNtStatusFromNtStatus.c)
 *     EtwReplyNotification @ 0x18010B380 (EtwReplyNotification.c)
 *     EtwpTrackProviderBinary @ 0x180117EAC (EtwpTrackProviderBinary.c)
 *     LdrpSnapModule @ 0x18011B530 (LdrpSnapModule.c)
 *     EtwTraceEventInstance @ 0x180126110 (EtwTraceEventInstance.c)
 *     EtwRegisterSecurityProvider @ 0x180158CB0 (EtwRegisterSecurityProvider.c)
 *     EtwpUseDescriptorType @ 0x180158D0C (EtwpUseDescriptorType.c)
 *     EtwSetMark @ 0x180158EB0 (EtwSetMark.c)
 *     EtwpBufferingModeFlush @ 0x180158EDC (EtwpBufferingModeFlush.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x180019AA0 (RtlNtStatusToDosErrorNoTeb.c)
 */

ULONG __stdcall RtlNtStatusToDosError(NTSTATUS Status)
{
  struct _TEB *v1; // rax

  v1 = NtCurrentTeb();
  if ( v1 )
    v1->LastStatusValue = Status;
  return RtlNtStatusToDosErrorNoTeb(Status);
}
