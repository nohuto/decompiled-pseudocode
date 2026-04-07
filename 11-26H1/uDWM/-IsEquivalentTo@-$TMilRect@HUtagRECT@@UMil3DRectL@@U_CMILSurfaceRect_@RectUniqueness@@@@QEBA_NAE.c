/*
 * XREFs of ?IsEquivalentTo@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18008B694
 * Callers:
 *     ?ArrangeCloneDisplays@CDWMDisplaySet@@AEAAJXZ @ 0x18005801C (-ArrangeCloneDisplays@CDWMDisplaySet@@AEAAJXZ.c)
 *     ?IsEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x1800B493C (-IsEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ @ 0x1800581F4 (-IsEmpty@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsInfinite@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ @ 0x1800B4A88 (-IsInfinite@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ.c)
 */

char __fastcall TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
        _DWORD *a1,
        _DWORD *a2)
{
  __int64 v2; // rdx
  _DWORD *v3; // r9
  char v4; // r8
  __int64 v5; // r9

  if ( *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3]
    || TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMILSurfaceRect_>::IsEmpty(a1)
    && TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMILSurfaceRect_>::IsEmpty(v3)
    || (unsigned __int8)TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMILSurfaceRect_>::IsInfinite(v2)
    && (unsigned __int8)TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMILSurfaceRect_>::IsInfinite(v5) )
  {
    return 1;
  }
  return v4;
}
