/*
 * XREFs of ?ActivateAppAsync@CortanaStoreAppExperienceManager@@AEAAJ_NPEBG@Z @ 0x180398BF8
 * Callers:
 *     ?PerformDelayedInitialization@CortanaStoreAppExperienceManager@@UEAAJXZ @ 0x18022ED20 (-PerformDelayedInitialization@CortanaStoreAppExperienceManager@@UEAAJXZ.c)
 *     ?ActivateAppWithArgumentsAsync@CortanaStoreAppExperienceManager@@UEAAJPEBG@Z @ 0x180398CA0 (-ActivateAppWithArgumentsAsync@CortanaStoreAppExperienceManager@@UEAAJPEBG@Z.c)
 *     ?LaunchOrCloseAppAsync@CortanaStoreAppExperienceManager@@UEAAJXZ @ 0x1803995C0 (-LaunchOrCloseAppAsync@CortanaStoreAppExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180029C50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??1?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@XZ @ 0x1803412F8 (--1-$pair@KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@XZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_668917084cb4c0da526c2ffad1d9f84c___ @ 0x180397FA4 (Windows--Internal--ComTaskPool--QueueTask__lambda_668917084cb4c0da526c2ffad1d9f84c___.c)
 *     _lambda_668917084cb4c0da526c2ffad1d9f84c_::_lambda_668917084cb4c0da526c2ffad1d9f84c_ @ 0x180398548 (_lambda_668917084cb4c0da526c2ffad1d9f84c_--_lambda_668917084cb4c0da526c2ffad1d9f84c_.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall CortanaStoreAppExperienceManager::ActivateAppAsync(
        CortanaStoreAppExperienceManager *this,
        char a2,
        unsigned __int16 *a3)
{
  __int128 *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  int v8; // [rsp+20h] [rbp-68h] BYREF
  void *v9[4]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v10[40]; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  LOBYTE(v8) = a2;
  v3 = (__int128 *)std::wstring::wstring((char **)v9, a3);
  v4 = lambda_668917084cb4c0da526c2ffad1d9f84c_::_lambda_668917084cb4c0da526c2ffad1d9f84c_((__int64)v10, &v8, v3);
  v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_668917084cb4c0da526c2ffad1d9f84c___(v5, v4);
  std::pair<unsigned long,std::wstring>::~pair<unsigned long,std::wstring>((__int64)v10);
  std::wstring::_Tidy_deallocate(v9);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x233,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v6,
      v8);
  return 0LL;
}
