/*
 * XREFs of TtmiLogError @ 0x140A3AAD8
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1407E4B20 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1407E4E10 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x1407E4EE0 (TtmNotifyDeviceInput.c)
 *     TtmiAssignDevice @ 0x1407E5054 (TtmiAssignDevice.c)
 *     TtmiPublishDeviceEnumerationEvents @ 0x1407E521C (TtmiPublishDeviceEnumerationEvents.c)
 *     TtmiSetInputWakeCapability @ 0x1407E5490 (TtmiSetInputWakeCapability.c)
 *     TtmpCallAssignedToTerminal @ 0x1407E5580 (TtmpCallAssignedToTerminal.c)
 *     TtmpCallSetDisplayState @ 0x1407E569C (TtmpCallSetDisplayState.c)
 *     TtmpCallSetInputMode @ 0x1407E574C (TtmpCallSetInputMode.c)
 *     TtmpCommitTerminalDisplayStateUpdateWorker @ 0x1407E59A4 (TtmpCommitTerminalDisplayStateUpdateWorker.c)
 *     TtmpPushTerminalState @ 0x1407E5F08 (TtmpPushTerminalState.c)
 *     TtmpQueueTerminalDisplayStateOntoDevice @ 0x1407E5FD8 (TtmpQueueTerminalDisplayStateOntoDevice.c)
 *     TtmNotifySessionPowerRequestDeleted @ 0x1407E643C (TtmNotifySessionPowerRequestDeleted.c)
 *     TtmiAcquireCurrentSession @ 0x1407E6640 (TtmiAcquireCurrentSession.c)
 *     TtmiSessionsRundown @ 0x1407E67DC (TtmiSessionsRundown.c)
 *     TtmiSetDisplayPowerRequest @ 0x1407E68A0 (TtmiSetDisplayPowerRequest.c)
 *     TtmiWriteEnumerationEventsToQueue @ 0x1407E6B40 (TtmiWriteEnumerationEventsToQueue.c)
 *     TtmiWriteEventToAllQueues @ 0x1407E6BDC (TtmiWriteEventToAllQueues.c)
 *     TtmpFindPowerRequestEntryById @ 0x1407E6EFC (TtmpFindPowerRequestEntryById.c)
 *     TtmpInsertPowerRequestToSession @ 0x1407E70BC (TtmpInsertPowerRequestToSession.c)
 *     TtmpSetDisplayRequestEnded @ 0x1407E772C (TtmpSetDisplayRequestEnded.c)
 *     TtmpUpdateDisplayRequiredPowerRequest @ 0x1407E7904 (TtmpUpdateDisplayRequiredPowerRequest.c)
 *     TtmpUpdatePowerRequestAttribute @ 0x1407E79D4 (TtmpUpdatePowerRequestAttribute.c)
 *     TtmpWriteDisplayRequiredPowerRequestUpdatedEvent @ 0x1407E7A9C (TtmpWriteDisplayRequiredPowerRequestUpdatedEvent.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1407E7B48 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmpDispatchAssignDevice @ 0x1407E7C84 (TtmpDispatchAssignDevice.c)
 *     TtmpDispatchCreateEventQueue @ 0x1407E7D34 (TtmpDispatchCreateEventQueue.c)
 *     TtmpDispatchCreateTerminal @ 0x1407E7E84 (TtmpDispatchCreateTerminal.c)
 *     TtmpDispatchEvacuateDevices @ 0x1407E7F68 (TtmpDispatchEvacuateDevices.c)
 *     TtmpDispatchGetTerminalEvent @ 0x1407E8018 (TtmpDispatchGetTerminalEvent.c)
 *     TtmpDispatchOpenTerminal @ 0x1407E80E4 (TtmpDispatchOpenTerminal.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x1407E8180 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmpDispatchSetDisplayPowerRequest @ 0x1407E8240 (TtmpDispatchSetDisplayPowerRequest.c)
 *     TtmpDispatchSetDisplayState @ 0x1407E82F4 (TtmpDispatchSetDisplayState.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x1407E83B0 (TtmpDispatchSetDisplayTimeouts.c)
 *     TtmpDispatchSetInputWakeCapability @ 0x1407E8470 (TtmpDispatchSetInputWakeCapability.c)
 *     TtmiCreateTerminal @ 0x1407EBA48 (TtmiCreateTerminal.c)
 *     TtmiOpenDefaultTerminal @ 0x1407EBF0C (TtmiOpenDefaultTerminal.c)
 *     TtmiTerminalMonitorControl @ 0x1407EC424 (TtmiTerminalMonitorControl.c)
 *     TtmiCreateEventQueue @ 0x1407ECD18 (TtmiCreateEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x1407ECFA0 (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x1407ED0EC (TtmiWriteEventToSingleQueue.c)
 *     TtmNotifyLowPowerStateExited @ 0x140A39E40 (TtmNotifyLowPowerStateExited.c)
 *     TtmInitCurrentSession @ 0x140A3A0D4 (TtmInitCurrentSession.c)
 *     TtmDispatchApi @ 0x140A3A3D0 (TtmDispatchApi.c)
 *     TtmSessionMonitorControl @ 0x140A3A808 (TtmSessionMonitorControl.c)
 *     TtmNotifySessionDisplayBurst @ 0x140A3A998 (TtmNotifySessionDisplayBurst.c)
 *     TtmpAcquireSessionById @ 0x140A3AA34 (TtmpAcquireSessionById.c)
 *     TtmNotifyConsoleUserPresent @ 0x140A3C5F8 (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x140ABC910 (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifySessionPowerStateChange @ 0x140B65774 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x140B697BC (TtmNotifySessionTerminalInput.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_char @ 0x1403EEB48 (_tlgCreate1Sz_char.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     TtmiGetSessionId @ 0x140A3A3A8 (TtmiGetSessionId.c)
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
  if ( (unsigned int)dword_140FD58A8 > 5 && tlgKeywordOn((__int64)&dword_140FD58A8, 2LL) )
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
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140FD58A8,
      (unsigned __int8 *)&dword_140051808 + 1,
      0LL,
      0LL,
      7u,
      &v12);
  }
}
