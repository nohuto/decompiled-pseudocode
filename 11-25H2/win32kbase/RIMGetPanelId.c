/*
 * XREFs of RIMGetPanelId @ 0x1400B1AA0
 * Callers:
 *     RIMGetDeviceLocationInfo @ 0x1400AFCDC (RIMGetDeviceLocationInfo.c)
 *     ?PopulatePanelId@CInputSpaceRegion@@QEAAXXZ @ 0x1400B193C (-PopulatePanelId@CInputSpaceRegion@@QEAAXXZ.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1401E5C14 (rimFindMonitorForDigitizerWithQDCData.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMGetPointerDevicePDO @ 0x1400B23E4 (RIMGetPointerDevicePDO.c)
 */

__int64 __fastcall RIMGetPanelId(struct _DEVICE_OBJECT *a1, _WORD *a2, ULONG a3)
{
  NTSTATUS DevicePropertyData; // ebx
  __int64 v6; // rdx
  char v7; // di
  bool v8; // si
  int v9; // edx
  int v10; // r8d
  __int64 v11; // r9
  char v12; // di
  bool v13; // si
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  __int16 RequiredSize; // [rsp+30h] [rbp-48h]
  ULONG Type; // [rsp+90h] [rbp+18h] BYREF
  ULONG v19; // [rsp+98h] [rbp+20h] BYREF

  Type = a3;
  *a2 = 0;
  DevicePropertyData = RIMGetPointerDevicePDO(a1);
  if ( DevicePropertyData >= 0 )
  {
    Type = 0;
    v19 = 114;
    DevicePropertyData = IoGetDevicePropertyData(0LL, &DEVPKEY_Device_PanelId, 0, 0, 0x72u, a2, &v19, &Type);
    if ( DevicePropertyData == -1073741772 )
    {
      DevicePropertyData = 0;
    }
    else
    {
      if ( DevicePropertyData < 0 )
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v12 = 0;
        }
        v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v6);
          LOBYTE(v15) = v13;
          LOBYTE(v16) = v12;
          WPP_RECORDER_AND_TRACE_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v16,
            v15,
            *(_QWORD *)(UserSessionState + 19336),
            3,
            1,
            22,
            (__int64)&WPP_4da5384257fb33656363be52a67fadd2_Traceguids,
            DevicePropertyData);
        }
        goto LABEL_5;
      }
      if ( Type == 18 )
      {
        if ( v19 )
        {
          if ( !a2[((unsigned __int64)v19 >> 1) - 1] )
            goto LABEL_5;
          DevicePropertyData = -1073741823;
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v7 = 0;
          }
          v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v7 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_5;
          v11 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v6) + 19336);
          RequiredSize = 25;
        }
        else
        {
          DevicePropertyData = -1073741823;
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v7 = 0;
          }
          v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v7 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_5;
          v11 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v6) + 19336);
          RequiredSize = 24;
        }
      }
      else
      {
        DevicePropertyData = -1073741823;
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v7 = 0;
        }
        v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v7 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_5;
        v11 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v6) + 19336);
        RequiredSize = 23;
      }
      LOBYTE(v10) = v8;
      LOBYTE(v9) = v7;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v9,
        v10,
        v11,
        3,
        1,
        RequiredSize,
        (__int64)&WPP_4da5384257fb33656363be52a67fadd2_Traceguids);
    }
LABEL_5:
    ObfDereferenceObject(0LL);
  }
  return (unsigned int)DevicePropertyData;
}
