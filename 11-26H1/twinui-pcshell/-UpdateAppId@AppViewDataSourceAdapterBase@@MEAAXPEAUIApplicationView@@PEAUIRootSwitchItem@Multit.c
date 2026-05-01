/*
 * XREFs of ?UpdateAppId@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1801B5530
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall AppViewDataSourceAdapterBase::UpdateAppId(
        AppViewDataSourceAdapterBase *this,
        struct IApplicationView *a2,
        struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *a3)
{
  __int64 v4; // rdx
  HRESULT v5; // eax
  int v6; // eax
  PCNZWCH sourceString; // [rsp+20h] [rbp-20h] BYREF
  __int64 v8; // [rsp+28h] [rbp-18h]
  __int64 v9; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  HSTRING string; // [rsp+58h] [rbp+18h] BYREF

  sourceString = 0LL;
  v8 = -1LL;
  v9 = -1LL;
  if ( (*(int (__fastcall **)(struct IApplicationView *, PCNZWCH *))(*(_QWORD *)a2 + 136LL))(a2, &sourceString) >= 0 )
  {
    string = 0LL;
    WindowsDeleteString(0LL);
    string = 0LL;
    LODWORD(v4) = v8;
    if ( v8 == -1 )
    {
      if ( sourceString )
      {
        v4 = -1LL;
        do
          ++v4;
        while ( sourceString[v4] );
      }
      else
      {
        v4 = 0LL;
      }
      v8 = v4;
    }
    v5 = WindowsCreateString(sourceString, v4, &string);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x104,
        (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
        (const char *)(unsigned int)v5,
        (int)sourceString);
    v6 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *, HSTRING))(*(_QWORD *)a3 + 56LL))(
           a3,
           string);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x105,
        (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
        (const char *)(unsigned int)v6,
        (int)sourceString);
    WindowsDeleteString(string);
  }
  if ( sourceString )
    CoTaskMemFree((LPVOID)sourceString);
}
