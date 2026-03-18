/*
 * XREFs of ??0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z @ 0x180030BA8
 * Callers:
 *     ??$swap_generic@V?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAXAEAV01@@Z @ 0x180030764 (--$swap_generic@V-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlane.c)
 *     ??$assign@V?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@X@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXV?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@0@Z @ 0x180030B2C (--$assign@V-$move_iterator@V-$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@X.c)
 *     ??$swap@$0BA@@?$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@QEAA_NAEAV01@@Z @ 0x180176BF0 (--$swap@$0BA@@-$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@QEAA_NAE.c)
 *     ??$emplace_back@VOverlayPlaneInfo@COverlayContext@@@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXVOverlayPlaneInfo@COverlayContext@@@Z @ 0x180176CA0 (--$emplace_back@VOverlayPlaneInfo@COverlayContext@@@-$vector_facade@VOverlayPlaneInfo@COverlayCo.c)
 *     ??$move@V?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@V?$back_insert_iterator_unchecked@V?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@detail@@@std@@YA?AV?$back_insert_iterator_unchecked@V?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@detail@@V?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@0@0V12@@Z @ 0x180176DCC (--$move@V-$move_iterator@V-$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@V-$.c)
 *     ?reserve_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVOverlayPlaneInfo@COverlayContext@@_K0@Z @ 0x180177014 (-reserve_region@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneI.c)
 *     ?swap@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEAV12@@Z @ 0x180199F30 (-swap@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COverl.c)
 *     ??$_Swap_ranges_unchecked@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@V12@@std@@YA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@V12@V12@0@Z @ 0x1801ABFEC (--$_Swap_ranges_unchecked@V-$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@V12@@std.c)
 *     ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@PEAVOverlayPlaneInfo@COverlayContext@@@std@@YAPEAVOverlayPlaneInfo@COverlayContext@@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@0@V30@PEAV12@@Z @ 0x18020F038 (--$_Uninitialized_move_unchecked@V-$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@PE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  v2 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a1 + 16) = v2;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 112);
  *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 128);
  *(_OWORD *)(a1 + 144) = *(_OWORD *)(a2 + 144);
  *(_OWORD *)(a1 + 160) = *(_OWORD *)(a2 + 160);
  *(_OWORD *)(a1 + 176) = *(_OWORD *)(a2 + 176);
  *(_OWORD *)(a1 + 192) = *(_OWORD *)(a2 + 192);
  *(_OWORD *)(a1 + 208) = *(_OWORD *)(a2 + 208);
  *(_DWORD *)(a1 + 224) = *(_DWORD *)(a2 + 224);
  *(_OWORD *)(a1 + 228) = *(_OWORD *)(a2 + 228);
  *(_OWORD *)(a1 + 244) = *(_OWORD *)(a2 + 244);
  *(_OWORD *)(a1 + 260) = *(_OWORD *)(a2 + 260);
  *(_DWORD *)(a1 + 276) = *(_DWORD *)(a2 + 276);
  *(_OWORD *)(a1 + 280) = *(_OWORD *)(a2 + 280);
  *(_OWORD *)(a1 + 296) = *(_OWORD *)(a2 + 296);
  *(_OWORD *)(a1 + 312) = *(_OWORD *)(a2 + 312);
  *(_OWORD *)(a1 + 328) = *(_OWORD *)(a2 + 328);
  *(_DWORD *)(a1 + 344) = *(_DWORD *)(a2 + 344);
  *(_DWORD *)(a1 + 348) = *(_DWORD *)(a2 + 348);
  *(_QWORD *)(a1 + 352) = *(_QWORD *)(a2 + 352);
  *(_BYTE *)(a1 + 360) = *(_BYTE *)(a2 + 360);
  *(_BYTE *)(a1 + 361) = *(_BYTE *)(a2 + 361);
  *(_BYTE *)(a1 + 362) = *(_BYTE *)(a2 + 362);
  *(_BYTE *)(a1 + 363) = *(_BYTE *)(a2 + 363);
  *(_BYTE *)(a1 + 364) = *(_BYTE *)(a2 + 364);
  *(_BYTE *)(a1 + 365) = *(_BYTE *)(a2 + 365);
  *(_BYTE *)(a1 + 366) = *(_BYTE *)(a2 + 366);
  *(_DWORD *)(a1 + 368) = *(_DWORD *)(a2 + 368);
  *(_DWORD *)(a1 + 372) = *(_DWORD *)(a2 + 372);
  *(_DWORD *)(a1 + 376) = *(_DWORD *)(a2 + 376);
  *(_DWORD *)(a1 + 380) = *(_DWORD *)(a2 + 380);
  *(_DWORD *)(a1 + 384) = *(_DWORD *)(a2 + 384);
  return a1;
}
