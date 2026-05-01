/*
 * XREFs of ??0__abi_PointerToMemberWeakRefCapture@?1???$?0VXamlAltTabViewController@@P80@E$AAAXPE$AAVObject@Platform@@PE$AAVKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z@KeyEventHandler@Input@Xaml@UI@Windows@@QE$AAA@PE$AAVXamlAltTabViewController@@P86@E$AAAXPE$AAVObject@Platform@@PE$AAVKeyRoutedEventArgs@2345@@ZW4CallbackContext@8@_N@Z@QEAA@03@Z @ 0x1800A01B8
 * Callers:
 *     ??$?0VXamlAltTabViewController@@P80@E$AAAXPE$AAVObject@Platform@@PE$AAVKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z@KeyEventHandler@Input@Xaml@UI@Windows@@QE$AAA@PE$AAVXamlAltTabViewController@@P85@E$AAAXPE$AAVObject@Platform@@PE$AAVKeyRoutedEventArgs@1234@@ZW4CallbackContext@7@_N@Z @ 0x18009F084 (--$-0VXamlAltTabViewController@@P80@E$AAAXPE$AAVObject@Platform@@PE$AAVKeyRoutedEventArgs@Input@.c)
 * Callees:
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18009D964 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18009D9A4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?GetWeakReference@IWeakReferenceSource@Details@Platform@@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x18009E6AC (-GetWeakReference@IWeakReferenceSource@Details@Platform@@UE$AAAPE$AAUIWeakReference@23@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall `Windows::UI::Xaml::Input::KeyEventHandler::KeyEventHandler'::`2'::__abi_PointerToMemberWeakRefCapture::__abi_PointerToMemberWeakRefCapture(
        __int64 a1,
        __int64 a2,
        _OWORD *a3)
{
  __int64 WeakReference; // [rsp+38h] [rbp+10h]

  *(_QWORD *)a1 = &`Windows::UI::Xaml::Input::KeyEventHandler::KeyEventHandler'::`2'::__abi_PointerToMemberWeakRefCapture::`vftable';
  WeakReference = Platform::Details::IWeakReferenceSource::GetWeakReference((a2 + 152) & -(__int64)(a2 != 0));
  *(_QWORD *)(a1 + 8) = __abi_winrt_ptr_ctor(WeakReference);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(WeakReference);
  *(_OWORD *)(a1 + 16) = *a3;
  return a1;
}
