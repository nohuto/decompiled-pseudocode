/*
 * XREFs of ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A8710
 * Callers:
 *     ?vTighten@RGNOBJ@@QEAAXXZ @ 0x14000ECF0 (-vTighten@RGNOBJ@@QEAAXXZ.c)
 *     ?bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z @ 0x14000F0A4 (-bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z.c)
 *     GreGetRegionData @ 0x1400103C0 (GreGetRegionData.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x140015468 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vDeleteREGION@REGION@@AEAAXXZ @ 0x140015A00 (-vDeleteREGION@REGION@@AEAAXXZ.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x140015AE0 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400163D0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     GreSetRectRgn @ 0x14001D700 (GreSetRectRgn.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x14001DA20 (SetOrCreateRectRgnIndirectPublic.c)
 *     SetRectRgnIndirect @ 0x14001DE10 (SetRectRgnIndirect.c)
 *     GreCreateRectRgnIndirect @ 0x14001E880 (GreCreateRectRgnIndirect.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x14001F730 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?vScale@RGNOBJ@@QEAAXVPOINTFL@@@Z @ 0x140038B40 (-vScale@RGNOBJ@@QEAAXVPOINTFL@@@Z.c)
 *     ?Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z @ 0x1400445B0 (-Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x140044A0C (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     ?AllocateRegionCore@RGNCOREMEMOBJ@@SAPEAVREGION_CORE@@K@Z @ 0x140044D44 (-AllocateRegionCore@RGNCOREMEMOBJ@@SAPEAVREGION_CORE@@K@Z.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x140045580 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     RGNCOREOBJ::bMerge__RGNCOREOBJ::bMerge_::_2_::_lambda_1___ @ 0x1400458FC (RGNCOREOBJ--bMerge__RGNCOREOBJ--bMerge_--_2_--_lambda_1___.c)
 *     ?GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z @ 0x1400A7F4C (-GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z.c)
 *     ?numRect@RGNCOREOBJ@@QEBAKXZ @ 0x1400A81D0 (-numRect@RGNCOREOBJ@@QEBAKXZ.c)
 *     ?bInside@RGNOBJ@@QEAAHPEAU_RECTL@@@Z @ 0x1400A8350 (-bInside@RGNOBJ@@QEAAHPEAU_RECTL@@@Z.c)
 *     GreRectInRegion @ 0x1400A8460 (GreRectInRegion.c)
 *     ?bInside@RGNCOREOBJ@@QEBAHPEAU_RECTL@@@Z @ 0x1400A8618 (-bInside@RGNCOREOBJ@@QEBAHPEAU_RECTL@@@Z.c)
 *     ?bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z @ 0x1400C116C (-bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z.c)
 *     GrePtInRegion @ 0x140106D90 (GrePtInRegion.c)
 *     ?GetRegionData@CRegion@@UEAAJPEAKPEAUtagRECT@@PEAW4Type@IRegion@@@Z @ 0x1401143C0 (-GetRegionData@CRegion@@UEAAJPEAKPEAUtagRECT@@PEAW4Type@IRegion@@@Z.c)
 *     ?sizeSave@RGNOBJ@@QEAAKXZ @ 0x14011FEC0 (-sizeSave@RGNOBJ@@QEAAKXZ.c)
 *     ?bInside@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x140120010 (-bInside@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     ?bEqual@RGNOBJ@@QEAAHAEAV1@@Z @ 0x140125C40 (-bEqual@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     GreEqualRgn @ 0x14012AF60 (GreEqualRgn.c)
 *     ?vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x14013472C (-vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?bEqual@RGNCOREOBJ@@QEBA_NAEBV1@@Z @ 0x14013CAF0 (-bEqual@RGNCOREOBJ@@QEBA_NAEBV1@@Z.c)
 *     ?bUpload@RGNCOREOBJ@@QEAAHPEBJK@Z @ 0x14016C570 (-bUpload@RGNCOREOBJ@@QEAAHPEBJK@Z.c)
 *     ?bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z @ 0x14017BE00 (-bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z.c)
 *     ?UploadForFloodFill@RGNCOREOBJ@@QEAAJPEBJKPEAJK@Z @ 0x140183E10 (-UploadForFloodFill@RGNCOREOBJ@@QEAAJPEBJKPEAJK@Z.c)
 *     ?vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z @ 0x1401BCBC0 (-vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z.c)
 *     ?bExpand@RGNCOREOBJ@@QEAA_NK@Z @ 0x1401BDB70 (-bExpand@RGNCOREOBJ@@QEAA_NK@Z.c)
 *     ?bOffset@RGNCOREOBJ@@QEAA_NPEBU_POINTL@@@Z @ 0x1401FB550 (-bOffset@RGNCOREOBJ@@QEAA_NPEBU_POINTL@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

struct SCAN *__fastcall REGION_CORE::get_pScan(REGION_CORE *this)
{
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
    return (struct SCAN *)(*(__int64 (__fastcall **)(REGION_CORE *))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 208LL))(this);
  else
    return *(struct SCAN **)this;
}
