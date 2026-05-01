/*
 * XREFs of ?UpdateModifiedPropertiesAndNotify@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowId@UI@56@AEBURemoteSystem@RemoteSystemData@@_N@Z @ 0x1806524C8
 * Callers:
 *     ?RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@AEBV?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@Z @ 0x180650708 (-RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Int.c)
 *     ?UpdateDataForWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x180652394 (-UpdateDataForWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetNetworkConnectivityLevel@?$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConnectionProfile@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002A684 (-GetNetworkConnectivityLevel@-$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConn.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?start@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x18028038C (-start@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ??1?$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18028A2A0 (--1-$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?Insert@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@_KUhstring@winrt@@@Collections@Foundation@Windows@winrt@@_KUhstring@5@@impl@winrt@@QEBA@AEB_KAEBUhstring@param@3@@Z @ 0x180338B74 (-Insert@-$consume_Windows_Foundation_Collections_IMap@U-$IMap@_KUhstring@winrt@@@Collections@Fou.c)
 *     ??$?RURemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@URemoteDesktopStateChangedEventArgs@2345@@?$event@U?$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBURemoteSessionWindowManager@implementation@Shell@Internal@Windows@1@AEBURemoteDesktopStateChangedEventArgs@4561@@Z @ 0x180644014 (--$-RURemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@URemoteDesktopStat.c)
 *     ??$?RURemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@URemoteSystemDisplayInfoChangedEventArgs@2345@@?$event@U?$EventHandler@URemoteSystemDisplayInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBURemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@1@AEBURemoteSystemDisplayInfoChangedEventArgs@4561@@Z @ 0x1806440DC (--$-RURemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@URemoteSystemDi.c)
 *     ??$make@URemoteSystemStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@W4CloudPCState@3456@@winrt@@YA?A_PAEBUhstring@0@$$QEAW4CloudPCState@Shell@Internal@Windows@0@@Z @ 0x180646910 (--$make@URemoteSystemStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEBUhstr.c)
 *     ??$make@URemoteSystemTimeOutInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@winrt@@YA?A_PAEBUhstring@0@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x180646984 (--$make@URemoteSystemTimeOutInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@AE.c)
 *     ??$make@URemoteSystemWindowAddedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@AEBUWindowId@UI@56@@winrt@@YA?A_PAEBUhstring@0@AEBUWindowId@UI@Windows@0@@Z @ 0x180646A24 (--$make@URemoteSystemWindowAddedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEBUhstri.c)
 *     ??0?$test_data_control@V?$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@@tip2@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1806495A0 (--0-$test_data_control@V-$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@detail.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180649A50 (--1-$com_ptr_t@V-$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180649FF4 (--1-$test_data_control@V-$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@detail.c)
 *     ?CreateData@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AURemoteSystem@3456@AEBU7RemoteSystemData@@@Z @ 0x18064AF24 (-CreateData@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA-AURe.c)
 *     ?Lookup@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@Uhstring@5@URemoteSystem@Shell@Internal@45@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x18064E72C (-Lookup@-$consume_Windows_Foundation_Collections_IMap@U-$IMap@Uhstring@winrt@@URemoteSystem@Shel.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Frontline@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180650680 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Frontline@@@details@wil@@QEAAX.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1806538C8 (-ensure_data@-$tip_test@V-$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@detai.c)
 *     ?AddWindow@RemoteSystem@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x1806654FC (-AddWindow@RemoteSystem@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z.c)
 *     ?HasWindow@RemoteSystem@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUWindowId@UI@56@@Z @ 0x1806659FC (-HasWindow@RemoteSystem@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUWindowId@UI@56@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::UpdateModifiedPropertiesAndNotify(
        winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *this,
        const struct winrt::Windows::UI::WindowId *a2,
        const struct RemoteSystemData::RemoteSystem *a3,
        char a4)
{
  char v7; // r13
  bool v8; // r14
  unsigned int v9; // r15d
  __int64 v10; // rcx
  volatile signed __int32 *v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  winrt::Windows::Internal::Shell::implementation::RemoteSystem *v14; // rcx
  char v15; // bl
  __int64 v16; // r8
  unsigned __int16 v17; // r15
  winrt::Windows::Internal::Shell::implementation::RemoteSystem *v18; // rbx
  __int64 v19; // r8
  int v20; // eax
  int v21; // eax
  __int64 v22; // r8
  int v23; // eax
  _QWORD *v24; // rax
  __int16 v25; // bx
  __int64 *v26; // rax
  _BYTE v27[2]; // [rsp+38h] [rbp-59h] BYREF
  unsigned __int16 v28; // [rsp+3Ah] [rbp-57h]
  LPVOID ppv; // [rsp+40h] [rbp-51h] BYREF
  char v30; // [rsp+48h] [rbp-49h]
  volatile signed __int32 *v31; // [rsp+50h] [rbp-41h] BYREF
  __int64 v32; // [rsp+58h] [rbp-39h] BYREF
  unsigned int v33; // [rsp+60h] [rbp-31h] BYREF
  volatile signed __int32 *v34; // [rsp+68h] [rbp-29h] BYREF
  __int128 v35; // [rsp+70h] [rbp-21h]
  __int128 v36; // [rsp+88h] [rbp-9h] BYREF
  volatile signed __int32 *v37; // [rsp+98h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]
  void *v39; // [rsp+F8h] [rbp+67h] BYREF
  _WORD *v40; // [rsp+108h] [rbp+77h] BYREF
  int v41; // [rsp+110h] [rbp+7Fh] BYREF

  LOBYTE(v41) = a4;
  v40 = a3;
  LOBYTE(v39) = 0;
  v7 = 0;
  v30 = 0;
  v8 = 0;
  winrt::hstring::hstring((winrt::hstring *)&v31, a3, (unsigned int)a3);
  v9 = *((_DWORD *)a3 + 2);
  v33 = v9;
  v28 = *((_WORD *)a3 + 12);
  wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)&v36, (RTL_SRWLOCK *)this + 16);
  v27[0] = 0;
  v10 = *((_QWORD *)this + 18);
  LODWORD(v34) = 0;
  v35 = 0LL;
  v11 = v31;
  v12 = (*(__int64 (__fastcall **)(__int64, volatile signed __int32 *, _BYTE *))(*(_QWORD *)v10 + 64LL))(v10, v31, v27);
  winrt::check_hresult((int *)&v32, v12, (__int64)&v34);
  if ( v27[0] )
  {
    v37 = v11;
    winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>::Lookup(
      (__int64 *)this + 18,
      (winrt *)&ppv,
      &v37);
    if ( ppv )
      v18 = (winrt::Windows::Internal::Shell::implementation::RemoteSystem *)((char *)ppv - 16);
    else
      v18 = 0LL;
    if ( !winrt::Windows::Internal::Shell::implementation::RemoteSystem::HasWindow(v18, a2) )
    {
      winrt::Windows::Internal::Shell::implementation::RemoteSystem::AddWindow(v18, a2);
      v7 = 1;
    }
    if ( v9 != 100
      && v9 != (unsigned int)winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel((__int64 *)&ppv) )
    {
      LODWORD(v34) = 0;
      v35 = 0LL;
      v20 = (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)ppv + 64LL))(ppv, v9);
      winrt::check_hresult((int *)&v39, v20, (__int64)&v34);
      LOBYTE(v39) = 1;
    }
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Frontline>::ReportUsage(
      (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Frontline>::GetImpl'::`2'::impl,
      1u,
      v19);
    if ( *((_DWORD *)this + 11) )
    {
      v17 = v28;
    }
    else
    {
      v17 = v28;
      if ( v28 != 0xFFFF )
      {
        LODWORD(v34) = 0;
        v35 = 0LL;
        v21 = (*(__int64 (__fastcall **)(LPVOID, __int64))(*(_QWORD *)ppv + 80LL))(ppv, 600000000LL * v28);
        winrt::check_hresult((int *)&v32, v21, (__int64)&v34);
        v8 = 1;
      }
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&ppv);
    v15 = v30;
  }
  else
  {
    LOBYTE(v39) = v9 != 100;
    v7 = 1;
    winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::CreateData(v13, &ppv, (__int64)v40);
    if ( ppv )
      v14 = (winrt::Windows::Internal::Shell::implementation::RemoteSystem *)((char *)ppv - 16);
    else
      v14 = 0LL;
    winrt::Windows::Internal::Shell::implementation::RemoteSystem::AddWindow(v14, a2);
    v34 = v11;
    winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<unsigned __int64,winrt::hstring>,unsigned __int64,winrt::hstring>::Insert(
      (__int64 **)this + 18,
      (__int64 *)&v34,
      (__int64 *)&ppv);
    v15 = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Frontline>::ReportUsage(
      (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Frontline>::GetImpl'::`2'::impl,
      1u,
      v16);
    v17 = v28;
    if ( !*((_DWORD *)this + 11) )
      v8 = v28 != 0xFFFF;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&ppv);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v36);
  if ( (_BYTE)v41 && v15 )
  {
    v41 = 99;
    winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteSystemStateChangedEventArgs,winrt::hstring const &,enum winrt::Windows::Internal::Shell::CloudPCState>(
      &ppv,
      (const struct winrt::hstring *)&v31,
      (const enum winrt::Windows::Internal::Shell::CloudPCState *)&v41);
    winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemDisplayInfoChangedEventArgs>>::operator()<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Internal::Shell::RemoteSystemDisplayInfoChangedEventArgs>(
      (RTL_SRWLOCK *)this + 20,
      (__int64)this,
      (__int64)&ppv);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&ppv);
  }
  if ( v7 )
  {
    ppv = 0LL;
    if ( CoCreateInstance(&CLSID_TaskbarList, 0LL, 1u, &GUID_ea1afb91_9e28_4b86_90e9_9e9f8a5eefaf, &ppv) >= 0
      && (*(int (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 24LL))(ppv) >= 0 )
    {
      v23 = (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)ppv + 96LL))(ppv, *(_QWORD *)a2);
      if ( v23 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x230,
          (int)"pcshell\\twinui\\cloudpc\\lib\\remotesystemdatamodel.cpp",
          (const char *)(unsigned int)v23);
    }
    winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteSystemWindowAddedEventArgs,winrt::hstring const &,winrt::Windows::UI::WindowId const &>(
      &v32,
      (const struct winrt::hstring *)&v31,
      a2);
    winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemDisplayInfoChangedEventArgs>>::operator()<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Internal::Shell::RemoteSystemDisplayInfoChangedEventArgs>(
      (RTL_SRWLOCK *)this + 23,
      (__int64)this,
      (__int64)&v32);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v32);
    wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>((__int64 *)&ppv);
  }
  if ( (_BYTE)v39 )
  {
    winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteSystemStateChangedEventArgs,winrt::hstring const &,enum winrt::Windows::Internal::Shell::CloudPCState>(
      &v39,
      (const struct winrt::hstring *)&v31,
      (const enum winrt::Windows::Internal::Shell::CloudPCState *)&v33);
    winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemDisplayInfoChangedEventArgs>>::operator()<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Internal::Shell::RemoteSystemDisplayInfoChangedEventArgs>(
      (RTL_SRWLOCK *)this + 20,
      (__int64)this,
      (__int64)&v39);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v39);
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Frontline>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Frontline>::GetImpl'::`2'::impl,
    1u,
    v22);
  if ( !*((_DWORD *)this + 11) && v8 )
  {
    v39 = 0LL;
    v24 = (_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_UpdateTransitionScreenTimeOutInfoTipTest,_tip_UpdateTransitionScreenTimeOutInfoTipTest>>::ensure_data(&v39);
    tip2::details::shared_data<1,0,0>::start(*v24 + 8LL, &v36);
    v25 = v40[12];
    v26 = (__int64 *)tip2::tip_test<tip2::details::merged_data<_tip_UpdateTransitionScreenTimeOutInfoTipTest,_tip_UpdateTransitionScreenTimeOutInfoTipTest>>::ensure_data(&v39);
    tip2::test_data_control<tip2::details::merged_data<_tip_UpdateTransitionScreenTimeOutInfoTipTest,_tip_UpdateTransitionScreenTimeOutInfoTipTest>>::test_data_control<tip2::details::merged_data<_tip_UpdateTransitionScreenTimeOutInfoTipTest,_tip_UpdateTransitionScreenTimeOutInfoTipTest>>(
      (__int64 *)&v40,
      v26);
    v40[136] = v25;
    tip2::test_data_control<tip2::details::merged_data<_tip_UpdateTransitionScreenTimeOutInfoTipTest,_tip_UpdateTransitionScreenTimeOutInfoTipTest>>::~test_data_control<tip2::details::merged_data<_tip_UpdateTransitionScreenTimeOutInfoTipTest,_tip_UpdateTransitionScreenTimeOutInfoTipTest>>((void **)&v40);
    *(_QWORD *)&v36 = 600000000LL * v17;
    winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteSystemTimeOutInfoChangedEventArgs,winrt::hstring const &,std::chrono::duration<__int64,std::ratio<1,10000000>> const &>(
      &v40,
      (const struct winrt::hstring *)&v31,
      &v36);
    winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs>>::operator()<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs>(
      (RTL_SRWLOCK *)this + 29,
      (__int64)this,
      (__int64)&v40);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v40);
    wil::com_ptr_t<tip2::details::merged_data<_tip_UpdateTransitionScreenTimeOutInfoTipTest,_tip_UpdateTransitionScreenTimeOutInfoTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_UpdateTransitionScreenTimeOutInfoTipTest,_tip_UpdateTransitionScreenTimeOutInfoTipTest>,wil::err_returncode_policy>(&v39);
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v31);
}
