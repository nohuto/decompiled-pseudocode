/*
 * XREFs of ??$as@UVisual@Composition@UI@Windows@winrt@@@?$com_ptr@UIDCompositionVisual2@@@winrt@@QEBA?A_PXZ @ 0x180491B94
 * Callers:
 *     ?CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ @ 0x180492544 (-CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ.c)
 * Callees:
 *     ??$as@UVisual@Composition@UI@Windows@winrt@@UIDCompositionVisual2@@$0A@@impl@winrt@@YA?AUVisual@Composition@UI@Windows@1@PEAUIDCompositionVisual2@@@Z @ 0x180491BB8 (--$as@UVisual@Composition@UI@Windows@winrt@@UIDCompositionVisual2@@$0A@@impl@winrt@@YA-AUVisual@.c)
 */

__int64 __fastcall winrt::com_ptr<IDCompositionVisual2>::as<winrt::Windows::UI::Composition::Visual>(
        _QWORD *a1,
        __int64 a2)
{
  winrt::impl::as<winrt::Windows::UI::Composition::Visual,IDCompositionVisual2,0>(a2, *a1);
  return a2;
}
