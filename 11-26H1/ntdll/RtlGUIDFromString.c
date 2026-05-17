/*
 * XREFs of RtlGUIDFromString @ 0x1800C29A0
 * Callers:
 *     RtlQueryPackageClaims @ 0x1800C24B0 (RtlQueryPackageClaims.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1801493F0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ScanHexFormat @ 0x1800C2AA0 (ScanHexFormat.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlGUIDFromString(unsigned __int16 *a1, _BYTE *a2)
{
  _BYTE *v2; // r8
  _BYTE *v4; // rax
  unsigned int v5; // edx
  __int64 v6; // rcx
  __int128 v8; // [rsp+70h] [rbp-28h] BYREF

  v2 = a2 + 4;
  v4 = a2 + 6;
  v5 = *a1;
  v6 = *((_QWORD *)a1 + 1);
  v8 = 0LL;
  if ( (unsigned int)ScanHexFormat(
                       v6,
                       v5 >> 1,
                       L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
                       a2,
                       v2,
                       v4,
                       &v8,
                       (char *)&v8 + 2,
                       (char *)&v8 + 4,
                       (char *)&v8 + 6,
                       (char *)&v8 + 8,
                       (char *)&v8 + 10,
                       (char *)&v8 + 12,
                       (char *)&v8 + 14) == -1 )
    return 3221225485LL;
  a2[8] = v8;
  a2[9] = BYTE2(v8);
  a2[10] = BYTE4(v8);
  a2[11] = BYTE6(v8);
  a2[12] = BYTE8(v8);
  a2[13] = BYTE10(v8);
  a2[14] = BYTE12(v8);
  a2[15] = BYTE14(v8);
  return 0LL;
}
