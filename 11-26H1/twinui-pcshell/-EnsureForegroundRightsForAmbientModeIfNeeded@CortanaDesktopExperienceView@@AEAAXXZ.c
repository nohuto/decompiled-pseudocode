/*
 * XREFs of ?EnsureForegroundRightsForAmbientModeIfNeeded@CortanaDesktopExperienceView@@AEAAXXZ @ 0x1803D2520
 * Callers:
 *     ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803D50C4 (-OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collection.c)
 *     ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803D55CC (-OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CortanaDesktopExperienceView::EnsureForegroundRightsForAmbientModeIfNeeded(
        CortanaDesktopExperienceView *this)
{
  if ( *((_DWORD *)this + 35) == 3 && *((_BYTE *)this + 242) )
  {
    if ( !*((_BYTE *)this + 243) )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 72LL))(*((_QWORD *)this + 12));
      *((_BYTE *)this + 243) = 1;
    }
  }
  else
  {
    *((_BYTE *)this + 243) = 0;
  }
}
