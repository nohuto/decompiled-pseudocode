/*
 * XREFs of ?ndisPcwUpdatePhysicalMiniportCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_K@Z @ 0x140138B70
 * Callers:
 *     ?ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x140068B60 (-ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 * Callees:
 *     ?ndisSSUpdateCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_K@Z @ 0x1400C6560 (-ndisSSUpdateCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_K@Z.c)
 */

void __fastcall ndisPcwUpdatePhysicalMiniportCounters(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2)
{
  a1->PhysicalPerformanceCounters->Uptime100ns = a2 - a1->TimeOfInitialization.QuadPart;
  if ( a1->SelectiveSuspend )
    ndisSSUpdateCounters(a1, a2);
}
