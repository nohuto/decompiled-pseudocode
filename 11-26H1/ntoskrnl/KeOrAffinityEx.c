/*
 * XREFs of KeOrAffinityEx @ 0x1405EC940
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlpOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x140461960 (-RtlpOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     ?RtlpOrAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x140622B10 (-RtlpOrAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z.c)
 */

unsigned int __fastcall KeOrAffinityEx(struct _KAFFINITY_EX *a1, struct _KAFFINITY_EX *a2, struct _KAFFINITY_EX *a3)
{
  if ( a3 )
    return RtlpOrAffinityEx(a1, a2, a3, 0x14u);
  else
    return RtlpOrAffinityExNoResult(a1, a2);
}
