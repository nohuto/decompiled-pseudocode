/*
 * XREFs of ?vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z @ 0x1401BCBC0
 * Callers:
 *     GreExtCreateRegion @ 0x140011690 (GreExtCreateRegion.c)
 *     _RGNOBJ::iCombine_::_2_::_lambda_1_::operator() @ 0x140012020 (_RGNOBJ--iCombine_--_2_--_lambda_1_--operator().c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x140012210 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     GreSelectVisRgn @ 0x140016B80 (GreSelectVisRgn.c)
 *     GreSelectVisRgnShared @ 0x140017500 (GreSelectVisRgnShared.c)
 *     ??$GrepCombineUniqueRgns@$00VRGNOBJAPI@@@@YAJAEAVRGNOBJAPI@@00H@Z @ 0x140022C50 (--$GrepCombineUniqueRgns@$00VRGNOBJAPI@@@@YAJAEAVRGNOBJAPI@@00H@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x140022E10 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x140038140 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z @ 0x1400445B0 (-Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1400C5470 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z @ 0x14017BE00 (-bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z.c)
 * Callees:
 *     ?set_sizeScan@REGION_CORE@@IEAAXK@Z @ 0x14000F730 (-set_sizeScan@REGION_CORE@@IEAAXK@Z.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x14001FB50 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x140021850 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A8710 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

void __fastcall RGNCOREOBJ::vCopy(const struct REGION_CORE **this, REGION_CORE **a2)
{
  unsigned int (__fastcall **v4)(const struct REGION_CORE *); // rdi
  const struct REGION_CORE *v5; // rbx
  REGION_CORE *v6; // rdi
  unsigned int sizeScan; // eax
  REGION_CORE *v8; // rdi
  unsigned int v9; // eax
  REGION_CORE *v10; // rbx
  unsigned int v11; // esi
  struct SCAN *pScan; // rdi
  struct SCAN *v13; // rax

  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    v4 = *(unsigned int (__fastcall ***)(const struct REGION_CORE *))WPP_MAIN_CB.Dpc.DeferredContext;
    v5 = *this;
    (*(void (__fastcall **)(const struct REGION_CORE *, REGION_CORE *))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 48LL))(
      *this,
      *a2);
    RgnCaptureLiveMemoryDumpOnZeroSizedScan(v4, v5);
  }
  else
  {
    v6 = *this;
    if ( *this != *a2 )
    {
      sizeScan = REGION_CORE::get_sizeScan(*a2);
      REGION_CORE::set_sizeScan(v6, sizeScan);
      *((_DWORD *)*this + 6) = *((_DWORD *)*a2 + 6);
      *(_OWORD *)((char *)*this + 28) = *(_OWORD *)((char *)*a2 + 28);
      v8 = *a2;
      v9 = REGION_CORE::get_sizeScan(*a2);
      v10 = *this;
      v11 = v9;
      pScan = REGION_CORE::get_pScan(v8);
      v13 = REGION_CORE::get_pScan(v10);
      memmove(v13, pScan, v11);
    }
  }
}
