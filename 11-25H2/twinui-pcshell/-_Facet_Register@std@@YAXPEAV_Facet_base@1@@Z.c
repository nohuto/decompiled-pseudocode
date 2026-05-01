/*
 * XREFs of ?_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z @ 0x1802D5118
 * Callers:
 *     ??$use_facet@V?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@@std@@YAAEBV?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@0@AEBVlocale@0@@Z @ 0x1800653A8 (--$use_facet@V-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@@std@@YAAEBV.c)
 *     ??$use_facet@V?$codecvt@DDU_Mbstatet@@@std@@@std@@YAAEBV?$codecvt@DDU_Mbstatet@@@0@AEBVlocale@0@@Z @ 0x1805ECF4C (--$use_facet@V-$codecvt@DDU_Mbstatet@@@std@@@std@@YAAEBV-$codecvt@DDU_Mbstatet@@@0@AEBVlocale@0@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

void __fastcall std::_Facet_Register(struct std::_Facet_base *a1)
{
  _QWORD *v2; // rax

  v2 = operator new(0x10uLL);
  if ( v2 )
  {
    *v2 = qword_180899090;
    v2[1] = a1;
  }
  qword_180899090 = v2;
}
