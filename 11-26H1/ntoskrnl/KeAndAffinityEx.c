/*
 * XREFs of KeAndAffinityEx @ 0x140532190
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlpAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x140253CAC (-RtlpAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z.c)
 *     ?RtlpAndAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x14025BF70 (-RtlpAndAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 */

__int64 __fastcall KeAndAffinityEx(struct _KAFFINITY_EX *a1, struct _KAFFINITY_EX *a2, struct _KAFFINITY_EX *a3)
{
  if ( a3 )
    return RtlpAndAffinityEx(a1, a2, a3, 0x14u);
  else
    return RtlpAndAffinityExNoResult(a1, a2);
}
