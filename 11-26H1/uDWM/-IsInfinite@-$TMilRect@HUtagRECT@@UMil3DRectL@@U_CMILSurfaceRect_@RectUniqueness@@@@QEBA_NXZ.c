/*
 * XREFs of ?IsInfinite@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ @ 0x1800B4A88
 * Callers:
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x18006425C (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18008B694 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAE.c)
 * Callees:
 *     <none>
 */

bool __fastcall TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMILSurfaceRect_>::IsInfinite(_DWORD *a1)
{
  return *a1 == 0x80000000 && a1[2] == 0x7FFFFFFF || a1[1] == 0x80000000 && a1[3] == 0x7FFFFFFF;
}
