/*
 * XREFs of ?Invoke@__abi_PointerToMemberWeakRefCapture@?1???$?0VXamlAltTabViewController@@P80@E$AAAXPE$AAVObject@Platform@@PE$AAVKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z@KeyEventHandler@Input@Xaml@UI@Windows@@QE$AAA@PE$AAVXamlAltTabViewController@@P87@E$AAAXPE$AAVObject@Platform@@PE$AAVKeyRoutedEventArgs@3456@@ZW4CallbackContext@9@_N@Z@UEAAX12@Z @ 0x1801F8DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x180021A28 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180021A7C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180021D28 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?Resolve@IWeakReference@Details@Platform@@UE$AAAPE$AAVObject@3@PEAVGuid@3@@Z @ 0x1801F8ED0 (-Resolve@IWeakReference@Details@Platform@@UE$AAAPE$AAVObject@3@PEAVGuid@3@@Z.c)
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall `Windows::UI::Xaml::Input::KeyEventHandler::KeyEventHandler'::`2'::__abi_PointerToMemberWeakRefCapture::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rbx
  __int64 (__fastcall ***v7)(_QWORD, _QWORD, _QWORD); // rdi
  void *Exception; // rax
  int v9; // eax
  __int64 v10; // rbx
  __int64 v12; // [rsp+20h] [rbp-28h]
  __int64 pExceptionObject; // [rsp+50h] [rbp+8h] BYREF
  __int64 (__fastcall ***v14)(_QWORD, _QWORD, _QWORD); // [rsp+68h] [rbp+20h]

  v6 = Platform::Details::IWeakReference::Resolve(*(_QWORD *)(a1 + 8), &_uuidof__AVXamlAltTabViewController__);
  pExceptionObject = v6;
  v7 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))__abi_winrt_ptr_ctor(v6);
  v14 = v7;
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v6);
  if ( !v7 )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    v12 = Platform::DisconnectedException::DisconnectedException(Exception);
    pExceptionObject = __abi_winrt_ptr_ctor(v12);
    throw (Platform::DisconnectedException **)&pExceptionObject;
  }
  pExceptionObject = 0LL;
  v9 = (**v7)(v7, &_uuidof__AVXamlAltTabViewController__, &pExceptionObject);
  __abi_ThrowIfFailed(v9);
  v10 = pExceptionObject;
  (*(void (__fastcall **)(__int64, __int64, __int64))(a1 + 16))(pExceptionObject + *(int *)(a1 + 24), a2, a3);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v10);
  return __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>((__int64)v7);
}
