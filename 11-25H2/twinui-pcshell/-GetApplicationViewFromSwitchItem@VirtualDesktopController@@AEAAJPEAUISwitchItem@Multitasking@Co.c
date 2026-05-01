/*
 * XREFs of ?GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x1800A86AC
 * Callers:
 *     ?IsSwitchItemVisibleOnDesktop@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktop@3456@PEAE@Z @ 0x1800A8880 (-IsSwitchItemVisibleOnDesktop@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@Compos.c)
 *     ?CanSwitchItemMoveDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAE@Z @ 0x180480CD0 (-CanSwitchItemMoveDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@Composabl.c)
 *     ?IsSwitchItemPinnedToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAE@Z @ 0x180481960 (-IsSwitchItemPinnedToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@Com.c)
 *     ?IsSwitchItemViewPinnedToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAE@Z @ 0x180481AF0 (-IsSwitchItemViewPinnedToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking.c)
 *     ?MoveSwitchItemToDesktop@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktop@3456@@Z @ 0x180481E80 (-MoveSwitchItemToDesktop@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableS.c)
 *     ?PinUnPinSwitchItemToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180482130 (-PinUnPinSwitchItemToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@Com.c)
 *     ?PinUnPinSwitchItemViewToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180482280 (-PinUnPinSwitchItemViewToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopController::GetApplicationViewFromSwitchItem(
        VirtualDesktopController *this,
        struct Windows::Internal::ComposableShell::Multitasking::ISwitchItem *a2,
        struct IApplicationView **a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  struct IApplicationView *v6; // rdx
  int (__fastcall ***v7)(_QWORD, GUID *, _QWORD *); // rcx
  int (__fastcall ***v9)(_QWORD, GUID *, _QWORD *); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  int (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp+20h] BYREF
  struct IApplicationView *v12; // [rsp+58h] [rbp+28h] BYREF
  __int64 v13; // [rsp+60h] [rbp+30h] BYREF

  *a3 = 0LL;
  v11 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::ISwitchItem *, int (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)a2 + 96LL))(
         a2,
         &v11);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24E,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)(unsigned int)v4);
    v9 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v9)[2])(v9);
    }
    return v5;
  }
  else
  {
    v6 = 0LL;
    v12 = 0LL;
    if ( v11 )
    {
      v13 = 0LL;
      if ( (**v11)(v11, &GUID_a6087428_3be3_4d73_b308_7c04a540bf1a, &v13) >= 0 )
      {
        (*(void (__fastcall **)(__int64, GUID *, GUID *, struct IApplicationView **))(*(_QWORD *)v13 + 24LL))(
          v13,
          &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
          &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
          &v12);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      v6 = v12;
    }
    if ( v6 )
    {
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v6 + 8LL))(v6);
      v6 = v12;
    }
    *a3 = v6;
    if ( v6 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v7 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v7)[2])(v7);
    }
    return 0LL;
  }
}
