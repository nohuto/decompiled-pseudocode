/*
 * XREFs of PsGetCurrentServerSilo @ 0x1402161A0
 * Callers:
 *     SepAdtLogAuditRecord @ 0x140215728 (SepAdtLogAuditRecord.c)
 *     EtwpTraceFileName @ 0x140215DC0 (EtwpTraceFileName.c)
 *     PsGetSessionById @ 0x1402160B0 (PsGetSessionById.c)
 *     PsIsSessionInCurrentServerSilo @ 0x140424C54 (PsIsSessionInCurrentServerSilo.c)
 *     IopCheckSessionDeviceAccess @ 0x14043FA30 (IopCheckSessionDeviceAccess.c)
 *     PerfInfoLogSysCallExit @ 0x1404C3600 (PerfInfoLogSysCallExit.c)
 *     RtlGetCurrentServiceSessionId @ 0x1404C44E0 (RtlGetCurrentServiceSessionId.c)
 *     PerfInfoLogSysCallEntry @ 0x1404C5650 (PerfInfoLogSysCallEntry.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1407A487C (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     RtlpInitCodePageTables @ 0x140807B14 (RtlpInitCodePageTables.c)
 *     SepBlockAccessForLogonSession @ 0x14081B5D0 (SepBlockAccessForLogonSession.c)
 *     SepMakeLogonSessionsSiblings @ 0x14081B844 (SepMakeLogonSessionsSiblings.c)
 *     SLUpdateLicenseDataInternal @ 0x14083F9C8 (SLUpdateLicenseDataInternal.c)
 *     PsLookupProcessByProcessId @ 0x1408F5AA0 (PsLookupProcessByProcessId.c)
 *     SeCreateClientSecurityEx @ 0x1409055F0 (SeCreateClientSecurityEx.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x1409058A0 (AlpcpGetEffectiveTokenMessage.c)
 *     SepCreateClientSecurityEx @ 0x140905C50 (SepCreateClientSecurityEx.c)
 *     SepDuplicateToken @ 0x1409060B0 (SepDuplicateToken.c)
 *     ExProcessCounterSetCallback @ 0x14091D960 (ExProcessCounterSetCallback.c)
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 *     SepIsMinTCB @ 0x140979428 (SepIsMinTCB.c)
 *     IoRegisterPlugPlayNotification @ 0x1409AAA90 (IoRegisterPlugPlayNotification.c)
 *     NtGetNextProcess @ 0x1409BA3B0 (NtGetNextProcess.c)
 *     ExpWnfGenerateStateName @ 0x1409CB070 (ExpWnfGenerateStateName.c)
 *     ExpGetProcessInformation @ 0x1409DC1B8 (ExpGetProcessInformation.c)
 *     PsSessionCreate @ 0x140A0975C (PsSessionCreate.c)
 *     PsLookupThreadByThreadId @ 0x140A0FD60 (PsLookupThreadByThreadId.c)
 *     PnpNotifyDeviceClassChange @ 0x140A19910 (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyTargetDeviceChange @ 0x140A1A56C (PnpNotifyTargetDeviceChange.c)
 *     PspThreadFromTicket @ 0x140A227F0 (PspThreadFromTicket.c)
 *     SepIsSystemAppTCB @ 0x140A3B608 (SepIsSystemAppTCB.c)
 *     NtAlertThreadByThreadIdEx @ 0x140A4E1B0 (NtAlertThreadByThreadIdEx.c)
 *     NtAlertThreadByThreadId @ 0x140A6A8B0 (NtAlertThreadByThreadId.c)
 *     PsCaptureUserProcessParameters @ 0x140A72380 (PsCaptureUserProcessParameters.c)
 *     PsGetNextSession @ 0x140A837F0 (PsGetNextSession.c)
 *     sub_140A83AB0 @ 0x140A83AB0 (sub_140A83AB0.c)
 *     NtManageHotPatch @ 0x140A9D550 (NtManageHotPatch.c)
 *     SepCreateLogonSessionTrack @ 0x140AACD9C (SepCreateLogonSessionTrack.c)
 *     EtwpStartLogger @ 0x140AB0F2C (EtwpStartLogger.c)
 *     NtImpersonateAnonymousToken @ 0x140AB3DD0 (NtImpersonateAnonymousToken.c)
 *     SepReferenceLogonSession @ 0x140AB85F0 (SepReferenceLogonSession.c)
 *     SepIsNgenImage @ 0x140AD9C3C (SepIsNgenImage.c)
 *     SepDeleteLogonSessionTrack @ 0x140B003D0 (SepDeleteLogonSessionTrack.c)
 *     ExpRefreshTimeZoneInformation @ 0x140B13E1C (ExpRefreshTimeZoneInformation.c)
 *     PopTransitionCheckpoint @ 0x140B1D94C (PopTransitionCheckpoint.c)
 *     NtSetSystemPowerState @ 0x140C032E0 (NtSetSystemPowerState.c)
 *     ExpSystemErrorHandler2 @ 0x140C056F0 (ExpSystemErrorHandler2.c)
 * Callees:
 *     PsIsServerSilo @ 0x140216B68 (PsIsServerSilo.c)
 */

unsigned __int64 PsGetCurrentServerSilo()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v2; // rcx

  if ( KeGetPcr()->Prcb.NestingLevel )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  Blink = CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  if ( Blink == (struct _LIST_ENTRY *)-3LL )
    return CurrentThread->Process[3].ActiveGroupsMask.Masks[0];
  if ( !Blink )
    return 0LL;
  if ( (unsigned __int8)PsIsServerSilo(Blink) )
    return v2;
  while ( !(unsigned __int8)PsIsServerSilo(*(_QWORD *)(v2 + 1304)) )
    ;
  return v2;
}
