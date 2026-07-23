/*
 * XREFs of TtmiLogError @ 0x1409F66D8
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1407EA680 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1407EA970 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x1407EAA40 (TtmNotifyDeviceInput.c)
 *     TtmiAssignDevice @ 0x1407EABB4 (TtmiAssignDevice.c)
 *     TtmiPublishDeviceEnumerationEvents @ 0x1407EAD7C (TtmiPublishDeviceEnumerationEvents.c)
 *     TtmiSetInputWakeCapability @ 0x1407EAFF0 (TtmiSetInputWakeCapability.c)
 *     TtmpCallAssignedToTerminal @ 0x1407EB0E0 (TtmpCallAssignedToTerminal.c)
 *     TtmpCallSetDisplayState @ 0x1407EB1FC (TtmpCallSetDisplayState.c)
 *     TtmpCallSetInputMode @ 0x1407EB2AC (TtmpCallSetInputMode.c)
 *     TtmpCommitTerminalDisplayStateUpdateWorker @ 0x1407EB504 (TtmpCommitTerminalDisplayStateUpdateWorker.c)
 *     TtmpPushTerminalState @ 0x1407EBA68 (TtmpPushTerminalState.c)
 *     TtmpQueueTerminalDisplayStateOntoDevice @ 0x1407EBB38 (TtmpQueueTerminalDisplayStateOntoDevice.c)
 *     TtmNotifySessionPowerRequestDeleted @ 0x1407EBF9C (TtmNotifySessionPowerRequestDeleted.c)
 *     TtmiAcquireCurrentSession @ 0x1407EC1A0 (TtmiAcquireCurrentSession.c)
 *     TtmiSessionsRundown @ 0x1407EC33C (TtmiSessionsRundown.c)
 *     TtmiSetDisplayPowerRequest @ 0x1407EC400 (TtmiSetDisplayPowerRequest.c)
 *     TtmiWriteEnumerationEventsToQueue @ 0x1407EC698 (TtmiWriteEnumerationEventsToQueue.c)
 *     TtmiWriteEventToAllQueues @ 0x1407EC734 (TtmiWriteEventToAllQueues.c)
 *     TtmpFindPowerRequestEntryById @ 0x1407ECA54 (TtmpFindPowerRequestEntryById.c)
 *     TtmpInsertPowerRequestToSession @ 0x1407ECC14 (TtmpInsertPowerRequestToSession.c)
 *     TtmpSetDisplayRequestEnded @ 0x1407ED28C (TtmpSetDisplayRequestEnded.c)
 *     TtmpUpdateDisplayRequiredPowerRequest @ 0x1407ED464 (TtmpUpdateDisplayRequiredPowerRequest.c)
 *     TtmpUpdatePowerRequestAttribute @ 0x1407ED534 (TtmpUpdatePowerRequestAttribute.c)
 *     TtmpWriteDisplayRequiredPowerRequestUpdatedEvent @ 0x1407ED5FC (TtmpWriteDisplayRequiredPowerRequestUpdatedEvent.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1407ED6A8 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmpDispatchAssignDevice @ 0x1407ED7E4 (TtmpDispatchAssignDevice.c)
 *     TtmpDispatchCreateEventQueue @ 0x1407ED894 (TtmpDispatchCreateEventQueue.c)
 *     TtmpDispatchCreateTerminal @ 0x1407ED9E4 (TtmpDispatchCreateTerminal.c)
 *     TtmpDispatchEvacuateDevices @ 0x1407EDAC8 (TtmpDispatchEvacuateDevices.c)
 *     TtmpDispatchGetTerminalEvent @ 0x1407EDB78 (TtmpDispatchGetTerminalEvent.c)
 *     TtmpDispatchOpenTerminal @ 0x1407EDC44 (TtmpDispatchOpenTerminal.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x1407EDCE0 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmpDispatchSetDisplayPowerRequest @ 0x1407EDDA0 (TtmpDispatchSetDisplayPowerRequest.c)
 *     TtmpDispatchSetDisplayState @ 0x1407EDE54 (TtmpDispatchSetDisplayState.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x1407EDF10 (TtmpDispatchSetDisplayTimeouts.c)
 *     TtmpDispatchSetInputWakeCapability @ 0x1407EDFD0 (TtmpDispatchSetInputWakeCapability.c)
 *     TtmiCreateTerminal @ 0x1407F15A8 (TtmiCreateTerminal.c)
 *     TtmiOpenDefaultTerminal @ 0x1407F1A70 (TtmiOpenDefaultTerminal.c)
 *     TtmiTerminalMonitorControl @ 0x1407F1F88 (TtmiTerminalMonitorControl.c)
 *     TtmiCreateEventQueue @ 0x1407F2878 (TtmiCreateEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x1407F2B00 (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x1407F2C4C (TtmiWriteEventToSingleQueue.c)
 *     TtmNotifyLowPowerStateExited @ 0x1409F5A40 (TtmNotifyLowPowerStateExited.c)
 *     TtmInitCurrentSession @ 0x1409F5CD4 (TtmInitCurrentSession.c)
 *     TtmDispatchApi @ 0x1409F5FD0 (TtmDispatchApi.c)
 *     TtmSessionMonitorControl @ 0x1409F6408 (TtmSessionMonitorControl.c)
 *     TtmNotifySessionDisplayBurst @ 0x1409F6598 (TtmNotifySessionDisplayBurst.c)
 *     TtmpAcquireSessionById @ 0x1409F6634 (TtmpAcquireSessionById.c)
 *     TtmNotifyConsoleUserPresent @ 0x1409F8018 (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x140ABE730 (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifySessionPowerStateChange @ 0x140B68814 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x140B6C74C (TtmNotifySessionTerminalInput.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x140453678 (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     TtmiGetSessionId @ 0x1409F5FA8 (TtmiGetSessionId.c)
 */

void __fastcall TtmiLogError(const CHAR *a1, int a2, int a3, int a4)
{
  int SessionId; // [rsp+30h] [rbp-49h] BYREF
  int v9; // [rsp+34h] [rbp-45h] BYREF
  int v10; // [rsp+38h] [rbp-41h] BYREF
  int v11; // [rsp+3Ch] [rbp-3Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+40h] [rbp-39h] BYREF
  int *p_SessionId; // [rsp+60h] [rbp-19h]
  __int64 v14; // [rsp+68h] [rbp-11h]
  _BYTE v15[16]; // [rsp+70h] [rbp-9h] BYREF
  int *v16; // [rsp+80h] [rbp+7h]
  __int64 v17; // [rsp+88h] [rbp+Fh]
  int *v18; // [rsp+90h] [rbp+17h]
  __int64 v19; // [rsp+98h] [rbp+1Fh]
  int *v20; // [rsp+A0h] [rbp+27h]
  __int64 v21; // [rsp+A8h] [rbp+2Fh]

  if ( LOBYTE(ExpPlatformBinaryLock.Timer.TimerListEntry.Flink)
    && (!HIDWORD(ExpPlatformBinaryLock.Timer.TimerListEntry.Flink)
     || HIDWORD(ExpPlatformBinaryLock.Timer.TimerListEntry.Flink) == a2)
    && (!LODWORD(ExpPlatformBinaryLock.Timer.TimerListEntry.Blink)
     || LODWORD(ExpPlatformBinaryLock.Timer.TimerListEntry.Blink) == a3)
    && (!HIDWORD(ExpPlatformBinaryLock.Timer.TimerListEntry.Blink)
     || HIDWORD(ExpPlatformBinaryLock.Timer.TimerListEntry.Blink) == a4) )
  {
    __debugbreak();
  }
  if ( (unsigned int)dword_140FD68B8 > 5 && tlgKeywordOn((__int64)&dword_140FD68B8, 2LL) )
  {
    SessionId = TtmiGetSessionId();
    v14 = 4LL;
    p_SessionId = &SessionId;
    tlgCreate1Sz_char((__int64)v15, a1);
    v9 = a2;
    v16 = &v9;
    v17 = 4LL;
    v18 = &v10;
    v10 = a3;
    v20 = &v11;
    v19 = 4LL;
    v11 = a4;
    v21 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140FD68B8, (unsigned __int8 *)byte_1400524E5, 0LL, 0LL, 7u, &v12);
  }
}
