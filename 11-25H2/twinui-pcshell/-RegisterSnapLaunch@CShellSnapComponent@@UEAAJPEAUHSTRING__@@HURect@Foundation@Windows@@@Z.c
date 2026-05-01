/*
 * XREFs of ?RegisterSnapLaunch@CShellSnapComponent@@UEAAJPEAUHSTRING__@@HURect@Foundation@Windows@@@Z @ 0x18057D610
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1800AC148 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$_Try_emplace@AEBUhstring@winrt@@$$V@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@USnapLaunchData@CShellSnapComponent@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@@6@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@PEAX@std@@_N@1@AEBUhstring@winrt@@@Z @ 0x180578508 (--$_Try_emplace@AEBUhstring@winrt@@$$V@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@USnapLaunchData@C.c)
 *     ?UpdateLaunchSnappedBehavior@CShellSnapComponent@@AEAAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18057FC10 (-UpdateLaunchSnappedBehavior@CShellSnapComponent@@AEAAXAEAV-$unique_any_t@V-$unique_storage@U-$r.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CShellSnapComponent::RegisterSnapLaunch(__int64 a1, __int64 a2, unsigned int a3, float *a4)
{
  int v7; // r14d
  int v8; // r15d
  int v9; // r12d
  int v10; // edi
  _DWORD *v11; // rax
  const char *v12; // r9
  __int64 result; // rax
  struct winrt::impl::hstring_header *v14; // [rsp+20h] [rbp-38h] BYREF
  RTL_SRWLOCK *v15; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v16[40]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v18; // [rsp+68h] [rbp+10h] BYREF

  v18 = a2;
  v14 = 0LL;
  try
  {
    winrt::hstring::operator=(&v14, &v18, a3);
    wil::AcquireSRWLockExclusive(&v15, (RTL_SRWLOCK *)(a1 + 1400));
    v7 = (int)(float)(a4[1] + a4[3]);
    v8 = (int)(float)(*a4 + a4[2]);
    v9 = (int)a4[1];
    v10 = (int)*a4;
    v11 = *(_DWORD **)std::_Hash<std::_Umap_traits<winrt::hstring,CShellSnapComponent::SnapLaunchData,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,CShellSnapComponent::SnapLaunchData>>,0>>::_Try_emplace<winrt::hstring const &,>(
                        (float *)(a1 + 1696),
                        (__int64)v16,
                        (__int64 *)&v14);
    v11[6] = v10;
    v11[7] = v9;
    v11[8] = v8;
    v11[9] = v7;
    v11[10] = a3;
    CShellSnapComponent::UpdateLaunchSnappedBehavior(a1 - 128);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v15);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v14);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3FA,
                           (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                           v12);
  }
  return result;
}
