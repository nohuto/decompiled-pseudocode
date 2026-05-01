/*
 * XREFs of ??4DragSwitchItem@MultitaskingViewTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1804DAEE8
 * Callers:
 *     ?StartDrag@ElementDragData@@UEAAJW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804DBE20 (-StartDrag@ElementDragData@@UEAAJW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1804DAB98 (--0-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflector_ea_1804DAB98.c)
 *     ??1DragSwitchItem@MultitaskingViewTelemetry@@QEAA@XZ @ 0x1804DAD6C (--1DragSwitchItem@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ??4?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1804DAE1C (--4-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 */

_QWORD *__fastcall MultitaskingViewTelemetry::DragSwitchItem::operator=(_QWORD *a1, __int64 a2)
{
  _QWORD v5[42]; // [rsp+20h] [rbp-168h] BYREF

  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v5,
    (__int64)a1);
  v5[0] = &MultitaskingViewTelemetry::DragSwitchItem::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::operator=(
    a1,
    a2);
  MultitaskingViewTelemetry::DragSwitchItem::~DragSwitchItem((MultitaskingViewTelemetry::DragSwitchItem *)v5);
  return a1;
}
