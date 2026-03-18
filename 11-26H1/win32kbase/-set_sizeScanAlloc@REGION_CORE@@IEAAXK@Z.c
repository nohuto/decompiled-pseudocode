/*
 * XREFs of ?set_sizeScanAlloc@REGION_CORE@@IEAAXK@Z @ 0x1401214AC
 * Callers:
 *     ?Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z @ 0x1400445B0 (-Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z.c)
 *     ?AllocateRegionCore@RGNCOREMEMOBJ@@SAPEAVREGION_CORE@@K@Z @ 0x140044D44 (-AllocateRegionCore@RGNCOREMEMOBJ@@SAPEAVREGION_CORE@@K@Z.c)
 *     ?bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z @ 0x14017BE00 (-bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z.c)
 *     ?bExpand@RGNCOREOBJ@@QEAA_NK@Z @ 0x1401BDB70 (-bExpand@RGNCOREOBJ@@QEAA_NK@Z.c)
 * Callees:
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400151C0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 */

void __fastcall REGION_CORE::set_sizeScanAlloc(REGION_CORE *this, unsigned int a2)
{
  if ( !WPP_MAIN_CB.Dpc.DeferredContext )
  {
    *((_QWORD *)this + 1) = a2;
    if ( (unsigned __int64)a2 < *((_QWORD *)this + 2) )
    {
      *((_QWORD *)this + 2) = a2;
      GrepCaptureLiveMemoryDump(400LL, 64LL, 0LL, 0LL, 0LL, 0);
    }
  }
}
