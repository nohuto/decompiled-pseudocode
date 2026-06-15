/*
 * XREFs of ?_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z @ 0x1800B1B8C
 * Callers:
 *     ??$use_facet@V?$collate@G@std@@@std@@YAAEBV?$collate@G@0@AEBVlocale@0@@Z @ 0x18014A0A8 (--$use_facet@V-$collate@G@std@@@std@@YAAEBV-$collate@G@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x18014A184 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 * Callees:
 *     ?_Xbad_alloc@std@@YAXXZ_0 @ 0x1800B1371 (-_Xbad_alloc@std@@YAXXZ_0.c)
 */

void __fastcall std::_Facet_Register(struct std::_Facet_base *a1)
{
  _QWORD *v2; // rdx

  v2 = malloc(0x10uLL);
  if ( !v2 )
  {
    std::_Xbad_alloc();
    JUMPOUT(0x1800B1BC8LL);
  }
  *v2 = Block;
  v2[1] = a1;
  Block = v2;
}
