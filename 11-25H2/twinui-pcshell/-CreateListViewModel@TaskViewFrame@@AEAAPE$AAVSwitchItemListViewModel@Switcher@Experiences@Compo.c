/*
 * XREFs of ?CreateListViewModel@TaskViewFrame@@AEAAPE$AAVSwitchItemListViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@XZ @ 0x180222370
 * Callers:
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x18069558C (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 * Callees:
 *     ??0SwitchItemListViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVSwitchItemListViewModelArgs@1234@@Z @ 0x1800214F4 (--0SwitchItemListViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVSw.c)
 *     ??0SwitchItemListViewModelArgs@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@XZ @ 0x1800215AC (--0SwitchItemListViewModelArgs@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@XZ.c)
 *     ??$__abi_create_box@VSize@Foundation@Windows@@@@YAPE$AAV?$Box@VSize@Foundation@Windows@@@Platform@@VSize@Foundation@Windows@@@Z @ 0x180021800 (--$__abi_create_box@VSize@Foundation@Windows@@@@YAPE$AAV-$Box@VSize@Foundation@Windows@@@Platfor.c)
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x180021A28 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     ??0Size@Foundation@Windows@@QEAA@MM@Z @ 0x180021A44 (--0Size@Foundation@Windows@@QEAA@MM@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180021A7C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$to_cx@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@@@YAPE$AAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@AEBUIUnknown@Foundation@4winrt@@@Z @ 0x180021C2C (--$to_cx@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@@@YAPE$AAUISwitch.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180021D28 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?set@ItemIconSize@__ISwitchItemListViewModelArgsPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXPE$AAU?$IBox@VSize@Foundation@Windows@@@Platform@@@Z @ 0x1802BE260 (-set@ItemIconSize@__ISwitchItemListViewModelArgsPublicNonVirtuals@Switcher@Experiences@Composabl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall TaskViewFrame::CreateListViewModel(__int64 a1, __int64 a2, __int64 a3, void **a4)
{
  BOOL v5; // esi
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rdx
  int v11; // eax
  int v12; // eax
  __int64 *v13; // rax
  __int64 (__fastcall ***v14)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v15; // rdi
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  void **v20; // r9
  __int64 v21; // rdi
  __int64 v22; // rbx
  __int64 v24; // [rsp+60h] [rbp+30h] BYREF
  __int64 v25; // [rsp+68h] [rbp+38h]
  char v26; // [rsp+70h] [rbp+40h] BYREF
  __int64 (__fastcall ***v27)(_QWORD, _QWORD, _QWORD); // [rsp+78h] [rbp+48h]

  v5 = (*(_DWORD *)(a1 + 64) & 1) == 0;
  v24 = 0LL;
  v6 = WindowsInternal::ComposableShell::Experiences::Switcher::SwitchItemListViewModelArgs::SwitchItemListViewModelArgs(
         a1,
         a2,
         a3,
         a4);
  v24 = v6;
  v7 = __abi_winrt_ptr_ctor(v6);
  v25 = v7;
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v6);
  v8 = to_cx<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource>((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 88));
  v24 = v8;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 56LL))(v7, v8);
  __abi_ThrowIfFailed(v9);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v8);
  LOBYTE(v10) = 1;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 72LL))(v7, v10);
  __abi_ThrowIfFailed(v11);
  v12 = (*(__int64 (__fastcall **)(__int64, BOOL))(*(_QWORD *)v7 + 88LL))(v7, v5);
  __abi_ThrowIfFailed(v12);
  v13 = (__int64 *)Windows::Foundation::Size::Size((Windows::Foundation::Size *)&v26, 16.0, 16.0);
  v14 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))__abi_create_box<Windows::Foundation::Size>(*v13);
  v15 = (__int64)v14;
  v27 = v14;
  v16 = 0LL;
  v24 = 0LL;
  if ( v14 )
  {
    v17 = (**v14)(v14, &_uuidof__AU__IBox_VSize_Foundation_Windows___Platform__, &v24);
    __abi_ThrowIfFailed(v17);
    v16 = v24;
  }
  WindowsInternal::ComposableShell::Experiences::Switcher::__ISwitchItemListViewModelArgsPublicNonVirtuals::ItemIconSize::set(
    v7,
    v16);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v16);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v15);
  v24 = 0LL;
  v21 = WindowsInternal::ComposableShell::Experiences::Switcher::SwitchItemListViewModel::SwitchItemListViewModel(
          v18,
          v7,
          v19,
          v20);
  v24 = v21;
  v22 = __abi_winrt_ptr_ctor(v21);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v21);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v7);
  return v22;
}
