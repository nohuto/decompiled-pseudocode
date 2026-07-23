/*
 * XREFs of GetModuleFullPathName @ 0x18002052C
 * Callers:
 *     GetImageTuple @ 0x18008E3A0 (GetImageTuple.c)
 * Callees:
 *     RtlUnicodeStringToAnsiString @ 0x18001F620 (RtlUnicodeStringToAnsiString.c)
 *     GetModuleFullPathNameUnicode @ 0x180020630 (GetModuleFullPathNameUnicode.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 */

wchar_t *__fastcall GetModuleFullPathName(__int64 a1, char *a2)
{
  void *ProcessHeap; // rcx
  wchar_t *result; // rax
  wchar_t *v6; // rsi
  unsigned int ModuleFullPathNameUnicode; // eax
  unsigned int Length; // ebx
  NTSTATUS v9; // eax
  _STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  *(_QWORD *)&SourceString.Length = 0LL;
  result = (wchar_t *)RtlAllocateHeap_0(ProcessHeap, 8u, 0x208uLL);
  SourceString.Buffer = result;
  v6 = result;
  if ( result )
  {
    SourceString.MaximumLength = 520;
    ModuleFullPathNameUnicode = GetModuleFullPathNameUnicode(a1, result, 260LL);
    Length = ModuleFullPathNameUnicode;
    if ( ModuleFullPathNameUnicode )
    {
      DestinationString.Buffer = a2;
      SourceString.Length = 2 * ModuleFullPathNameUnicode;
      DestinationString.MaximumLength = 260;
      v9 = RtlUnicodeStringToAnsiString(&DestinationString, &SourceString, 0);
      if ( v9 >= 0 )
      {
        Length = DestinationString.Length;
        a2[DestinationString.Length] = 0;
      }
      else if ( v9 == -2147483643 )
      {
        Length = 260;
        a2[259] = 0;
      }
      else
      {
        Length = 0;
      }
    }
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v6);
    return (wchar_t *)Length;
  }
  return result;
}
