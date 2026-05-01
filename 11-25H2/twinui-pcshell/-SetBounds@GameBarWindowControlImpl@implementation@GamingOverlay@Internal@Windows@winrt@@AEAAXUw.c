/*
 * XREFs of ?SetBounds@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEBURect@Foundation@56@@Z @ 0x18022F7BC
 * Callers:
 *     ?ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x180354590 (-ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt.c)
 *     ?Bounds@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXAEBURect@Foundation@56@@Z @ 0x1803546F8 (-Bounds@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXAEBUR.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetBounds(
        __int64 a1,
        __int64 a2,
        float *a3)
{
  __int64 v4; // rcx
  float v5; // xmm1_4
  float v6; // xmm0_4
  int v7; // eax
  float v8; // xmm1_4
  int v9; // eax
  int v10; // eax
  bool v11; // zf
  int v12[4]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 )
  {
    v5 = a3[1];
    v6 = *a3 + a3[2];
    v12[0] = (int)*a3;
    v7 = (int)v5;
    v8 = v5 + a3[3];
    v12[1] = v7;
    v12[2] = (int)v6;
    v12[3] = (int)v8;
    v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v4 + 64LL))(v4, v12);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1FB,
        (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GameBarWindowControl.cpp",
        (const char *)(unsigned int)v9,
        v12[0]);
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 96LL))(*(_QWORD *)(a1 + 40));
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1FC,
        (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GameBarWindowControl.cpp",
        (const char *)(unsigned int)v10,
        v12[0]);
    *(_BYTE *)(a1 + 124) = 0;
  }
  else
  {
    v11 = *(_BYTE *)(a1 + 124) == 0;
    *(_OWORD *)(a1 + 108) = *(_OWORD *)a3;
    if ( v11 )
      *(_BYTE *)(a1 + 124) = 1;
  }
}
