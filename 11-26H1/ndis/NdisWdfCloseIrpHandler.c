/*
 * XREFs of NdisWdfCloseIrpHandler @ 0x1400644D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCloseHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@_N@Z @ 0x14009E7B4 (-ndisCloseHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@_N@Z.c)
 */

__int64 __fastcall NdisWdfCloseIrpHandler(struct _IRP *a1)
{
  void *FsContext; // rcx

  FsContext = a1->Tail.Overlay.CurrentStackLocation->FileObject->FsContext;
  return ndisCloseHandler(*(struct _DEVICE_OBJECT **)FsContext, *((struct _NDIS_MINIPORT_BLOCK **)FsContext + 1), a1, 1);
}
