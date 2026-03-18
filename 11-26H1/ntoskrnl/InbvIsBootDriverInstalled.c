/*
 * XREFs of InbvIsBootDriverInstalled @ 0x14052FE50
 * Callers:
 *     DisplayBootBitmap @ 0x14057622C (DisplayBootBitmap.c)
 *     BvgaReleaseResources @ 0x1405C5E10 (BvgaReleaseResources.c)
 *     StartFirstUserProcess @ 0x140D08548 (StartFirstUserProcess.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall InbvIsBootDriverInstalled(__int64 a1, __int64 a2)
{
  if ( qword_140E65CE0 && *(_QWORD *)(qword_140E65CE0 + 56) )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return 0;
}
