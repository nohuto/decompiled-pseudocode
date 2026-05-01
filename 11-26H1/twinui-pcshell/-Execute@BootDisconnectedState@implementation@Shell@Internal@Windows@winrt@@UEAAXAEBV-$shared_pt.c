/*
 * XREFs of ?Execute@BootDisconnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x18066A060
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180033674 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBG$$QEAV10@@Z @ 0x1801080A8 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     tip_details_GetKernelBaseModuleHandle @ 0x18018E734 (tip_details_GetKernelBaseModuleHandle.c)
 *     ??$?0PEAG$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEAG0AEBV?$allocator@G@1@@Z @ 0x1801A950C (--$-0PEAG$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEAG0AEBV-$alloc.c)
 *     ??$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z @ 0x1801A9554 (--$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802816D8 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028BFAC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802A27AC (-is_running@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18063CDA8 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18063EDBC (--1-$test_data_control@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18063EE64 (--1-$test_watcher@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?DismissTransitionScreen@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@AEBW4DismissalReason@TransitionScreen@CloudDesktop@3456@@Z @ 0x180671C48 (-DismissTransitionScreen@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXA.c)
 *     ?ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXW4CloudPCState@3456@0@Z @ 0x1806727F8 (-ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::BootDisconnectedState::Execute(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 v3; // rcx
  _WORD *v4; // rax
  _QWORD *v5; // rdi
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rbx
  FARPROC v8; // rax
  HMODULE v9; // rax
  _WORD *v10; // rax
  _QWORD *v11; // rdi
  volatile signed __int32 *v12; // rbx
  volatile signed __int32 *v13; // rbx
  FARPROC ProcAddress; // rax
  HMODULE KernelBaseModuleHandle; // rax
  volatile signed __int32 *v16; // [rsp+20h] [rbp-69h] BYREF
  _BYTE v17[48]; // [rsp+28h] [rbp-61h] BYREF
  volatile signed __int32 *v18; // [rsp+58h] [rbp-31h]
  void *v19[4]; // [rsp+60h] [rbp-29h] BYREF
  _QWORD v20[9]; // [rsp+80h] [rbp-9h] BYREF
  _WORD v21[3]; // [rsp+CAh] [rbp+41h] BYREF

  switch ( a3 )
  {
    case 0u:
      LODWORD(v16) = 5;
      winrt::Windows::Internal::Shell::implementation::ConnectionStateBase::DismissTransitionScreen(0LL, a2, &v16, 0LL);
      tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>>((struct wil::details::IFailureCallback *)v17);
      if ( tip2::details::shared_data<1,0,0>::is_running((__int64)(v18 + 2)) )
      {
        v10 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v21, 0);
        std::wstring::wstring((__int64)v19, (__int64)v10, (__int64)v21);
        v11 = (_QWORD *)std::operator+<unsigned short>(
                          (__int64)v20,
                          L"BootDisconnectedState::Execute, Client Disconnected ",
                          v19);
        v12 = v18;
        v16 = v18;
        if ( v18 )
          _InterlockedIncrement(v18 + 92);
        tip2::details::shared_data<1,0,0>::begin_update((__int64)(v12 + 2));
        std::wstring::operator=((_QWORD *)v12 + 36, v11);
        tip2::test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>::~test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>((void **)&v16);
        std::wstring::_Tidy_deallocate(v20);
        std::wstring::_Tidy_deallocate(v19);
        v13 = v18;
        v16 = v18;
        if ( v18 )
          _InterlockedIncrement(v18 + 92);
        tip2::details::shared_data<1,0,0>::begin_update((__int64)(v13 + 2));
        *((_BYTE *)v13 + 277) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>::~test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>((void **)&v16);
        tip2::details::shared_data<1,0,0>::complete_without_lock((__int64)(v18 + 2));
        ProcAddress = (FARPROC)`TestControlReporting'::`2'::s_pfnTestControlReporting;
        if ( `TestControlReporting'::`2'::s_pfnTestControlReporting
          || (KernelBaseModuleHandle = tip_details_GetKernelBaseModuleHandle(),
              ProcAddress = GetProcAddress(KernelBaseModuleHandle, "TestControlReporting"),
              (`TestControlReporting'::`2'::s_pfnTestControlReporting = (__int64)ProcAddress) != 0) )
        {
          ((void (__fastcall *)(_QWORD))ProcAddress)(0LL);
        }
      }
      goto LABEL_23;
    case 1u:
      return;
    case 2u:
      tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>>((struct wil::details::IFailureCallback *)v17);
      if ( tip2::details::shared_data<1,0,0>::is_running((__int64)(v18 + 2)) )
      {
        v4 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v21, 2u);
        std::wstring::wstring((__int64)v19, (__int64)v4, (__int64)v21);
        v5 = (_QWORD *)std::operator+<unsigned short>(
                         (__int64)v20,
                         L"BootDisconnectedState::Execute, Client Disconnected ",
                         v19);
        v6 = v18;
        v16 = v18;
        if ( v18 )
          _InterlockedIncrement(v18 + 92);
        tip2::details::shared_data<1,0,0>::begin_update((__int64)(v6 + 2));
        std::wstring::operator=((_QWORD *)v6 + 36, v5);
        tip2::test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>::~test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>((void **)&v16);
        std::wstring::_Tidy_deallocate(v20);
        std::wstring::_Tidy_deallocate(v19);
        v7 = v18;
        v16 = v18;
        if ( v18 )
          _InterlockedIncrement(v18 + 92);
        tip2::details::shared_data<1,0,0>::begin_update((__int64)(v7 + 2));
        *((_BYTE *)v7 + 277) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>::~test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>((void **)&v16);
        tip2::details::shared_data<1,0,0>::complete_without_lock((__int64)(v18 + 2));
        v8 = (FARPROC)`TestControlReporting'::`2'::s_pfnTestControlReporting;
        if ( `TestControlReporting'::`2'::s_pfnTestControlReporting
          || (v9 = tip_details_GetKernelBaseModuleHandle(),
              v8 = GetProcAddress(v9, "TestControlReporting"),
              (`TestControlReporting'::`2'::s_pfnTestControlReporting = (__int64)v8) != 0) )
        {
          ((void (__fastcall *)(_QWORD))v8)(0LL);
        }
      }
LABEL_23:
      tip2::test_watcher<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>::~test_watcher<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>((__int64)v17);
      return;
  }
  v3 = a3 - 98;
  if ( (unsigned int)v3 > 1 )
    winrt::Windows::Internal::Shell::implementation::ConnectionStateBase::ThrowIllegalStateTransition(v3, a3, 3LL);
}
