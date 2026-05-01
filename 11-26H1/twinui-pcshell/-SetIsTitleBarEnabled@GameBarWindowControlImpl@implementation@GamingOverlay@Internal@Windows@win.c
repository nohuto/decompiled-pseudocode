/*
 * XREFs of ?SetIsTitleBarEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEB_N@Z @ 0x18029CC44
 * Callers:
 *     ?ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x18035AE30 (-ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt.c)
 *     ?IsTitleBarEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAX_N@Z @ 0x18035BA80 (-IsTitleBarEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetIsTitleBarEnabled(
        __int64 a1,
        __int64 a2,
        _BYTE *a3)
{
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rax
  int v10; // eax
  __int64 result; // rax
  int v12; // eax
  int v13; // [rsp+20h] [rbp-20h]
  unsigned __int16 v14; // [rsp+20h] [rbp-20h]
  __int64 *v15; // [rsp+28h] [rbp-18h] BYREF
  __int64 v16; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]

  v5 = *(_QWORD *)(a1 + 40);
  if ( v5 )
  {
    v16 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 32LL))(v5, &v16);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2BB,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
        (const char *)(unsigned int)v6,
        v13);
    v15 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v16 + 144LL))(v16, &v15);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2BD,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
        (const char *)(unsigned int)v7,
        v13);
    v8 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(*v15 + 48))(v15, 1LL, 1LL);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2C6,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
        (const char *)(unsigned int)v8,
        v13);
    v9 = *v15;
    if ( *a3 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v9 + 88))(v15, 1023LL, 0LL);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x2CB,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
          (const char *)(unsigned int)v10,
          v13);
      result = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v15 + 32))(v15, 1LL);
      if ( (int)result < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x2CC,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
          (const char *)(unsigned int)result,
          v13);
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v9 + 120))(v15, 256LL);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x2D1,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
          (const char *)(unsigned int)v12,
          v13);
      result = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v15 + 32))(v15, 0LL);
      if ( (int)result < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x2D2,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
          (const char *)(unsigned int)result,
          v13);
    }
    *(_BYTE *)(a1 + 157) = 0;
    if ( v15 )
      result = winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v15);
    if ( v16 )
      return winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v16);
  }
  else
  {
    LOBYTE(v14) = *a3;
    HIBYTE(v14) = 1;
    result = v14;
    *(_WORD *)(a1 + 156) = v14;
  }
  return result;
}
