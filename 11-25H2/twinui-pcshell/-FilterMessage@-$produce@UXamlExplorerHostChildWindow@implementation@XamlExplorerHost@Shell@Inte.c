/*
 * XREFs of ?FilterMessage@?$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow@34567@@impl@winrt@@UEAAH_KPEA_N@Z @ 0x1800935A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow>::FilterMessage(
        __int64 a1,
        __int64 a2,
        bool *a3)
{
  __int64 v4; // rax
  int v5; // eax
  __int64 result; // rax
  int v7; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v7 = 0;
  v4 = a1 + 40;
  if ( !a1 )
    v4 = 56LL;
  try
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(**(_QWORD **)v4 + 40LL))(*(_QWORD *)v4, a2, &v7);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xAD,
        (int)"pcshell\\twinui\\XamlExplorerHost\\lib\\XamlExplorerHostChildWindow.cpp",
        (const char *)(unsigned int)v5,
        v7);
    *a3 = v7 != 0;
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v7);
  }
  return result;
}
