/*
 * XREFs of ??_E?$_Ref_count_obj2@VCCachedBorderBrush@CWindowBorder@@@std@@UEAAPEAXI@Z @ 0x180079A60
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<CWindowBorder::CCachedBorderBrush>::`vector deleting destructor'(
        _QWORD *a1,
        const struct std::nothrow_t *a2)
{
  *a1 = &std::_Ref_count_obj2<CWindowBorder::CCachedBorderBrush>::`vftable';
  if ( ((unsigned __int8)a2 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(a1, a2);
  return a1;
}
