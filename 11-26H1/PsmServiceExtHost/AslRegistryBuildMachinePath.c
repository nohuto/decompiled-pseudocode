/*
 * XREFs of AslRegistryBuildMachinePath @ 0x180098D5C
 * Callers:
 *     AslRegistryGetKey @ 0x180098F30 (AslRegistryGetKey.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslRegistryBuildMachinePath(PUNICODE_STRING Destination, PCWSTR Source)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  USHORT v6; // ax
  WCHAR *Heap; // rax
  UNICODE_STRING Sourcea; // [rsp+30h] [rbp-18h] BYREF

  Sourcea = 0LL;
  RtlInitUnicodeString(&Sourcea, L"\\Registry\\Machine");
  v4 = 0;
  Destination->Length = 0;
  v5 = -1LL;
  do
    ++v5;
  while ( Source[v5] );
  v6 = Sourcea.Length + 2 * (v5 + 1);
  Destination->MaximumLength = v6;
  Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v6);
  Destination->Buffer = Heap;
  if ( Heap )
  {
    RtlAppendUnicodeStringToString(Destination, &Sourcea);
    if ( Source && *Source != 92 )
      RtlAppendUnicodeToString(Destination, L"\\");
    RtlAppendUnicodeToString(Destination, Source);
  }
  else
  {
    v4 = -1073741801;
    AslLogCallPrintf(
      1LL,
      "AslRegistryBuildMachinePath",
      1582LL,
      "Failed to allocate %d bytes for user key buffer",
      Destination->MaximumLength);
  }
  return v4;
}
