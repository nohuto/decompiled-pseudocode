/*
 * XREFs of ??1?$unique_ptr@VSmartCookie@@U?$default_delete@VSmartCookie@@@std@@@std@@QEAA@XZ @ 0x1802CF744
 * Callers:
 *     ?Register@ApplicationViewEventRegistration@details@AppViewEventHelpers@@UEAAJPEAUIApplicationViewCollection@@@Z @ 0x18022FEB0 (-Register@ApplicationViewEventRegistration@details@AppViewEventHelpers@@UEAAJPEAUIApplicationVie.c)
 *     ??1?$EventRegistration@UIApplicationViewCollection@@UIApplicationViewChangeListener@@@details@AppViewEventHelpers@@UEAA@XZ @ 0x18069A1E4 (--1-$EventRegistration@UIApplicationViewCollection@@UIApplicationViewChangeListener@@@details@Ap.c)
 *     ?Register@ShellHookRegistration@details@AppViewEventHelpers@@UEAAJPEAUIImmersiveShellHookService@@@Z @ 0x18069ADE0 (-Register@ShellHookRegistration@details@AppViewEventHelpers@@UEAAJPEAUIImmersiveShellHookService.c)
 *     ?Unregister@?$EventRegistration@UIApplicationViewCollection@@UIApplicationViewChangeListener@@@details@AppViewEventHelpers@@QEAAXXZ @ 0x18069AF6C (-Unregister@-$EventRegistration@UIApplicationViewCollection@@UIApplicationViewChangeListener@@@d.c)
 *     _AppViewEventHelpers::details::EventRegistration_IImmersiveShellHookService_IImmersiveShellHookNotification_::Unregister_::_1_::dtor$0 @ 0x1806DFB44 (_AppViewEventHelpers--details--EventRegistration_IImmersiveShellHookService_IImmers_ea_1806DFB44.c)
 * Callees:
 *     ??R?$default_delete@VSmartCookie@@@std@@QEBAXPEAVSmartCookie@@@Z @ 0x18069A3C0 (--R-$default_delete@VSmartCookie@@@std@@QEBAXPEAVSmartCookie@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<SmartCookie>::~unique_ptr<SmartCookie>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<SmartCookie>::operator()(a1, *a1);
  return result;
}
