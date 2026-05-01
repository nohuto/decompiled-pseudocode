/*
 * XREFs of ?_Tidy@?$vector@V?$shared_ptr@UGameMruItem@@@std@@V?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@2@@std@@AEAAXXZ @ 0x18013A79C
 * Callers:
 *     ??1JsonGameMruManager@@QEAA@XZ @ 0x18013A7F0 (--1JsonGameMruManager@@QEAA@XZ.c)
 *     _PenWorkspace::Discover::RecentAppsCache::SaveDataToJson_::_1_::dtor$0 @ 0x1806CE8F1 (_PenWorkspace--Discover--RecentAppsCache--SaveDataToJson_--_1_--dtor$0.c)
 *     _MultitaskingViewGestureHandler::MultitaskingViewGestureHandler_::_1_::dtor$9 @ 0x1806D51EF (_MultitaskingViewGestureHandler--MultitaskingViewGestureHandler_--_1_--dtor$9.c)
 *     _TouchKeyboardExperienceManager::HideAllInputViews_::_1_::dtor$0 @ 0x1806D86A8 (_TouchKeyboardExperienceManager--HideAllInputViews_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::ClearViewInfos_::_1_::dtor$0 @ 0x1806DF025 (_TouchKeyboardExperienceManager--ClearViewInfos_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::WorkAreaChanged_::_1_::dtor$0 @ 0x1806DF169 (_TouchKeyboardExperienceManager--WorkAreaChanged_--_1_--dtor$0.c)
 *     _PenWorkspace::Discover::RecentAppsCache::GetMRUApps_::_1_::dtor$0 @ 0x1806E8F3D (_PenWorkspace--Discover--RecentAppsCache--GetMRUApps_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$13 @ 0x1806EEA26 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$13.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UGameMruItem@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@0@@Z @ 0x18009100C (--$_Destroy_range@V-$allocator@V-$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV-$shared_ptr.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<std::shared_ptr<GameMruItem>>::_Tidy(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>(v2, a1[1]);
    result = std::_Deallocate<16>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF0uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
