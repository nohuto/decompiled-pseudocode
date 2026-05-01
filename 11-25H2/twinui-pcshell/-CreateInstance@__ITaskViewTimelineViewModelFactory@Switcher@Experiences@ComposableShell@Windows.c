/*
 * XREFs of ?CreateInstance@__ITaskViewTimelineViewModelFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVTaskViewTimelineViewModel@2345@PE$AAVSwitchItemListViewModel@2345@PE$AAVVirtualDesktopBarElementViewModel@2345@@Z @ 0x1802010B0
 * Callers:
 *     ??0TaskViewTimelineViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVSwitchItemListViewModel@1234@PE$AAVVirtualDesktopBarElementViewModel@1234@@Z @ 0x180200FF0 (--0TaskViewTimelineViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAV.c)
 * Callees:
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x180021A28 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180021A7C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180021D28 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::__ITaskViewTimelineViewModelFactory::CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v3; // eax
  __int64 v4; // rbx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)a1 + 56LL))(a1, a2, a3, &v6);
  __abi_ThrowIfFailed(v3);
  v4 = __abi_winrt_ptr_ctor(v6);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v6);
  return v4;
}
