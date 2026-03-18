/*
 * XREFs of ?DirectFlipRectRequiresPanelFitter@COverlaySwapChain@@IEBA_NAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A8700
 * Callers:
 *     ?PresentDFlip@CLegacySwapChain@@UEAAJII_NIPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@5@Z @ 0x1801A8440 (-PresentDFlip@CLegacySwapChain@@UEAAJII_NIPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@W4.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall COverlaySwapChain::DirectFlipRectRequiresPanelFitter(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+34h] [rbp+Ch]

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 24) + 112LL))(a1 + 24);
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v3 + 88LL))(v3, &v5);
  return *a2 || a2[1] || a2[2] - *a2 != v5 || a2[3] - a2[1] != v6;
}
