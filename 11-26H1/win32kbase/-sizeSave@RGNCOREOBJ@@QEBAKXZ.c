/*
 * XREFs of ?sizeSave@RGNCOREOBJ@@QEBAKXZ @ 0x1400A8198
 * Callers:
 *     ??$GrepGetRegionData@$0A@VRGNCOREOBJ@@@@YAKAEAVRGNCOREOBJ@@KPEAU_RGNDATA@@@Z @ 0x1401FB7FC (--$GrepGetRegionData@$0A@VRGNCOREOBJ@@@@YAKAEAVRGNCOREOBJ@@KPEAU_RGNDATA@@@Z.c)
 * Callees:
 *     ?numRect@RGNCOREOBJ@@QEBAKXZ @ 0x1400A81D0 (-numRect@RGNCOREOBJ@@QEBAKXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNCOREOBJ::sizeSave(RGNCOREOBJ *this)
{
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 248LL))(*(_QWORD *)this);
  else
    return 16 * RGNCOREOBJ::numRect(this);
}
