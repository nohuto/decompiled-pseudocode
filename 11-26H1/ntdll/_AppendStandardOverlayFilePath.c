/*
 * XREFs of _AppendStandardOverlayFilePath @ 0x1800E4068
 * Callers:
 *     GetOverlayFilePathUsingChecksum @ 0x18001D950 (GetOverlayFilePathUsingChecksum.c)
 * Callees:
 *     wcscat_s @ 0x180134000 (wcscat_s.c)
 */

__int64 __fastcall AppendStandardOverlayFilePath(wchar_t *Source, wchar_t *a2, unsigned int *a3, wchar_t *a4)
{
  rsize_t v5; // rdi

  v5 = (unsigned __int64)*a3 >> 1;
  if ( wcscat_s(a4, v5, a2) )
    return 3221225701LL;
  else
    return wcscat_s(a4, v5, Source) != 0 ? 0xC00000E5 : 0;
}
