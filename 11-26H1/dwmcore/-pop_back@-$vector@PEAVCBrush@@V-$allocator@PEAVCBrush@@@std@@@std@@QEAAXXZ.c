/*
 * XREFs of ?pop_back@?$vector@PEAVCBrush@@V?$allocator@PEAVCBrush@@@std@@@std@@QEAAXXZ @ 0x18021FC70
 * Callers:
 *     ?CreatesCycle@CBrush@@IEAA_NPEAV1@@Z @ 0x1801D3200 (-CreatesCycle@CBrush@@IEAA_NPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall std::vector<CBrush *>::pop_back(__int64 a1)
{
  *(_QWORD *)(a1 + 8) -= 8LL;
}
