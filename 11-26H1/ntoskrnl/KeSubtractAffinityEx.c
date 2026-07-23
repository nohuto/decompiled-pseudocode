/*
 * XREFs of KeSubtractAffinityEx @ 0x1405EF2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlpSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x14025F780 (-RtlpSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     ?RtlpSubtractAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x140625BF4 (-RtlpSubtractAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z.c)
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
