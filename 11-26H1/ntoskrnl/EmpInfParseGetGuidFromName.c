/*
 * XREFs of EmpInfParseGetGuidFromName @ 0x140CB5E44
 * Callers:
 *     EmpParseCallbacks @ 0x140CB600C (EmpParseCallbacks.c)
 *     EmpParseRuleTerm @ 0x140CB6AE8 (EmpParseRuleTerm.c)
 *     EmpParseRules @ 0x140CB6F84 (EmpParseRules.c)
 *     EmpParseTargetRules @ 0x140CB77A4 (EmpParseTargetRules.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14046C9A0 (RtlInitAnsiString.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlAnsiStringToUnicodeString @ 0x14096BA30 (RtlAnsiStringToUnicodeString.c)
 *     RtlGUIDFromString @ 0x1409A1880 (RtlGUIDFromString.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x140CB5F44 (EmpInfParseGetValueFromSectionAndKeyName.c)
 */

int __fastcall EmpInfParseGetGuidFromName(__int64 a1, __int64 a2, __int64 a3, GUID *a4)
{
  const char *ValueFromSectionAndKeyName; // rax
  int result; // eax
  UNICODE_STRING GuidString; // [rsp+30h] [rbp-88h] BYREF
  STRING DestinationString; // [rsp+40h] [rbp-78h] BYREF
  char v9; // [rsp+50h] [rbp-68h] BYREF

  *(_QWORD *)&GuidString.Length = 5111808LL;
  GuidString.Buffer = (wchar_t *)&v9;
  DestinationString = 0LL;
  ValueFromSectionAndKeyName = (const char *)EmpInfParseGetValueFromSectionAndKeyName(a1);
  if ( !ValueFromSectionAndKeyName )
    return -1073741275;
  RtlInitAnsiString(&DestinationString, ValueFromSectionAndKeyName);
  result = RtlAnsiStringToUnicodeString(&GuidString, &DestinationString, 0);
  if ( result >= 0 )
    return RtlGUIDFromString(&GuidString, a4);
  return result;
}
