/*
 * XREFs of DpiFdoInitializeAdapterUniqueString @ 0x1403F928C
 * Callers:
 *     DpiFdoInitializeFdo @ 0x140243960 (DpiFdoInitializeFdo.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x14005CF34 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?MonitorUnifyCCDMonitorString@@YAXPEAU_UNICODE_STRING@@@Z @ 0x1403F9AEC (-MonitorUnifyCCDMonitorString@@YAXPEAU_UNICODE_STRING@@@Z.c)
 *     DpiGetDevicePropertyString @ 0x14041357C (DpiGetDevicePropertyString.c)
 */

__int64 __fastcall DpiFdoInitializeAdapterUniqueString(__int64 a1)
{
  __int64 v1; // rsi
  WCHAR *Pool2; // r12
  WCHAR *v3; // r13
  NTSTATUS DevicePropertyString; // edi
  struct _DEVICE_OBJECT *v5; // rcx
  void *v6; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int16 *v9; // r14
  unsigned __int16 *v11; // rax
  ULONG Length[2]; // [rsp+20h] [rbp-69h]
  ULONG Lengtha[2]; // [rsp+20h] [rbp-69h]
  PULONG ResultLength; // [rsp+28h] [rbp-61h]
  UNICODE_STRING GuidString; // [rsp+40h] [rbp-49h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-39h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+60h] [rbp-29h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-19h] BYREF
  ULONG v19; // [rsp+F0h] [rbp+67h] BYREF
  ULONG v20; // [rsp+F8h] [rbp+6Fh] BYREF
  __int64 v21; // [rsp+100h] [rbp+77h] BYREF
  void *KeyHandle; // [rsp+108h] [rbp+7Fh] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  KeyHandle = 0LL;
  v19 = 0;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(v1 + 512);
  DestinationString = 0LL;
  Pool2 = 0LL;
  v20 = 0;
  v3 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  DevicePropertyString = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( DevicePropertyString >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"VideoID");
    if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &v19) == -1073741789 )
    {
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 10893;
      Pool2 = (WCHAR *)ExAllocatePool2(256LL, v19, 1953656900LL);
      if ( !Pool2 )
      {
        DevicePropertyString = -1073741801;
        WdLogSingleEntry1(6LL);
        WdLogGlobalForLineNumber = 10912;
        goto LABEL_44;
      }
      DevicePropertyString = ZwQueryValueKey(
                               KeyHandle,
                               &DestinationString,
                               KeyValuePartialInformation,
                               Pool2,
                               v19,
                               &v19);
      if ( DevicePropertyString < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 10928;
        goto LABEL_44;
      }
      if ( !RtlCreateUnicodeString((PUNICODE_STRING)(v1 + 4896), Pool2 + 6) )
      {
        DevicePropertyString = -1073741801;
        WdLogSingleEntry1(6LL);
        WdLogGlobalForLineNumber = 10940;
        goto LABEL_44;
      }
      DevicePropertyString = RtlGUIDFromString((PCUNICODE_STRING)(v1 + 4896), (GUID *)(v1 + 4928));
      if ( DevicePropertyString < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 10951;
        goto LABEL_44;
      }
    }
    else
    {
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 10959;
      DevicePropertyString = ExUuidCreate((UUID *)(v1 + 4928));
      if ( DevicePropertyString < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 10973;
        goto LABEL_44;
      }
      DevicePropertyString = RtlStringFromGUID((const GUID *const)(v1 + 4928), (PUNICODE_STRING)(v1 + 4896));
      if ( DevicePropertyString < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 10988;
        goto LABEL_44;
      }
      RtlUpcaseUnicodeString((PUNICODE_STRING)(v1 + 4896), (PCUNICODE_STRING)(v1 + 4896), 0);
      DevicePropertyString = ZwSetValueKey(
                               KeyHandle,
                               &DestinationString,
                               0,
                               1u,
                               *(PVOID *)(v1 + 4904),
                               *(unsigned __int16 *)(v1 + 4898));
      if ( DevicePropertyString < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 11016;
        goto LABEL_44;
      }
    }
    ValueName = 0LL;
    RtlInitUnicodeString(&ValueName, L"AOCID");
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0LL, 0, &v20) == -1073741789 )
    {
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 11039;
      v3 = (WCHAR *)ExAllocatePool2(256LL, v20, 1953656900LL);
      if ( !v3 )
      {
        DevicePropertyString = -1073741801;
        WdLogSingleEntry1(6LL);
        WdLogGlobalForLineNumber = 11058;
        goto LABEL_44;
      }
      DevicePropertyString = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v3, v20, &v20);
      if ( DevicePropertyString < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 11074;
        goto LABEL_44;
      }
      GuidString = 0LL;
      if ( !RtlCreateUnicodeString(&GuidString, v3 + 6) )
      {
        DevicePropertyString = -1073741801;
        WdLogSingleEntry1(6LL);
        WdLogGlobalForLineNumber = 11088;
        goto LABEL_44;
      }
      DevicePropertyString = RtlGUIDFromString(&GuidString, (GUID *)(v1 + 4944));
      RtlFreeUnicodeString(&GuidString);
      if ( DevicePropertyString < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 11102;
        goto LABEL_44;
      }
    }
    else
    {
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 11110;
      DevicePropertyString = ExUuidCreate((UUID *)(v1 + 4944));
      if ( DevicePropertyString < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 11124;
        goto LABEL_44;
      }
      GuidString = 0LL;
      DevicePropertyString = RtlStringFromGUID((const GUID *const)(v1 + 4944), &GuidString);
      if ( DevicePropertyString < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 11139;
        goto LABEL_44;
      }
      RtlUpcaseUnicodeString(&GuidString, &GuidString, 0);
      DevicePropertyString = ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, GuidString.Buffer, GuidString.MaximumLength);
      RtlFreeUnicodeString(&GuidString);
      if ( DevicePropertyString < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 11169;
        goto LABEL_44;
      }
    }
    if ( *(_BYTE *)(v1 + 1159) )
    {
      v5 = *(struct _DEVICE_OBJECT **)(v1 + 152);
      *(_QWORD *)&GuidString.Length = 0LL;
      DevicePropertyString = DpiGetDevicePropertyString(v5, DevicePropertyHardwareID, (__int64)&v21);
      if ( DevicePropertyString < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 11202;
        goto LABEL_44;
      }
      v6 = *(void **)&GuidString.Length;
      v7 = -1LL;
      do
        ++v7;
      while ( *(_WORD *)(*(_QWORD *)&GuidString.Length + 2 * v7) );
      v8 = (unsigned int)(2 * v7 + 40);
      v9 = (unsigned __int16 *)ExAllocatePool2(256LL, v8, 1953656900LL);
      if ( !v9 )
      {
        DevicePropertyString = -1073741801;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 11219;
        goto LABEL_44;
      }
      LODWORD(ResultLength) = *(_DWORD *)(v1 + 1144);
      Lengtha[0] = *(_DWORD *)(v1 + 1128);
      DevicePropertyString = RtlStringCbPrintfW(
                               v9,
                               v8,
                               (size_t *)L"%04X_%04X_%08X_%ls",
                               *(unsigned int *)(v1 + 1124),
                               *(_QWORD *)Lengtha,
                               ResultLength,
                               v6);
      if ( v6 )
        ExFreePoolWithTag(v6, 0);
    }
    else
    {
      v11 = (unsigned __int16 *)ExAllocatePool2(256LL, 74LL, 1953656900LL);
      v9 = v11;
      if ( !v11 )
      {
        DevicePropertyString = -1073741801;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 11252;
        goto LABEL_44;
      }
      LODWORD(ResultLength) = *(_DWORD *)(v1 + 1144);
      Length[0] = *(_DWORD *)(v1 + 1128);
      DevicePropertyString = RtlStringCbPrintfW(
                               v11,
                               0x4AuLL,
                               (size_t *)L"%04X_%04X_%08X_%08X",
                               *(unsigned int *)(v1 + 1124),
                               *(_QWORD *)Length,
                               ResultLength,
                               *(_DWORD *)(v1 + 1148));
    }
    RtlInitUnicodeString((PUNICODE_STRING)(v1 + 4912), v9);
    MonitorUnifyCCDMonitorString((struct _UNICODE_STRING *)(v1 + 4912));
    if ( DevicePropertyString >= 0 )
      goto LABEL_48;
    goto LABEL_44;
  }
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 10871;
LABEL_44:
  if ( *(_QWORD *)(v1 + 4920) )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4912));
    *(_QWORD *)(v1 + 4920) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 4904) )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4896));
    *(_QWORD *)(v1 + 4904) = 0LL;
  }
LABEL_48:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x74727044u);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x74727044u);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)DevicePropertyString;
}
