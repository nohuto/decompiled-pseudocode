/*
 * XREFs of wcstombs @ 0x18012E310
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnicodeToMultiByteSize @ 0x18001F1D0 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeToMultiByteN @ 0x180021380 (RtlUnicodeToMultiByteN.c)
 *     _errno @ 0x180106E40 (_errno.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 */

size_t __cdecl wcstombs(char *Dest, const wchar_t *Source, size_t MaxCount)
{
  ULONG v4; // esi
  int v6; // eax
  NTSTATUS v7; // eax
  __int64 BytesInMultiByteString; // [rsp+40h] [rbp+8h] BYREF

  BytesInMultiByteString = 0LL;
  v4 = MaxCount;
  v6 = wcslen(Source);
  if ( Dest )
    v7 = RtlUnicodeToMultiByteN(Dest, v4, (PULONG)&BytesInMultiByteString, Source, 2 * v6 + 2);
  else
    v7 = RtlUnicodeToMultiByteSize((PULONG)&BytesInMultiByteString, (PWCH)Source, 2 * v6 + 2);
  if ( v7 >= 0 )
    return BytesInMultiByteString - 1;
  *errno() = 42;
  return -1LL;
}
