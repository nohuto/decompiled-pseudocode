/*
 * XREFs of ?GetAndDeleteSnapLaunchRect@CShellSnapComponent@@UEAAJPEAUHSTRING__@@PEAURect@Foundation@Windows@@@Z @ 0x18059EF80
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x18002E5B4 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@USnapLaunchData@CShellSnapComponent@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@@std@@@std@@@1@V21@@Z @ 0x18059C3D4 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBUhstring@winrt@@USnapL.c)
 *     ?UpdateLaunchSnappedBehavior@CShellSnapComponent@@AEAAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805A37B0 (-UpdateLaunchSnappedBehavior@CShellSnapComponent@@AEAAXAEAV-$unique_any_t@V-$unique_storage@U-$r.c)
 *     ?find@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@USnapLaunchData@CShellSnapComponent@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@@std@@@std@@@2@AEBUhstring@winrt@@@Z @ 0x1805A4C78 (-find@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@USnapLaunchData@CShellSnapComponent@@V-$_Uhash_com.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CShellSnapComponent::GetAndDeleteSnapLaunchRect(
        RTL_SRWLOCK *this,
        RTL_SRWLOCK *a2,
        struct Windows::Foundation::Rect *a3)
{
  __int64 v5; // r8
  const char *v6; // r9
  __int64 result; // rax
  int v8; // edx
  float v9; // xmm3_4
  float v10; // xmm2_4
  struct winrt::impl::hstring_header *v11; // [rsp+20h] [rbp-38h] BYREF
  RTL_SRWLOCK *v12; // [rsp+28h] [rbp-30h] BYREF
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v12 = a2;
  v11 = 0LL;
  try
  {
    winrt::hstring::operator=(&v11, (__int64 *)&v12, (unsigned int)a3);
    wil::AcquireSRWLockExclusive(&v12, this + 175);
    std::_Hash<std::_Umap_traits<winrt::hstring,CShellSnapComponent::SnapLaunchData,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,CShellSnapComponent::SnapLaunchData>>,0>>::find(
      &this[212],
      v13,
      &v11);
    v5 = v13[0];
    if ( (PVOID)v13[0] == this[213].Ptr )
    {
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v12);
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v11);
      result = 2147943568LL;
    }
    else
    {
      v8 = *(_DWORD *)(v13[0] + 28LL);
      v9 = (float)(*(_DWORD *)(v13[0] + 32LL) - *(_DWORD *)(v13[0] + 24LL));
      v10 = (float)(*(_DWORD *)(v13[0] + 36LL) - v8);
      *(float *)a3 = (float)*(int *)(v13[0] + 24LL);
      *((float *)a3 + 1) = (float)v8;
      *((float *)a3 + 2) = v9;
      *((float *)a3 + 3) = v10;
      std::_Hash<std::_Umap_traits<winrt::hstring,CShellSnapComponent::SnapLaunchData,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,CShellSnapComponent::SnapLaunchData>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<winrt::hstring const,CShellSnapComponent::SnapLaunchData>>>>,0>(
        &this[212].Ptr,
        v13,
        v5);
      CShellSnapComponent::UpdateLaunchSnappedBehavior(&this[-16]);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v12);
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v11);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x413,
                           (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                           v6);
  }
  return result;
}
