/*
 * XREFs of HamFreeBuffer @ 0x180004D70
 * Callers:
 *     HamPlmNotifyNewSession @ 0x180001210 (HamPlmNotifyNewSession.c)
 *     HamCompleteActivityRestore @ 0x180001BB0 (HamCompleteActivityRestore.c)
 *     HampConnectionDestroy @ 0x1800041CC (HampConnectionDestroy.c)
 *     RmpClientWnfDestroySubscription @ 0x18000422C (RmpClientWnfDestroySubscription.c)
 *     HampConnectionCleanup @ 0x18000432C (HampConnectionCleanup.c)
 *     CrmRegister @ 0x180004520 (CrmRegister.c)
 *     CrmActivityAllocateInternal @ 0x180004990 (CrmActivityAllocateInternal.c)
 *     CrmActivityAllocate @ 0x180004AA0 (CrmActivityAllocate.c)
 *     HamCreateActivityEx @ 0x180008B40 (HamCreateActivityEx.c)
 *     HamCreateExtendedExecution @ 0x18000C490 (HamCreateExtendedExecution.c)
 *     ?CrmpActivityQueryWindowClosedReasons@@YAJPEAU_CRMP_ACTIVITY_CONTEXT@@PEAPEAW4_CRM_WINDOW_CLOSED_REASON@@PEAK@Z @ 0x18000E3D0 (-CrmpActivityQueryWindowClosedReasons@@YAJPEAU_CRMP_ACTIVITY_CONTEXT@@PEAPEAW4_CRM_WINDOW_CLOSED.c)
 *     HamConnectToServerEx @ 0x180010990 (HamConnectToServerEx.c)
 *     HamAssociateActivityContext @ 0x180018A30 (HamAssociateActivityContext.c)
 *     UnsubscribeActivityCoordinatorPolicyInternal @ 0x18001A1B0 (UnsubscribeActivityCoordinatorPolicyInternal.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall HamFreeBuffer(void *a1)
{
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
