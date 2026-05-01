/*
 * XREFs of ?TransferToMember@JointResize@JointResizeTelemetry@@QEAA?AV12@XZ @ 0x18053AB14
 * Callers:
 *     ?OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAUIArrangedWindowResizeStartedEventArgs@3456@@Z @ 0x180538F90 (-OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEv.c)
 *     ?TagWindowsForResize@JointResize@@AEAAXXZ @ 0x18053A908 (-TagWindowsForResize@JointResize@@AEAAXXZ.c)
 * Callees:
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x180537400 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRef_ea_180537400.c)
 */

struct wil::details::IFailureCallback *__fastcall JointResizeTelemetry::JointResize::TransferToMember(
        __int64 a1,
        struct wil::details::IFailureCallback *a2)
{
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    a2,
    a1,
    0);
  *(_QWORD *)a2 = &JointResizeTelemetry::JointResize::`vftable';
  return a2;
}
