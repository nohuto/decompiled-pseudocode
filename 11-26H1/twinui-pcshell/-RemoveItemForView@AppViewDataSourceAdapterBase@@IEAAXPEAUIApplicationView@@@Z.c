/*
 * XREFs of ?RemoveItemForView@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationView@@@Z @ 0x1800F14B4
 * Callers:
 *     ?ReevaluateTabItems@AppViewDataSourceAdapter@@UEAAXW4ReevaluateTabOption@@@Z @ 0x1800F1A20 (-ReevaluateTabItems@AppViewDataSourceAdapter@@UEAAXW4ReevaluateTabOption@@@Z.c)
 *     ?OnApplicationViewAppIdChanged@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1801F43E0 (-OnApplicationViewAppIdChanged@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRoo.c)
 *     ?OnApplicationViewRemoved@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180202E50 (-OnApplicationViewRemoved@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwit.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA_KAEBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800F1604 (-erase@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall AppViewDataSourceAdapterBase::RemoveItemForView(
        AppViewDataSourceAdapterBase *this,
        struct IApplicationView *a2)
{
  char *v4; // rsi
  __int64 *v5; // rdx
  __int64 *v6; // rdi
  __int64 *v7; // rax
  __int64 v8; // rdi
  int v9; // eax
  int v10; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct IApplicationView *v12; // [rsp+68h] [rbp+10h] BYREF

  v4 = (char *)this + 96;
  if ( a2 )
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 8LL))(a2);
  v5 = *(__int64 **)(*(_QWORD *)v4 + 8LL);
  v6 = *(__int64 **)v4;
  if ( !*((_BYTE *)v5 + 25) )
  {
    do
    {
      if ( v5[4] >= (unsigned __int64)a2 )
        v6 = v5;
      v7 = v5 + 2;
      if ( v5[4] >= (unsigned __int64)a2 )
        v7 = v5;
      v5 = (__int64 *)*v7;
    }
    while ( !*(_BYTE *)(*v7 + 25) );
  }
  if ( *((_BYTE *)v6 + 25) || (unsigned __int64)a2 < v6[4] )
    v6 = *(__int64 **)v4;
  if ( a2 )
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 16LL))(a2);
  if ( v6 == *(__int64 **)v4 )
  {
    v8 = 0LL;
  }
  else
  {
    v8 = v6[5];
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  }
  if ( v8 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 64LL))(*((_QWORD *)this + 3), v8);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xD4,
        (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
        (const char *)(unsigned int)v9,
        v10);
    v12 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 8LL))(a2);
    std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem,wil::err_exception_policy>,std::less<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem,wil::err_exception_policy>>>,0>>::erase(
      v4,
      &v12);
    if ( a2 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 16LL))(a2);
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
}
