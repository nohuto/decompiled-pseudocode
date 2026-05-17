/*
 * XREFs of wcstombs @ 0x18012E5A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnicodeToMultiByteSize @ 0x180034070 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeToMultiByteN @ 0x180036220 (RtlUnicodeToMultiByteN.c)
 *     _errno @ 0x180107440 (_errno.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 */

size_t __cdecl wcstombs(char *Dest, const wchar_t *Source, size_t MaxCount)
{
  unsigned int v4; // esi
  int v6; // eax
  int v7; // eax
  __int64 BytesInMultiByteString; // [rsp+40h] [rbp+8h] BYREF

  BytesInMultiByteString = 0LL;
  v4 = MaxCount;
  v6 = wcslen(Source);
  if ( Dest )
    v7 = RtlUnicodeToMultiByteN(Dest, v4, (unsigned int *)&BytesInMultiByteString, (unsigned int *)Source, 2 * v6 + 2);
  else
    v7 = RtlUnicodeToMultiByteSize((PULONG)&BytesInMultiByteString, (PWCH)Source, 2 * v6 + 2);
  if ( v7 >= 0 )
    return BytesInMultiByteString - 1;
  *errno() = 42;
  return -1LL;
}
