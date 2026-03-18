/*
 * XREFs of ?EnableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJPEAVIOverlaySwapChain@@@Z @ 0x1801BF858
 * Callers:
 *     ?EnableOverlay@CGlobalCompositionSurfaceInfo@@UEAAJ_KPEAVIOverlaySwapChain@@@Z @ 0x1801BF7E0 (-EnableOverlay@CGlobalCompositionSurfaceInfo@@UEAAJ_KPEAVIOverlaySwapChain@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureOverlaySwapChainWeakRef@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJPEAVIOverlaySwapChain@@@Z @ 0x180127B2C (-EnsureOverlaySwapChainWeakRef@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJPEAVIOverlaySwapCha.c)
 *     ?PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x18021779C (-PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::EnableOverlay(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        struct IOverlaySwapChain *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  int v6; // r9d
  unsigned int v8; // [rsp+20h] [rbp-18h]

  if ( *((_WORD *)this + 93) || *((_BYTE *)this + 184) )
  {
    v5 = -2003292412;
    v6 = -2003292412;
    v8 = 1224;
    goto LABEL_10;
  }
  v4 = CGlobalCompositionSurfaceInfo::CBindInfo::PinResources(this);
  v5 = v4;
  if ( v4 < 0 )
  {
    v8 = 1227;
    goto LABEL_7;
  }
  v4 = CGlobalCompositionSurfaceInfo::CBindInfo::EnsureOverlaySwapChainWeakRef(this, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    v8 = 1228;
LABEL_7:
    v6 = v4;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, v8, 0LL);
    return v5;
  }
  *((_BYTE *)this + 187) = 1;
  return v5;
}
