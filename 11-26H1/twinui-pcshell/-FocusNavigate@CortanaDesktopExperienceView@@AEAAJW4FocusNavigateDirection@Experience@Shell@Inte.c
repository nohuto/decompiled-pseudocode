/*
 * XREFs of ?FocusNavigate@CortanaDesktopExperienceView@@AEAAJW4FocusNavigateDirection@Experience@Shell@Internal@Windows@@@Z @ 0x1803D2770
 * Callers:
 *     ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803D50C4 (-OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collection.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::FocusNavigate(__int64 a1)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 96) + 80LL))(*(_QWORD *)(a1 + 96));
  return 0LL;
}
