/*
 * XREFs of HamFreeBuffer @ 0x1800091F0
 * Callers:
 *     HamCompleteActivityRestore @ 0x1800027C0 (HamCompleteActivityRestore.c)
 *     HampConnectionDestroy @ 0x180004D70 (HampConnectionDestroy.c)
 *     RmpClientWnfDestroySubscription @ 0x180004DD0 (RmpClientWnfDestroySubscription.c)
 *     HampConnectionCleanup @ 0x180004ECC (HampConnectionCleanup.c)
 *     CrmRegister @ 0x1800089A0 (CrmRegister.c)
 *     CrmActivityAllocateInternal @ 0x180008E10 (CrmActivityAllocateInternal.c)
 *     CrmActivityAllocate @ 0x180008F20 (CrmActivityAllocate.c)
 *     HamCreateActivityEx @ 0x180009830 (HamCreateActivityEx.c)
 *     HamCreateExtendedExecution @ 0x18000C7C0 (HamCreateExtendedExecution.c)
 *     ?CrmpActivityQueryWindowClosedReasons@@YAJPEAU_CRMP_ACTIVITY_CONTEXT@@PEAPEAW4_CRM_WINDOW_CLOSED_REASON@@PEAK@Z @ 0x18000F220 (-CrmpActivityQueryWindowClosedReasons@@YAJPEAU_CRMP_ACTIVITY_CONTEXT@@PEAPEAW4_CRM_WINDOW_CLOSED.c)
 *     HamPlmNotifyNewSession @ 0x180011650 (HamPlmNotifyNewSession.c)
 *     HamConnectToServerEx @ 0x180011AB0 (HamConnectToServerEx.c)
 *     HamAssociateActivityContext @ 0x18001A4B0 (HamAssociateActivityContext.c)
 *     HampCltDelayCloseContextDestroy @ 0x18001B608 (HampCltDelayCloseContextDestroy.c)
 *     UnsubscribeActivityCoordinatorPolicyInternal @ 0x18001BC58 (UnsubscribeActivityCoordinatorPolicyInternal.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall HamFreeBuffer(void *a1)
{
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
