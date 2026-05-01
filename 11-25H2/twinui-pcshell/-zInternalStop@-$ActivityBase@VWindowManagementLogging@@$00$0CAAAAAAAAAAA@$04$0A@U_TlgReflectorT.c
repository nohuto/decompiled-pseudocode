/*
 * XREFs of ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18018802C
 * Callers:
 *     ?StopActivity@CreateMultitaskingViewHost@MultitaskingViewTelemetry@@MEAAXXZ @ 0x180187DF0 (-StopActivity@CreateMultitaskingViewHost@MultitaskingViewTelemetry@@MEAAXXZ.c)
 *     ?Stop@DragSwitchItem@MultitaskingViewTelemetry@@QEAAXI@Z @ 0x1804CA170 (-Stop@DragSwitchItem@MultitaskingViewTelemetry@@QEAAXI@Z.c)
 *     ?StopActivity@DragSwitchItem@MultitaskingViewTelemetry@@MEAAXXZ @ 0x1804CA410 (-StopActivity@DragSwitchItem@MultitaskingViewTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@SnapAssistProcessing@CSnapComponentTelemetry@@MEAAXXZ @ 0x180584020 (-StopActivity@SnapAssistProcessing@CSnapComponentTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@SnapAssistTabletModeProcessing@CSnapComponentTelemetry@@MEAAXXZ @ 0x180584250 (-StopActivity@SnapAssistTabletModeProcessing@CSnapComponentTelemetry@@MEAAXXZ.c)
 *     ?Stop@WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAAXI@Z @ 0x18058CA58 (-Stop@WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAAXI@Z.c)
 *     ?StopActivity@WindowArrangementHotkeyMode@CSnapComponentTelemetry@@MEAAXXZ @ 0x18058CCC0 (-StopActivity@WindowArrangementHotkeyMode@CSnapComponentTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@WindowArrangementHotkeyProcessing@CSnapComponentTelemetry@@MEAAXXZ @ 0x18058CEF0 (-StopActivity@WindowArrangementHotkeyProcessing@CSnapComponentTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180188070 (-LockExclusive@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorT.c)
 */

void __fastcall wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v2 = SRWLock;
  **(_DWORD **)(a1 + 272) = 2;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
