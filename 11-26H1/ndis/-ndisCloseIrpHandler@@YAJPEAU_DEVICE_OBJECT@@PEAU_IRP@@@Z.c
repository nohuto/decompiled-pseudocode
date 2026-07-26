/*
 * XREFs of ?ndisCloseIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x14005A470
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCloseHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@_N@Z @ 0x14009E7B4 (-ndisCloseHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@_N@Z.c)
 */

__int64 __fastcall ndisCloseIrpHandler(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  return ndisCloseHandler(a1, (struct _NDIS_MINIPORT_BLOCK *)a1->DeviceExtension, a2, 0);
}
