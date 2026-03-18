/*
 * XREFs of KeComplementAffinityEx @ 0x1405EC900
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlpComplementAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1403EE0E4 (-RtlpComplementAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 */

void __fastcall KeComplementAffinityEx(struct _KAFFINITY_EX *a1, struct _KAFFINITY_EX *a2)
{
  RtlpComplementAffinityEx(a1, 0x14u, a2);
}
