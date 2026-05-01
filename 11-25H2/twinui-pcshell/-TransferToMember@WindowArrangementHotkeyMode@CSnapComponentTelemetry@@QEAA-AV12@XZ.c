/*
 * XREFs of ?TransferToMember@WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAA?AV12@XZ @ 0x18058D15C
 * Callers:
 *     ?HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x18058B250 (-HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1802C0FC4 (--0-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflector_ea_1802C0FC4.c)
 */

struct wil::details::IFailureCallback *__fastcall CSnapComponentTelemetry::WindowArrangementHotkeyMode::TransferToMember(
        __int64 a1,
        struct wil::details::IFailureCallback *a2)
{
  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    a2,
    a1,
    0);
  *(_QWORD *)a2 = &CSnapComponentTelemetry::WindowArrangementHotkeyMode::`vftable';
  return a2;
}
