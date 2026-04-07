/*
 * XREFs of ??_E?$_Ref_count_obj2@VCCachedBorderBrush@CWindowBorder@@@std@@UEAAPEAXI@Z @ 0x180069900
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<CWindowBorder::CCachedBorderBrush>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Ref_count_obj2<CWindowBorder::CCachedBorderBrush>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x58uLL);
  return a1;
}
