/*
 * XREFs of ?bIsResizeRequiredBeforeCopyingRegion@RGNCOREOBJ@@QEBA_NAEBV1@PEAK@Z @ 0x140021DD0
 * Callers:
 *     _RGNOBJ::iCombine_::_2_::_lambda_1_::operator() @ 0x140012020 (_RGNOBJ--iCombine_--_2_--_lambda_1_--operator().c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x140012210 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x140038140 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z @ 0x1400445B0 (-Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z.c)
 *     ?bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z @ 0x14017BE00 (-bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z.c)
 * Callees:
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x140021850 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ?get_sizeScanAlloc@REGION_CORE@@IEBAKXZ @ 0x140021EE0 (-get_sizeScanAlloc@REGION_CORE@@IEBAKXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

char __fastcall RGNCOREOBJ::bIsResizeRequiredBeforeCopyingRegion(RGNCOREOBJ *this, REGION_CORE **a2, unsigned int *a3)
{
  PVOID DeferredContext; // rax
  __int64 v5; // rcx
  unsigned int v8; // esi
  REGION_CORE *v9; // rcx
  unsigned int v10; // ecx
  unsigned int sizeScan; // ebx
  __int64 v12; // rcx
  unsigned int v13; // eax

  DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
  v5 = *(_QWORD *)this;
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 184LL))(v5);
    DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
  }
  else
  {
    v8 = *(_DWORD *)(v5 + 8);
  }
  v9 = *a2;
  if ( DeferredContext )
  {
    v10 = (*(__int64 (__fastcall **)(REGION_CORE *))(*(_QWORD *)DeferredContext + 176LL))(v9);
    DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
  }
  else
  {
    v10 = *((_DWORD *)v9 + 4);
  }
  sizeScan = 112;
  if ( v8 < v10 )
  {
    if ( REGION_CORE::get_sizeScanAlloc(*a2) > 0x70 )
      goto LABEL_14;
    DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
  }
  v12 = *(_QWORD *)this;
  if ( DeferredContext )
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)DeferredContext + 184LL))(v12);
  else
    v13 = *(_DWORD *)(v12 + 8);
  if ( v13 <= 0x70 || REGION_CORE::get_sizeScanAlloc(*a2) > 0x70 )
    return 0;
LABEL_14:
  if ( (unsigned int)REGION_CORE::get_sizeScan(*a2) > 0x70 )
    sizeScan = REGION_CORE::get_sizeScan(*a2);
  *a3 = sizeScan;
  return 1;
}
