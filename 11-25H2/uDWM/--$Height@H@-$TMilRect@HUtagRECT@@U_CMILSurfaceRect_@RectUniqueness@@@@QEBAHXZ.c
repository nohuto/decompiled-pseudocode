/*
 * XREFs of ??$Height@H@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBAHXZ @ 0x18008E908
 * Callers:
 *     ?Height@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBAHXZ @ 0x18009A434 (-Height@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::Height<int>(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 4));
}
