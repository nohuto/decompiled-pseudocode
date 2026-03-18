/*
 * XREFs of ??C?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@QEBAPEAVOverlayPlaneInfo@COverlayContext@@XZ @ 0x1801E0968
 * Callers:
 *     ?reserve_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVOverlayPlaneInfo@COverlayContext@@_K0@Z @ 0x180177014 (-reserve_region@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo *>::operator->(_QWORD *a1)
{
  unsigned __int64 v1; // rax

  if ( !*a1 || (v1 = a1[2], v1 >= a1[1]) )
    _invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
  return *a1 + 392 * v1;
}
