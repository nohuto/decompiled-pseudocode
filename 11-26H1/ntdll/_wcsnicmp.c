/*
 * XREFs of _wcsnicmp @ 0x180129080
 * Callers:
 *     GetOverlayFilePathUsingChecksum @ 0x1800327F0 (GetOverlayFilePathUsingChecksum.c)
 *     LdrpGetModuleName @ 0x180033E20 (LdrpGetModuleName.c)
 *     _IsProgramFilesPath @ 0x18009AF84 (_IsProgramFilesPath.c)
 *     RtlQueryEnvironmentVariable @ 0x18009CD10 (RtlQueryEnvironmentVariable.c)
 *     punycode_decode @ 0x1800AD610 (punycode_decode.c)
 *     punycode_encode @ 0x1800AFD14 (punycode_encode.c)
 *     RtlpHpOptIntoSegmentHeap @ 0x1800D424C (RtlpHpOptIntoSegmentHeap.c)
 *     LdrpGetFileDriverStoreRoot @ 0x1800DF71C (LdrpGetFileDriverStoreRoot.c)
 *     RtlpHpFindImageNameInList @ 0x1800E7BD4 (RtlpHpFindImageNameInList.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsnicmp(const wchar_t *String1, const wchar_t *String2, size_t MaxCount)
{
  size_t v4; // r11
  int v5; // ecx
  const wchar_t *v6; // r10
  signed __int64 v7; // r9
  unsigned __int16 v8; // dx
  wchar_t v9; // r8

  v4 = MaxCount;
  v5 = 0;
  v6 = String2;
  if ( MaxCount )
  {
    v7 = (char *)String1 - (char *)String2;
    do
    {
      v8 = *(const wchar_t *)((char *)v6 + v7) + 32;
      if ( (unsigned __int16)(*(const wchar_t *)((char *)v6 + v7) - 65) > 0x19u )
        v8 = *(const wchar_t *)((char *)v6 + v7);
      v9 = *v6 + 32;
      if ( (unsigned __int16)(*v6 - 65) > 0x19u )
        v9 = *v6;
      ++v6;
      --v4;
    }
    while ( v4 && v8 && v8 == v9 );
    return v8 - v9;
  }
  return v5;
}
