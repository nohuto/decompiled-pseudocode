/*
 * XREFs of ??1?$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@QEAA@XZ @ 0x180294F58
 * Callers:
 *     ?Release@?$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@AEAAKXZ @ 0x180294F10 (-Release@-$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@AEAAKXZ.c)
 * Callees:
 *     ??1_tip_ToggleDashboardThroughSVC@@QEAA@XZ @ 0x180274D44 (--1_tip_ToggleDashboardThroughSVC@@QEAA@XZ.c)
 *     ?on_destroy@?$shared_data@$00$0A@$0A@@details@tip2@@IEAAXXZ @ 0x180294FA0 (-on_destroy@-$shared_data@$00$0A@$0A@@details@tip2@@IEAAXXZ.c)
 */

void __fastcall tip2::details::merged_data<_tip_ToggleDashboardThroughSVC,_tip_ToggleDashboardThroughSVC>::~merged_data<_tip_ToggleDashboardThroughSVC,_tip_ToggleDashboardThroughSVC>(
        __int64 a1)
{
  *(_QWORD *)a1 = &tip2::details::merged_data<_tip_ToggleDashboardThroughSVC,_tip_ToggleDashboardThroughSVC>::`vftable';
  tip2::details::shared_data<1,0,0>::on_destroy(a1 + 8);
  _tip_ToggleDashboardThroughSVC::~_tip_ToggleDashboardThroughSVC((void **)(a1 + 248));
  tip2::details::shared_data<0,0,1>::~shared_data<0,0,1>(a1 + 8);
}
