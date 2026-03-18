/*
 * XREFs of TtmDispatchApi @ 0x140A3A3D0
 * Callers:
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 * Callees:
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
 *     TtmiLogDispatchApiStart @ 0x140A3A67C (TtmiLogDispatchApiStart.c)
 *     TtmiLogDispatchApiStop @ 0x140A3A730 (TtmiLogDispatchApiStop.c)
 *     TtmiLogError @ 0x140A3AAD8 (TtmiLogError.c)
 *     TtmIsEnabled @ 0x140A3EE84 (TtmIsEnabled.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall TtmDispatchApi(
        int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        _QWORD *a6,
        unsigned int *a7,
        _BYTE *a8)
{
  unsigned int v12; // esi
  _QWORD *Pool2; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r8
  unsigned int v18; // edi
  __int64 v19; // rdx
  unsigned int v20; // eax
  unsigned int Terminal; // eax

  TtmiLogDispatchApiStart();
  v12 = 0;
  Pool2 = 0LL;
  *a6 = 0LL;
  *a7 = 0;
  *a8 = 0;
  if ( !(unsigned __int8)TtmIsEnabled(v15, v14, v16) )
  {
    v18 = -1073741637;
    v19 = 1055LL;
LABEL_58:
    TtmiLogError("TtmDispatchApi", v19, 0xFFFFFFFFLL, v18);
    goto LABEL_59;
  }
  if ( a1 > 4101 )
  {
    if ( a1 != 4102 && a1 != 4103 && a1 != 4104 && (unsigned int)(a1 - 4105) >= 2 )
      goto LABEL_28;
    goto LABEL_15;
  }
  switch ( a1 )
  {
    case 4101:
LABEL_15:
      v20 = 24;
      goto LABEL_16;
    case 4096:
      v20 = 12;
LABEL_12:
      v12 = 8;
      goto LABEL_16;
    case 4097:
      v12 = 16;
      goto LABEL_15;
  }
  if ( a1 != 4098 )
  {
    if ( a1 != 4099 )
    {
      if ( a1 == 4100 )
      {
        v20 = 16;
        v12 = 544;
        goto LABEL_16;
      }
LABEL_28:
      v18 = -1073741811;
      v19 = 1124LL;
      goto LABEL_58;
    }
    v20 = 16;
    goto LABEL_12;
  }
  v20 = 16;
LABEL_16:
  if ( a3 < v20 || !a4 && v12 || a5 < v12 )
  {
    v18 = -1073741789;
    v19 = 1135LL;
    goto LABEL_58;
  }
  if ( v12 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
    {
      v18 = -1073741801;
      v19 = 1150LL;
      goto LABEL_58;
    }
  }
  if ( a1 > 4101 )
  {
    switch ( a1 )
    {
      case 4102:
        Terminal = TtmpDispatchAssignDevice(a2);
        break;
      case 4103:
        Terminal = TtmpDispatchSetDisplayState(a2);
        break;
      case 4104:
        Terminal = TtmpDispatchSetDisplayTimeouts(a2);
        break;
      case 4105:
        Terminal = TtmpDispatchSetDisplayPowerRequest(a2);
        break;
      case 4106:
        Terminal = TtmpDispatchSetInputWakeCapability(a2);
        break;
      default:
        v18 = -1073741811;
        TtmiLogError("TtmDispatchApi", 1219LL, 0xFFFFFFFFLL, 3221225485LL);
        goto LABEL_53;
    }
  }
  else
  {
    switch ( a1 )
    {
      case 4101:
        Terminal = TtmpDispatchSetDefaultDeviceAssignment(a2);
        break;
      case 4096:
        Terminal = TtmpDispatchOpenTerminal(a2, (__int64)Pool2, v17);
        break;
      case 4097:
        Terminal = TtmpDispatchCreateTerminal(a2, (__int64)Pool2);
        break;
      case 4098:
        Terminal = TtmpDispatchEvacuateDevices(a2);
        break;
      case 4099:
        Terminal = TtmpDispatchCreateEventQueue(a2, Pool2);
        break;
      default:
        Terminal = TtmpDispatchGetTerminalEvent(a2, (__int64)Pool2);
        break;
    }
  }
  v18 = Terminal;
LABEL_53:
  if ( Pool2 )
  {
    if ( (v18 & 0x80000000) != 0 )
    {
      ExFreePoolWithTag(Pool2, 0x206D654Du);
    }
    else
    {
      *a6 = Pool2;
      *a7 = v12;
      *a8 = 1;
    }
  }
LABEL_59:
  TtmiLogDispatchApiStop((unsigned int)a1, v18);
  return v18;
}
