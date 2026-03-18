/*
 * XREFs of wcstombs @ 0x1405386B0
 * Callers:
 *     WheaRegChangeNotifyCallback @ 0x140849930 (WheaRegChangeNotifyCallback.c)
 * Callees:
 *     wcslen @ 0x1405380A0 (wcslen.c)
 *     RtlUnicodeToMultiByteSize @ 0x14096C100 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeToMultiByteN @ 0x14096C900 (RtlUnicodeToMultiByteN.c)
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
    v7 = RtlUnicodeToMultiByteSize((PULONG)&BytesInMultiByteString, Source, 2 * v6 + 2);
  if ( v7 < 0 )
    return -1LL;
  else
    return BytesInMultiByteString - 1;
}
