/*
 * XREFs of KeComplementAffinityEx @ 0x1405EF270
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlpComplementAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140452C14 (-RtlpComplementAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 */

void __fastcall KeComplementAffinityEx(struct _KAFFINITY_EX *a1, struct _KAFFINITY_EX *a2)
{
  RtlpComplementAffinityEx(a1, 0x14u, a2);
}
