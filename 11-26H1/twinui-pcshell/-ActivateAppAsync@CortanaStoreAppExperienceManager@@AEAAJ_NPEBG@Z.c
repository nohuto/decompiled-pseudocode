/*
 * XREFs of ?ActivateAppAsync@CortanaStoreAppExperienceManager@@AEAAJ_NPEBG@Z @ 0x1803A1248
 * Callers:
 *     ?PerformDelayedInitialization@CortanaStoreAppExperienceManager@@UEAAJXZ @ 0x18021FA70 (-PerformDelayedInitialization@CortanaStoreAppExperienceManager@@UEAAJXZ.c)
 *     ?ActivateAppWithArgumentsAsync@CortanaStoreAppExperienceManager@@UEAAJPEBG@Z @ 0x1803A12F0 (-ActivateAppWithArgumentsAsync@CortanaStoreAppExperienceManager@@UEAAJPEBG@Z.c)
 *     ?LaunchOrCloseAppAsync@CortanaStoreAppExperienceManager@@UEAAJXZ @ 0x1803A1C30 (-LaunchOrCloseAppAsync@CortanaStoreAppExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180030428 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??1?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@XZ @ 0x1803422A0 (--1-$pair@KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@XZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_668917084cb4c0da526c2ffad1d9f84c___ @ 0x1803A05B8 (Windows--Internal--ComTaskPool--QueueTask__lambda_668917084cb4c0da526c2ffad1d9f84c___.c)
 *     _lambda_668917084cb4c0da526c2ffad1d9f84c_::_lambda_668917084cb4c0da526c2ffad1d9f84c_ @ 0x1803A0B98 (_lambda_668917084cb4c0da526c2ffad1d9f84c_--_lambda_668917084cb4c0da526c2ffad1d9f84c_.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall CortanaStoreAppExperienceManager::ActivateAppAsync(
        CortanaStoreAppExperienceManager *this,
        char a2,
        const unsigned __int16 *a3)
{
  __int64 v3; // rax
  _BYTE *v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  int v8; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v9[4]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v10[40]; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  LOBYTE(v8) = a2;
  v3 = std::wstring::wstring((__int64)v9, (__int64)a3);
  v4 = (_BYTE *)lambda_668917084cb4c0da526c2ffad1d9f84c_::_lambda_668917084cb4c0da526c2ffad1d9f84c_(v10, &v8, v3);
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
