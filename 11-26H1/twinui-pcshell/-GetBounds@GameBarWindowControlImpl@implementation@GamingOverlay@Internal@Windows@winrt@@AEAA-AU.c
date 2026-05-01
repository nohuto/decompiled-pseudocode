/*
 * XREFs of ?GetBounds@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAA?AURect@Foundation@56@Uread_lock_required@wil@@@Z @ 0x18035B248
 * Callers:
 *     ?Bounds@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA?AURect@Foundation@56@XZ @ 0x18035AF08 (-Bounds@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA-AURec.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$check_win32@K@winrt@@YAXKAEBUslim_source_location@impl@0@@Z @ 0x18035A874 (--$check_win32@K@winrt@@YAXKAEBUslim_source_location@impl@0@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
float *__fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::GetBounds(
        __int64 a1,
        float *a2)
{
  __int64 v4; // rcx
  __int128 v5; // xmm0
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  DWORD LastError; // eax
  int v12; // [rsp+20h] [rbp-60h]
  HWND hWnd; // [rsp+38h] [rbp-48h] BYREF
  __int64 v14; // [rsp+40h] [rbp-40h] BYREF
  struct tagRECT Rect; // [rsp+48h] [rbp-38h] BYREF
  __int128 v16; // [rsp+58h] [rbp-28h] BYREF
  __int128 v17; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v4 = *(_QWORD *)(a1 + 40);
  v5 = 0LL;
  if ( v4 )
  {
    v17 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v4 + 56LL))(v4, &v17);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1D3,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
        (const char *)(unsigned int)v6,
        v12);
    v14 = 0LL;
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 40) + 32LL))(*(_QWORD *)(a1 + 40), &v14);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1D5,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
        (const char *)(unsigned int)v7,
        v12);
    v16 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v14 + 120LL))(v14, &v16);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1D7,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
        (const char *)(unsigned int)v8,
        v12);
    hWnd = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v14 + 24LL))(v14, &hWnd);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1D9,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
        (const char *)(unsigned int)v9,
        v12);
    Rect = 0LL;
    SetLastError(0);
    if ( !GetWindowRect(hWnd, &Rect) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1DC,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
        (const char *)0x80004005LL,
        v12);
    LastError = GetLastError();
    winrt::check_win32<unsigned long>((winrt::impl *)LastError);
    *a2 = (float)(v16 + Rect.left);
    a2[1] = (float)(DWORD1(v16) + Rect.top);
    a2[2] = (float)SDWORD2(v17);
    a2[3] = (float)SHIDWORD(v17);
    if ( v14 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v14);
  }
  else
  {
    if ( *(_BYTE *)(a1 + 124) )
      v5 = *(_OWORD *)(a1 + 108);
    *(_OWORD *)a2 = v5;
  }
  return a2;
}
