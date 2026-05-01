/*
 * XREFs of ?GetAndDeleteSnapId@CShellSnapComponent@@UEAAJHPEAURect@Foundation@Windows@@@Z @ 0x18057B5F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180295800 (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsPr.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$Start@AEAH@GetAndDeleteSnapId@CSnapComponentTelemetry@@SA?AV01@AEAH@Z @ 0x180578010 (--$Start@AEAH@GetAndDeleteSnapId@CSnapComponentTelemetry@@SA-AV01@AEAH@Z.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@HURect@Foundation@Windows@@V?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@V?$allocator@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@std@@@std@@@1@V21@@Z @ 0x180578B64 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBHURect@Foundation@Wind.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@HURect@Foundation@Windows@@V?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@V?$allocator@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@std@@@std@@@1@AEBH@Z @ 0x180578D9C (--$find@X@-$_Hash@V-$_Umap_traits@HURect@Foundation@Windows@@V-$_Uhash_compare@HU-$hash@H@std@@U.c)
 *     ??1GetAndDeleteSnapId@CSnapComponentTelemetry@@QEAA@XZ @ 0x18057A414 (--1GetAndDeleteSnapId@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ?SnapRect@GetAndDeleteSnapId@CSnapComponentTelemetry@@QEAAXAEBURect@Foundation@Windows@@@Z @ 0x18057DE3C (-SnapRect@GetAndDeleteSnapId@CSnapComponentTelemetry@@QEAAXAEBURect@Foundation@Windows@@@Z.c)
 *     ?UpdateLaunchSnappedBehavior@CShellSnapComponent@@AEAAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18057FC10 (-UpdateLaunchSnappedBehavior@CShellSnapComponent@@AEAAXAEAV-$unique_any_t@V-$unique_storage@U-$r.c)
 */

__int64 __fastcall CShellSnapComponent::GetAndDeleteSnapId(
        RTL_SRWLOCK *this,
        unsigned int a2,
        struct Windows::Foundation::Rect *a3)
{
  DWORD v5; // edx
  __int64 v6; // r8
  DWORD v7; // edx
  const char *v8; // r9
  __int64 result; // rax
  unsigned int v10; // [rsp+20h] [rbp-198h] BYREF
  RTL_SRWLOCK *v11; // [rsp+28h] [rbp-190h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-188h] BYREF
  _QWORD v13[42]; // [rsp+40h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+0h]

  v10 = a2;
  CSnapComponentTelemetry::GetAndDeleteSnapId::Start<int &>(
    (CSnapComponentTelemetry::GetAndDeleteSnapId *)v13,
    (int *)&v10);
  wil::AcquireSRWLockExclusive(&v11, this + 175);
  std::_Hash<std::_Umap_traits<int,Windows::Foundation::Rect,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>>,std::allocator<std::pair<int const,Windows::Foundation::Rect>>,0>>::find<void>(
    &this[177].Ptr,
    v12,
    (__int64)&v10);
  v6 = v12[0];
  if ( (PVOID)v12[0] == this[178].Ptr )
  {
    wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v13, v5);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v11);
    CSnapComponentTelemetry::GetAndDeleteSnapId::~GetAndDeleteSnapId((CSnapComponentTelemetry::GetAndDeleteSnapId *)v13);
    result = 2147942487LL;
  }
  else
  {
    *(_OWORD *)a3 = *(_OWORD *)(v12[0] + 20LL);
    std::_Hash<std::_Umap_traits<int,Windows::Foundation::Rect,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>>,std::allocator<std::pair<int const,Windows::Foundation::Rect>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<int const,Windows::Foundation::Rect>>>>,0>(
      &this[177].Ptr,
      v12,
      v6);
    CShellSnapComponent::UpdateLaunchSnappedBehavior(&this[-16]);
    CSnapComponentTelemetry::GetAndDeleteSnapId::SnapRect((CSnapComponentTelemetry::GetAndDeleteSnapId *)v13, a3);
    wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v13, v7);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v11);
    CSnapComponentTelemetry::GetAndDeleteSnapId::~GetAndDeleteSnapId((CSnapComponentTelemetry::GetAndDeleteSnapId *)v13);
    result = 0LL;
  }
  while ( 2 )
  {
    try
    {
    }
    catch ( ... )
    {
      v10 = wil::details::in1diag3::Return_CaughtException(
              retaddr,
              (void *)0x3A8,
              (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
              v8);
      result = v10;
      continue;
    }
    break;
  }
  return result;
}
