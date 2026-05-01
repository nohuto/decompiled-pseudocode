/*
 * XREFs of ?Invoke@__abi_PointerToMemberWeakRefCapture@?1???$?0VXamlAltTabViewController@@P8IXamlSwitcherWindowInteractionEvents@@E$AAAXXZ@BecameEmptyEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVXamlAltTabViewController@@P8IXamlSwitcherWindowInteractionEvents@@E$AAAXXZW4CallbackContext@Platform@@_N@Z@UEAAXXZ @ 0x1802323B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Resolve@IWeakReference@Details@Platform@@UE$AAAPE$AAVObject@3@PEAVGuid@3@@Z @ 0x18009C0B8 (-Resolve@IWeakReference@Details@Platform@@UE$AAAPE$AAVObject@3@PEAVGuid@3@@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18009D964 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x18009D988 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18009D9A4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall `WindowsInternal::ComposableShell::Experiences::Switcher::BecameEmptyEventHandler::BecameEmptyEventHandler'::`2'::__abi_PointerToMemberWeakRefCapture::Invoke(
        __int64 a1)
{
  __int64 v2; // rbx
  __int64 (__fastcall ***v3)(_QWORD, _QWORD, _QWORD); // rdi
  int v4; // eax
  __int64 v5; // rbx
  char *pExceptionObject; // [rsp+40h] [rbp+8h] BYREF
  __int64 (__fastcall ***v8)(_QWORD, _QWORD, _QWORD); // [rsp+48h] [rbp+10h]
  void *Exception; // [rsp+50h] [rbp+18h]

  v2 = Platform::Details::IWeakReference::Resolve(*(_QWORD *)(a1 + 8), (__int64)&_uuidof__AVXamlAltTabViewController__);
  pExceptionObject = (char *)v2;
  v3 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))__abi_winrt_ptr_ctor(v2);
  v8 = v3;
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v2);
  if ( !v3 )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    Exception = (void *)Platform::DisconnectedException::DisconnectedException(Exception);
    pExceptionObject = (char *)__abi_winrt_ptr_ctor((__int64)Exception);
    throw (Platform::DisconnectedException **)&pExceptionObject;
  }
  pExceptionObject = 0LL;
  v4 = (**v3)(v3, &_uuidof__AVXamlAltTabViewController__, &pExceptionObject);
  __abi_ThrowIfFailed(v4);
  v5 = (__int64)pExceptionObject;
  Exception = pExceptionObject;
  (*(void (__fastcall **)(char *))(a1 + 16))(&pExceptionObject[*(int *)(a1 + 24)]);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v5);
  return __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>((__int64)v3);
}
