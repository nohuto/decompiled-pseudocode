/*
 * XREFs of ??4OverlayPlaneInfo@COverlayContext@@QEAAAEAV01@$$QEAV01@@Z @ 0x180030928
 * Callers:
 *     ??$swap_generic@V?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAXAEAV01@@Z @ 0x180030764 (--$swap_generic@V-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlane.c)
 *     ?clear_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180176EC0 (-clear_region@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInf.c)
 *     ?reserve_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVOverlayPlaneInfo@COverlayContext@@_K0@Z @ 0x180177014 (-reserve_region@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneI.c)
 *     ??$_Swap_ranges_unchecked@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@V12@@std@@YA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@V12@V12@0@Z @ 0x1801ABFEC (--$_Swap_ranges_unchecked@V-$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@V12@@std.c)
 * Callees:
 *     ??4?$com_ptr_t@VIBitmapLock@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801044B4 (--4-$com_ptr_t@VIBitmapLock@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 __fastcall COverlayContext::OverlayPlaneInfo::operator=(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  wil::com_ptr_t<IBitmapLock,wil::err_returncode_policy>::operator=(a1 + 16, a2 + 16);
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
  *(_BYTE *)(a1 + 224) = *(_BYTE *)(a2 + 224);
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
