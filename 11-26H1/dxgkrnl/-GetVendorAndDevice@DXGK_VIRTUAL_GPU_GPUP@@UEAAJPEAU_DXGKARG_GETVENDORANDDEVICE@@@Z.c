/*
 * XREFs of ?GetVendorAndDevice@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_GETVENDORANDDEVICE@@@Z @ 0x14021E800
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiGetVendorAndDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETVENDORANDDEVICE@@@Z @ 0x1401946FC (-DdiGetVendorAndDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETVENDORANDDEVICE@@@Z.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::GetVendorAndDevice(
        ADAPTER_RENDER **this,
        struct _DXGKARG_GETVENDORANDDEVICE *a2)
{
  return ADAPTER_RENDER::DdiGetVendorAndDevice(this[1], a2);
}
