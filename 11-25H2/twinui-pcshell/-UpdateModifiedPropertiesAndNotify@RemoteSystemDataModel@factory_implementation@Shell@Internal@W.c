/*
 * XREFs of ?UpdateModifiedPropertiesAndNotify@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowId@UI@56@AEBURemoteSystem@RemoteSystemData@@_N@Z @ 0x18062CB54
 * Callers:
 *     ?RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@AEBV?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@Z @ 0x18062ACF8 (-RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Int.c)
 *     ?UpdateDataForWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x18062CA24 (-UpdateDataForWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetNetworkConnectivityLevel@?$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConnectionProfile@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180062884 (-GetNetworkConnectivityLevel@-$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConn.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800AD2D8 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?start@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x18028CC38 (-start@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ??1?$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180293F84 (--1-$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?Insert@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@_KUhstring@winrt@@@Collections@Foundation@Windows@winrt@@_KUhstring@5@@impl@winrt@@QEBA@AEB_KAEBUhstring@param@3@@Z @ 0x180339084 (-Insert@-$consume_Windows_Foundation_Collections_IMap@U-$IMap@_KUhstring@winrt@@@Collections@Fou.c)
 *     ??$?RURemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@URemoteDesktopStateChangedEventArgs@2345@@?$event@U?$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBURemoteSessionWindowManager@implementation@Shell@Internal@Windows@1@AEBURemoteDesktopStateChangedEventArgs@4561@@Z @ 0x18061E57C (--$-RURemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@URemoteDesktopStat.c)
 *     ??$?RURemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@URemoteSystemDisplayInfoChangedEventArgs@2345@@?$event@U?$EventHandler@URemoteSystemDisplayInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBURemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@1@AEBURemoteSystemDisplayInfoChangedEventArgs@4561@@Z @ 0x18061E644 (--$-RURemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@URemoteSystemDi.c)
 *     ??$make@URemoteSystemStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@W4CloudPCState@3456@@winrt@@YA?A_PAEBUhstring@0@$$QEAW4CloudPCState@Shell@Internal@Windows@0@@Z @ 0x180620F04 (--$make@URemoteSystemStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEBUhstr.c)
 *     ??$make@URemoteSystemTimeOutInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@winrt@@YA?A_PAEBUhstring@0@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x180620F78 (--$make@URemoteSystemTimeOutInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@AE.c)
 *     ??$make@URemoteSystemWindowAddedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@AEBUWindowId@UI@56@@winrt@@YA?A_PAEBUhstring@0@AEBUWindowId@UI@Windows@0@@Z @ 0x180621010 (--$make@URemoteSystemWindowAddedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEBUhstri.c)
 *     ??0?$test_data_control@V?$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@@tip2@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180623900 (--0-$test_data_control@V-$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@detail.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180623D74 (--1-$com_ptr_t@V-$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18062430C (--1-$test_data_control@V-$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@detail.c)
 *     ?CreateData@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AURemoteSystem@3456@AEBU7RemoteSystemData@@@Z @ 0x1806251AC (-CreateData@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA-AURe.c)
 *     ?Lookup@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@Uhstring@5@URemoteSystem@Shell@Internal@45@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180628C78 (-Lookup@-$consume_Windows_Foundation_Collections_IMap@U-$IMap@Uhstring@winrt@@URemoteSystem@Shel.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Frontline@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18062AC70 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Frontline@@@details@wil@@QEAAX.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18062DE78 (-ensure_data@-$tip_test@V-$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@detai.c)
 *     ?AddWindow@RemoteSystem@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x18063F97C (-AddWindow@RemoteSystem@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z.c)
 *     ?HasWindow@RemoteSystem@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUWindowId@UI@56@@Z @ 0x18063FEFC (-HasWindow@RemoteSystem@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUWindowId@UI@56@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v17; // r9
  unsigned __int16 v18; // r15
  winrt::Windows::Internal::Shell::implementation::RemoteSystem *v19; // rbx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // eax
  _QWORD *v27; // rax
  __int16 v28; // bx
  __int64 *v29; // rax
  _BYTE v30[2]; // [rsp+38h] [rbp-39h] BYREF
  unsigned __int16 v31; // [rsp+3Ah] [rbp-37h]
  LPVOID ppv; // [rsp+40h] [rbp-31h] BYREF
  char v33; // [rsp+48h] [rbp-29h]
  volatile signed __int32 *v34; // [rsp+50h] [rbp-21h] BYREF
  __int64 v35; // [rsp+58h] [rbp-19h] BYREF
  unsigned int v36; // [rsp+60h] [rbp-11h] BYREF
  volatile signed __int32 *v37; // [rsp+68h] [rbp-9h] BYREF
  __int128 v38; // [rsp+70h] [rbp-1h]
  _OWORD v39[4]; // [rsp+88h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  void *v41; // [rsp+D8h] [rbp+67h] BYREF
  _WORD *v42; // [rsp+E8h] [rbp+77h] BYREF
  int v43; // [rsp+F0h] [rbp+7Fh] BYREF

  LOBYTE(v43) = a4;
  v42 = a3;
  LOBYTE(v41) = 0;
  v7 = 0;
  v33 = 0;
  v8 = 0;
  winrt::hstring::hstring((winrt::hstring *)&v34, a3);
  v9 = *((_DWORD *)a3 + 2);
  v36 = v9;
  v31 = *((_WORD *)a3 + 12);
  wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)v39, (RTL_SRWLOCK *)this + 16);
  v30[0] = 0;
  v10 = *((_QWORD *)this + 18);
  LODWORD(v37) = 0;
  v38 = 0LL;
  v11 = v34;
  v12 = (*(__int64 (__fastcall **)(__int64, volatile signed __int32 *, _BYTE *))(*(_QWORD *)v10 + 64LL))(v10, v34, v30);
  winrt::check_hresult((int *)&v35, v12, (__int64)&v37);
  if ( v30[0] )
  {
    v37 = v11;
    winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>::Lookup(
      (__int64 *)this + 18,
      (winrt *)&ppv,
      &v37);
    if ( ppv )
      v19 = (winrt::Windows::Internal::Shell::implementation::RemoteSystem *)((char *)ppv - 16);
    else
      v19 = 0LL;
    if ( !winrt::Windows::Internal::Shell::implementation::RemoteSystem::HasWindow(v19, a2) )
    {
      winrt::Windows::Internal::Shell::implementation::RemoteSystem::AddWindow(v19, a2);
      v7 = 1;
    }
    if ( v9 != 100
      && v9 != (unsigned int)winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel((__int64 *)&ppv) )
    {
      LODWORD(v37) = 0;
      v38 = 0LL;
      v22 = (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)ppv + 64LL))(ppv, v9);
      winrt::check_hresult((int *)&v41, v22, (__int64)&v37);
      LOBYTE(v41) = 1;
    }
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Frontline>::ReportUsage(
      (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Frontline>::GetImpl'::`2'::impl,
      1u,
      v20,
      v21);
    if ( *((_DWORD *)this + 11) )
    {
      v18 = v31;
    }
    else
    {
      v18 = v31;
      if ( v31 != 0xFFFF )
      {
        LODWORD(v37) = 0;
        v38 = 0LL;
        v23 = (*(__int64 (__fastcall **)(LPVOID, __int64))(*(_QWORD *)ppv + 80LL))(ppv, 600000000LL * v31);
        winrt::check_hresult((int *)&v35, v23, (__int64)&v37);
        v8 = 1;
      }
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&ppv);
    v15 = v33;
  }
  else
  {
    LOBYTE(v41) = v9 != 100;
    v7 = 1;
    winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::CreateData(v13, &ppv, (__int64)v42);
    if ( ppv )
      v14 = (winrt::Windows::Internal::Shell::implementation::RemoteSystem *)((char *)ppv - 16);
    else
      v14 = 0LL;
    winrt::Windows::Internal::Shell::implementation::RemoteSystem::AddWindow(v14, a2);
    v37 = v11;
    winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<unsigned __int64,winrt::hstring>,unsigned __int64,winrt::hstring>::Insert(
      (__int64 **)this + 18,
      (__int64 *)&v37,
      (__int64 *)&ppv);
    v15 = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Frontline>::ReportUsage(
      (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Frontline>::GetImpl'::`2'::impl,
      1u,
      v16,
      v17);
    v18 = v31;
    if ( !*((_DWORD *)this + 11) )
      v8 = v31 != 0xFFFF;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&ppv);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)v39);
  if ( (_BYTE)v43 && v15 )
  {
    v43 = 99;
    winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteSystemStateChangedEventArgs,winrt::hstring const &,enum winrt::Windows::Internal::Shell::CloudPCState>(
      &ppv,
      (const struct winrt::hstring *)&v34,
      (const enum winrt::Windows::Internal::Shell::CloudPCState *)&v43);
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
      v26 = (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)ppv + 96LL))(ppv, *(_QWORD *)a2);
      if ( v26 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x230,
          (int)"pcshell\\twinui\\cloudpc\\lib\\remotesystemdatamodel.cpp",
          (const char *)(unsigned int)v26);
    }
    winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteSystemWindowAddedEventArgs,winrt::hstring const &,winrt::Windows::UI::WindowId const &>(
      &v35,
      (const struct winrt::hstring *)&v34,
      a2);
    winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemDisplayInfoChangedEventArgs>>::operator()<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Internal::Shell::RemoteSystemDisplayInfoChangedEventArgs>(
      (RTL_SRWLOCK *)this + 23,
      (__int64)this,
      (__int64)&v35);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v35);
    wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>((__int64 *)&ppv);
  }
  if ( (_BYTE)v41 )
  {
    winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteSystemStateChangedEventArgs,winrt::hstring const &,enum winrt::Windows::Internal::Shell::CloudPCState>(
      &v41,
      (const struct winrt::hstring *)&v34,
      (const enum winrt::Windows::Internal::Shell::CloudPCState *)&v36);
    winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemDisplayInfoChangedEventArgs>>::operator()<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Internal::Shell::RemoteSystemDisplayInfoChangedEventArgs>(
      (RTL_SRWLOCK *)this + 20,
      (__int64)this,
      (__int64)&v41);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v41);
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Frontline>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Frontline>::GetImpl'::`2'::impl,
    1u,
    v24,
    v25);
  if ( !*((_DWORD *)this + 11) && v8 )
  {
    v41 = 0LL;
    v27 = (_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_UpdateTransitionScreenTimeOutInfoTipTest,_tip_UpdateTransitionScreenTimeOutInfoTipTest>>::ensure_data(&v41);
    tip2::details::shared_data<1,0,0>::start(*v27 + 8LL, v39);
    v28 = v42[12];
    v29 = (__int64 *)tip2::tip_test<tip2::details::merged_data<_tip_UpdateTransitionScreenTimeOutInfoTipTest,_tip_UpdateTransitionScreenTimeOutInfoTipTest>>::ensure_data(&v41);
    tip2::test_data_control<tip2::details::merged_data<_tip_UpdateTransitionScreenTimeOutInfoTipTest,_tip_UpdateTransitionScreenTimeOutInfoTipTest>>::test_data_control<tip2::details::merged_data<_tip_UpdateTransitionScreenTimeOutInfoTipTest,_tip_UpdateTransitionScreenTimeOutInfoTipTest>>(
      (__int64 *)&v42,
      v29);
    v42[132] = v28;
    tip2::test_data_control<tip2::details::merged_data<_tip_UpdateTransitionScreenTimeOutInfoTipTest,_tip_UpdateTransitionScreenTimeOutInfoTipTest>>::~test_data_control<tip2::details::merged_data<_tip_UpdateTransitionScreenTimeOutInfoTipTest,_tip_UpdateTransitionScreenTimeOutInfoTipTest>>((void **)&v42);
    *(_QWORD *)&v39[0] = 600000000LL * v18;
    winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteSystemTimeOutInfoChangedEventArgs,winrt::hstring const &,std::chrono::duration<__int64,std::ratio<1,10000000>> const &>(
      &v42,
      (const struct winrt::hstring *)&v34,
      v39);
    winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs>>::operator()<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs>(
      (RTL_SRWLOCK *)this + 29,
      (__int64)this,
      (__int64)&v42);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v42);
    wil::com_ptr_t<tip2::details::merged_data<_tip_UpdateTransitionScreenTimeOutInfoTipTest,_tip_UpdateTransitionScreenTimeOutInfoTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_UpdateTransitionScreenTimeOutInfoTipTest,_tip_UpdateTransitionScreenTimeOutInfoTipTest>,wil::err_returncode_policy>(&v41);
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v34);
}
