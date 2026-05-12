/*
 * XREFs of sub_14000A7B4 @ 0x14000A7B4
 * Callers:
 *     sub_14000A648 @ 0x14000A648 (sub_14000A648.c)
 *     sub_1400436D0 @ 0x1400436D0 (sub_1400436D0.c)
 *     sub_1400772D0 @ 0x1400772D0 (sub_1400772D0.c)
 *     sub_14007A400 @ 0x14007A400 (sub_14007A400.c)
 * Callees:
 *     sub_140021280 @ 0x140021280 (sub_140021280.c)
 */

BOOLEAN __fastcall sub_14000A7B4(__int64 a1)
{
  BOOLEAN v2; // di
  IRP *v3; // rcx

  v2 = 1;
  if ( (unsigned __int8)sub_140021280(a1) )
  {
    v3 = *(IRP **)(*(_QWORD *)(a1 + 1872) + 72LL);
    if ( v3 )
    {
      v2 = IoCancelIrp(v3);
      *(_QWORD *)(*(_QWORD *)(a1 + 1872) + 72LL) = 0LL;
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
  }
  return v2;
}
