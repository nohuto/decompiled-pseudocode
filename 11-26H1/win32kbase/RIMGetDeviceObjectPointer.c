/*
 * XREFs of RIMGetDeviceObjectPointer @ 0x1400F2B34
 * Callers:
 *     RIMHidGetPreparsedData @ 0x140079FB0 (RIMHidGetPreparsedData.c)
 *     rimOnPnpArrived @ 0x140093AC0 (rimOnPnpArrived.c)
 *     RIMSetDeviceIdleTimeout @ 0x1400EB4DC (RIMSetDeviceIdleTimeout.c)
 *     RIMLoadDeviceLegacyInfo @ 0x1400EDEFC (RIMLoadDeviceLegacyInfo.c)
 *     RIMGetDeviceParent @ 0x1400EE228 (RIMGetDeviceParent.c)
 *     RIMRegOpenDeviceInstanceKey @ 0x1400EEFEC (RIMRegOpenDeviceInstanceKey.c)
 *     IsMouseDeviceOnIgnoreList @ 0x1400EF3E4 (IsMouseDeviceOnIgnoreList.c)
 *     RIMDeliverConfigRequest @ 0x1400F1398 (RIMDeliverConfigRequest.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1400F2658 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMGetMouseDeviceHardwareId @ 0x14016ECEC (RIMGetMouseDeviceHardwareId.c)
 *     RIMEnableMonitorMappingForDevice @ 0x140200E20 (RIMEnableMonitorMappingForDevice.c)
 *     RIMConfigureDeviceFeedback @ 0x140203F80 (RIMConfigureDeviceFeedback.c)
 *     RIMConfigureTouchpadClickForceSensitivity @ 0x1402043F0 (RIMConfigureTouchpadClickForceSensitivity.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x140207AC4 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x140070FE4 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall RIMGetDeviceObjectPointer(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        __int64 a3,
        void **a4,
        PVOID *a5,
        PDEVICE_OBJECT *a6)
{
  int v7; // edx
  NTSTATUS v8; // edi
  int v9; // r8d
  NTSTATUS v10; // eax
  struct _FILE_OBJECT *v11; // rcx
  char v13; // bl
  char v14; // si
  __int64 UserSessionState; // rax
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
    v10 = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    v11 = (struct _FILE_OBJECT *)Object;
    v8 = v10;
    if ( v10 >= 0 )
    {
      *a5 = Object;
      *a6 = IoGetRelatedDeviceObject(v11);
      *a4 = FileHandle;
      return (unsigned int)v8;
    }
    ZwClose(FileHandle);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v13 = 0;
  }
  v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v7, v9);
    WPP_RECORDER_AND_TRACE_SF_ddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v14,
      *(_QWORD *)(UserSessionState + 19368),
      4u,
      1u,
      0x1Eu,
      (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
      0,
      3,
      v8);
  }
  return (unsigned int)v8;
}
