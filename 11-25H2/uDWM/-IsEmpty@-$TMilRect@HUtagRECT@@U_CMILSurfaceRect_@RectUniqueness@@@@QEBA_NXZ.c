/*
 * XREFs of ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ @ 0x1800682B4
 * Callers:
 *     ?ComputeDisplayBounds@CDWMDisplaySet@@AEAAXXZ @ 0x1800681A4 (-ComputeDisplayBounds@CDWMDisplaySet@@AEAAXXZ.c)
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x18007883C (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800981B4 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEmpty(_DWORD *a1)
{
  return a1[2] <= *a1 || a1[3] <= a1[1];
}
