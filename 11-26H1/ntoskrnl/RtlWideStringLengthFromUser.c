/*
 * XREFs of RtlWideStringLengthFromUser @ 0x14077F6B4
 * Callers:
 *     SdbpUmaInit_PCWSTR @ 0x1407149BC (SdbpUmaInit_PCWSTR.c)
 *     AslEnvExpandStrings2 @ 0x14088B3B8 (AslEnvExpandStrings2.c)
 *     AslStringDuplicate @ 0x1409E3DCC (AslStringDuplicate.c)
 *     AslStringPatternMatchExW @ 0x1409E7030 (AslStringPatternMatchExW.c)
 *     RtlWideStringLengthFromUser$thunk$8242582095740360828 @ 0x140C610D0 (RtlWideStringLengthFromUser$thunk$8242582095740360828.c)
 * Callees:
 *     RtlReadUShortFromUser @ 0x14077F5CC (RtlReadUShortFromUser.c)
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
