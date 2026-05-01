/*
 * XREFs of ?FirstFrameRendered@?QIXamlSwitcherWindowInteractionEvents@@VirtualDesktopSwitcherController@@UE$AAAXPE$AAVObject@Platform@@PE$AAVRoutedEventArgs@Xaml@UI@Windows@@@Z @ 0x1806C0BEC
 * Callers:
 *     ?FirstFrameRendered@?QIXamlSwitcherWindowInteractionEvents@@VirtualDesktopSwitcherController@@WBI@E$AAAXPE$AAVObject@Platform@@PE$AAVRoutedEventArgs@Xaml@UI@Windows@@@Z @ 0x1806C0C30 (-FirstFrameRendered@-QIXamlSwitcherWindowInteractionEvents@@VirtualDesktopSwitcherController@@WB.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$query@UIVirtualDesktopSwitcherViewHostInternal@@@?$com_ptr_t@UIVirtualDesktopSwitcherHost@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIVirtualDesktopSwitcherViewHostInternal@@Uerr_exception_policy@wil@@@1@XZ @ 0x1806C0A00 (--$query@UIVirtualDesktopSwitcherViewHostInternal@@@-$com_ptr_t@UIVirtualDesktopSwitcherHost@@Ue.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall _FirstFrameRendered__QIXamlSwitcherWindowInteractionEvents__VirtualDesktopSwitcherController__UE_AAAXPE_AAVObject_Platform__PE_AAVRoutedEventArgs_Xaml_UI_Windows___Z(
        __int64 a1)
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  wil::com_ptr_t<IVirtualDesktopSwitcherHost,wil::err_exception_policy>::query<IVirtualDesktopSwitcherViewHostInternal>(
    (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(a1 + 168),
    &v1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v1);
}
