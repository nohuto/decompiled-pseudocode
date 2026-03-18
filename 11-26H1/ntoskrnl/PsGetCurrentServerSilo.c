/*
 * XREFs of PsGetCurrentServerSilo @ 0x140215E70
 * Callers:
 *     SepAdtLogAuditRecord @ 0x1402153F8 (SepAdtLogAuditRecord.c)
 *     EtwpTraceFileName @ 0x140215A90 (EtwpTraceFileName.c)
 *     PsGetSessionById @ 0x140215D80 (PsGetSessionById.c)
 *     PsIsSessionInCurrentServerSilo @ 0x140435678 (PsIsSessionInCurrentServerSilo.c)
 *     IopCheckSessionDeviceAccess @ 0x140446F40 (IopCheckSessionDeviceAccess.c)
 *     PerfInfoLogSysCallExit @ 0x1404C9BD0 (PerfInfoLogSysCallExit.c)
 *     RtlGetCurrentServiceSessionId @ 0x1404CAAB0 (RtlGetCurrentServiceSessionId.c)
 *     PerfInfoLogSysCallEntry @ 0x1404CBC20 (PerfInfoLogSysCallEntry.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1407A1D3C (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     RtlpInitCodePageTables @ 0x140802074 (RtlpInitCodePageTables.c)
 *     SepBlockAccessForLogonSession @ 0x140815420 (SepBlockAccessForLogonSession.c)
 *     SepMakeLogonSessionsSiblings @ 0x140815694 (SepMakeLogonSessionsSiblings.c)
 *     SLUpdateLicenseDataInternal @ 0x140839788 (SLUpdateLicenseDataInternal.c)
 *     PsLookupProcessByProcessId @ 0x1408EF4E0 (PsLookupProcessByProcessId.c)
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 *     IoRegisterPlugPlayNotification @ 0x140908ED0 (IoRegisterPlugPlayNotification.c)
 *     SepIsMinTCB @ 0x14091E9C8 (SepIsMinTCB.c)
 *     SeCreateClientSecurityEx @ 0x140929AE0 (SeCreateClientSecurityEx.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x140929D90 (AlpcpGetEffectiveTokenMessage.c)
 *     SepCreateClientSecurityEx @ 0x14092A140 (SepCreateClientSecurityEx.c)
 *     SepDuplicateToken @ 0x14092A5A0 (SepDuplicateToken.c)
 *     ExpWnfGenerateStateName @ 0x14094F730 (ExpWnfGenerateStateName.c)
 *     PsSessionCreate @ 0x1409638D4 (PsSessionCreate.c)
 *     ExpGetProcessInformation @ 0x14096767C (ExpGetProcessInformation.c)
 *     ExProcessCounterSetCallback @ 0x140969300 (ExProcessCounterSetCallback.c)
 *     PnpNotifyDeviceClassChange @ 0x1409DC660 (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyTargetDeviceChange @ 0x1409DD2BC (PnpNotifyTargetDeviceChange.c)
 *     PsLookupThreadByThreadId @ 0x140A10B70 (PsLookupThreadByThreadId.c)
 *     PspThreadFromTicket @ 0x140A191C0 (PspThreadFromTicket.c)
 *     SepIsSystemAppTCB @ 0x140A28568 (SepIsSystemAppTCB.c)
 *     NtAlertThreadByThreadIdEx @ 0x140A33250 (NtAlertThreadByThreadIdEx.c)
 *     NtAlertThreadByThreadId @ 0x140A5D8F0 (NtAlertThreadByThreadId.c)
 *     PsCaptureUserProcessParameters @ 0x140A653B0 (PsCaptureUserProcessParameters.c)
 *     EtwpStartLogger @ 0x140A6E1B4 (EtwpStartLogger.c)
 *     PsGetNextSession @ 0x140A7D980 (PsGetNextSession.c)
 *     sub_140A7DC40 @ 0x140A7DC40 (sub_140A7DC40.c)
 *     NtManageHotPatch @ 0x140A993D0 (NtManageHotPatch.c)
 *     SepCreateLogonSessionTrack @ 0x140AAF14C (SepCreateLogonSessionTrack.c)
 *     NtImpersonateAnonymousToken @ 0x140AB2A30 (NtImpersonateAnonymousToken.c)
 *     SepReferenceLogonSession @ 0x140AB6FB0 (SepReferenceLogonSession.c)
 *     SepIsNgenImage @ 0x140ADC6EC (SepIsNgenImage.c)
 *     NtGetNextProcess @ 0x140AEF810 (NtGetNextProcess.c)
 *     SepDeleteLogonSessionTrack @ 0x140AFE360 (SepDeleteLogonSessionTrack.c)
 *     ExpRefreshTimeZoneInformation @ 0x140B1209C (ExpRefreshTimeZoneInformation.c)
 *     PopTransitionCheckpoint @ 0x140B1B69C (PopTransitionCheckpoint.c)
 *     NtSetSystemPowerState @ 0x140BFD2E0 (NtSetSystemPowerState.c)
 *     ExpSystemErrorHandler2 @ 0x140BFF4E0 (ExpSystemErrorHandler2.c)
 * Callees:
 *     PsIsServerSilo @ 0x140216838 (PsIsServerSilo.c)
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
