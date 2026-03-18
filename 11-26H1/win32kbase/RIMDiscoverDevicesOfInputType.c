/*
 * XREFs of RIMDiscoverDevicesOfInputType @ 0x1401BB0E0
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x14005C740 (RIMRegisterForInputWithCallbacks.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1400E52A0 (RIMDirectStartDeviceClassNotifications.c)
 *     rimDoScheduledUserModeRimPnpRegistration @ 0x1401785D8 (rimDoScheduledUserModeRimPnpRegistration.c)
 *     RIMAddInputOfType @ 0x140200340 (RIMAddInputOfType.c)
 * Callees:
 *     DeviceTypeToRimInputType @ 0x140092D60 (DeviceTypeToRimInputType.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMRegisterForDeviceClassNotifications @ 0x1401844A4 (RIMRegisterForDeviceClassNotifications.c)
 *     RIMChildInputTypeIsVirtualized @ 0x14018C880 (RIMChildInputTypeIsVirtualized.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMApiSetIsRemoteConnection @ 0x1401C45C8 (RIMApiSetIsRemoteConnection.c)
 */

__int64 __fastcall RIMDiscoverDevicesOfInputType(char *Object, int a2, int a3)
{
  NTSTATUS v4; // edi
  unsigned int v6; // esi
  void **v7; // r12
  _QWORD *v8; // rbp
  int v9; // edx
  int v10; // r8d
  __int64 v11; // rdx
  char v12; // r14
  bool v13; // r15
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  __int64 v17; // [rsp+20h] [rbp-48h]

  v4 = -1073741811;
  if ( RIMChildInputTypeIsVirtualized(*((_DWORD *)Object + 21), a2, a3) )
    return 0LL;
  if ( (unsigned int)RIMApiSetIsRemoteConnection() || !*((_QWORD *)Object + 15) )
  {
    return 0;
  }
  else
  {
    v6 = 0;
    v7 = (void **)(Object + 128);
    v8 = Object + 312;
    do
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(v6) & *((_DWORD *)Object + 21)) != 0 )
      {
        if ( *(v8 - 11) )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v12 = 0;
          }
          v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v9, v10);
            LOBYTE(v15) = v13;
            LOBYTE(v16) = v12;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v16,
              v15,
              *(_QWORD *)(UserSessionState + 19368),
              3,
              1,
              10,
              (__int64)&WPP_e06456f7ab9d3b6cc93baaf7d9113736_Traceguids);
          }
        }
        else
        {
          if ( !*v8 )
            MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 120);
          v4 = ObReferenceObjectByPointer(Object, 3u, ExRawInputManagerObjectType, 0);
          if ( v4 >= 0 )
          {
            v4 = RIMRegisterForDeviceClassNotifications(
                   (__int64)&Object[8 * v6 + 224],
                   v11,
                   *v7,
                   *((struct _DRIVER_OBJECT **)Object + 15),
                   v17,
                   &Object[16 * v6 + 248],
                   (PVOID *)&Object[8 * v6 + 224]);
            if ( v4 < 0 )
              ObfDereferenceObject(Object);
          }
        }
      }
      ++v6;
      ++v8;
      v7 += 4;
    }
    while ( v6 <= 2 );
  }
  return (unsigned int)v4;
}
