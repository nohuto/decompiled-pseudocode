/*
 * XREFs of ?ProcessCortanaShownEventArgs@XamlLauncherState@@AEAAJPEAUICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180249038
 * Callers:
 *     ?OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@3456@@Z @ 0x1804621F0 (-OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall XamlLauncherState::ProcessCortanaShownEventArgs(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaShownEventArgs *a2)
{
  __int64 v2; // rax
  int v4; // eax
  unsigned int v5; // ebx
  int v7[4]; // [rsp+20h] [rbp-38h] BYREF
  RECT rc; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *(_QWORD *)a2;
  *(_OWORD *)v7 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::ICortanaShownEventArgs *, int *))(v2 + 48))(
         a2,
         v7);
  v5 = v4;
  if ( v4 >= 0 )
  {
    rc.left = (int)*(float *)v7;
    rc.top = (int)*(float *)&v7[1];
    rc.right = (int)(float)(*(float *)&v7[2] + *(float *)v7);
    rc.bottom = (int)(float)(*(float *)&v7[3] + *(float *)&v7[1]);
    *((_QWORD *)this + 134) = MonitorFromRect(&rc, 0);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x971,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
