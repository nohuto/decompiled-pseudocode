/*
 * XREFs of ?NdisPDPIQueryQueueDepth@@YAXPEBU_NDIS_PD_QUEUE@@PEA_K@Z @ 0x1400A68B0
 * Callers:
 *     ?ndisPDUpdateQDepthCounter@@YAXPEAUNDIS_PD_EC@@@Z @ 0x1400A7224 (-ndisPDUpdateQDepthCounter@@YAXPEAUNDIS_PD_EC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall NdisPDPIQueryQueueDepth(const struct _NDIS_PD_QUEUE *a1, unsigned __int64 *a2)
{
  (*((void (__fastcall **)(const struct _NDIS_PD_QUEUE *, unsigned __int64 *))a1->PDPlatformReserved[0] + 2))(a1, a2);
}
