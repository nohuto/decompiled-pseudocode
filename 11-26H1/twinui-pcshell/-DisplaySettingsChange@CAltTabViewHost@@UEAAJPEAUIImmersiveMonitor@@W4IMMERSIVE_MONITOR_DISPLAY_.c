/*
 * XREFs of ?DisplaySettingsChange@CAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1804AD460
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x180077C80 (-DismissView@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAltTabViewHost::DisplaySettingsChange(__int64 a1, __int64 *a2, char a3)
{
  __int64 v6; // rdx
  int v7; // ebx
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  int v13; // [rsp+20h] [rbp-38h] BYREF
  int v14; // [rsp+24h] [rbp-34h] BYREF
  __int128 v15; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( !*(_QWORD *)(a1 + 152) )
  {
    v6 = 301LL;
LABEL_3:
    v7 = -2147023728;
    goto LABEL_4;
  }
  v9 = *(_QWORD *)(a1 + 176);
  if ( !v9 )
  {
    v6 = 302LL;
    goto LABEL_3;
  }
  v10 = *a2;
  v13 = 0;
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64, int *))(v10 + 96))(a2, v9, &v13);
  if ( v7 < 0 )
  {
    v6 = 305LL;
    goto LABEL_4;
  }
  if ( v13 )
  {
    v14 = 1;
    if ( (a3 & 0x20) != 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64 *, int *))(*a2 + 48))(a2, &v14);
      if ( v11 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x136,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewhost.cpp",
          (const char *)(unsigned int)v11);
LABEL_15:
        v7 = CMultitaskingViewHostBase<IAltTabViewHost>::DismissView(a1 - 8);
        if ( v7 >= 0 )
          return (unsigned int)v7;
        v6 = 313LL;
LABEL_4:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v6,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewhost.cpp",
          (const char *)(unsigned int)v7);
        return (unsigned int)v7;
      }
      if ( !v14 )
        goto LABEL_15;
    }
    if ( (a3 & 0x10) != 0 )
    {
      v12 = *(_QWORD *)(a1 + 176);
      v15 = 0LL;
      v7 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v12 + 88LL))(v12, &v15);
      if ( v7 < 0 )
      {
        v6 = 319LL;
        goto LABEL_4;
      }
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *))(**(_QWORD **)(a1 + 152) + 80LL))(
             *(_QWORD *)(a1 + 152),
             0LL,
             &v15);
      if ( v7 < 0 )
      {
        v6 = 320LL;
        goto LABEL_4;
      }
    }
  }
  return 0LL;
}
