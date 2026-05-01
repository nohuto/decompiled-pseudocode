/*
 * XREFs of ?_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z @ 0x1802CDB08
 * Callers:
 *     ??$use_facet@V?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@@std@@YAAEBV?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@0@AEBVlocale@0@@Z @ 0x18013BF44 (--$use_facet@V-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@@std@@YAAEBV.c)
 *     ??$use_facet@V?$codecvt@DDU_Mbstatet@@@std@@@std@@YAAEBV?$codecvt@DDU_Mbstatet@@@0@AEBVlocale@0@@Z @ 0x180611A98 (--$use_facet@V-$codecvt@DDU_Mbstatet@@@std@@@std@@YAAEBV-$codecvt@DDU_Mbstatet@@@0@AEBVlocale@0@.c)
 * Callees:
 *     ?_Xbad_alloc@std@@YAXXZ_0 @ 0x1802CDA9D (-_Xbad_alloc@std@@YAXXZ_0.c)
 */

void __fastcall std::_Facet_Register(struct std::_Facet_base *a1)
{
  _QWORD *v2; // rdx

  v2 = malloc(0x10uLL);
  if ( !v2 )
  {
    std::_Xbad_alloc();
    JUMPOUT(0x1802CDB44LL);
  }
  *v2 = Block;
  v2[1] = a1;
  Block = v2;
}
