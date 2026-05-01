/*
 * XREFs of ?SetIsResizingEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEB_N@Z @ 0x180355A04
 * Callers:
 *     ?ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x180354590 (-ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt.c)
 *     ?IsResizingEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAX_N@Z @ 0x18035514C (-IsResizingEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetIsResizingEnabled(
        __int64 a1,
        __int64 a2,
        _BYTE *a3)
{
  __int64 v5; // rcx
  int v6; // eax
  __int64 (__fastcall *v7)(__int64, __int64, __int64); // rax
  __int64 result; // rax
  int v9; // [rsp+20h] [rbp-28h]
  unsigned __int16 v10; // [rsp+20h] [rbp-28h]
  __int64 v11; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = *(_QWORD *)(a1 + 40);
  if ( v5 )
  {
    v11 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 32LL))(v5, &v11);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x28C,
        (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GameBarWindowControl.cpp",
        (const char *)(unsigned int)v6,
        v9);
    v7 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v11 + 112LL);
    if ( *a3 )
    {
      result = v7(v11, 255LL, 17LL);
      if ( (int)result < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x290,
          (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GameBarWindowControl.cpp",
          (const char *)(unsigned int)result,
          v9);
    }
    else
    {
      result = v7(v11, 255LL, 16LL);
      if ( (int)result < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x295,
          (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GameBarWindowControl.cpp",
          (const char *)(unsigned int)result,
          v9);
    }
    *(_BYTE *)(a1 + 155) = 0;
    if ( v11 )
      return winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v11);
  }
  else
  {
    LOBYTE(v10) = *a3;
    HIBYTE(v10) = 1;
    result = v10;
    *(_WORD *)(a1 + 154) = v10;
  }
  return result;
}
