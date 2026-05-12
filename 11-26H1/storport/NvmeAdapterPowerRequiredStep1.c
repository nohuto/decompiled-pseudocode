/*
 * XREFs of NvmeAdapterPowerRequiredStep1 @ 0x1401249D0
 * Callers:
 *     <none>
 * Callees:
 *     NvmeAdapterPowerRequiredStep2 @ 0x140124A04 (NvmeAdapterPowerRequiredStep2.c)
 */

__int64 __fastcall NvmeAdapterPowerRequiredStep1(_QWORD *a1)
{
  ++*(_QWORD *)(*(_QWORD *)(a1[20] + 24LL) + 24LL);
  *(_DWORD *)(*(_QWORD *)(a1[20] + 8LL) + 20LL) |= 1u;
  return NvmeAdapterPowerRequiredStep2(a1);
}
