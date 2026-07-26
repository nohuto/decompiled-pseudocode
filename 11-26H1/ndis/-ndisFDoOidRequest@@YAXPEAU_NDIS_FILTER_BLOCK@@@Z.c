/*
 * XREFs of ?ndisFDoOidRequest@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14004B710
 * Callers:
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x14000F6A0 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 * Callees:
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14008C720 (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 */

void __fastcall ndisFDoOidRequest(struct _NDIS_FILTER_BLOCK *a1)
{
  KIRQL v2; // al
  KIRQL v3; // bl

  if ( KeExpandKernelStackAndCalloutEx((PEXPAND_STACK_CALLOUT)ndisFDoOidRequestInternal, a1, (unsigned int)Size, 0, 0LL) < 0 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->LockThread = KeGetCurrentThread();
    v3 = v2;
    a1->StackExpansionFallback.PendingWork.IssueOidRequest = 1;
    ndisQueueStackExpansionFallbackWorkItem(a1);
    a1->LockThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v3);
  }
}
