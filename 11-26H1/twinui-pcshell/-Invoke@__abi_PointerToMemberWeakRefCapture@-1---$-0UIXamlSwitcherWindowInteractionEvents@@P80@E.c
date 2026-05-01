/*
 * XREFs of ?Invoke@__abi_PointerToMemberWeakRefCapture@?1???$?0UIXamlSwitcherWindowInteractionEvents@@P80@E$AAAXPE$AAVObject@Platform@@PE$AAVRoutedEventArgs@Xaml@UI@Windows@@@Z@RoutedEventHandler@Xaml@UI@Windows@@QE$AAA@PE$AAUIXamlSwitcherWindowInteractionEvents@@P86@E$AAAXPE$AAVObject@Platform@@PE$AAVRoutedEventArgs@345@@ZW4CallbackContext@8@_N@Z@UEAAX12@Z @ 0x18009C220
 * Callers:
 *     <none>
 * Callees:
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18009D964 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x18009D988 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18009D9A4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall `Windows::UI::Xaml::RoutedEventHandler::RoutedEventHandler'::`2'::__abi_PointerToMemberWeakRefCapture::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rbx
  __int64 (__fastcall ***v9)(_QWORD, const struct _GUID *, __int64 *); // rdi
  void *Exception; // rax
  int v11; // eax
  __int64 v12; // rbx
  __int64 v14; // [rsp+20h] [rbp-10h]
  __int64 pExceptionObject; // [rsp+60h] [rbp+30h] BYREF
  __int64 (__fastcall ***v16)(_QWORD, const struct _GUID *, __int64 *); // [rsp+78h] [rbp+48h]

  v6 = *(_QWORD *)(a1 + 8);
  pExceptionObject = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, const struct _GUID *, __int64 *))(*(_QWORD *)v6 + 24LL))(
         v6,
         &_uuidof__AUIXamlSwitcherWindowInteractionEvents__,
         &pExceptionObject);
  __abi_ThrowIfFailed(v7);
  v8 = __abi_winrt_ptr_ctor(pExceptionObject);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(pExceptionObject);
  v16 = (__int64 (__fastcall ***)(_QWORD, const struct _GUID *, __int64 *))v8;
  v9 = (__int64 (__fastcall ***)(_QWORD, const struct _GUID *, __int64 *))__abi_winrt_ptr_ctor(v8);
  v16 = v9;
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v8);
  if ( !v9 )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    v14 = Platform::DisconnectedException::DisconnectedException(Exception);
    pExceptionObject = __abi_winrt_ptr_ctor(v14);
    throw (Platform::DisconnectedException **)&pExceptionObject;
  }
  pExceptionObject = 0LL;
  v11 = (**v9)(v9, &_uuidof__AUIXamlSwitcherWindowInteractionEvents__, &pExceptionObject);
  __abi_ThrowIfFailed(v11);
  v12 = pExceptionObject;
  (*(void (__fastcall **)(__int64, __int64, __int64))(a1 + 16))(pExceptionObject, a2, a3);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v12);
  return __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v9);
}
