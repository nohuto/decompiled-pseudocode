/*
 * XREFs of IoSetEnvironmentVariableEx @ 0x140906830
 * Callers:
 *     ExpSetBootEntry @ 0x14083BEC0 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14083C5DC (ExpSetDriverEntry.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x14083CB1C (ExpSetFirmwareEnvironmentVariable.c)
 *     NtDeleteBootEntry @ 0x14083D0F0 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x14083D290 (NtDeleteDriverEntry.c)
 *     NtSetBootEntryOrder @ 0x14083E0F0 (NtSetBootEntryOrder.c)
 *     NtSetBootOptions @ 0x14083E2B0 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x14083E500 (NtSetDriverEntryOrder.c)
 *     IopInitializeInMemoryDumpData @ 0x140CBA480 (IopInitializeInMemoryDumpData.c)
 *     IopInitializeOfflineCrashDump @ 0x140CBA6C4 (IopInitializeOfflineCrashDump.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     _tlgCreate1Sz_wchar_t @ 0x140437A60 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     IopOpenSystemVariableDevice @ 0x1409084B8 (IopOpenSystemVariableDevice.c)
 */

__int64 __fastcall IoSetEnvironmentVariableEx(const WCHAR *a1, __int64 a2, __int64 a3, int a4, int a5)
{
  int v8; // ebx
  PVOID v10; // rdi
  PVOID Object; // [rsp+40h] [rbp-81h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-79h] BYREF
  __int64 v13; // [rsp+50h] [rbp-71h] BYREF
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
    v10 = Object;
    v8 = guard_dispatch_icall_no_overrides((__int64)Object, (__int64)DeviceObject);
    if ( v10 )
      ObfDereferenceObject(v10);
  }
  if ( (unsigned int)dword_140E06DC8 > 5 && tlgKeywordOn((__int64)&dword_140E06DC8, 0x200000000000LL) )
  {
    tlgCreate1Sz_wchar_t((__int64)v15, a1);
    v16 = a2;
    p_Object = &Object;
    v17 = 16LL;
    p_DeviceObject = &DeviceObject;
    LODWORD(Object) = a4;
    v22 = &v13;
    v19 = 4LL;
    LODWORD(DeviceObject) = a5;
    v21 = 4LL;
    LODWORD(v13) = v8;
    v23 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06DC8, (unsigned __int8 *)word_140047BC2, 0LL, 0LL, 7u, &v14);
  }
  return (unsigned int)v8;
}
