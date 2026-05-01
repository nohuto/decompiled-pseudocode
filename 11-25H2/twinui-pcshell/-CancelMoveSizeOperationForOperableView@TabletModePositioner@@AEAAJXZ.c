/*
 * XREFs of ?CancelMoveSizeOperationForOperableView@TabletModePositioner@@AEAAJXZ @ 0x1804F4D5C
 * Callers:
 *     ?ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1804F51D0 (-ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknow.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ?IsControlledView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1804AADB0 (-IsControlledView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModePositioner::CancelMoveSizeOperationForOperableView(TabletModePositioner *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, HWND, TabletModePositionerHelpers **); // rbx
  int v4; // eax
  struct IApplicationView *v5; // rdx
  unsigned int v6; // ebx
  TabletModePositionerHelpers *v8[2]; // [rsp+20h] [rbp-78h] BYREF
  struct tagGUITHREADINFO pgui; // [rsp+30h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  pgui.cbSize = 72;
  memset_0(&pgui.flags, 0, 0x44uLL);
  if ( !GetGUIThreadInfo(0, &pgui) || (pgui.flags & 2) == 0 )
    return 2147947423LL;
  v8[0] = 0LL;
  v2 = *((_QWORD *)this + 42);
  v3 = *(__int64 (__fastcall **)(__int64, HWND, TabletModePositionerHelpers **))(*(_QWORD *)v2 + 48LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v8);
  v4 = v3(v2, pgui.hwndMoveSize, v8);
  v6 = v4;
  if ( v4 >= 0 )
  {
    if ( TabletModePositionerHelpers::IsControlledView(v8[0], v5) )
    {
      SendNotifyMessageW(pgui.hwndMoveSize, 0x1Fu, 0LL, 0LL);
      v6 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB0D,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)0x8007139FLL);
      v6 = -2147019873;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB0A,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v4);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v8);
  return v6;
}
