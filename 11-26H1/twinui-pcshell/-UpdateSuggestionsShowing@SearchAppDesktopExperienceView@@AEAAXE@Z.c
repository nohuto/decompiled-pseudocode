/*
 * XREFs of ?UpdateSuggestionsShowing@SearchAppDesktopExperienceView@@AEAAXE@Z @ 0x1803CE1A0
 * Callers:
 *     ?ControlLost@SearchAppDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAPEAUIInspectable@@@Z @ 0x1803C8560 (-ControlLost@SearchAppDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Inte.c)
 *     ?OnViewHidden@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803CB00C (-OnViewHidden@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewPropertiesChanging@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803CB0BC (-OnViewPropertiesChanging@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall SearchAppDesktopExperienceView::UpdateSuggestionsShowing(SearchAppDesktopExperienceView *this, char a2)
{
  __int64 v2; // rax
  void (*v3)(void); // rax

  if ( a2 != *((_BYTE *)this + 112) )
  {
    *((_BYTE *)this + 112) = a2;
    v2 = **((_QWORD **)this + 10);
    if ( a2 )
      v3 = *(void (**)(void))(v2 + 120);
    else
      v3 = *(void (**)(void))(v2 + 128);
    v3();
  }
}
