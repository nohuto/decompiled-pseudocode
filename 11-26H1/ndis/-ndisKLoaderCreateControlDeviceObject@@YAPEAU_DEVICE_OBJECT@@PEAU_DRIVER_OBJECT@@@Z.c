/*
 * XREFs of ?ndisKLoaderCreateControlDeviceObject@@YAPEAU_DEVICE_OBJECT@@PEAU_DRIVER_OBJECT@@@Z @ 0x140191714
 * Callers:
 *     DriverEntry @ 0x14018E240 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1401385C0 (WdmlibIoCreateDeviceSecure.c)
 */

PDEVICE_OBJECT __fastcall ndisKLoaderCreateControlDeviceObject(
        struct _DRIVER_OBJECT *a1,
        __int64 a2,
        __int64 a3,
        ULONG a4)
{
  NTSTATUS v4; // eax
  unsigned __int16 v5; // r9
  ULONG v7; // [rsp+20h] [rbp-59h]
  BOOLEAN v8; // [rsp+28h] [rbp-51h]
  BOOLEAN v9[8]; // [rsp+28h] [rbp-51h]
  const GUID *v10; // [rsp+38h] [rbp-41h]
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-29h] BYREF
  _UNICODE_STRING DeviceName; // [rsp+58h] [rbp-21h] BYREF
  _UNICODE_STRING SymbolicLinkName; // [rsp+68h] [rbp-11h] BYREF
  _OWORD v14[2]; // [rsp+78h] [rbp-1h] BYREF
  __int64 v15; // [rsp+98h] [rbp+1Fh]
  _OWORD v16[2]; // [rsp+A0h] [rbp+27h] BYREF

  DeviceName.Buffer = (wchar_t *)v16;
  v16[0] = *(_OWORD *)L"\\Device\\kloader";
  SymbolicLinkName.Buffer = (wchar_t *)v14;
  v16[1] = *(_OWORD *)L"kloader";
  *(_QWORD *)&DeviceName.Length = 2097182LL;
  *(_QWORD *)&SymbolicLinkName.Length = 2621478LL;
  v14[0] = *(_OWORD *)L"\\DosDevices\\kloader";
  DeviceObject = 0LL;
  v15 = *(_QWORD *)L"der";
  v14[1] = *(_OWORD *)L"ces\\kloader";
  v4 = WdmlibIoCreateDeviceSecure(
         (PDRIVER_OBJECT)ndisDriverObject,
         0,
         &DeviceName,
         a4,
         v7,
         v8,
         &SDDL_DEVOBJ_SYS_ALL_ADM_RWX_WORLD_RW_RES_R,
         v10,
         &DeviceObject);
  if ( v4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 10;
LABEL_7:
      *(_DWORD *)v9 = v4;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        v5,
        (struct _GUID *)&WPP_d515c92245023f957140338f59895f5c_Traceguids,
        *(_QWORD *)v9);
      return 0LL;
    }
    return 0LL;
  }
  DeviceObject->StackSize = 2;
  DeviceObject->Flags |= 4u;
  v4 = IoCreateSymbolicLink(&SymbolicLinkName, &DeviceName);
  if ( v4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 11;
      goto LABEL_7;
    }
    return 0LL;
  }
  DeviceObject->Flags &= ~0x80u;
  return DeviceObject;
}
