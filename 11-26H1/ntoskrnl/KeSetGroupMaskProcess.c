/*
 * XREFs of KeSetGroupMaskProcess @ 0x1404D81E0
 * Callers:
 *     KeInitializeProcess @ 0x140963BE4 (KeInitializeProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall KeSetGroupMaskProcess(__int64 a1, _OWORD *a2)
{
  *(_OWORD *)(a1 + 152) = *a2;
}
