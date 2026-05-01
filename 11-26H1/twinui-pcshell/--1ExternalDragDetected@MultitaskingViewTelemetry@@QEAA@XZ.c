/*
 * XREFs of ??1ExternalDragDetected@MultitaskingViewTelemetry@@QEAA@XZ @ 0x1804DADF0
 * Callers:
 *     ?StartExternalDrag@ElementDragData@@AEAAJXZ @ 0x1804DC0B8 (-StartExternalDrag@ElementDragData@@AEAAJXZ.c)
 *     _ElementDragData::StartExternalDrag_::_1_::dtor$0 @ 0x1806F18F8 (_ElementDragData--StartExternalDrag_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006F0C8 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall MultitaskingViewTelemetry::ExternalDragDetected::~ExternalDragDetected(
        MultitaskingViewTelemetry::ExternalDragDetected *this)
{
  *(_QWORD *)this = &MultitaskingViewTelemetry::ExternalDragDetected::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
