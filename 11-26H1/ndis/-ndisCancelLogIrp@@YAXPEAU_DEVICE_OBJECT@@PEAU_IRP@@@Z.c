/*
 * XREFs of ?ndisCancelLogIrp@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x14009E710
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 */

void __fastcall ndisCancelLogIrp(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _NDIS_MINIPORT_BLOCK *v4; // rbx
  KIRQL v5; // dl
  KIRQL NewIrql; // [rsp+38h] [rbp+10h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  NewIrql = 0;
  v4 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)CurrentStackLocation->FileObject->FsContext + 1);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v4, &NewIrql);
  v5 = NewIrql;
  *((_QWORD *)v4->Log + 2) = 0LL;
  a2->IoStatus.Status = -1073741248;
  a2->IoStatus.Information = 0LL;
  v4->MiniportThread = 0LL;
  KeReleaseSpinLock(&v4->Lock, v5);
  IoReleaseCancelSpinLock(a2->CancelIrql);
  IofCompleteRequest(a2, 2);
}
