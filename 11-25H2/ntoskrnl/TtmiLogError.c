/*
 * XREFs of TtmiLogError @ 0x140A2DC20
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1407588D0 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x140758BD0 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x140758C90 (TtmNotifyDeviceInput.c)
 *     TtmiAssignDevice @ 0x140758E1C (TtmiAssignDevice.c)
 *     TtmiPublishDeviceEnumerationEvents @ 0x140758FEC (TtmiPublishDeviceEnumerationEvents.c)
 *     TtmiSetInputWakeCapability @ 0x140759264 (TtmiSetInputWakeCapability.c)
 *     TtmpCallAssignedToTerminal @ 0x140759350 (TtmpCallAssignedToTerminal.c)
 *     TtmpCallSetDisplayState @ 0x14075946C (TtmpCallSetDisplayState.c)
 *     TtmpCallSetInputMode @ 0x14075951C (TtmpCallSetInputMode.c)
 *     TtmpCommitTerminalDisplayStateUpdateWorker @ 0x140759770 (TtmpCommitTerminalDisplayStateUpdateWorker.c)
 *     TtmpPushTerminalState @ 0x140759CD0 (TtmpPushTerminalState.c)
 *     TtmpQueueTerminalDisplayStateOntoDevice @ 0x140759DA0 (TtmpQueueTerminalDisplayStateOntoDevice.c)
 *     TtmNotifySessionPowerRequestDeleted @ 0x14075A1F0 (TtmNotifySessionPowerRequestDeleted.c)
 *     TtmiAcquireCurrentSession @ 0x14075A3F0 (TtmiAcquireCurrentSession.c)
 *     TtmiSessionsRundown @ 0x14075A59C (TtmiSessionsRundown.c)
 *     TtmiSetDisplayPowerRequest @ 0x14075A65C (TtmiSetDisplayPowerRequest.c)
 *     TtmiWriteEnumerationEventsToQueue @ 0x14075A8F0 (TtmiWriteEnumerationEventsToQueue.c)
 *     TtmiWriteEventToAllQueues @ 0x14075A98C (TtmiWriteEventToAllQueues.c)
 *     TtmpFindPowerRequestEntryById @ 0x14075ACA4 (TtmpFindPowerRequestEntryById.c)
 *     TtmpInsertPowerRequestToSession @ 0x14075AE78 (TtmpInsertPowerRequestToSession.c)
 *     TtmpSetDisplayRequestEnded @ 0x14075B504 (TtmpSetDisplayRequestEnded.c)
 *     TtmpUpdateDisplayRequiredPowerRequest @ 0x14075B6E4 (TtmpUpdateDisplayRequiredPowerRequest.c)
 *     TtmpUpdatePowerRequestAttribute @ 0x14075B7B4 (TtmpUpdatePowerRequestAttribute.c)
 *     TtmpWriteDisplayRequiredPowerRequestUpdatedEvent @ 0x14075B878 (TtmpWriteDisplayRequiredPowerRequestUpdatedEvent.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x14075B924 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmpDispatchAssignDevice @ 0x14075BA50 (TtmpDispatchAssignDevice.c)
 *     TtmpDispatchCreateEventQueue @ 0x14075BAF8 (TtmpDispatchCreateEventQueue.c)
 *     TtmpDispatchCreateTerminal @ 0x14075BC38 (TtmpDispatchCreateTerminal.c)
 *     TtmpDispatchEvacuateDevices @ 0x14075BD28 (TtmpDispatchEvacuateDevices.c)
 *     TtmpDispatchGetTerminalEvent @ 0x14075BDD4 (TtmpDispatchGetTerminalEvent.c)
 *     TtmpDispatchOpenTerminal @ 0x14075BE98 (TtmpDispatchOpenTerminal.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x14075BF34 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmpDispatchSetDisplayPowerRequest @ 0x14075BFF0 (TtmpDispatchSetDisplayPowerRequest.c)
 *     TtmpDispatchSetDisplayState @ 0x14075C09C (TtmpDispatchSetDisplayState.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x14075C150 (TtmpDispatchSetDisplayTimeouts.c)
 *     TtmpDispatchSetInputWakeCapability @ 0x14075C20C (TtmpDispatchSetInputWakeCapability.c)
 *     TtmiCreateTerminal @ 0x14075FB28 (TtmiCreateTerminal.c)
 *     TtmiOpenDefaultTerminal @ 0x140760000 (TtmiOpenDefaultTerminal.c)
 *     TtmiTerminalMonitorControl @ 0x140760508 (TtmiTerminalMonitorControl.c)
 *     TtmiCreateEventQueue @ 0x140760DF4 (TtmiCreateEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x140761098 (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x1407611E4 (TtmiWriteEventToSingleQueue.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x140A2CE40 (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifyLowPowerStateExited @ 0x140A2CFA4 (TtmNotifyLowPowerStateExited.c)
 *     TtmNotifySessionPowerStateChange @ 0x140A2D020 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifyConsoleUserPresent @ 0x140A2D0B0 (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifySessionTerminalInput @ 0x140A2D208 (TtmNotifySessionTerminalInput.c)
 *     TtmInitCurrentSession @ 0x140A2D29C (TtmInitCurrentSession.c)
 *     TtmDispatchApi @ 0x140A2D58C (TtmDispatchApi.c)
 *     TtmSessionMonitorControl @ 0x140A2D9F8 (TtmSessionMonitorControl.c)
 *     TtmNotifySessionDisplayBurst @ 0x140A2DB84 (TtmNotifySessionDisplayBurst.c)
 *     TtmpAcquireSessionById @ 0x140A2DD78 (TtmpAcquireSessionById.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x140246440 (PsGetSessionIdEx.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_char @ 0x140428104 (_tlgCreate1Sz_char.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void __fastcall TtmiLogError(const CHAR *a1, int a2, int a3, int a4)
{
  int SessionId; // eax
  int v9; // r8d
  int v10; // [rsp+30h] [rbp-49h] BYREF
  int v11; // [rsp+34h] [rbp-45h] BYREF
  int v12; // [rsp+38h] [rbp-41h] BYREF
  int v13; // [rsp+3Ch] [rbp-3Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+40h] [rbp-39h] BYREF
  int *v15; // [rsp+60h] [rbp-19h]
  int v16; // [rsp+68h] [rbp-11h]
  int v17; // [rsp+6Ch] [rbp-Dh]
  _BYTE v18[16]; // [rsp+70h] [rbp-9h] BYREF
  int *v19; // [rsp+80h] [rbp+7h]
  int v20; // [rsp+88h] [rbp+Fh]
  int v21; // [rsp+8Ch] [rbp+13h]
  int *v22; // [rsp+90h] [rbp+17h]
  int v23; // [rsp+98h] [rbp+1Fh]
  int v24; // [rsp+9Ch] [rbp+23h]
  int *v25; // [rsp+A0h] [rbp+27h]
  int v26; // [rsp+A8h] [rbp+2Fh]
  int v27; // [rsp+ACh] [rbp+33h]

  if ( TtmpBreakOnError
    && (!dword_140FD71DC || dword_140FD71DC == a2)
    && (!dword_140FD71E0 || dword_140FD71E0 == a3)
    && (!dword_140FD71E4 || dword_140FD71E4 == a4) )
  {
    __debugbreak();
  }
  if ( (unsigned int)dword_140FD78E8 > 5 && tlgKeywordOn((__int64)&dword_140FD78E8, 2LL) )
  {
    SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    v17 = 0;
    v10 = SessionId;
    v16 = 4;
    v15 = &v10;
    tlgCreate1Sz_char((__int64)v18, a1);
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v19 = &v11;
    v20 = v9;
    v22 = &v12;
    v25 = &v13;
    v23 = v9;
    v26 = v9;
    v11 = a2;
    v12 = a3;
    v13 = a4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140FD78E8, (unsigned __int8 *)byte_14004EEFD, 0LL, 0LL, 7u, &v14);
  }
}
