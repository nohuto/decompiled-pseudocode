/*
 * XREFs of ?ControlLost@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAPEAUIInspectable@@@Z @ 0x1803D2080
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803D232C (-DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?ResetCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803D6848 (-ResetCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?UnregisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803D794C (-UnregisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?UpdateSuggestionsShowing@CortanaDesktopExperienceView@@AEAAXE@Z @ 0x1803D7A54 (-UpdateSuggestionsShowing@CortanaDesktopExperienceView@@AEAAXE@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::ControlLost(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // rcx

  *a4 = 0LL;
  CortanaDesktopExperienceView::DismissCortanaApp((CortanaDesktopExperienceView *)a1);
  *(_BYTE *)(a1 + 239) = 0;
  if ( *(_DWORD *)(a1 + 264) )
  {
    v5 = *(_QWORD *)(a1 + 128);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
      *(_DWORD *)(a1 + 264) = 0;
    }
  }
  CortanaDesktopExperienceView::UnregisterGlobalBackButton((CortanaDesktopExperienceView *)a1);
  CortanaDesktopExperienceView::UpdateSuggestionsShowing((CortanaDesktopExperienceView *)a1, 0);
  CortanaDesktopExperienceView::ResetCortanaWindowRegion((CortanaDesktopExperienceView *)a1);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 168) + 160LL))(
    *(_QWORD *)(a1 + 168),
    *(_QWORD *)(a1 + 176));
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 168) + 176LL))(
    *(_QWORD *)(a1 + 168),
    *(_QWORD *)(a1 + 184));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 168));
  return 0LL;
}
