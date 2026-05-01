/*
 * XREFs of ??1?$vector@IV?$allocator@I@std@@@std@@QEAA@XZ @ 0x1802C6EB4
 * Callers:
 *     _HotkeyHandler::RaiseUiaNotificationForMonitorMove_::_1_::dtor$2 @ 0x1806D0559 (_HotkeyHandler--RaiseUiaNotificationForMonitorMove_--_1_--dtor$2.c)
 *     _SnapAccessibilityHelpers::MonitorIDFinder::GetUIIDs_::_1_::dtor$0 @ 0x1806D23A8 (_SnapAccessibilityHelpers--MonitorIDFinder--GetUIIDs_--_1_--dtor$0.c)
 *     _SnapAccessibilityHelpers::HandleWinShiftHotKeyNarratorAnnouncementsAsync$_ResumeCoro$1_::_1_::dtor$4 @ 0x1806D249D (_SnapAccessibilityHelpers--HandleWinShiftHotKeyNarratorAnnouncementsAsync$_ResumeCo_ea_1806D249D.c)
 *     _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::RestoreRemoteSystemsDataAndNotifyOnRemote_::_1_::dtor$0 @ 0x1806DB0B9 (_winrt--Windows--Internal--Shell--factory_implementation--RemoteSystemDataModel--Re_ea_1806DB0B9.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<unsigned int>::~vector<unsigned int>(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFFCuLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
