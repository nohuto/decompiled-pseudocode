/*
 * XREFs of ndisWatchdogReportTimeoutToDriver @ 0x1400C98C0
 * Callers:
 *     ndisReportTimeoutWaitingForExternalDriver @ 0x1401452A8 (ndisReportTimeoutWaitingForExternalDriver.c)
 * Callees:
 *     ?ndisWdfNotifyStuckOperation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CX_STUCK_OPERATION_TYPE@@_K@Z @ 0x1400B411C (-ndisWdfNotifyStuckOperation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CX_STUCK_OPERATION_TYPE@@_K@Z.c)
 *     ndisGetMiniportFromObject @ 0x140156480 (ndisGetMiniportFromObject.c)
 */

void __fastcall ndisWatchdogReportTimeoutToDriver(int a1, __int64 a2)
{
  struct _NDIS_MINIPORT_BLOCK *MiniportFromObject; // rax
  __int64 v3; // r8
  int v4; // r9d

  if ( a1 == 35 )
  {
    MiniportFromObject = (struct _NDIS_MINIPORT_BLOCK *)ndisGetMiniportFromObject(*(_QWORD *)(a2 + 16));
    if ( MiniportFromObject )
      ndisWdfNotifyStuckOperation(MiniportFromObject, 1u, *(_QWORD *)(v3 + 40), v4);
  }
}
