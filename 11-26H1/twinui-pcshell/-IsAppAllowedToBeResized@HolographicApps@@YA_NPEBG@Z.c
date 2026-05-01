/*
 * XREFs of ?IsAppAllowedToBeResized@HolographicApps@@YA_NPEBG@Z @ 0x180404648
 * Callers:
 *     ?ResizeView@HolographicPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1804055D0 (-ResizeView@HolographicPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall HolographicApps::IsAppAllowedToBeResized(HolographicApps *this, const unsigned __int16 *a2)
{
  wchar_t **i; // rbx

  for ( i = &off_1808D6710; i != (wchar_t **)&unk_1808D6718; ++i )
  {
    if ( !(unsigned int)_o__wcsicmp(this, *i) )
      return 1;
  }
  return 0;
}
