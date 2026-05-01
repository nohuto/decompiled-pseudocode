/*
 * XREFs of ??1?$EventListener@UIImmersiveShellHookService@@UIImmersiveShellHookNotification@@VShellHookRegistration@details@AppViewEventHelpers@@@AppViewEventHelpers@@QEAA@XZ @ 0x1806C1F40
 * Callers:
 *     ??1AppViewDataSourceAdapterBase@@IEAA@XZ @ 0x1806C20B0 (--1AppViewDataSourceAdapterBase@@IEAA@XZ.c)
 *     ??1ShellHookEventListener@AppViewEventHelpers@@QEAA@XZ @ 0x1806C2130 (--1ShellHookEventListener@AppViewEventHelpers@@QEAA@XZ.c)
 * Callees:
 *     ?Unregister@?$EventListener@UIImmersiveShellHookService@@UIImmersiveShellHookNotification@@VShellHookRegistration@details@AppViewEventHelpers@@@AppViewEventHelpers@@QEAAXXZ @ 0x18015FC54 (-Unregister@-$EventListener@UIImmersiveShellHookService@@UIImmersiveShellHookNotification@@VShel.c)
 */

void __fastcall AppViewEventHelpers::EventListener<IImmersiveShellHookService,IImmersiveShellHookNotification,AppViewEventHelpers::details::ShellHookRegistration>::~EventListener<IImmersiveShellHookService,IImmersiveShellHookNotification,AppViewEventHelpers::details::ShellHookRegistration>(
        __int64 a1)
{
  AppViewEventHelpers::EventListener<IImmersiveShellHookService,IImmersiveShellHookNotification,AppViewEventHelpers::details::ShellHookRegistration>::Unregister(a1);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 8));
}
