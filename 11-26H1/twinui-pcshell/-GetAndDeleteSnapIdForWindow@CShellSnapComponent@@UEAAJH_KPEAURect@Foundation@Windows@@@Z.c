/*
 * XREFs of ?GetAndDeleteSnapIdForWindow@CShellSnapComponent@@UEAAJH_KPEAURect@Foundation@Windows@@@Z @ 0x18059ED60
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18028C830 (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsPr.c)
 *     ??R?$_Conditionally_enabled_hash@W4ShellView@Shell@UI@WindowsUdk@winrt@@$00@std@@SA_KAEBW4ShellView@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1802A28B0 (--R-$_Conditionally_enabled_hash@W4ShellView@Shell@UI@WindowsUdk@winrt@@$00@std@@SA_KAEBW4ShellV.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$Start@AEAH@GetAndDeleteSnapId@CSnapComponentTelemetry@@SA?AV01@AEAH@Z @ 0x18059B8D8 (--$Start@AEAH@GetAndDeleteSnapId@CSnapComponentTelemetry@@SA-AV01@AEAH@Z.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18059BAD8 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$tip_test@V-$merged_data@U_tip_SnapLaunc.c)
 *     ??$emplace@U?$pair@_KV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@@?$_Hash@V?$_Umap_traits@_KV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@_KV?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@@1@@Z @ 0x18059C1A0 (--$emplace@U-$pair@_KV-$tip_test@V-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@HURect@Foundation@Windows@@V?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@V?$allocator@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@std@@@std@@@1@V21@@Z @ 0x18059C334 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBHURect@Foundation@Wind.c)
 *     ??0?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@QEAA@AEBV01@@Z @ 0x18059D014 (--0-$tip_test@V-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@QEAA@AEBV01@@Z.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18059D750 (--1-$com_ptr_t@V-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@Uerr_returncode_policy@w.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18059D89C (--1-$test_data_control@V-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1GetAndDeleteSnapId@CSnapComponentTelemetry@@QEAA@XZ @ 0x18059DBA4 (--1GetAndDeleteSnapId@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@1@XZ @ 0x18059DF20 (--C-$tip_test@V-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_data.c)
 *     ?SnapRect@GetAndDeleteSnapId@CSnapComponentTelemetry@@QEAAXAEBURect@Foundation@Windows@@@Z @ 0x1805A18FC (-SnapRect@GetAndDeleteSnapId@CSnapComponentTelemetry@@QEAAXAEBURect@Foundation@Windows@@@Z.c)
 *     ?UpdateLaunchSnappedBehavior@CShellSnapComponent@@AEAAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805A37B0 (-UpdateLaunchSnappedBehavior@CShellSnapComponent@@AEAAXAEAV-$unique_any_t@V-$unique_storage@U-$r.c)
 *     ?find@?$_Hash@V?$_Umap_traits@HURect@Foundation@Windows@@V?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@V?$allocator@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@std@@@std@@@2@AEBH@Z @ 0x1805A4BC0 (-find@-$_Hash@V-$_Umap_traits@HURect@Foundation@Windows@@V-$_Uhash_compare@HU-$hash@H@std@@U-$eq.c)
 *     ?find@?$_Hash@V?$_Umap_traits@IV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@@std@@@2@AEBI@Z @ 0x1805A4C1C (-find@-$_Hash@V-$_Umap_traits@IV-$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@In.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall CShellSnapComponent::GetAndDeleteSnapIdForWindow(
        CShellSnapComponent *this,
        int a2,
        char *a3,
        struct Windows::Foundation::Rect *a4)
{
  DWORD v7; // edx
  __int64 v8; // r8
  char *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  DWORD v15; // edx
  int v17; // [rsp+20h] [rbp-1B8h] BYREF
  char *v18; // [rsp+28h] [rbp-1B0h] BYREF
  void *v19; // [rsp+30h] [rbp-1A8h] BYREF
  RTL_SRWLOCK *v20; // [rsp+38h] [rbp-1A0h] BYREF
  char v21[16]; // [rsp+40h] [rbp-198h] BYREF
  volatile signed __int32 *v22[42]; // [rsp+50h] [rbp-188h] BYREF

  v17 = a2;
  CSnapComponentTelemetry::GetAndDeleteSnapId::Start<int &>((CSnapComponentTelemetry::GetAndDeleteSnapId *)v22, &v17);
  wil::AcquireSRWLockExclusive(&v20, (RTL_SRWLOCK *)this + 175);
  std::_Hash<std::_Umap_traits<int,Windows::Foundation::Rect,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>>,std::allocator<std::pair<int const,Windows::Foundation::Rect>>,0>>::find(
    (char *)this + 1416,
    &v18,
    &v17);
  v8 = (__int64)v18;
  if ( v18 == *((char **)this + 178) )
  {
    wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v22, v7);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v20);
    CSnapComponentTelemetry::GetAndDeleteSnapId::~GetAndDeleteSnapId(v22);
    return 2147942487LL;
  }
  else
  {
    *(_OWORD *)a4 = *(_OWORD *)(v18 + 20);
    std::_Hash<std::_Umap_traits<int,Windows::Foundation::Rect,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>>,std::allocator<std::pair<int const,Windows::Foundation::Rect>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<int const,Windows::Foundation::Rect>>>>,0>(
      (_QWORD *)this + 177,
      &v18,
      v8);
    CShellSnapComponent::UpdateLaunchSnappedBehavior((char *)this - 128);
    std::_Hash<std::_Umap_traits<unsigned int,std::unique_ptr<winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::unique_ptr<winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo>>>,0>>::find(
      (char *)this + 1480,
      &v18,
      &v17);
    v9 = v18;
    if ( v18 != *((char **)this + 186) )
    {
      *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>::operator->(
                    (__int64)(v18 + 24),
                    (__int64 *)&v18)
               + 274) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>((void **)&v18);
      v18 = a3;
      tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>(
        (__int64 *)&v19,
        (__int64)(v9 + 24));
      std::_Hash<std::_Umap_traits<unsigned __int64,tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>>>,0>>::emplace<std::pair<unsigned __int64,tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>>>(
        (float *)this + 386,
        (__int64)v21,
        (__int64)&v18);
      wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>,wil::err_returncode_policy>(&v19);
      v10 = std::_Conditionally_enabled_hash<enum winrt::WindowsUdk::UI::Shell::ShellView,1>::operator()((unsigned __int8 *)v9 + 16);
      v11 = 2 * (v10 & *((_QWORD *)this + 191));
      v12 = *((_QWORD *)this + 188);
      if ( *(char **)(v12 + 16 * (v10 & *((_QWORD *)this + 191)) + 8) == v9 )
      {
        if ( *(char **)(v12 + 16 * (v10 & *((_QWORD *)this + 191))) == v9 )
        {
          v13 = *((_QWORD *)this + 186);
          *(_QWORD *)(v12 + 8 * v11) = v13;
        }
        else
        {
          v13 = *((_QWORD *)v9 + 1);
        }
        *(_QWORD *)(v12 + 8 * v11 + 8) = v13;
      }
      else if ( *(char **)(v12 + 16 * (v10 & *((_QWORD *)this + 191))) == v9 )
      {
        *(_QWORD *)(v12 + 16 * (v10 & *((_QWORD *)this + 191))) = *(_QWORD *)v9;
      }
      v14 = *(_QWORD *)v9;
      --*((_QWORD *)this + 187);
      **((_QWORD **)v9 + 1) = v14;
      *(_QWORD *)(v14 + 8) = *((_QWORD *)v9 + 1);
      std::_List_node<std::pair<unsigned __int64 const,tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned __int64 const,tip2::tip_test<tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>>>,void *>>>(
        v14,
        v9);
    }
    CSnapComponentTelemetry::GetAndDeleteSnapId::SnapRect((CSnapComponentTelemetry::GetAndDeleteSnapId *)v22, a4);
    wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v22, v15);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v20);
    CSnapComponentTelemetry::GetAndDeleteSnapId::~GetAndDeleteSnapId(v22);
    return 0LL;
  }
}
