/*
 * XREFs of ?Invoke@RoutedEventHandler@Xaml@UI@Windows@@UE$AAAXPE$AAVObject@Platform@@PE$AAVRoutedEventArgs@234@@Z @ 0x1802098A0
 * Callers:
 *     ?__abi_Windows_UI_Xaml_RoutedEventHandler___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@RoutedEventHandler@Xaml@UI@Windows@@2345@UE$AAAJPE$AAVObject@Platform@@PE$AAVRoutedEventArgs@345@@Z @ 0x180209870 (-__abi_Windows_UI_Xaml_RoutedEventHandler___abi_IDelegate____abi_Invoke@-Q__abi_IDelegate@Routed.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Windows::UI::Xaml::RoutedEventHandler::Invoke(_QWORD **a1)
{
  int v1; // eax

  if ( *a1 == &Windows::UI::Xaml::RoutedEventHandler::`vftable'{for `__abi_IUnknown'} )
  {
    (*(void (__fastcall **)(_QWORD *))(*a1[37] + 8LL))(a1[37]);
  }
  else
  {
    v1 = ((__int64 (__fastcall *)(_QWORD **))(*a1)[3])(a1);
    __abi_ThrowIfFailed(v1);
  }
}
