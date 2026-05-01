/*
 * XREFs of ??0?$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@QEAA@XZ @ 0x180289FD0
 * Callers:
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180289E10 (-ensure_data@-$tip_test@V-$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@@tip2@.c)
 * Callees:
 *     ??0_tip_ToggleDashboardThroughSVC@@QEAA@XZ @ 0x180274CE4 (--0_tip_ToggleDashboardThroughSVC@@QEAA@XZ.c)
 *     ??0test_state@tip2@@QEAA@XZ @ 0x18028A558 (--0test_state@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_ToggleDashboardThroughSVC,_tip_ToggleDashboardThroughSVC>::merged_data<_tip_ToggleDashboardThroughSVC,_tip_ToggleDashboardThroughSVC>(
        __int64 a1)
{
  __int64 v2; // r8
  __int128 v4; // [rsp+20h] [rbp-30h]

  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *(_QWORD *)&v4 = 0x41010201EF04LL;
  *((_QWORD *)&v4 + 1) = "ToggleDashboardThroughSVC";
  *(_QWORD *)(a1 + 8) = a1;
  tip2::test_state::test_state((tip2::test_state *)(a1 + 16));
  *(_DWORD *)(a1 + 192) = v2;
  *(_QWORD *)(a1 + 240) = v2;
  *(_OWORD *)(a1 + 24) = v4;
  *(_OWORD *)(a1 + 40) = 0x401uLL;
  *(_OWORD *)(a1 + 56) = 0uLL;
  InitializeCriticalSection((LPCRITICAL_SECTION)(a1 + 200));
  _tip_ToggleDashboardThroughSVC::_tip_ToggleDashboardThroughSVC((_tip_ToggleDashboardThroughSVC *)(a1 + 248));
  *(_QWORD *)a1 = &tip2::details::merged_data<_tip_ToggleDashboardThroughSVC,_tip_ToggleDashboardThroughSVC>::`vftable';
  *(_DWORD *)(a1 + 344) = 1;
  *(_QWORD *)(a1 + 256) = a1 + 16;
  return a1;
}
