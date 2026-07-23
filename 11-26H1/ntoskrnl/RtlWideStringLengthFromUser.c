/*
 * XREFs of RtlWideStringLengthFromUser @ 0x1407821B4
 * Callers:
 *     SdbpUmaInit_PCWSTR @ 0x1407196AC (SdbpUmaInit_PCWSTR.c)
 *     AslEnvExpandStrings2 @ 0x1408917B4 (AslEnvExpandStrings2.c)
 *     AslStringPatternMatchExW @ 0x1409D59C0 (AslStringPatternMatchExW.c)
 *     AslStringDuplicate @ 0x1409D8BA8 (AslStringDuplicate.c)
 *     RtlWideStringLengthFromUser$thunk$8242582095740360828 @ 0x140C670D0 (RtlWideStringLengthFromUser$thunk$8242582095740360828.c)
 * Callees:
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 */

__int64 __fastcall RtlWideStringLengthFromUser(unsigned __int16 *a1)
{
  unsigned __int16 *v1; // rbx
  __int64 v2; // rdi

  v1 = a1;
  v2 = 0LL;
  while ( (unsigned __int16)RtlReadUShortFromUser(a1) )
  {
    ++v2;
    a1 = ++v1;
  }
  return v2;
}
