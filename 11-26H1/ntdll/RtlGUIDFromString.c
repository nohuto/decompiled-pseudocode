/*
 * XREFs of RtlGUIDFromString @ 0x1800C0070
 * Callers:
 *     RtlQueryPackageClaims @ 0x1800BFB80 (RtlQueryPackageClaims.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1801492A0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ScanHexFormat @ 0x1800C0170 (ScanHexFormat.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlGUIDFromString(PUNICODE_STRING GuidString, PGUID Guid)
{
  unsigned __int16 *p_Data2; // r8
  unsigned __int16 *p_Data3; // rax
  unsigned int Length; // edx
  wchar_t *Buffer; // rcx
  __int128 v8; // [rsp+70h] [rbp-28h] BYREF

  p_Data2 = &Guid->Data2;
  p_Data3 = &Guid->Data3;
  Length = GuidString->Length;
  Buffer = GuidString->Buffer;
  v8 = 0LL;
  if ( (unsigned int)ScanHexFormat(
                       Buffer,
                       Length >> 1,
                       L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
                       Guid,
                       p_Data2,
                       p_Data3,
                       &v8,
                       (char *)&v8 + 2,
                       (char *)&v8 + 4,
                       (char *)&v8 + 6,
                       (char *)&v8 + 8,
                       (char *)&v8 + 10,
                       (char *)&v8 + 12,
                       (char *)&v8 + 14) == -1 )
    return -1073741811;
  Guid->Data4[0] = v8;
  Guid->Data4[1] = BYTE2(v8);
  Guid->Data4[2] = BYTE4(v8);
  Guid->Data4[3] = BYTE6(v8);
  Guid->Data4[4] = BYTE8(v8);
  Guid->Data4[5] = BYTE10(v8);
  Guid->Data4[6] = BYTE12(v8);
  Guid->Data4[7] = BYTE14(v8);
  return 0;
}
