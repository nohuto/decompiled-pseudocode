/*
 * XREFs of ?DeleteRegistryKeys@DXGADAPTER@@QEAAXXZ @ 0x140197AD8
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140197C9C (-Destroy@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x14005565C (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x14006F64C (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     DpiGetRegistryPathFromPDO @ 0x1400856C4 (DpiGetRegistryPathFromPDO.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DeleteRegistryKey@DXGADAPTER@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x14019770C (-DeleteRegistryKey@DXGADAPTER@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 */

void __fastcall DXGADAPTER::DeleteRegistryKeys(DXGADAPTER *this)
{
  struct _DEVICE_OBJECT *v2; // rcx
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // rbx
  __int64 RegistryPathFromPDO; // rsi
  ULONG v5; // r8d
  ULONG v6; // r8d
  ULONG v7; // r8d
  ULONG v8; // r8d
  struct _UNICODE_STRING v9; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  char v11; // [rsp+70h] [rbp-90h] BYREF

  v2 = (struct _DEVICE_OBJECT *)*((_QWORD *)this + 27);
  if ( v2 )
  {
    *(_QWORD *)&v9.Length = 34078720LL;
    UnicodeString = 0LL;
    v9.Buffer = (wchar_t *)&v11;
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v2);
    RegistryPathFromPDO = (int)DpiGetRegistryPathFromPDO(DeviceAttachmentBaseRef, 0, &UnicodeString.Length);
    ObfDereferenceObject(DeviceAttachmentBaseRef);
    if ( (int)RegistryPathFromPDO >= 0 )
    {
      RtlUnicodeStringCopy(&v9, &UnicodeString, v5);
      RtlUnicodeStringCatString(&v9, (wchar_t *)L"\\Classes");
      if ( (int)DXGADAPTER::DeleteRegistryKey(this, &v9, v6) < 0 )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 12925;
      }
      RtlUnicodeStringCopy(&v9, &UnicodeString, v7);
      RtlUnicodeStringCatString(&v9, (wchar_t *)L"\\MediaFoundation");
      if ( (int)DXGADAPTER::DeleteRegistryKey(this, &v9, v8) < 0 )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 12934;
      }
      RtlFreeUnicodeString(&UnicodeString);
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 12915;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to read PnP registry key name for DeleteRegistryKeys (status = 0x%I64x).",
        RegistryPathFromPDO,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
}
