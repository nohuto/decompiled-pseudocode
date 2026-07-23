/*
 * XREFs of IoEnumerateEnvironmentVariablesEx @ 0x140A2EC3C
 * Callers:
 *     NtEnumerateDriverEntries @ 0x140843670 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x140843AF0 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtEnumerateBootEntries @ 0x140A2CCB0 (NtEnumerateBootEntries.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     IopOpenSystemVariableDevice @ 0x140A30618 (IopOpenSystemVariableDevice.c)
 */

__int64 __fastcall IoEnumerateEnvironmentVariablesEx(int a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int v7; // ebx
  PVOID v8; // rdi
  bool v10; // [rsp+40h] [rbp-69h] BYREF
  PVOID Object; // [rsp+48h] [rbp-61h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-59h] BYREF
  __int64 v13; // [rsp+58h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+60h] [rbp-49h] BYREF
  PVOID *p_Object; // [rsp+80h] [rbp-29h]
  __int64 v16; // [rsp+88h] [rbp-21h]
  PDEVICE_OBJECT *p_DeviceObject; // [rsp+90h] [rbp-19h]
  __int64 v18; // [rsp+98h] [rbp-11h]
  __int64 *v19; // [rsp+A0h] [rbp-9h]
  __int64 v20; // [rsp+A8h] [rbp-1h]
  bool *v21; // [rsp+B0h] [rbp+7h]
  __int64 v22; // [rsp+B8h] [rbp+Fh]

  DeviceObject = 0LL;
  Object = 0LL;
  v13 = 0LL;
  v7 = IopOpenSystemVariableDevice((PFILE_OBJECT *)&Object, &DeviceObject);
  if ( v7 >= 0 )
  {
    v8 = Object;
    v7 = guard_dispatch_icall_no_overrides((__int64)Object, (__int64)DeviceObject);
    if ( v8 )
      ObfDereferenceObject(v8);
  }
  if ( (unsigned int)dword_140E06DC8 > 5 && tlgKeywordOn((__int64)&dword_140E06DC8, 0x200000000000LL) )
  {
    LODWORD(Object) = a1;
    p_Object = &Object;
    LODWORD(DeviceObject) = *a4;
    v16 = 4LL;
    p_DeviceObject = &DeviceObject;
    v10 = a2 != 0;
    v18 = 4LL;
    v19 = &v13;
    LODWORD(v13) = v7;
    v21 = &v10;
    v20 = 4LL;
    v22 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06DC8, (unsigned __int8 *)word_140048272, 0LL, 0LL, 6u, &v14);
  }
  return (unsigned int)v7;
}
