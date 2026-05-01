/*
 * XREFs of ?GetWindowBand@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAIUread_lock_required@wil@@@Z @ 0x18035B6A8
 * Callers:
 *     ?WindowBand@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAIXZ @ 0x18035CA94 (-WindowBand@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAIX.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$check_win32@K@winrt@@YAXKAEBUslim_source_location@impl@0@@Z @ 0x18035A874 (--$check_win32@K@winrt@@YAXKAEBUslim_source_location@impl@0@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::GetWindowBand(
        __int64 a1)
{
  __int64 v1; // r8
  unsigned int v2; // ebx
  int v3; // eax
  int v4; // eax
  DWORD LastError; // eax
  unsigned int v6; // edi
  int v8; // [rsp+20h] [rbp-40h]
  __int64 v9; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+40h] [rbp-20h] BYREF
  __int64 v11; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 40);
  v2 = 0;
  if ( v1 )
  {
    v9 = 0LL;
    v11 = 0LL;
    v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v1 + 32LL))(v1, &v11);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2E4,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
        (const char *)(unsigned int)v3,
        v8);
    v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 24LL))(v11, &v9);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2E5,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
        (const char *)(unsigned int)v4,
        v8);
    v10 = 0;
    SetLastError(0);
    if ( !(unsigned int)GetWindowBand(v9, &v10) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2E8,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
        (const char *)0x8000FFFFLL,
        v8);
    LastError = GetLastError();
    winrt::check_win32<unsigned long>((winrt::impl *)LastError);
    v6 = v10;
    if ( v11 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v11);
    return v6;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 164) )
      return *(unsigned int *)(a1 + 160);
    return v2;
  }
}
