/*
 * XREFs of imp_WdfIoResourceListInsertDescriptor @ 0x1400993A0
 * Callers:
 *     <none>
 * Callees:
 *     FxIoResourceListInsertDescriptor @ 0x140098CA0 (FxIoResourceListInsertDescriptor.c)
 */

int __fastcall imp_WdfIoResourceListInsertDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESLIST__ *ResourceList,
        _IO_RESOURCE_DESCRIPTOR *Descriptor,
        unsigned int Index)
{
  return FxIoResourceListInsertDescriptor(DriverGlobals, ResourceList, Descriptor, Index);
}
