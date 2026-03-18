/*
 * XREFs of RIMDiscoverDevicesOfInputType @ 0x1401F0B64
 * Callers:
 *     RIMDirectStartDeviceClassNotifications @ 0x1400AED40 (RIMDirectStartDeviceClassNotifications.c)
 *     RIMRegisterForInputWithCallbacks @ 0x140154130 (RIMRegisterForInputWithCallbacks.c)
 *     RIMAddInputOfType @ 0x1401D92F0 (RIMAddInputOfType.c)
 *     rimDoScheduledUserModeRimPnpRegistration @ 0x1401ECF1C (rimDoScheduledUserModeRimPnpRegistration.c)
 * Callees:
 *     DeviceTypeToRimInputType @ 0x14002CFC0 (DeviceTypeToRimInputType.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMApiSetIsRemoteConnection @ 0x14012C31C (RIMApiSetIsRemoteConnection.c)
 *     RIMChildInputTypeIsVirtualized @ 0x1401504F0 (RIMChildInputTypeIsVirtualized.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMRegisterForDeviceClassNotifications @ 0x1401EC900 (RIMRegisterForDeviceClassNotifications.c)
 */

__int64 __fastcall RIMDiscoverDevicesOfInputType(struct _DRIVER_OBJECT **Object, __int64 a2)
{
  NTSTATUS v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v7; // esi
  void **v8; // r12
  _QWORD *v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rdx
  char v12; // r14
  bool v13; // r15
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  __int64 v17; // [rsp+20h] [rbp-48h]

  v3 = -1073741811;
  if ( RIMChildInputTypeIsVirtualized(*((unsigned int *)Object + 21), a2) )
    return 0LL;
  if ( (unsigned int)RIMApiSetIsRemoteConnection(v5, v4) || !Object[15] )
  {
    return 0;
  }
  else
  {
    v7 = 0;
    v8 = (void **)(Object + 16);
    v9 = Object + 39;
    do
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(v7) & *((_DWORD *)Object + 21)) != 0 )
      {
        if ( *(v9 - 11) )
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
            UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
            LOBYTE(v15) = v13;
            LOBYTE(v16) = v12;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v16,
              v15,
              *(_QWORD *)(UserSessionState + 19336),
              3,
              1,
              10,
              (__int64)&WPP_e06456f7ab9d3b6cc93baaf7d9113736_Traceguids);
          }
        }
        else
        {
          if ( !*v9 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 120);
          v3 = ObReferenceObjectByPointer(Object, 3u, ExRawInputManagerObjectType, 0);
          if ( v3 >= 0 )
          {
            v3 = RIMRegisterForDeviceClassNotifications(
                   (__int64)&Object[v7 + 28],
                   v11,
                   *v8,
                   Object[15],
                   v17,
                   &Object[2 * v7 + 31],
                   (PVOID *)&Object[v7 + 28]);
            if ( v3 < 0 )
              ObfDereferenceObject(Object);
          }
        }
      }
      ++v7;
      ++v9;
      v8 += 4;
    }
    while ( v7 <= 2 );
  }
  return (unsigned int)v3;
}
