/*
 * XREFs of ?ndisWdfAcquireAsyncPowerRefAndResume@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400C6EE4
 * Callers:
 *     ?ndisSelectiveSuspendStopWdf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400C67A4 (-ndisSelectiveSuspendStopWdf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 * Callees:
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140008810 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140009300 (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 */

void __fastcall ndisWdfAcquireAsyncPowerRefAndResume(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 v2; // rdx

  ndisWdfAcquirePowerReferenceHelper(a1, 0, 0);
  ndisWdfSelectiveSuspendResumeOperations(a1, v2, 1);
}
