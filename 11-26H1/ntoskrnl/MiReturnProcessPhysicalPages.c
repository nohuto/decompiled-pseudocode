/*
 * XREFs of MiReturnProcessPhysicalPages @ 0x140B47810
 * Callers:
 *     MiFreePhysicalPageChain @ 0x1403D12C8 (MiFreePhysicalPageChain.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReturnProcessPhysicalPages(__int64 a1, __int64 a2)
{
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 1392), -a2);
}
