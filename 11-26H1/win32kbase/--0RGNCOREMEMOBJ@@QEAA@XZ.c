/*
 * XREFs of ??0RGNCOREMEMOBJ@@QEAA@XZ @ 0x140044C7C
 * Callers:
 *     ?Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z @ 0x1400445B0 (-Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x140045580 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     CddEngCreateRectRgn @ 0x1401345C0 (CddEngCreateRectRgn.c)
 * Callees:
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x14001FB50 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     ?AllocateRegionCore@RGNCOREMEMOBJ@@SAPEAVREGION_CORE@@K@Z @ 0x140044D44 (-AllocateRegionCore@RGNCOREMEMOBJ@@SAPEAVREGION_CORE@@K@Z.c)
 *     ?RustOnZeroSizedScanCallback@@YAXXZ @ 0x1401C3F80 (-RustOnZeroSizedScanCallback@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

RGNCOREMEMOBJ *__fastcall RGNCOREMEMOBJ::RGNCOREMEMOBJ(RGNCOREMEMOBJ *this)
{
  struct REGION_CORE *RegionCore; // rax
  struct REGION_CORE *v3; // rdi
  PVOID DeferredContext; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int (__fastcall **v8)(const struct REGION_CORE *); // rbx

  RegionCore = RGNCOREMEMOBJ::AllocateRegionCore((unsigned int)this);
  *(_QWORD *)this = RegionCore;
  v3 = RegionCore;
  if ( RegionCore )
  {
    DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
    if ( WPP_MAIN_CB.Dpc.DeferredContext )
    {
      v8 = *(unsigned int (__fastcall ***)(const struct REGION_CORE *))WPP_MAIN_CB.Dpc.DeferredContext;
      (*(void (__fastcall **)(struct REGION_CORE *))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 120LL))(v3);
      RgnCaptureLiveMemoryDumpOnZeroSizedScan(v8, v3);
    }
    else
    {
      v5 = *((_QWORD *)v3 + 1);
      *((_QWORD *)v3 + 2) = 16LL;
      if ( v5 < 0x10 )
      {
        *((_QWORD *)v3 + 2) = v5;
        RustOnZeroSizedScanCallback();
        DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
      }
      *((_DWORD *)v3 + 6) = 1;
      *(_OWORD *)((char *)v3 + 28) = 0LL;
      if ( DeferredContext )
        v6 = (*(__int64 (__fastcall **)(struct REGION_CORE *))(*(_QWORD *)DeferredContext + 208LL))(v3);
      else
        v6 = *(_QWORD *)v3;
      *(_DWORD *)v6 = 0;
      *(_DWORD *)(v6 + 4) = 0x80000000;
      *(_QWORD *)(v6 + 8) = 0x7FFFFFFFLL;
    }
  }
  return this;
}
