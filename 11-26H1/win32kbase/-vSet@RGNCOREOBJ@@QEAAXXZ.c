/*
 * XREFs of ?vSet@RGNCOREOBJ@@QEAAXXZ @ 0x1400FD0A0
 * Callers:
 *     GreSetRectRgn @ 0x14001D700 (GreSetRectRgn.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x14001DA20 (SetOrCreateRectRgnIndirectPublic.c)
 *     SetRectRgnIndirect @ 0x14001DE10 (SetRectRgnIndirect.c)
 *     GreCreateRectRgnIndirect @ 0x14001E880 (GreCreateRectRgnIndirect.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x14001F730 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z @ 0x1400445B0 (-Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x140044A0C (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x140045580 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x14013472C (-vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?bUpload@RGNCOREOBJ@@QEAAHPEBJK@Z @ 0x14016C570 (-bUpload@RGNCOREOBJ@@QEAAHPEBJK@Z.c)
 *     RGNCOREOBJ::iCombine_RGNCOREOBJ__RGNCOREOBJ::iCombine_::_2_::_lambda_1___ @ 0x14019FAAC (RGNCOREOBJ--iCombine_RGNCOREOBJ__RGNCOREOBJ--iCombine_--_2_--_lambda_1___.c)
 * Callees:
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400151C0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     ?RustOnZeroSizedScanCallback@@YAXXZ @ 0x1401C3F80 (-RustOnZeroSizedScanCallback@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall RGNCOREOBJ::vSet(RGNCOREOBJ *this)
{
  PVOID DeferredContext; // rax
  __int64 v2; // rdi
  unsigned __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rbx

  DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
  v2 = *(_QWORD *)this;
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    v5 = *(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext;
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 120LL))(*(_QWORD *)this);
    if ( !(*(unsigned int (__fastcall **)(__int64))(v5 + 176))(v2) )
      GrepCaptureLiveMemoryDump(400LL, 64LL, v2, 0LL, 0LL, 0);
  }
  else
  {
    v3 = *(_QWORD *)(v2 + 8);
    *(_QWORD *)(v2 + 16) = 16LL;
    if ( v3 < 0x10 )
    {
      *(_QWORD *)(v2 + 16) = v3;
      RustOnZeroSizedScanCallback();
      DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
    }
    *(_DWORD *)(v2 + 24) = 1;
    *(_OWORD *)(v2 + 28) = 0LL;
    if ( DeferredContext )
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)DeferredContext + 208LL))(v2);
    else
      v4 = *(_QWORD *)v2;
    *(_DWORD *)(v4 + 4) = 0x80000000;
    *(_DWORD *)v4 = 0;
    *(_QWORD *)(v4 + 8) = 0x7FFFFFFFLL;
  }
}
