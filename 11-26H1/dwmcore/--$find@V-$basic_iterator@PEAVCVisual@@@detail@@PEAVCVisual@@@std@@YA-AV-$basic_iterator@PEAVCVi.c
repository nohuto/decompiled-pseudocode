/*
 * XREFs of ??$find@V?$basic_iterator@PEAVCVisual@@@detail@@PEAVCVisual@@@std@@YA?AV?$basic_iterator@PEAVCVisual@@@detail@@V12@V12@AEBQEAVCVisual@@@Z @ 0x180187C3C
 * Callers:
 *     ?AffectsVisual@CSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180281E60 (-AffectsVisual@CSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::find<detail::basic_iterator<CVisual *>,CVisual *>(
        _QWORD *a1,
        _QWORD **a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *i; // rax

  for ( i = *a2; i != (_QWORD *)*a3 && *i != *a4; ++i )
    ;
  *a2 = i;
  *a1 = i;
  return a1;
}
