/*
 * XREFs of PnpMultiSzContainsString @ 0x1404F40FC
 * Callers:
 *     PiDevCfgAppendMultiSz @ 0x1407AB6AC (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140A46B84 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgResolveVariableExpression @ 0x140A48420 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgFindDeviceDriver @ 0x140AE6D34 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgResolveMultiSzValue @ 0x140B461D8 (PiDevCfgResolveMultiSzValue.c)
 * Callees:
 *     wcslen @ 0x14053A520 (wcslen.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 */

wchar_t *__fastcall PnpMultiSzContainsString(wchar_t *Str, wchar_t *a2)
{
  __int64 v2; // rbx
  size_t v4; // rax
  size_t v5; // rax
  unsigned __int16 v6; // si
  UNICODE_STRING String2; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING String1; // [rsp+30h] [rbp-18h] BYREF

  v2 = 0LL;
  String1.Buffer = a2;
  *(_QWORD *)&String1.Length = 0LL;
  if ( a2 )
  {
    v4 = 2 * wcslen(a2);
    if ( v4 >= 0xFFFE )
      LOWORD(v4) = -4;
    String1.Length = v4;
    String1.MaximumLength = v4 + 2;
  }
  while ( *Str )
  {
    *(_DWORD *)(&String2.MaximumLength + 1) = 0;
    String2.Buffer = Str;
    v5 = wcslen(Str);
    v6 = 2 * v5;
    if ( 2 * v5 >= 0xFFFE )
      v6 = -4;
    String2.Length = v6;
    String2.MaximumLength = v6 + 2;
    if ( RtlEqualUnicodeString(&String1, &String2, 1u) )
      return Str;
    Str += ((unsigned __int64)v6 >> 1) + 1;
  }
  return (wchar_t *)v2;
}
