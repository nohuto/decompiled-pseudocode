/*
 * XREFs of ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1400C5470
 * Callers:
 *     GreCombineRgn @ 0x140020BA0 (GreCombineRgn.c)
 *     RGNCOREOBJ::bMerge__RGNOBJ::bMerge_::_2_::_lambda_1___ @ 0x140022050 (RGNCOREOBJ--bMerge__RGNOBJ--bMerge_--_2_--_lambda_1___.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z @ 0x1400237E0 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1400C5040 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     GreIntersectVisRect @ 0x1401BABF0 (GreIntersectVisRect.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1401BCB10 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 * Callees:
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x14001FB50 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     ?vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z @ 0x1401BCBC0 (-vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall RGNOBJ::vCopy(RGNOBJ *this, struct RGNOBJ *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned int (__fastcall **v4)(const struct REGION_CORE *); // rbx
  const struct REGION_CORE *v5; // rdi
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  v2 = *(_QWORD *)this;
  v3 = *(_QWORD *)this + 24LL;
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    v4 = *(unsigned int (__fastcall ***)(const struct REGION_CORE *))WPP_MAIN_CB.Dpc.DeferredContext;
    v5 = (const struct REGION_CORE *)(v3 & -(__int64)(v2 != 0));
    (*(void (__fastcall **)(const struct REGION_CORE *, __int64, _QWORD))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext
                                                                        + 48LL))(
      v5,
      (*(_QWORD *)a2 + 24LL) & -(__int64)(*(_QWORD *)a2 != 0LL),
      -*(_QWORD *)a2);
    RgnCaptureLiveMemoryDumpOnZeroSizedScan(v4, v5);
  }
  else
  {
    v7 = v3 & -(__int64)(v2 != 0);
    v6 = (*(_QWORD *)a2 + 24LL) & -(__int64)(*(_QWORD *)a2 != 0LL);
    RGNCOREOBJ::vCopy((RGNCOREOBJ *)&v7, (const struct RGNCOREOBJ *)&v6);
  }
}
