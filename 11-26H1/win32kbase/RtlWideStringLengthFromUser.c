/*
 * XREFs of RtlWideStringLengthFromUser @ 0x1402D2278
 * Callers:
 *     ?GreWideStringLengthFromUntrustedVa@@YA_KPEBG@Z @ 0x1401F3440 (-GreWideStringLengthFromUntrustedVa@@YA_KPEBG@Z.c)
 *     RtlWideStringLengthFromUser$thunk$8242582095740360828 @ 0x14024E090 (RtlWideStringLengthFromUser$thunk$8242582095740360828.c)
 * Callees:
 *     RtlReadUShortFromUser @ 0x1402D21DC (RtlReadUShortFromUser.c)
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
