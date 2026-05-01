/*
 * XREFs of ?Invoke@__abi_PointerToMemberWeakRefCapture@?1???$?0UIXamlMultitaskingViewController@@P80@E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z@ItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMultitaskingViewController@@P87@E$AAAXPE$AAUISwitchItem@Multitasking@5Internal@Windows@@@ZW4CallbackContext@Platform@@_N@Z@UEAAX1@Z @ 0x18067ADC0
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
__int64 __fastcall `WindowsInternal::ComposableShell::Experiences::Switcher::ItemInvokedEventHandler::ItemInvokedEventHandler'::`2'::__abi_PointerToMemberWeakRefCapture::Invoke(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rbx
  __int64 (__fastcall ***v5)(_QWORD, __int64, __int64 *); // rdi
  __int64 v6; // rbx
  __int64 pExceptionObject; // [rsp+40h] [rbp+8h] BYREF
  __int64 (__fastcall ***v9)(_QWORD, __int64, __int64 *); // [rsp+50h] [rbp+18h]
  void *Exception; // [rsp+58h] [rbp+20h]

  v4 = Platform::Details::IWeakReference::Resolve(
         *(_QWORD *)(a1 + 8),
         (__int64)&_uuidof__AUIXamlMultitaskingViewController__);
  pExceptionObject = v4;
  v5 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))__abi_winrt_ptr_ctor(v4);
  v9 = v5;
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v4);
  if ( !v5 )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    Exception = (void *)Platform::DisconnectedException::DisconnectedException(Exception);
    pExceptionObject = __abi_winrt_ptr_ctor((__int64)Exception);
    throw (Platform::DisconnectedException **)&pExceptionObject;
  }
  v6 = __abi_winrt_cast_to(0, v5, (__int64)&_uuidof__AUIXamlMultitaskingViewController__);
  pExceptionObject = v6;
  (*(void (__fastcall **)(__int64, __int64))(a1 + 16))(v6, a2);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v6);
  return __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>((__int64)v5);
}
