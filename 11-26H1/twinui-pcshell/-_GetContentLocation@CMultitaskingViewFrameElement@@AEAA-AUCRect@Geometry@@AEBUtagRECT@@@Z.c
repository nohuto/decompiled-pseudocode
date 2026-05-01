/*
 * XREFs of ?_GetContentLocation@CMultitaskingViewFrameElement@@AEAA?AUCRect@Geometry@@AEBUtagRECT@@@Z @ 0x1804CB570
 * Callers:
 *     ?HitTestForLightDismiss@CMultitaskingViewFrameElement@@UEAA_NAEBUCPoint@Geometry@@@Z @ 0x1804CA0E0 (-HitTestForLightDismiss@CMultitaskingViewFrameElement@@UEAA_NAEBUCPoint@Geometry@@@Z.c)
 *     ?_RefreshBackgroundThumbnails@CMultitaskingViewFrameElement@@AEAAJXZ @ 0x1804CB6F8 (-_RefreshBackgroundThumbnails@CMultitaskingViewFrameElement@@AEAAJXZ.c)
 *     ?_SetContentThumbnailRects@CMultitaskingViewFrameElement@@AEAAJPEAUIDCompThumbnail@@0@Z @ 0x1804CB998 (-_SetContentThumbnailRects@CMultitaskingViewFrameElement@@AEAAJPEAUIDCompThumbnail@@0@Z.c)
 *     ?v_LayoutChildren@CMultitaskingViewFrameElement@@MEAAXXZ @ 0x1804CBC00 (-v_LayoutChildren@CMultitaskingViewFrameElement@@MEAAXXZ.c)
 * Callees:
 *     ?ApplyMargins@RelativeMargins@@QEAA?AUCRect@Geometry@@AEBU23@@Z @ 0x1804C861C (-ApplyMargins@RelativeMargins@@QEAA-AUCRect@Geometry@@AEBU23@@Z.c)
 */

struct tagRECT *__fastcall CMultitaskingViewFrameElement::_GetContentLocation(
        __int64 a1,
        struct tagRECT *a2,
        _DWORD *a3)
{
  _DWORD *v5; // rdx
  int v6; // eax
  int v7; // eax
  _DWORD v9[6]; // [rsp+20h] [rbp-18h] BYREF

  v9[0] = *a3;
  v9[1] = a3[1];
  v9[2] = a3[2];
  v9[3] = a3[3];
  RelativeMargins::ApplyMargins((double *)(a1 + 304), (__int64)a2, v9);
  v6 = *(_DWORD *)(a1 + 336);
  if ( v6 > 0 && v5[2] - *v5 > v6 )
    InflateRect(a2, (*v5 + v6 - v5[2]) / 2, 0);
  v7 = *(_DWORD *)(a1 + 340);
  if ( v7 > 0 && a2->bottom - a2->top > v7 )
    InflateRect(a2, 0, (a2->top + v7 - a2->bottom) / 2);
  return a2;
}
