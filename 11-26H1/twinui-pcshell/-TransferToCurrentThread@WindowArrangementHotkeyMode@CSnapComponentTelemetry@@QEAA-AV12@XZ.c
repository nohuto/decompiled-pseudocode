/*
 * XREFs of ?TransferToCurrentThread@WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAA?AV12@XZ @ 0x1805B12B0
 * Callers:
 *     ?HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x1805AF390 (-HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z.c)
 *     ?_OnHotkeyModeEnd@HotkeyHandler@@AEAAXPEAUISnappedWindow@@W4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x1805B142C (-_OnHotkeyModeEnd@HotkeyHandler@@AEAAXPEAUISnappedWindow@@W4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@.c)
 * Callees:
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1802B7B00 (--0-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflector_ea_1802B7B00.c)
 */

struct wil::details::IFailureCallback *__fastcall CSnapComponentTelemetry::WindowArrangementHotkeyMode::TransferToCurrentThread(
        __int64 a1,
        struct wil::details::IFailureCallback *a2)
{
  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    a2,
    a1,
    **(_DWORD **)(a1 + 272) == 1);
  *(_QWORD *)a2 = &CSnapComponentTelemetry::WindowArrangementHotkeyMode::`vftable';
  return a2;
}
