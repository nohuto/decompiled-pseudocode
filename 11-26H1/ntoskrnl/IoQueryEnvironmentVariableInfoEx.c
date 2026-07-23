/*
 * XREFs of IoQueryEnvironmentVariableInfoEx @ 0x14079CE14
 * Callers:
 *     NtQueryEnvironmentVariableInfoEx @ 0x140843FC0 (NtQueryEnvironmentVariableInfoEx.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     IopOpenSystemVariableDevice @ 0x140A30618 (IopOpenSystemVariableDevice.c)
 */

__int64 __fastcall IoQueryEnvironmentVariableInfoEx(int a1, PDEVICE_OBJECT *a2, __int64 *a3, __int64 *a4)
{
  int v8; // ebx
  PVOID Object; // [rsp+40h] [rbp-89h] BYREF
  __int64 v11; // [rsp+48h] [rbp-81h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-79h] BYREF
  __int64 v13; // [rsp+58h] [rbp-71h] BYREF
  __int64 v14; // [rsp+60h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+70h] [rbp-59h] BYREF
  __int64 *v16; // [rsp+90h] [rbp-39h]
  __int64 v17; // [rsp+98h] [rbp-31h]
  PDEVICE_OBJECT *p_DeviceObject; // [rsp+A0h] [rbp-29h]
  __int64 v19; // [rsp+A8h] [rbp-21h]
  __int64 *v20; // [rsp+B0h] [rbp-19h]
  __int64 v21; // [rsp+B8h] [rbp-11h]
  __int64 *v22; // [rsp+C0h] [rbp-9h]
  __int64 v23; // [rsp+C8h] [rbp-1h]
  PVOID *p_Object; // [rsp+D0h] [rbp+7h]
  __int64 v25; // [rsp+D8h] [rbp+Fh]

  DeviceObject = 0LL;
  Object = 0LL;
  v11 = 0LL;
  v8 = IopOpenSystemVariableDevice((PFILE_OBJECT *)&Object, &DeviceObject);
  if ( v8 >= 0 )
  {
    v8 = guard_dispatch_icall_no_overrides((__int64)Object, (__int64)DeviceObject);
    if ( Object )
      ObfDereferenceObject(Object);
  }
  if ( (unsigned int)dword_140E06DC8 > 5 && tlgKeywordOn((__int64)&dword_140E06DC8, 0x200000000000LL) )
  {
    LODWORD(v11) = a1;
    v16 = &v11;
    DeviceObject = *a2;
    v17 = 4LL;
    p_DeviceObject = &DeviceObject;
    v13 = *a3;
    v20 = &v13;
    v14 = *a4;
    v22 = &v14;
    p_Object = &Object;
    v19 = 8LL;
    v21 = 8LL;
    v23 = 8LL;
    LODWORD(Object) = v8;
    v25 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06DC8, (unsigned __int8 *)&byte_1400481EF, 0LL, 0LL, 7u, &v15);
  }
  return (unsigned int)v8;
}
