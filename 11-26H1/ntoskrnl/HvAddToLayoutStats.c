/*
 * XREFs of HvAddToLayoutStats @ 0x140A5DBFC
 * Callers:
 *     HvCheckHive @ 0x140A5D6B0 (HvCheckHive.c)
 *     HvCheckBin @ 0x140A5D8F0 (HvCheckBin.c)
 * Callees:
 *     <none>
 */

void __fastcall HvAddToLayoutStats(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 8) += a2;
  ++*(_DWORD *)(a1 + 12);
}
