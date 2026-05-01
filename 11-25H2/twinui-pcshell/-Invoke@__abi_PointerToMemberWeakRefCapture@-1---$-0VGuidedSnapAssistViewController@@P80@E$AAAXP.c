/*
 * XREFs of ?Invoke@__abi_PointerToMemberWeakRefCapture@?1???$?0VGuidedSnapAssistViewController@@P80@E$AAAXPE$AAVObject@Platform@@PE$AAVSnapAssistRegionViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z@?$TypedEventHandler@PE$AAVObject@Platform@@PE$AAVSnapAssistRegionViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Foundation@Windows@@QE$AAA@PE$AAVGuidedSnapAssistViewController@@P85@E$AAAXPE$AAVObject@Platform@@PE$AAVSnapAssistRegionViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@ZW4CallbackContext@7@_N@Z@UEAAX12@Z @ 0x1806977C0
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180021A7C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180021D28 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801AAFC0 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?Resolve@IWeakReference@Details@Platform@@UE$AAAPE$AAVObject@3@PEAVGuid@3@@Z @ 0x1801F8ED0 (-Resolve@IWeakReference@Details@Platform@@UE$AAAPE$AAVObject@3@PEAVGuid@3@@Z.c)
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall `Windows::Foundation::TypedEventHandler<Platform::Object __gc *,WindowsInternal::ComposableShell::Experiences::Switcher::SnapAssistRegionViewModel __gc *>::TypedEventHandler<Platform::Object __gc *,WindowsInternal::ComposableShell::Experiences::Switcher::SnapAssistRegionViewModel __gc *>'::`2'::__abi_PointerToMemberWeakRefCapture::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rbx
  __int64 (__fastcall ***v7)(_QWORD, __int64, __int64 *); // rdi
  void *Exception; // rax
  __int64 v9; // rbx
  __int64 v11; // [rsp+20h] [rbp-28h]
  __int64 pExceptionObject; // [rsp+50h] [rbp+8h] BYREF
  __int64 (__fastcall ***v13)(_QWORD, __int64, __int64 *); // [rsp+68h] [rbp+20h]

  v6 = Platform::Details::IWeakReference::Resolve(
         *(_QWORD *)(a1 + 8),
         (__int64)&_uuidof__AVGuidedSnapAssistViewController__);
  pExceptionObject = v6;
  v7 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))__abi_winrt_ptr_ctor(v6);
  v13 = v7;
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v6);
  if ( !v7 )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    v11 = Platform::DisconnectedException::DisconnectedException(Exception);
    pExceptionObject = __abi_winrt_ptr_ctor(v11);
    throw (Platform::DisconnectedException **)&pExceptionObject;
  }
  v9 = __abi_winrt_cast_to(0, v7, (__int64)&_uuidof__AVGuidedSnapAssistViewController__);
  pExceptionObject = v9;
  (*(void (__fastcall **)(__int64, __int64, __int64))(a1 + 16))(v9 + *(int *)(a1 + 24), a2, a3);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v9);
  return __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>((__int64)v7);
}
