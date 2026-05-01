/*
 * XREFs of ?Invoke@__abi_PointerToMemberWeakRefCapture@?1???$?0VXamlAltTabViewController@@P8IXamlMultitaskingViewController@@E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z@ItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVXamlAltTabViewController@@P8IXamlMultitaskingViewController@@E$AAAXPE$AAUISwitchItem@Multitasking@5Internal@Windows@@@ZW4CallbackContext@Platform@@_N@Z@UEAAX1@Z @ 0x18009D000
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
__int64 __fastcall `WindowsInternal::ComposableShell::Experiences::Switcher::ItemInvokedEventHandler::ItemInvokedEventHandler'::`2'::__abi_PointerToMemberWeakRefCapture::Invoke(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rbx
  __int64 (__fastcall ***v7)(_QWORD, void *, __int64 *); // rdi
  int v8; // eax
  __int64 v9; // rbx
  __int64 pExceptionObject; // [rsp+50h] [rbp+30h] BYREF
  __int64 (__fastcall ***v12)(_QWORD, void *, __int64 *); // [rsp+60h] [rbp+40h]
  void *Exception; // [rsp+68h] [rbp+48h]

  v4 = *(_QWORD *)(a1 + 8);
  pExceptionObject = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)v4 + 24LL))(
         v4,
         &_uuidof__AVXamlAltTabViewController__,
         &pExceptionObject);
  __abi_ThrowIfFailed(v5);
  v6 = __abi_winrt_ptr_ctor(pExceptionObject);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(pExceptionObject);
  v12 = (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))v6;
  v7 = (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))__abi_winrt_ptr_ctor(v6);
  v12 = v7;
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v6);
  if ( !v7 )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    Exception = (void *)Platform::DisconnectedException::DisconnectedException(Exception);
    pExceptionObject = __abi_winrt_ptr_ctor(Exception);
    throw (Platform::DisconnectedException **)&pExceptionObject;
  }
  pExceptionObject = 0LL;
  v8 = (**v7)(v7, &_uuidof__AVXamlAltTabViewController__, &pExceptionObject);
  __abi_ThrowIfFailed(v8);
  v9 = pExceptionObject;
  Exception = (void *)pExceptionObject;
  (*(void (__fastcall **)(__int64, __int64))(a1 + 16))(pExceptionObject + *(int *)(a1 + 24), a2);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v9);
  return __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v7);
}
