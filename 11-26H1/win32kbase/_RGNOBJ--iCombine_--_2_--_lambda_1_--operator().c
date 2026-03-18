/*
 * XREFs of _RGNOBJ::iCombine_::_2_::_lambda_1_::operator() @ 0x140012020
 * Callers:
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x140012210 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     GreCombineRgn @ 0x140020BA0 (GreCombineRgn.c)
 * Callees:
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x140011E40 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x140015468 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x14001FB50 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x140021D3C (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ?bIsResizeRequiredBeforeCopyingRegion@RGNCOREOBJ@@QEBA_NAEBV1@PEAK@Z @ 0x140021DD0 (-bIsResizeRequiredBeforeCopyingRegion@RGNCOREOBJ@@QEBA_NAEBV1@PEAK@Z.c)
 *     ?vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z @ 0x1401BCBC0 (-vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

bool __fastcall RGNOBJ::iCombine_::_2_::_lambda_1_::operator()(RGNOBJ **a1, __int64 *a2)
{
  RGNOBJ *v2; // rbx
  __int64 v3; // rcx
  _QWORD *v4; // rdx
  __int64 v5; // r8
  const struct BaseRustExports *v6; // rdi
  const struct REGION_CORE *v7; // rsi
  int v8; // ebx
  int v9; // eax
  __int64 v11; // [rsp+40h] [rbp+20h] BYREF
  __int64 v12; // [rsp+50h] [rbp+30h] BYREF
  __int64 v13; // [rsp+58h] [rbp+38h] BYREF

  v2 = *a1;
  v3 = *a2;
  v4 = *(_QWORD **)v2;
  v5 = v3 + 24;
  if ( !WPP_MAIN_CB.Dpc.DeferredContext )
  {
    LODWORD(v11) = 0;
    v12 = v5 & -(__int64)(v3 != 0);
    v13 = (unsigned __int64)(v4 + 3) & -(__int64)(v4 != 0LL);
    if ( RGNCOREOBJ::bIsResizeRequiredBeforeCopyingRegion(
           (RGNCOREOBJ *)&v13,
           (const struct RGNCOREOBJ *)&v12,
           (unsigned int *)&v11) )
    {
      if ( **(_QWORD **)v2 )
      {
LABEL_8:
        v9 = 0;
        return v9 != 0;
      }
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v11, v11);
      if ( !v11 )
      {
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v11);
        goto LABEL_8;
      }
      RGNOBJ::vSwap(v2, (struct RGNOBJ *)&v11);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v11);
    }
    v11 = (*(_QWORD *)v2 + 24LL) & -(__int64)(*(_QWORD *)v2 != 0LL);
    RGNCOREOBJ::vCopy((RGNCOREOBJ *)&v11, (const struct RGNCOREOBJ *)&v12);
    v9 = 1;
    return v9 != 0;
  }
  v6 = *(const struct BaseRustExports **)WPP_MAIN_CB.Dpc.DeferredContext;
  v7 = (const struct REGION_CORE *)((unsigned __int64)(v4 + 3) & -(__int64)(v4 != 0LL));
  v8 = (*(unsigned __int8 (__fastcall **)(const struct REGION_CORE *, __int64))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext
                                                                              + 56LL))(
         v7,
         v5 & -(__int64)(v3 != 0));
  RgnCaptureLiveMemoryDumpOnZeroSizedScan(v6, v7);
  v9 = v8;
  return v9 != 0;
}
