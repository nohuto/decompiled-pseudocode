/*
 * XREFs of ?IsInfinite@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ @ 0x1800B5070
 * Callers:
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x18007883C (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800981B4 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsInfinite(_DWORD *a1)
{
  return *a1 <= TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::sc_rcInfinite && a1[2] >= dword_180118DC8
      || a1[1] <= dword_180118DC4 && a1[3] >= dword_180118DCC;
}
