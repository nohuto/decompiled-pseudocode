/*
 * XREFs of KeSubtractAffinityEx @ 0x1405EC970
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlpSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x14045EC10 (-RtlpSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     ?RtlpSubtractAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x140622BA4 (-RtlpSubtractAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z.c)
 */

unsigned int __fastcall KeSubtractAffinityEx(
        struct _KAFFINITY_EX *a1,
        struct _KAFFINITY_EX *a2,
        struct _KAFFINITY_EX *a3)
{
  if ( a3 )
    return RtlpSubtractAffinityEx(a1, a2, a3, 0x14u);
  else
    return RtlpSubtractAffinityExNoResult(a1, a2);
}
