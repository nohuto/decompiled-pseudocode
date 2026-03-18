/*
 * XREFs of RIMGetDeviceObjectPointer @ 0x14007A964
 * Callers:
 *     RIMSendLatencyMgtDeviceRequest @ 0x14007A488 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMGetMouseDeviceHardwareId @ 0x1400B11D8 (RIMGetMouseDeviceHardwareId.c)
 *     RIMRegOpenDeviceInstanceKey @ 0x1400B19B8 (RIMRegOpenDeviceInstanceKey.c)
 *     IsMouseDeviceOnIgnoreList @ 0x1400B1DA8 (IsMouseDeviceOnIgnoreList.c)
 *     RIMDeliverConfigRequest @ 0x1400B3038 (RIMDeliverConfigRequest.c)
 *     RIMGetDeviceParent @ 0x14012AB40 (RIMGetDeviceParent.c)
 *     RIMSetDeviceIdleTimeout @ 0x14012E2EC (RIMSetDeviceIdleTimeout.c)
 *     rimOnPnpArrived @ 0x140181640 (rimOnPnpArrived.c)
 *     RIMLoadDeviceLegacyInfo @ 0x1401D54D4 (RIMLoadDeviceLegacyInfo.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1401DA730 (RIMEnableMonitorMappingForDevice.c)
 *     RIMConfigureDeviceFeedback @ 0x1401DEB80 (RIMConfigureDeviceFeedback.c)
 *     RIMConfigureTouchpadClickForceSensitivity @ 0x1401DEFE0 (RIMConfigureTouchpadClickForceSensitivity.c)
 *     RIMHidGetPreparsedData @ 0x1401E0E5C (RIMHidGetPreparsedData.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1401E8734 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1400CFC20 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall RIMGetDeviceObjectPointer(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        __int64 a3,
        void **a4,
        PVOID *a5,
        PDEVICE_OBJECT *a6)
{
  __int64 v7; // rdx
  NTSTATUS v8; // edi
  struct _FILE_OBJECT *v9; // rcx
  char v11; // bl
  bool v12; // si
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  void *FileHandle; // [rsp+60h] [rbp-49h] BYREF
  PVOID Object; // [rsp+68h] [rbp-41h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp-9h] BYREF
  _DWORD v20[4]; // [rsp+B0h] [rbp+7h] BYREF

  ObjectAttributes.ObjectName = a1;
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.SecurityQualityOfService = v20;
  IoStatusBlock = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  v20[2] = 257;
  v20[0] = 12;
  v20[1] = 2;
  v8 = ZwOpenFile(&FileHandle, 0, &ObjectAttributes, &IoStatusBlock, 3u, 0x40u);
  if ( v8 >= 0 )
  {
    Object = 0LL;
    v8 = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    if ( v8 >= 0 )
    {
      v9 = (struct _FILE_OBJECT *)Object;
      *a5 = Object;
      *a6 = IoGetRelatedDeviceObject(v9);
      *a4 = FileHandle;
      return (unsigned int)v8;
    }
    ZwClose(FileHandle);
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v11 = 0;
  }
  v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
    LOBYTE(v14) = v12;
    LOBYTE(v15) = v11;
    WPP_RECORDER_AND_TRACE_SF_ddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v15,
      v14,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      30,
      (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
      0,
      3,
      v8);
  }
  return (unsigned int)v8;
}
