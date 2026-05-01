/*
 * XREFs of ?_GetContentLocation@CMultitaskingViewFrameElement@@AEAA?AUCRect@Geometry@@AEBUtagRECT@@@Z @ 0x1804B96B0
 * Callers:
 *     ?HitTestForLightDismiss@CMultitaskingViewFrameElement@@UEAA_NAEBUCPoint@Geometry@@@Z @ 0x1804B8280 (-HitTestForLightDismiss@CMultitaskingViewFrameElement@@UEAA_NAEBUCPoint@Geometry@@@Z.c)
 *     ?_RefreshBackgroundThumbnails@CMultitaskingViewFrameElement@@AEAAJXZ @ 0x1804B983C (-_RefreshBackgroundThumbnails@CMultitaskingViewFrameElement@@AEAAJXZ.c)
 *     ?_SetContentThumbnailRects@CMultitaskingViewFrameElement@@AEAAJPEAUIDCompThumbnail@@0@Z @ 0x1804B9AD8 (-_SetContentThumbnailRects@CMultitaskingViewFrameElement@@AEAAJPEAUIDCompThumbnail@@0@Z.c)
 *     ?v_LayoutChildren@CMultitaskingViewFrameElement@@MEAAXXZ @ 0x1804B9D30 (-v_LayoutChildren@CMultitaskingViewFrameElement@@MEAAXXZ.c)
 * Callees:
 *     ?ApplyMargins@RelativeMargins@@QEAA?AUCRect@Geometry@@AEBU23@@Z @ 0x1804B688C (-ApplyMargins@RelativeMargins@@QEAA-AUCRect@Geometry@@AEBU23@@Z.c)
 */

struct tagRECT *__fastcall CMultitaskingViewFrameElement::_GetContentLocation(
        __int64 a1,
        struct tagRECT *a2,
        _DWORD *a3)
{
  int v5; // edx
  int v6; // edx
  LONG top; // eax
  _DWORD v9[6]; // [rsp+20h] [rbp-18h] BYREF

  v9[0] = *a3;
  v9[1] = a3[1];
  v9[2] = a3[2];
  v9[3] = a3[3];
  RelativeMargins::ApplyMargins((double *)(a1 + 304), (__int64)a2, v9);
  v5 = *(_DWORD *)(a1 + 336);
  if ( v5 > 0 && a2->right - a2->left > v5 )
    InflateRect(a2, (v5 + a2->left - a2->right) / 2, 0);
  v6 = *(_DWORD *)(a1 + 340);
  if ( v6 > 0 )
  {
    top = a2->top;
    if ( a2->bottom - top > v6 )
      InflateRect(a2, 0, (v6 + top - a2->bottom) / 2);
  }
  return a2;
}
