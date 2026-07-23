/*
 * XREFs of CmpQueryDowncastString @ 0x14097E108
 * Callers:
 *     CmQueryBuildVersionInformation @ 0x14097E578 (CmQueryBuildVersionInformation.c)
 * Callees:
 *     RtlUnicodeStringToAnsiString @ 0x14097CC00 (RtlUnicodeStringToAnsiString.c)
 */

NTSTATUS __fastcall CmpQueryDowncastString(char *a1, unsigned __int16 a2, const UNICODE_STRING *a3)
{
  NTSTATUS result; // eax
  _STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  if ( a3->Buffer && a3->Length )
  {
    DestinationString.Buffer = a1;
    DestinationString.MaximumLength = a2;
    DestinationString.Length = 0;
    result = RtlUnicodeStringToAnsiString(&DestinationString, a3, 0);
    if ( result < 0 )
      *a1 = 0;
  }
  else
  {
    *a1 = 0;
    return 0;
  }
  return result;
}
