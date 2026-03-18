/*
 * XREFs of ?set_sizeScan@REGION_CORE@@IEAAXK@Z @ 0x14000F730
 * Callers:
 *     ?bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z @ 0x14000EC14 (-bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z.c)
 *     ?bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z @ 0x14000F0A4 (-bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x14000F920 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     GreSetRectRgn @ 0x14001D700 (GreSetRectRgn.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x14001DA20 (SetOrCreateRectRgnIndirectPublic.c)
 *     SetRectRgnIndirect @ 0x14001DE10 (SetRectRgnIndirect.c)
 *     GreCreateRectRgnIndirect @ 0x14001E880 (GreCreateRectRgnIndirect.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x14001F730 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z @ 0x1400445B0 (-Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x140044A0C (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x140045580 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     RGNCOREOBJ::bMerge__RGNCOREOBJ::bMerge_::_2_::_lambda_1___ @ 0x1400458FC (RGNCOREOBJ--bMerge__RGNCOREOBJ--bMerge_--_2_--_lambda_1___.c)
 *     ?vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x14013472C (-vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?bUpload@RGNCOREOBJ@@QEAAHPEBJK@Z @ 0x14016C570 (-bUpload@RGNCOREOBJ@@QEAAHPEBJK@Z.c)
 *     ?UploadForFloodFill@RGNCOREOBJ@@QEAAJPEBJKPEAJK@Z @ 0x140183E10 (-UploadForFloodFill@RGNCOREOBJ@@QEAAJPEBJKPEAJK@Z.c)
 *     ?vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z @ 0x1401BCBC0 (-vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z.c)
 * Callees:
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x14001FB50 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     ?RustOnZeroSizedScanCallback@@YAXXZ @ 0x1401C3F80 (-RustOnZeroSizedScanCallback@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall REGION_CORE::set_sizeScan(REGION_CORE *this, unsigned int a2)
{
  unsigned __int64 v3; // rcx
  const struct BaseRustExports *v4; // rdi

  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    v4 = *(const struct BaseRustExports **)WPP_MAIN_CB.Dpc.DeferredContext;
    (*(void (**)(void))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 192LL))();
    RgnCaptureLiveMemoryDumpOnZeroSizedScan(v4, this);
  }
  else
  {
    *((_QWORD *)this + 2) = a2;
    v3 = *((_QWORD *)this + 1);
    if ( v3 < a2 )
    {
      *((_QWORD *)this + 2) = v3;
      RustOnZeroSizedScanCallback();
    }
  }
}
