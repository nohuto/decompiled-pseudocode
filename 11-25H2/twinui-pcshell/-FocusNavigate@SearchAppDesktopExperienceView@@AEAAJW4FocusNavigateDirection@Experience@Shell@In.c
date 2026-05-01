/*
 * XREFs of ?FocusNavigate@SearchAppDesktopExperienceView@@AEAAJW4FocusNavigateDirection@Experience@Shell@Internal@Windows@@@Z @ 0x1803BF97C
 * Callers:
 *     ?OnViewEventQueued@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803C1B0C (-OnViewEventQueued@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collecti.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::FocusNavigate(__int64 a1)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 80LL))(*(_QWORD *)(a1 + 80));
  return 0LL;
}
