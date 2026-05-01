/*
 * XREFs of ??R_lambda_711bfd1af15e27d1f27b55343e53885b_@@QEBA@XZ @ 0x1806133DC
 * Callers:
 *     ?Invoke@?$delegate@UDispatcherQueueHandler@System@Windows@winrt@@V_lambda_711bfd1af15e27d1f27b55343e53885b_@@@impl@winrt@@UEAAHXZ @ 0x180613D90 (-Invoke@-$delegate@UDispatcherQueueHandler@System@Windows@winrt@@V_lambda_711bfd1af15e27d1f27b55.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800D53EC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18017F43C (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18018A2D4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1802C5854 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1802CFFBC (-complete@-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@ti.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ??$HideRequest@_NIIAEAY0BA@$$CBG_N@InputSwitchingManagerTelemetry@@SAX$$QEA_N$$QEAI1AEAY0BA@$$CBG0@Z @ 0x18061262C (--$HideRequest@_NIIAEAY0BA@$$CBG_N@InputSwitchingManagerTelemetry@@SAX$$QEA_N$$QEAI1AEAY0BA@$$CB.c)
 *     ??$InputSwitchTrace@AEAY0P@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0P@$$CBG@Z @ 0x180612704 (--$InputSwitchTrace@AEAY0P@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0P@$$CBG@Z.c)
 *     ??$OpenRequest@_NIIAEAY0BA@$$CBG_N@InputSwitchingManagerTelemetry@@SAX$$QEA_N$$QEAI1AEAY0BA@$$CBG0@Z @ 0x180612870 (--$OpenRequest@_NIIAEAY0BA@$$CBG_N@InputSwitchingManagerTelemetry@@SAX$$QEA_N$$QEAI1AEAY0BA@$$CB.c)
 *     ??1ThreadFailureCache@wil@@QEAA@XZ @ 0x180613338 (--1ThreadFailureCache@wil@@QEAA@XZ.c)
 *     ?CanShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x18061367C (-CanShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?HideControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x180613868 (-HideControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QE.c)
 *     ?InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4InputSwitcherActionKind@23456@@Z @ 0x180613A18 (-InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4I.c)
 *     ?ShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x180613F98 (-ShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QE.c)
 *     ?pop_front@?$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V?$allocator@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAAXXZ @ 0x1806149A0 (-pop_front@-$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V-$all.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall _lambda_711bfd1af15e27d1f27b55343e53885b_::operator()(
        winrt::Windows::Internal::Shell::implementation::InputSwitchingManager **a1)
{
  winrt::Windows::Internal::Shell::implementation::InputSwitchingManager *v2; // rcx
  __int64 v3; // rbx
  struct _RTL_CRITICAL_SECTION *v4[2]; // [rsp+30h] [rbp-D0h] BYREF
  void **v5; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v6[152]; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v7; // [rsp+E0h] [rbp-20h]
  _BYTE v8[80]; // [rsp+F0h] [rbp-10h] BYREF
  bool v9; // [rsp+158h] [rbp+58h] BYREF
  int v10; // [rsp+160h] [rbp+60h] BYREF
  int v11; // [rsp+168h] [rbp+68h] BYREF

  wil::EnterCriticalSection(v4, (struct _RTL_CRITICAL_SECTION *)((char *)*a1 + 96));
  v5 = &wil::ThreadFailureCache::`vftable';
  v7 = 0LL;
  memset_0(v6, 0, sizeof(v6));
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)v8,
    (struct wil::details::IFailureCallback *)&v5,
    0LL,
    1);
  v2 = *a1;
  if ( *((_QWORD *)*a1 + 21) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)v2 + 18) + 8 * (*((_QWORD *)v2 + 20) & (*((_QWORD *)v2 + 19) - 1LL)));
    if ( !*(_BYTE *)(v3 + 36) )
    {
      if ( !*(_DWORD *)v3 )
      {
        winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::CanShowControlCenterSwitcher(v2);
        v10 = 0;
        v11 = *(_DWORD *)(v3 + 32);
        v9 = v11 == 4;
        InputSwitchingManagerTelemetry::OpenRequest<bool,unsigned int,unsigned int,unsigned short const (&)[16],bool>(
          &v9,
          &v11,
          &v10);
        if ( winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::ShowControlCenterSwitcher(*a1) )
        {
          *(_BYTE *)(v3 + 36) = 1;
          *(_QWORD *)(v3 + 8) = GetTickCount64();
          goto LABEL_12;
        }
        InputSwitchingManagerTelemetry::InputSwitchTrace<unsigned short const (&)[15]>(L"Failed Show");
        tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete((__int64 *)(v3 + 16));
LABEL_9:
        std::deque<winrt::Windows::Internal::Shell::implementation::InputSwitcherAsyncAction>::pop_front((char *)*a1 + 136);
        goto LABEL_12;
      }
      winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::CanShowControlCenterSwitcher(v2);
      v10 = 0;
      v11 = *(_DWORD *)(v3 + 32);
      v9 = v11 == 4;
      InputSwitchingManagerTelemetry::HideRequest<bool,unsigned int,unsigned int,unsigned short const (&)[16],bool>(
        &v9,
        &v11,
        &v10);
      if ( winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::HideControlCenterSwitcher(*a1) )
      {
        *(_BYTE *)(v3 + 36) = 1;
        *(_QWORD *)(v3 + 8) = GetTickCount64();
        tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete((__int64 *)(v3 + 24));
        goto LABEL_9;
      }
      InputSwitchingManagerTelemetry::InputSwitchTrace<unsigned short const (&)[15]>(L"Failed Hide");
      tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete((__int64 *)(v3 + 24));
      std::deque<winrt::Windows::Internal::Shell::implementation::InputSwitcherAsyncAction>::pop_front((char *)*a1 + 136);
      if ( std::_Atomic_storage<bool,1>::load((__int64)*a1 + 280) )
      {
        InputSwitchingManagerTelemetry::InputSwitchTrace<unsigned short const (&)[15]>(L"Retrying Hide");
        winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::InsertActionToQueue(*a1, 1LL);
      }
    }
  }
LABEL_12:
  wil::ThreadFailureCache::~ThreadFailureCache((volatile signed __int32 **)&v5);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v4);
}
