/*
 * XREFs of ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x1400133F0
 * Callers:
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x14000DC40 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     GreCombineRgn @ 0x14000DFC0 (GreCombineRgn.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x14000E530 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z @ 0x1400131B0 (-vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x140013CA0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     GreOffsetRgn @ 0x140014370 (GreOffsetRgn.c)
 *     GreSetRectRgn @ 0x140014720 (GreSetRectRgn.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x140014B10 (SetOrCreateRectRgnIndirectPublic.c)
 *     GreCreateRectRgnIndirect @ 0x140015720 (GreCreateRectRgnIndirect.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x14008AA94 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x14008B9F0 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?UploadForFloodFill@RGNCOREOBJ@@QEAAJPEBJKPEAJK@Z @ 0x140094AD0 (-UploadForFloodFill@RGNCOREOBJ@@QEAAJPEBJKPEAJK@Z.c)
 *     ?bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z @ 0x140095278 (-bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z.c)
 *     ?bExpand@RGNCOREOBJ@@QEAA_NK@Z @ 0x140095A28 (-bExpand@RGNCOREOBJ@@QEAA_NK@Z.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1400963B0 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     GreExtCreateRegion @ 0x140096D00 (GreExtCreateRegion.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z @ 0x140098DA0 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z.c)
 *     _GetDCEx @ 0x1400A2500 (_GetDCEx.c)
 *     ?vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEBVERECTL@@H@Z @ 0x1400BBC70 (-vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEBVERECTL@@H@Z.c)
 *     ?bIsResizeRequiredBeforeCopyingRegion@RGNCOREOBJ@@QEBA_NAEBV1@PEAK@Z @ 0x1400DDB7C (-bIsResizeRequiredBeforeCopyingRegion@RGNCOREOBJ@@QEBA_NAEBV1@PEAK@Z.c)
 *     RGNCOREOBJ::iCombine_RGNCOREOBJ__RGNCOREOBJ::iCombine_::_2_::_lambda_1___ @ 0x1400F310C (RGNCOREOBJ--iCombine_RGNCOREOBJ__RGNCOREOBJ--iCombine_--_2_--_lambda_1___.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x140177C40 (-bCompute@DC@@QEAAHXZ.c)
 *     GreIntersectVisRect @ 0x14017D540 (GreIntersectVisRect.c)
 *     RGNCOREOBJ::iCombine_RGNOBJ__RGNOBJ::iCombine_::_2_::_lambda_1___ @ 0x1401C40E4 (RGNCOREOBJ--iCombine_RGNOBJ__RGNOBJ--iCombine_--_2_--_lambda_1___.c)
 *     ?vGetSubRect@RGNOBJ@@QEBAXAEBVRustAutoHotpatchLockSH@@PEAU_RECTL@@@Z @ 0x1401C4A00 (-vGetSubRect@RGNOBJ@@QEBAXAEBVRustAutoHotpatchLockSH@@PEAU_RECTL@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJAEBVRustAutoHotpatchLockSH@@@Z @ 0x1401C62D4 (-iComplexity@RGNOBJ@@QEBAJAEBVRustAutoHotpatchLockSH@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall REGION_CORE::get_sizeScan(REGION_CORE *this)
{
  struct REGION_CORE *v1; // rdi
  unsigned int v3; // eax
  char *v4; // rcx
  unsigned int v5; // edi

  v1 = qword_1402A10B0;
  if ( !qword_1402A10B0 )
    return *((unsigned int *)this + 4);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v1 + 8, 2LL);
  v3 = (*(__int64 (__fastcall **)(REGION_CORE *))(*(_QWORD *)v1 + 216LL))(this);
  v4 = (char *)v1 + 8;
  v5 = v3;
  ExReleasePushLockSharedEx(v4, 2LL);
  KeLeaveCriticalRegion();
  return v5;
}
