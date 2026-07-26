/*
 * XREFs of ?XNoteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140033880
 * Callers:
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140181D90 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x1400337F0 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockWrite @ 0x140033910 (NdisAcquireRWLockWrite.c)
 *     ?XSetupFrameTypeInFilter@@_Y2PAGENPNP@@AXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140179E20 (-XSetupFrameTypeInFilter@@_Y2PAGENPNP@@AXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void __fastcall XNoteFilterOpenAdapter(struct _X_FILTER *a1, struct _NDIS_OPEN_BLOCK *a2)
{
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rdi
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp+8h] BYREF

  ProtocolHandle = a2->ProtocolHandle;
  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  NdisAcquireRWLockWrite(a1->BindListLock, &LockState, 0);
  if ( ProtocolHandle->MajorNdisVersion < 6u )
  {
    a2->FilterNextOpen = a1->OpenList;
    a1->OpenList = a2;
  }
  else
  {
    XSetupFrameTypeInFilter(a1, a2);
  }
  ++a1->NumOpens;
  NdisReleaseRWLock(a1->BindListLock, &LockState);
}
