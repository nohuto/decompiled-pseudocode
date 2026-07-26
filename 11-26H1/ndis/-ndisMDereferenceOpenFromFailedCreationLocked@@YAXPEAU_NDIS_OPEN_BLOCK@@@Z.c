/*
 * XREFs of ?ndisMDereferenceOpenFromFailedCreationLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14009ECC4
 * Callers:
 *     NdisOpenAdapterEx @ 0x1401758D0 (NdisOpenAdapterEx.c)
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140181D90 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     NdisDereferenceWithTag @ 0x1400142A0 (NdisDereferenceWithTag.c)
 */

void __fastcall ndisMDereferenceOpenFromFailedCreationLocked(struct _NDIS_OPEN_BLOCK *a1)
{
  unsigned __int64 *p_RefCountLock; // rbx

  p_RefCountLock = &a1->RefCountLock;
  KeAcquireSpinLockAtDpcLevel(&a1->RefCountLock);
  NdisDereferenceWithTag((ULONG_PTR)a1->RefCountTracker, 1u);
  --a1->References;
  KeReleaseSpinLockFromDpcLevel(p_RefCountLock);
}
