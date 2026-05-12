/*
 * XREFs of NvmeAdapterPoFxD3Completion @ 0x140124000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NvmeAdapterPoFxD3Completion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _QWORD *Context)
{
  *(_DWORD *)(Context[20] + 76LL) &= ~4u;
}
