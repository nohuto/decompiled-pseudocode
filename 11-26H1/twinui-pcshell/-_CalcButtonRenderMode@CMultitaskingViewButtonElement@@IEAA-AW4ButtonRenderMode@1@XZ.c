/*
 * XREFs of ?_CalcButtonRenderMode@CMultitaskingViewButtonElement@@IEAA?AW4ButtonRenderMode@1@XZ @ 0x1804CF028
 * Callers:
 *     ??0CDetectRenderModeChange@CMultitaskingViewButtonElement@@QEAA@PEAV1@@Z @ 0x1804CEE44 (--0CDetectRenderModeChange@CMultitaskingViewButtonElement@@QEAA@PEAV1@@Z.c)
 *     ??1CDetectRenderModeChange@CMultitaskingViewButtonElement@@QEAA@XZ @ 0x1804CEE80 (--1CDetectRenderModeChange@CMultitaskingViewButtonElement@@QEAA@XZ.c)
 *     ?_SetShrink@CShrinkButtonElement@@IEAAXXZ @ 0x1804CF34C (-_SetShrink@CShrinkButtonElement@@IEAAXXZ.c)
 *     ??$_GetStateBasedValue@UGlyphButtonStateMetrics@@@CMultitaskingViewButtonElement@@IEAAAEAUGlyphButtonStateMetrics@@AEAU1@00@Z @ 0x1804CF808 (--$_GetStateBasedValue@UGlyphButtonStateMetrics@@@CMultitaskingViewButtonElement@@IEAAAEAUGlyphB.c)
 *     ?GetInnerBorderInfo@SwitchItemThumbnailElement@@IEAA?AUDCompThumbnailFrameInfo@@XZ @ 0x1804D3594 (-GetInnerBorderInfo@SwitchItemThumbnailElement@@IEAA-AUDCompThumbnailFrameInfo@@XZ.c)
 *     ?GetOuterBorderInfo@SwitchItemThumbnailElement@@IEAA?AUDCompThumbnailFrameInfo@@XZ @ 0x1804D35EC (-GetOuterBorderInfo@SwitchItemThumbnailElement@@IEAA-AUDCompThumbnailFrameInfo@@XZ.c)
 *     ?UpdateThumbnailBorder@SwitchItemThumbnailElement@@IEAAXXZ @ 0x1804D3DA0 (-UpdateThumbnailBorder@SwitchItemThumbnailElement@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CMultitaskingViewButtonElement::_CalcButtonRenderMode(__int64 a1)
{
  LPARAM v2; // rcx

  v2 = GetMessageExtraInfo() & 0xFF515780LL;
  if ( *(_DWORD *)(a1 + 96) == 2 )
    return 3;
  if ( *(_DWORD *)(a1 + 96) != 1 )
    return 0;
  if ( *(_DWORD *)(a1 + 100) != 1 || *(_QWORD *)(a1 + 128) )
    return v2 != 4283520896LL;
  return 2;
}
