/*
 * XREFs of ?SetMinimumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEBUSize@Foundation@56@@Z @ 0x18035C548
 * Callers:
 *     ?ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x18035AE30 (-ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt.c)
 *     ?MinimumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXAEBUSize@Foundation@56@@Z @ 0x18035BCF4 (-MinimumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAX.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$?4AEBUSize@Foundation@Windows@winrt@@$0A@@?$optional@USize@Foundation@Windows@winrt@@@std@@QEAAAEAV01@AEBUSize@Foundation@Windows@winrt@@@Z @ 0x18035A46C (--$-4AEBUSize@Foundation@Windows@winrt@@$0A@@-$optional@USize@Foundation@Windows@winrt@@@std@@QE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetMinimumSize(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  __int64 result; // rax
  int v9[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = *(_QWORD *)(a1 + 40);
  if ( !v5 )
    return std::optional<winrt::Windows::Foundation::Size>::operator=<winrt::Windows::Foundation::Size const &,0>(
             a1 + 128,
             (int *)a3);
  v9[0] = (int)*(float *)a3;
  v9[1] = (int)*(float *)(a3 + 4);
  v10 = *(_QWORD *)v9;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 72LL))(v5, &v10);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x21B,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
      (const char *)(unsigned int)v6,
      v9[0]);
  *(_QWORD *)v9 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 40) + 32LL))(*(_QWORD *)(a1 + 40), v9);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x21D,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
      (const char *)(unsigned int)v7,
      v9[0]);
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v9 + 224LL))(*(_QWORD *)v9);
  if ( (int)result < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x21E,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
      (const char *)(unsigned int)result,
      v9[0]);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)a3;
  *(_BYTE *)(a1 + 136) = 0;
  if ( *(_QWORD *)v9 )
    return winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)v9);
  return result;
}
