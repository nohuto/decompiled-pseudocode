/*
 * XREFs of ?MoveDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@I@Z @ 0x180553370
 * Callers:
 *     ?MoveDesktop@CVirtualDesktopManager@@WBA@EAAJPEAUIVirtualDesktop@@I@Z @ 0x180553570 (-MoveDesktop@CVirtualDesktopManager@@WBA@EAAJPEAUIVirtualDesktop@@I@Z.c)
 *     ?MoveDesktop@CVirtualDesktopManager@@WBI@EAAJPEAUIVirtualDesktop@@I@Z @ 0x180553580 (-MoveDesktop@CVirtualDesktopManager@@WBI@EAAJPEAUIVirtualDesktop@@I@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802816D8 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028BFAC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802C047C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?GetSwitcherType@CVirtualDesktopManager@@AEAA?AW4SwitcherType@VirtualDesktop@@XZ @ 0x1802C0A8C (-GetSwitcherType@CVirtualDesktopManager@@AEAA-AW4SwitcherType@VirtualDesktop@@XZ.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@U123456@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180490DE8 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switch.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@U123456@@details@tip2@@@tip2@@QEAA@XZ @ 0x18049156C (--1-$test_watcher@V-$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@Comp.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@U123456@@details@tip2@@@tip2@@QEAA@XZ @ 0x18054E39C (--1-$test_data_control@V-$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVirtualDesktopManager::MoveDesktop(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop *a2,
        unsigned int a3)
{
  __int64 v3; // r15
  char v6; // si
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rbx
  unsigned int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  volatile signed __int32 *v13; // rbx
  unsigned int v15; // ebx
  _BYTE v16[48]; // [rsp+30h] [rbp-40h] BYREF
  volatile signed __int32 *v17; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  unsigned __int64 v19; // [rsp+A0h] [rbp+30h] BYREF
  volatile signed __int32 *v20; // [rsp+B8h] [rbp+48h] BYREF

  v3 = a3;
  tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest,WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>>>((__int64)v16);
  v6 = ((unsigned int)CVirtualDesktopManager::GetSwitcherType((__int64)this - 8) != 1) + 2;
  v7 = v17;
  v20 = v17;
  if ( v17 )
    _InterlockedIncrement(v17 + 72);
  tip2::details::shared_data<1,0,0>::begin_update((__int64)(v7 + 2));
  *((_BYTE *)v7 + 276) = v6;
  tip2::test_data_control<tip2::details::merged_data<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest,WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>>::~test_data_control<tip2::details::merged_data<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest,WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>>((void **)&v20);
  if ( *((_DWORD *)this + 49) )
  {
    v8 = v17;
    v20 = v17;
    if ( v17 )
      _InterlockedIncrement(v17 + 72);
    tip2::details::shared_data<1,0,0>::begin_update((__int64)(v8 + 2));
    *((_BYTE *)v8 + 284) = 1;
    tip2::test_data_control<tip2::details::merged_data<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest,WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>>::~test_data_control<tip2::details::merged_data<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest,WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>>((void **)&v20);
    tip2::details::shared_data<1,0,0>::complete_without_lock((__int64)(v17 + 2));
    v9 = -2147019873;
    v10 = 2147947423LL;
    v11 = 793LL;
    goto LABEL_10;
  }
  v19 = 0LL;
  v12 = (*(__int64 (__fastcall **)(_QWORD, struct IVirtualDesktop *, unsigned __int64 *))(**((_QWORD **)this + 12)
                                                                                        + 104LL))(
          *((_QWORD *)this + 12),
          a2,
          &v19);
  v9 = v12;
  if ( v12 >= 0 )
  {
    if ( v19 == v3 )
    {
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x324,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)0x8000FFFFLL);
      v13 = v17;
      v20 = v17;
      if ( v17 )
        _InterlockedIncrement(v17 + 72);
      tip2::details::shared_data<1,0,0>::begin_update((__int64)(v13 + 2));
      *((_BYTE *)v13 + 285) = 1;
      tip2::test_data_control<tip2::details::merged_data<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest,WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>>::~test_data_control<tip2::details::merged_data<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest,WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>>((void **)&v20);
      tip2::details::shared_data<1,0,0>::complete_without_lock((__int64)(v17 + 2));
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, struct IVirtualDesktop *, __int64))(**((_QWORD **)this + 12) + 112LL))(
              *((_QWORD *)this + 12),
              a2,
              v3);
      v9 = v12;
      if ( v12 < 0 )
      {
        v11 = 811LL;
        goto LABEL_9;
      }
      v15 = v19;
      if ( v19 > (unsigned int)v19 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x336,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
          (const char *)0x8000FFFFLL);
      v12 = (*(__int64 (__fastcall **)(_QWORD, struct IVirtualDesktop *, _QWORD, _QWORD))(**((_QWORD **)this + 15) + 56LL))(
              *((_QWORD *)this + 15),
              a2,
              v15,
              (unsigned int)v3);
      v9 = v12;
      if ( v12 < 0 )
      {
        v11 = 823LL;
        goto LABEL_9;
      }
    }
    v9 = 0;
    goto LABEL_16;
  }
  v11 = 797LL;
LABEL_9:
  v10 = (unsigned int)v12;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)v10);
LABEL_16:
  tip2::test_watcher<tip2::details::merged_data<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest,WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>>::~test_watcher<tip2::details::merged_data<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest,WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>>((__int64)v16);
  return v9;
}
