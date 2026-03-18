/*
 * XREFs of ?NlsGetCurrentInputMode@@YAEPEBE@Z @ 0x1401C2350
 * Callers:
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021CD60 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021CE80 (-NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021D090 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021D2A0 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021D480 (-NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 * Callees:
 *     ?NlsTestKeyStateToggle@@YAHE@Z @ 0x14021D5B4 (-NlsTestKeyStateToggle@@YAHE@Z.c)
 */

unsigned __int8 __fastcall NlsGetCurrentInputMode(unsigned __int8 *a1)
{
  unsigned __int8 v1; // di
  unsigned __int8 *v2; // rbx
  unsigned __int8 i; // al

  v1 = *a1;
  v2 = a1;
  for ( i = *a1; i; i = *v2 )
  {
    if ( (unsigned int)NlsTestKeyStateToggle(*v2) )
      return *v2;
    ++v2;
  }
  return v1;
}
