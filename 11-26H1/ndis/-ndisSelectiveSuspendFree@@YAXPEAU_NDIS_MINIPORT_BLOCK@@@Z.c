/*
 * XREFs of ?ndisSelectiveSuspendFree@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14014418C
 * Callers:
 *     ?ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14014427C (-ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14017E510 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     NdisNblTrackerDeregisterComponent @ 0x140054C00 (NdisNblTrackerDeregisterComponent.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140156F90 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisSelectiveSuspendFree(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  __int64 v3; // rdi
  __int64 v4; // rsi
  void *v5; // rcx

  SelectiveSuspend = a1->SelectiveSuspend;
  KeCancelTimer((PKTIMER)((char *)SelectiveSuspend + 16));
  ndisWaitForKernelObject((char *)SelectiveSuspend + 152);
  if ( *((_QWORD *)SelectiveSuspend + 75) )
  {
    v3 = 0LL;
    v4 = 5LL;
    do
    {
      v5 = *(void **)(*((_QWORD *)SelectiveSuspend + 75) + v3 + 8);
      if ( v5 )
      {
        ExFreePoolWithTag(v5, 0);
        *(_QWORD *)(*((_QWORD *)SelectiveSuspend + 75) + v3 + 8) = 0LL;
      }
      v3 += 24LL;
      --v4;
    }
    while ( v4 );
    ExFreePoolWithTag(*((PVOID *)SelectiveSuspend + 75), 0);
    *((_QWORD *)SelectiveSuspend + 75) = 0LL;
  }
  NdisNblTrackerDeregisterComponent(*((_QWORD *)SelectiveSuspend + 76));
  NdisNblTrackerDeregisterComponent(*((_QWORD *)SelectiveSuspend + 77));
  ExFreePoolWithTag(SelectiveSuspend, 0);
  a1->SelectiveSuspend = 0LL;
}
