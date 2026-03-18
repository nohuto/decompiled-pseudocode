/*
 * XREFs of AslRegistryBuildUserPath @ 0x140888240
 * Callers:
 *     AslRegistryGetKey @ 0x140B30838 (AslRegistryGetKey.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140432EB0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140432F70 (RtlAppendUnicodeStringToString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140925F40 (RtlFormatCurrentUserKeyPath.c)
 *     AslAlloc @ 0x1409E4C90 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 */

__int64 __fastcall AslRegistryBuildUserPath(PUNICODE_STRING Destination, PCWSTR Source)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rax
  unsigned __int16 v7; // ax
  wchar_t *v8; // rax
  UNICODE_STRING Sourcea; // [rsp+30h] [rbp-18h] BYREF

  Sourcea = 0LL;
  v5 = RtlFormatCurrentUserKeyPath(&Sourcea);
  if ( v5 >= 0 )
  {
    Destination->Length = 0;
    v6 = -1LL;
    do
      ++v6;
    while ( Source[v6] );
    v7 = Sourcea.Length + 2 * (v6 + 1);
    Destination->MaximumLength = v7;
    v8 = (wchar_t *)AslAlloc(v4, v7);
    Destination->Buffer = v8;
    if ( v8 )
    {
      RtlAppendUnicodeStringToString(Destination, &Sourcea);
      RtlAppendUnicodeToString(Destination, Source);
      v5 = 0;
    }
    else
    {
      v5 = -1073741801;
      AslLogCallPrintf(1, (unsigned int)"AslRegistryBuildUserPath", 1650, (unsigned int)"Out of memory");
    }
  }
  else
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"AslRegistryBuildUserPath",
      1638,
      (unsigned int)"RtlFormatCurrentUserKeyPath failed [%x]");
  }
  RtlFreeAnsiString(&Sourcea);
  return (unsigned int)v5;
}
