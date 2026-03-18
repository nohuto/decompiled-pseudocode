/*
 * XREFs of ?get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x14000EE30
 * Callers:
 *     ?bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z @ 0x14000EC14 (-bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z.c)
 *     ?vTighten@RGNOBJ@@QEAAXXZ @ 0x14000ECF0 (-vTighten@RGNOBJ@@QEAAXXZ.c)
 *     RGNCOREOBJ::bMerge__RGNCOREOBJ::bMerge_::_2_::_lambda_1___ @ 0x1400458FC (RGNCOREOBJ--bMerge__RGNCOREOBJ--bMerge_--_2_--_lambda_1___.c)
 *     ?bEqual@RGNOBJ@@QEAAHAEAV1@@Z @ 0x140125C40 (-bEqual@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     GreEqualRgn @ 0x14012AF60 (GreEqualRgn.c)
 *     ?bEqual@RGNCOREOBJ@@QEBA_NAEBV1@@Z @ 0x14013CAF0 (-bEqual@RGNCOREOBJ@@QEBA_NAEBV1@@Z.c)
 *     ?UploadForFloodFill@RGNCOREOBJ@@QEAAJPEBJKPEAJK@Z @ 0x140183E10 (-UploadForFloodFill@RGNCOREOBJ@@QEAAJPEBJKPEAJK@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

struct SCAN *__fastcall REGION_CORE::get_pscnTail(REGION_CORE *this)
{
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
    return (struct SCAN *)(*(__int64 (__fastcall **)(REGION_CORE *))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 224LL))(this);
  else
    return (struct SCAN *)(*(_QWORD *)this + *((_QWORD *)this + 2));
}
