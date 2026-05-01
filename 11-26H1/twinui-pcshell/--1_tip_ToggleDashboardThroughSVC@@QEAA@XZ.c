/*
 * XREFs of ??1_tip_ToggleDashboardThroughSVC@@QEAA@XZ @ 0x18026CD28
 * Callers:
 *     ??1?$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@QEAA@XZ @ 0x180283218 (--1-$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@QEAA@XZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall _tip_ToggleDashboardThroughSVC::~_tip_ToggleDashboardThroughSVC(_tip_ToggleDashboardThroughSVC *this)
{
  std::wstring::_Tidy_deallocate((_QWORD *)this + 8);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 3);
}
