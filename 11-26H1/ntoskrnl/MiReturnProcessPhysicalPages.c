/*
 * XREFs of MiReturnProcessPhysicalPages @ 0x140B457E0
 * Callers:
 *     MiFreePhysicalPageChain @ 0x1403C73D4 (MiFreePhysicalPageChain.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReturnProcessPhysicalPages(__int64 a1, __int64 a2)
{
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 1392), -a2);
}
