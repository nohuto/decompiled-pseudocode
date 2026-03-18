/*
 * XREFs of AslRegistryBuildMachinePath @ 0x140B30964
 * Callers:
 *     AslRegistryGetKey @ 0x140B30838 (AslRegistryGetKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x140432EB0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140432F70 (RtlAppendUnicodeStringToString.c)
 *     AslAlloc @ 0x1409E4C90 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslRegistryBuildMachinePath(PUNICODE_STRING Destination, PCWSTR Source)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  wchar_t *v6; // rax
  UNICODE_STRING Sourcea; // [rsp+30h] [rbp-18h] BYREF

  Sourcea = 0LL;
  RtlInitUnicodeString(&Sourcea, L"\\Registry\\Machine");
  v4 = 0;
  Destination->Length = 0;
  v5 = -1LL;
  do
    ++v5;
  while ( Source[v5] );
  Destination->MaximumLength = Sourcea.Length + 2 * (v5 + 1);
  v6 = (wchar_t *)AslAlloc();
  Destination->Buffer = v6;
  if ( v6 )
  {
    RtlAppendUnicodeStringToString(Destination, &Sourcea);
    if ( Source && *Source != 92 )
      RtlAppendUnicodeToString(Destination, L"\\");
    RtlAppendUnicodeToString(Destination, Source);
  }
  else
  {
    v4 = -1073741801;
    AslLogCallPrintf(1LL, (__int64)"AslRegistryBuildMachinePath");
  }
  return v4;
}
