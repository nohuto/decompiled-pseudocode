/*
 * XREFs of ??1GetInputReportResult@@QEAA@XZ @ 0x180020C2C
 * Callers:
 *     _DockDeviceCollection::OnDeviceAttach_::_1_::dtor$2 @ 0x1801D9BDC (_DockDeviceCollection--OnDeviceAttach_--_1_--dtor$2.c)
 *     _DockDeviceCollection::OnReportQueryCallback_::_1_::dtor$0 @ 0x1801D9C00 (_DockDeviceCollection--OnReportQueryCallback_--_1_--dtor$0.c)
 *     _NonBamoInputDeliveryServer::OnKernelInputEvent_::_1_::dtor$0 @ 0x1801DBD2A (_NonBamoInputDeliveryServer--OnKernelInputEvent_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall GetInputReportResult::~GetInputReportResult(void **this, const struct std::nothrow_t *a2)
{
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(this + 1, a2);
}
