/*
 * XREFs of ?bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z @ 0x14017BE00
 * Callers:
 *     RGNCOREOBJ::iCombine_RGNCOREOBJ__RGNCOREOBJ::iCombine_::_2_::_lambda_1___ @ 0x14019FAAC (RGNCOREOBJ--iCombine_RGNCOREOBJ__RGNCOREOBJ--iCombine_--_2_--_lambda_1___.c)
 *     CddEngCombineRgn @ 0x1401FB8A0 (CddEngCombineRgn.c)
 * Callees:
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x14001FB50 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     ?bIsResizeRequiredBeforeCopyingRegion@RGNCOREOBJ@@QEBA_NAEBV1@PEAK@Z @ 0x140021DD0 (-bIsResizeRequiredBeforeCopyingRegion@RGNCOREOBJ@@QEBA_NAEBV1@PEAK@Z.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A8710 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?set_sizeScanAlloc@REGION_CORE@@IEAAXK@Z @ 0x1401214AC (-set_sizeScanAlloc@REGION_CORE@@IEAAXK@Z.c)
 *     ?vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z @ 0x1401BCBC0 (-vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

bool __fastcall RGNCOREOBJ::bCopy(REGION_CORE **this, REGION_CORE **a2)
{
  unsigned int (__fastcall **v4)(const struct REGION_CORE *); // rsi
  const struct REGION_CORE *v5; // rdi
  char v6; // bl
  __int64 v7; // rax
  __int64 v8; // rdi
  char *pScan; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // edx
  unsigned int v15; // [rsp+40h] [rbp+18h] BYREF

  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    v4 = *(unsigned int (__fastcall ***)(const struct REGION_CORE *))WPP_MAIN_CB.Dpc.DeferredContext;
    v5 = *this;
    v6 = (*(__int64 (__fastcall **)(REGION_CORE *, REGION_CORE *))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 56LL))(
           *this,
           *a2);
    RgnCaptureLiveMemoryDumpOnZeroSizedScan(v4, v5);
    LOBYTE(v7) = v6;
  }
  else
  {
    v15 = 0;
    if ( RGNCOREOBJ::bIsResizeRequiredBeforeCopyingRegion((RGNCOREOBJ *)this, a2, &v15) )
    {
      v7 = Win32AllocPoolZInitImpl(256LL, v15, 0x6E637347u);
      v8 = v7;
      if ( !v7 )
        return v7;
      pScan = (char *)REGION_CORE::get_pScan(*this);
      GreDeleteFastMutex(pScan, v10, v11, v12);
      v13 = v15;
      *(_QWORD *)*this = v8;
      REGION_CORE::set_sizeScanAlloc(*this, v13);
    }
    RGNCOREOBJ::vCopy((RGNCOREOBJ *)this, (const struct RGNCOREOBJ *)a2);
    LOBYTE(v7) = 1;
  }
  return v7;
}
