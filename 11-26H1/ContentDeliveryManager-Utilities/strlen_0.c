/*
 * XREFs of strlen_0 @ 0x180021D0E
 * Callers:
 *     ?_Init@?$numpunct@D@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x180009354 (-_Init@-$numpunct@D@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     ?do_curr_symbol@?$_Mpunct@D@std@@MEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x18000A050 (-do_curr_symbol@-$_Mpunct@D@std@@MEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@.c)
 *     ?do_grouping@?$_Mpunct@_W@std@@MEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x18000AEC0 (-do_grouping@-$_Mpunct@_W@std@@MEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@2@.c)
 *     ?do_positive_sign@?$_Mpunct@D@std@@MEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x18000B9B0 (-do_positive_sign@-$_Mpunct@D@std@@MEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2.c)
 *     ?_Init@?$_Mpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x180013DD8 (-_Init@-$_Mpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     ?_Init@?$_Mpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x180013F84 (-_Init@-$_Mpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     ?do_in@?$codecvt@_WDH@std@@MEBAHAEAHPEBD1AEAPEBDPEA_W3AEAPEA_W@Z @ 0x180018BB0 (-do_in@-$codecvt@_WDH@std@@MEBAHAEAHPEBD1AEAPEBDPEA_W3AEAPEA_W@Z.c)
 *     ?do_length@?$codecvt@_WDH@std@@MEBAHAEAHPEBD1_K@Z @ 0x180018CA0 (-do_length@-$codecvt@_WDH@std@@MEBAHAEAHPEBD1_K@Z.c)
 *     ?name@locale@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x18001B0D8 (-name@locale@std@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@2@XZ.c)
 *     ??$_Getvals@D@?$_Mpunct@D@std@@IEAAXDPEBUlconv@@@Z @ 0x18001B1F4 (--$_Getvals@D@-$_Mpunct@D@std@@IEAAXDPEBUlconv@@@Z.c)
 *     ??$_Getvals@D@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@IEAAXDAEBV_Locinfo@1@@Z @ 0x18001B30C (--$_Getvals@D@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@IEAAXDAEBV_L.c)
 *     ?_Init@?$_Mpunct@D@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x18001DB8C (-_Init@-$_Mpunct@D@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     ?do_negative_sign@?$_Mpunct@D@std@@MEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x180020150 (-do_negative_sign@-$_Mpunct@D@std@@MEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
size_t __cdecl strlen_0(const char *Str)
{
  return strlen(Str);
}
