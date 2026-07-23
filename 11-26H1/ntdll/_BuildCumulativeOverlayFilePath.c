/*
 * XREFs of _BuildCumulativeOverlayFilePath @ 0x18001E54C
 * Callers:
 *     GetOverlayFilePathUsingChecksum @ 0x18001D950 (GetOverlayFilePathUsingChecksum.c)
 * Callees:
 *     _StartPathWithLongPathPrefixIfNeeded @ 0x1800E3FF4 (_StartPathWithLongPathPrefixIfNeeded.c)
 *     wcscat_s @ 0x180134000 (wcscat_s.c)
 *     wcsncat_s @ 0x180134130 (wcsncat_s.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall BuildCumulativeOverlayFilePath(
        rsize_t SourceSize,
        int a2,
        const wchar_t *a3,
        int a4,
        wchar_t *Source,
        wchar_t *a6,
        __int64 a7,
        unsigned int *a8,
        wchar_t *Destination)
{
  unsigned int v10; // edi
  unsigned int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // r10d
  unsigned int i; // r8d
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 result; // rax
  __int64 v19; // rbp
  rsize_t v20; // rdi
  wchar_t v22[40]; // [rsp+30h] [rbp-98h] BYREF

  v10 = SourceSize;
  memset_thunk_772440563353939046(v22, 0, 0x42uLL);
  v12 = a2 + v10 + a4 + 66;
  v13 = *a8;
  v14 = v12 + 8;
  if ( v12 < 0x208 )
    v14 = a2 + v10 + a4 + 66;
  *a8 = v14;
  if ( v14 > v13 )
    return 3221225507LL;
  for ( i = 0; ; ++i )
  {
    v16 = 2 * i;
    if ( i >= 0x10 )
      break;
    if ( 2 * (unsigned __int64)(unsigned int)(v16 + 1) >= 0x42 )
      return 3221225701LL;
    v17 = *(unsigned __int8 *)(i + a7);
    v22[v16] = a0123456789abcd[v17 >> 4];
    v22[(unsigned int)(v16 + 1)] = a0123456789abcd[v17 & 0xF];
  }
  if ( 2 * (unsigned __int64)(unsigned int)v16 < 0x42 )
  {
    v22[(unsigned int)v16] = 0;
    result = StartPathWithLongPathPrefixIfNeeded(v10, v14, Destination);
    if ( (int)result < 0 )
      return result;
    v19 = -1LL;
    do
      ++v19;
    while ( a6[v19] );
    v20 = (unsigned __int64)*a8 >> 1;
    if ( !wcscat_s(Destination, v20, Source)
      && !wcsncat_s(Destination, v20, a3, (unsigned __int64)(unsigned int)(a2 - 2 * v19) >> 1)
      && !wcscat_s(Destination, v20, v22)
      && !wcscat_s(Destination, v20, L"\\") )
    {
      return wcscat_s(Destination, v20, a6) != 0 ? 0xC00000E5 : 0;
    }
  }
  return 3221225701LL;
}
