/*
 * XREFs of ?SetMaximumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEBUSize@Foundation@56@@Z @ 0x180355B20
 * Callers:
 *     ?ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x180354590 (-ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt.c)
 *     ?MaximumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXAEBUSize@Foundation@56@@Z @ 0x1803553A0 (-MaximumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAX.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetMaximumSize(
        __int64 a1,
        __int64 a2,
        float *a3)
{
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = *(_QWORD *)(a1 + 40);
  if ( v5 )
  {
    v9[0] = (int)*a3;
    v9[1] = (int)a3[1];
    v10 = *(_QWORD *)v9;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 80LL))(v5, &v10);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x23E,
        (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GameBarWindowControl.cpp",
        (const char *)(unsigned int)v6,
        v9[0]);
    *(_QWORD *)v9 = 0LL;
    v7 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 40) + 32LL))(*(_QWORD *)(a1 + 40), v9);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x240,
        (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GameBarWindowControl.cpp",
        (const char *)(unsigned int)v7,
        v9[0]);
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v9 + 224LL))(*(_QWORD *)v9);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x241,
        (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GameBarWindowControl.cpp",
        (const char *)(unsigned int)v8,
        v9[0]);
    *(_QWORD *)(a1 + 72) = *(_QWORD *)a3;
    *(_BYTE *)(a1 + 148) = 0;
    if ( *(_QWORD *)v9 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)v9);
  }
  else
  {
    *(_QWORD *)(a1 + 140) = *(_QWORD *)a3;
    if ( !*(_BYTE *)(a1 + 148) )
      *(_BYTE *)(a1 + 148) = 1;
  }
}
