/*
 * XREFs of ??$Height@H@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBAHXZ @ 0x180085080
 * Callers:
 *     ?Height@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBAHXZ @ 0x180085074 (-Height@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::Height<int>(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 4));
}
