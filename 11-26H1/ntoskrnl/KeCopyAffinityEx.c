/*
 * XREFs of KeCopyAffinityEx @ 0x1405EC920
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1402518B0 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 */

void __fastcall KeCopyAffinityEx(struct _KAFFINITY_EX *a1, struct _KAFFINITY_EX *a2)
{
  RtlpCopyAffinityEx(a1, 0x14u, a2);
}
