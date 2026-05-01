/*
 * XREFs of ?UpdateActivationTimestamp@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1801B8A80
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall AppViewDataSourceAdapterBase::UpdateActivationTimestamp(
        AppViewDataSourceAdapterBase *this,
        struct IApplicationView *a2,
        struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *a3)
{
  __int64 v3; // rax
  int v5; // eax
  int v6; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(_QWORD *)a2;
  v9 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct IApplicationView *, unsigned __int64 *))(v3 + 480))(a2, &v9);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x10C,
      (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
      (const char *)(unsigned int)v5,
      v7);
  if ( (v9 & 0x8000000000000000uLL) != 0LL )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x10F,
      (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
      (const char *)0x8000000BLL,
      v7);
  v6 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *, unsigned __int64))(*(_QWORD *)a3 + 64LL))(
         a3,
         (unsigned int)v9 | (HIDWORD(v9) << 32));
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x110,
      (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
      (const char *)(unsigned int)v6,
      v7);
}
