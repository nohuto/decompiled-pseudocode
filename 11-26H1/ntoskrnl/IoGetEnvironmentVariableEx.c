/*
 * XREFs of IoGetEnvironmentVariableEx @ 0x140908318
 * Callers:
 *     ExpSetBootEntry @ 0x14083BEC0 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14083C5DC (ExpSetDriverEntry.c)
 *     NtDeleteBootEntry @ 0x14083D0F0 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x14083D290 (NtDeleteDriverEntry.c)
 *     NtGetEnvironmentVariableEx @ 0x14083DA50 (NtGetEnvironmentVariableEx.c)
 *     NtQueryBootOptions @ 0x140906480 (NtQueryBootOptions.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x140907320 (NtQuerySystemEnvironmentValueEx.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x140907D64 (ExpGetFirmwareEnvironmentVariable.c)
 *     NtQueryBootEntryOrder @ 0x140B34660 (NtQueryBootEntryOrder.c)
 *     IopCachePreviousBootData @ 0x140CBA3B8 (IopCachePreviousBootData.c)
 *     IopInitializeOfflineCrashDump @ 0x140CBA6C4 (IopInitializeOfflineCrashDump.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     _tlgCreate1Sz_wchar_t @ 0x140437A60 (_tlgCreate1Sz_wchar_t.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     IopOpenSystemVariableDevice @ 0x1409084B8 (IopOpenSystemVariableDevice.c)
 */

__int64 __fastcall IoGetEnvironmentVariableEx(const WCHAR *a1, __int64 a2, __int64 a3, _DWORD *a4, _DWORD *a5)
{
  int v8; // edi
  PVOID v9; // rbx
  PVOID Object; // [rsp+48h] [rbp-79h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-71h] BYREF
  __int64 v13; // [rsp+58h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+60h] [rbp-61h] BYREF
  _BYTE v15[16]; // [rsp+80h] [rbp-41h] BYREF
  __int64 v16; // [rsp+90h] [rbp-31h]
  __int64 v17; // [rsp+98h] [rbp-29h]
  PVOID *p_Object; // [rsp+A0h] [rbp-21h]
  __int64 v19; // [rsp+A8h] [rbp-19h]
  PDEVICE_OBJECT *p_DeviceObject; // [rsp+B0h] [rbp-11h]
  __int64 v21; // [rsp+B8h] [rbp-9h]
  __int64 *v22; // [rsp+C0h] [rbp-1h]
  __int64 v23; // [rsp+C8h] [rbp+7h]

  DeviceObject = 0LL;
  Object = 0LL;
  v13 = 0LL;
  v8 = IopOpenSystemVariableDevice((PFILE_OBJECT *)&Object, &DeviceObject);
  if ( v8 >= 0 )
  {
    v9 = Object;
    v8 = guard_dispatch_icall_no_overrides((__int64)Object, (__int64)DeviceObject);
    if ( a5 )
      *a5 = -559038737;
    if ( v9 )
      ObfDereferenceObject(v9);
  }
  if ( (unsigned int)dword_140E06DC8 > 5
    && (qword_140E06DD8 & 0x200000000000LL) != 0
    && (qword_140E06DE0 & 0x200000000000LL) == qword_140E06DE0 )
  {
    tlgCreate1Sz_wchar_t((__int64)v15, a1);
    LODWORD(Object) = *a4;
    v16 = a2;
    p_Object = &Object;
    LODWORD(DeviceObject) = -559038737;
    p_DeviceObject = &DeviceObject;
    v22 = &v13;
    v17 = 16LL;
    v19 = 4LL;
    v21 = 4LL;
    LODWORD(v13) = v8;
    v23 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06DC8, (unsigned __int8 *)byte_140047C79, 0LL, 0LL, 7u, &v14);
  }
  return (unsigned int)v8;
}
