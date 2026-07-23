/*
 * XREFs of KeSetGroupMaskProcess @ 0x1404D19B0
 * Callers:
 *     KeInitializeProcess @ 0x140B58704 (KeInitializeProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall KeSetGroupMaskProcess(__int64 a1, _OWORD *a2)
{
  *(_OWORD *)(a1 + 152) = *a2;
}
