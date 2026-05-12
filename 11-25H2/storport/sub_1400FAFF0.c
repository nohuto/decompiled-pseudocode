/*
 * XREFs of sub_1400FAFF0 @ 0x1400FAFF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14006B3C4 @ 0x14006B3C4 (sub_14006B3C4.c)
 */

__int64 __fastcall sub_1400FAFF0(__int64 a1)
{
  PEX_RUNDOWN_REF_CACHE_AWARE *v1; // rax

  v1 = (PEX_RUNDOWN_REF_CACHE_AWARE *)sub_14006B3C4(a1);
  ExReleaseRundownProtectionCacheAware(v1[15]);
  return 0LL;
}
