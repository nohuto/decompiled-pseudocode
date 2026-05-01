/*
 * XREFs of ?reset@?$com_ptr_t@UIImmersiveAppCrusher@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1802B5EE4
 * Callers:
 *     ?InitializePrivilegedOperations@UwpWindowEventDispatcher@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x1800DD300 (-InitializePrivilegedOperations@UwpWindowEventDispatcher@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 *     ?InitializePrivilegedOperations@KioskPositioner@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x1801FBE80 (-InitializePrivilegedOperations@KioskPositioner@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 *     ?InitializePrivilegedOperations@WindowEventDispatcher@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x18041A5C0 (-InitializePrivilegedOperations@WindowEventDispatcher@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 *     ?CloseApplicationView@KioskPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804EFFDC (-CloseApplicationView@KioskPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?subscribe_to_services@GamingPosturePositioner@@UEAAXPEAUIServiceProvider@@@Z @ 0x180505A70 (-subscribe_to_services@GamingPosturePositioner@@UEAAXPEAUIServiceProvider@@@Z.c)
 *     ?unsubscribe_from_services@GamingPosturePositioner@@UEAAXPEAUIServiceProvider@@@Z @ 0x180506000 (-unsubscribe_from_services@GamingPosturePositioner@@UEAAXPEAUIServiceProvider@@@Z.c)
 *     ?CloseWinRTApplicationView@@YAXPEAUIWinRTApplicationView@@@Z @ 0x180576610 (-CloseWinRTApplicationView@@YAXPEAUIWinRTApplicationView@@@Z.c)
 *     ?subscribe_to_services@CopilotHotkeyManager@@UEAAXPEAUIServiceProvider@@@Z @ 0x180637760 (-subscribe_to_services@CopilotHotkeyManager@@UEAAXPEAUIServiceProvider@@@Z.c)
 *     ?unsubscribe_from_services@CopilotHotkeyManager@@UEAAXPEAUIServiceProvider@@@Z @ 0x180637CE0 (-unsubscribe_from_services@CopilotHotkeyManager@@UEAAXPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<IImmersiveAppCrusher,wil::err_exception_policy>::reset(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
