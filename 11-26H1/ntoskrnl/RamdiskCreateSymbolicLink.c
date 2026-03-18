/*
 * XREFs of RamdiskCreateSymbolicLink @ 0x140D03C90
 * Callers:
 *     RamdiskInitialize @ 0x140D03DE4 (RamdiskInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x140433060 (RtlStringCbPrintfW.c)
 *     RtlInitAnsiString @ 0x14046C9A0 (RtlInitAnsiString.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     RtlStringCbPrintfA @ 0x140576648 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlAnsiStringToUnicodeString @ 0x14096BA30 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 *     RtlStringFromGUID @ 0x140A3DEC0 (RtlStringFromGUID.c)
 *     IoCreateSymbolicLink @ 0x140AB52F0 (IoCreateSymbolicLink.c)
 */

__int64 __fastcall RamdiskCreateSymbolicLink(__int64 a1, __int64 a2)
{
  bool v2; // zf
  NTSTATUS v4; // ebx
  ULONG_PTR v5; // rdx
  UNICODE_STRING GuidString; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING SymbolicLinkName; // [rsp+40h] [rbp-C0h] BYREF
  STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DeviceName; // [rsp+60h] [rbp-A0h] BYREF
  char pszDest[32]; // [rsp+70h] [rbp-90h] BYREF
  wchar_t SourceString[56]; // [rsp+90h] [rbp-70h] BYREF

  v2 = *(_BYTE *)(a2 + 16) == 0;
  GuidString = 0LL;
  DestinationString = 0LL;
  SymbolicLinkName = 0LL;
  DeviceName = 0LL;
  if ( v2 )
  {
    v4 = RtlStringFromGUID((const GUID *const)a2, &GuidString);
    if ( v4 < 0 )
    {
      v5 = 4LL;
      goto LABEL_8;
    }
    RtlStringCbPrintfA(pszDest, 0x14uLL, "\\ArcName\\%s", *(const char **)(a1 + 184));
    RtlInitAnsiString(&DestinationString, pszDest);
    v4 = RtlAnsiStringToUnicodeString(&SymbolicLinkName, &DestinationString, 1u);
    if ( v4 < 0 )
    {
      v5 = 5LL;
      goto LABEL_8;
    }
    RtlStringCbPrintfW(SourceString, 0x6CuLL, L"\\Device\\Ramdisk%wZ", &GuidString);
    RtlInitUnicodeString(&DeviceName, SourceString);
    v4 = IoCreateSymbolicLink(&SymbolicLinkName, &DeviceName);
    RtlFreeAnsiString(&GuidString);
    RtlFreeAnsiString(&SymbolicLinkName);
    if ( v4 < 0 )
    {
      v5 = 6LL;
LABEL_8:
      KeBugCheckEx(0xF8u, v5, v4, 0LL, 0LL);
    }
  }
  return 0LL;
}
