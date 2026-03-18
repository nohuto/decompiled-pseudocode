/*
 * XREFs of RIMGetPanelId @ 0x1400EF0E4
 * Callers:
 *     rimFindMonitorForDigitizerWithQDCData @ 0x14007C5BC (rimFindMonitorForDigitizerWithQDCData.c)
 *     ?PopulatePanelId@CInputSpaceRegion@@QEAAXXZ @ 0x1400EEE34 (-PopulatePanelId@CInputSpaceRegion@@QEAAXXZ.c)
 *     RIMGetDeviceLocationInfo @ 0x140130414 (RIMGetDeviceLocationInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMGetPointerDevicePDO @ 0x1400EFA1C (RIMGetPointerDevicePDO.c)
 */

__int64 __fastcall RIMGetPanelId(struct _DEVICE_OBJECT *a1, _WORD *a2, ULONG a3)
{
  NTSTATUS DevicePropertyData; // ebx
  int v5; // edx
  int v6; // r8d
  char v8; // di
  bool v9; // si
  int v10; // edx
  int v11; // r8d
  __int64 v12; // r9
  char v13; // di
  bool v14; // si
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  __int16 RequiredSize; // [rsp+30h] [rbp-48h]
  ULONG Type; // [rsp+90h] [rbp+18h] BYREF
  ULONG v20; // [rsp+98h] [rbp+20h] BYREF

  Type = a3;
  *a2 = 0;
  DevicePropertyData = RIMGetPointerDevicePDO(a1);
  if ( DevicePropertyData >= 0 )
  {
    Type = 0;
    v20 = 114;
    DevicePropertyData = IoGetDevicePropertyData(0LL, &DEVPKEY_Device_PanelId, 0, 0, 0x72u, a2, &v20, &Type);
    if ( DevicePropertyData == -1073741772 )
    {
      DevicePropertyData = 0;
    }
    else
    {
      if ( DevicePropertyData < 0 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v13 = 0;
        }
        v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v5, v6);
          LOBYTE(v16) = v14;
          LOBYTE(v17) = v13;
          WPP_RECORDER_AND_TRACE_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v17,
            v16,
            *(_QWORD *)(UserSessionState + 19368),
            3,
            1,
            22,
            (__int64)&WPP_676b52f56b8e3d8fcdefebb4d2dd90f3_Traceguids,
            DevicePropertyData);
        }
        goto LABEL_4;
      }
      if ( Type == 18 )
      {
        if ( v20 )
        {
          if ( !a2[((unsigned __int64)v20 >> 1) - 1] )
            goto LABEL_4;
          DevicePropertyData = -1073741823;
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v8 = 0;
          }
          v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_4;
          v12 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v5, v6) + 19368);
          RequiredSize = 25;
        }
        else
        {
          DevicePropertyData = -1073741823;
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v8 = 0;
          }
          v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_4;
          v12 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v5, v6) + 19368);
          RequiredSize = 24;
        }
      }
      else
      {
        DevicePropertyData = -1073741823;
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v8 = 0;
        }
        v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_4;
        v12 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v5, v6) + 19368);
        RequiredSize = 23;
      }
      LOBYTE(v11) = v9;
      LOBYTE(v10) = v8;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v10,
        v11,
        v12,
        3,
        1,
        RequiredSize,
        (__int64)&WPP_676b52f56b8e3d8fcdefebb4d2dd90f3_Traceguids);
    }
LABEL_4:
    ObfDereferenceObject(0LL);
  }
  return (unsigned int)DevicePropertyData;
}
