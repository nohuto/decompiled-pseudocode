/*
 * XREFs of ?WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x140337BCC
 * Callers:
 *     ?WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1401D4A18 (-WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 *     ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1401D4B28 (-WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x140338300 (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?CloseRegistrySubkey@@YAXPEAX@Z @ 0x1403388F4 (-CloseRegistrySubkey@@YAXPEAX@Z.c)
 *     ?OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z @ 0x14040A080 (-OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z.c)
 */

__int64 __fastcall DpiPersistence::WriteDwordToParticularRegValue(
        struct _UNICODE_STRING *this,
        struct _UNICODE_STRING *a2,
        const struct _UNICODE_STRING *a3,
        const struct _UNICODE_STRING *a4,
        const unsigned __int16 *const ValueData)
{
  NTSTATUS v7; // eax
  __int64 v8; // rdi
  const wchar_t *v9; // r9
  void *v10; // rax
  NTSTATUS v11; // eax
  void *v12; // rdx
  int v13; // eax
  NTSTATUS v14; // eax
  void *v16; // [rsp+50h] [rbp-11h] BYREF
  PCWSTR Path; // [rsp+58h] [rbp-9h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-1h] BYREF
  void *KeyHandle; // [rsp+C0h] [rbp+5Fh] BYREF
  ULONG Disposition; // [rsp+D8h] [rbp+77h] BYREF
  int v21; // [rsp+DCh] [rbp+7Bh]

  v21 = HIDWORD(a4);
  ObjectAttributes.ObjectName = this;
  KeyHandle = 0LL;
  v16 = 0LL;
  Path = 0LL;
  Disposition = 0;
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v7 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  v8 = v7;
  if ( v7 < 0 )
  {
    WdLogSingleEntry1(2LL);
    v9 = L"Failed to open HKey root (Status = 0x%I64x)";
    WdLogGlobalForLineNumber = 595;
LABEL_16:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v9, v8, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_17;
  }
  v10 = KeyHandle;
  if ( !KeyHandle )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 598;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"HKeyRootHandle", 598LL, 0LL, 0LL, 0LL, 0LL);
    v10 = KeyHandle;
  }
  ObjectAttributes.RootDirectory = v10;
  ObjectAttributes.ObjectName = a2;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v11 = ZwCreateKey(&v16, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  v8 = v11;
  if ( v11 < 0 )
  {
    WdLogSingleEntry1(2LL);
    v9 = L"Unable to open/create HKey subkey (Status = 0x%I64x)";
    WdLogGlobalForLineNumber = 610;
    goto LABEL_16;
  }
  v12 = v16;
  if ( !v16 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 613;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"PerMonSettingsKeyHandle", 613LL, 0LL, 0LL, 0LL, 0LL);
    v12 = v16;
  }
  if ( a3->Length )
  {
    v13 = OpenRegistrySubkey((PHANDLE)&Path, 0xF003Fu, v12, a3, &Disposition);
    v8 = v13;
    if ( v13 < 0 )
    {
      WdLogSingleEntry1(2LL);
      v9 = L"Unable to open/create HKey subkey for monitor set (Status = 0x%I64x)";
      WdLogGlobalForLineNumber = 627;
      goto LABEL_16;
    }
    v12 = (void *)Path;
    if ( !Path )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 630;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"MonitorIdKeyHandle", 630LL, 0LL, 0LL, 0LL, 0LL);
      v12 = (void *)Path;
    }
  }
  v14 = RtlWriteRegistryValue(0x40000000u, (PCWSTR)v12, L"DpiValue", 4u, (PVOID)&ValueData, 4u);
  v8 = v14;
  if ( v14 < 0 )
  {
    WdLogSingleEntry1(2LL);
    v9 = L"Failed to write DPI value to HKey subkey. (Status = 0x%I64x)";
    WdLogGlobalForLineNumber = 649;
    goto LABEL_16;
  }
LABEL_17:
  CloseRegistrySubkey(KeyHandle);
  CloseRegistrySubkey(v16);
  CloseRegistrySubkey((void *)Path);
  return (unsigned int)v8;
}
