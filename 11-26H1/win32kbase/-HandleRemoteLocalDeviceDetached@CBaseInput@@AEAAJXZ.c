/*
 * XREFs of ?HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ @ 0x14017D680
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerObjectCreateKernelHandle @ 0x1401184A0 (RawInputManagerObjectCreateKernelHandle.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x14017D760 (RIMDirectStopDeviceClassNotifications.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ @ 0x14021847C (-ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ.c)
 *     ?SensorInitialized@CBaseInput@@IEAA_NXZ @ 0x140218948 (-SensorInitialized@CBaseInput@@IEAA_NXZ.c)
 */

__int64 __fastcall CBaseInput::HandleRemoteLocalDeviceDetached(CBaseInput *this)
{
  HANDLE *v1; // rdi
  unsigned int v3; // ebp
  HANDLE *v4; // rsi
  _DWORD *v5; // rcx
  HANDLE v6; // rcx
  HANDLE Handle; // [rsp+58h] [rbp+10h] BYREF

  v1 = (HANDLE *)((char *)this + 8);
  v3 = -1073741823;
  v4 = (HANDLE *)((char *)this + 8);
  Handle = 0LL;
  if ( !*((_QWORD *)this + 1) )
    goto LABEL_2;
  if ( !CBaseInput::SensorInitialized(this) )
  {
    v4 = (HANDLE *)((char *)this + 8);
LABEL_2:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1402LL);
  }
  if ( CBaseInput::ExecutingInSensorHostingProcess(this) )
  {
    v6 = *v1;
    Handle = *v1;
  }
  else
  {
    v5 = (_DWORD *)*((_QWORD *)this + 2);
    if ( v5 )
      RawInputManagerObjectCreateKernelHandle(v5, 3u, 0, 0, &Handle);
    v6 = Handle;
  }
  if ( v6 )
  {
    v3 = RIMDirectStopDeviceClassNotifications();
    if ( Handle != *v4 )
      ZwClose(Handle);
  }
  return v3;
}
