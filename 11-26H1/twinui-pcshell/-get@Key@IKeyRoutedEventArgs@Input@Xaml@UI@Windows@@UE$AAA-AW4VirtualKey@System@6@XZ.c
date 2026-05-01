/*
 * XREFs of ?get@Key@IKeyRoutedEventArgs@Input@Xaml@UI@Windows@@UE$AAA?AW4VirtualKey@System@6@XZ @ 0x1802C2338
 * Callers:
 *     ?OnAltKeyUp@XamlAltTabViewController@@QE$AAAXPE$AAVObject@Platform@@PE$AAVKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z @ 0x1801D6670 (-OnAltKeyUp@XamlAltTabViewController@@QE$AAAXPE$AAVObject@Platform@@PE$AAVKeyRoutedEventArgs@Inp.c)
 * Callees:
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x18009D988 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::UI::Xaml::Input::IKeyRoutedEventArgs::Key::get(__int64 *a1)
{
  __int64 v1; // rax
  int v2; // eax
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0;
  v2 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(v1 + 48))(a1, &v4);
  __abi_ThrowIfFailed(v2);
  return v4;
}
