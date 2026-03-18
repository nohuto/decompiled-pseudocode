/*
 * XREFs of ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C
 * Callers:
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1400D6720 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     NtGdiPATHOBJ_vGetBounds @ 0x1400D6990 (NtGdiPATHOBJ_vGetBounds.c)
 *     NtGdiEngDeletePath @ 0x1400D6A70 (NtGdiEngDeletePath.c)
 *     NtGdiPATHOBJ_vEnumStart @ 0x1400D7020 (NtGdiPATHOBJ_vEnumStart.c)
 *     NtGdiPATHOBJ_bEnum @ 0x1400D74C0 (NtGdiPATHOBJ_bEnum.c)
 *     NtGdiBRUSHOBJ_ulGetBrushColor @ 0x1400D80C0 (NtGdiBRUSHOBJ_ulGetBrushColor.c)
 *     NtGdiCLIPOBJ_ppoGetPath @ 0x1400D8200 (NtGdiCLIPOBJ_ppoGetPath.c)
 *     NtGdiXFORMOBJ_iGetXform @ 0x1400D8260 (NtGdiXFORMOBJ_iGetXform.c)
 *     NtGdiXLATEOBJ_iXlate @ 0x1400D85E0 (NtGdiXLATEOBJ_iXlate.c)
 *     NtGdiFONTOBJ_pxoGetXform @ 0x1400D8E30 (NtGdiFONTOBJ_pxoGetXform.c)
 *     NtGdiXFORMOBJ_bApplyXform @ 0x1400D8E90 (NtGdiXFORMOBJ_bApplyXform.c)
 *     NtGdiFONTOBJ_pifi @ 0x1400D9200 (NtGdiFONTOBJ_pifi.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1400D9450 (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 *     NtGdiCLIPOBJ_bEnum @ 0x1400D9DB0 (NtGdiCLIPOBJ_bEnum.c)
 *     NtGdiEngEraseSurface @ 0x1400F48A0 (NtGdiEngEraseSurface.c)
 *     NtGdiEngBitBlt @ 0x1400F4B10 (NtGdiEngBitBlt.c)
 *     NtGdiEngFillPath @ 0x1400F5100 (NtGdiEngFillPath.c)
 *     NtGdiEngCheckAbort @ 0x1400F5950 (NtGdiEngCheckAbort.c)
 *     NtGdiXLATEOBJ_cGetPalette @ 0x140184FA0 (NtGdiXLATEOBJ_cGetPalette.c)
 *     NtGdiBRUSHOBJ_pvGetRbrush @ 0x1401886D0 (NtGdiBRUSHOBJ_pvGetRbrush.c)
 *     NtGdiBRUSHOBJ_hGetColorTransform @ 0x1401DE6A0 (NtGdiBRUSHOBJ_hGetColorTransform.c)
 *     NtGdiEngComputeGlyphSet @ 0x140205DB0 (NtGdiEngComputeGlyphSet.c)
 *     NtGdiEngCreatePalette @ 0x14021FF70 (NtGdiEngCreatePalette.c)
 *     NtGdiBRUSHOBJ_DeleteRbrush @ 0x1402305D0 (NtGdiBRUSHOBJ_DeleteRbrush.c)
 *     NtGdiEngCreateBitmap @ 0x140230890 (NtGdiEngCreateBitmap.c)
 *     NtGdiSTROBJ_vEnumStart @ 0x140231890 (NtGdiSTROBJ_vEnumStart.c)
 *     NtGdiFONTOBJ_cGetAllGlyphHandles @ 0x1402334E0 (NtGdiFONTOBJ_cGetAllGlyphHandles.c)
 *     NtGdiSTROBJ_bGetAdvanceWidths @ 0x140236B30 (NtGdiSTROBJ_bGetAdvanceWidths.c)
 *     NtGdiFONTOBJ_vGetInfo @ 0x14023A510 (NtGdiFONTOBJ_vGetInfo.c)
 *     NtGdiEngCreateClip @ 0x140249590 (NtGdiEngCreateClip.c)
 *     NtGdiFONTOBJ_pvTrueTypeFontFile @ 0x14024E7C0 (NtGdiFONTOBJ_pvTrueTypeFontFile.c)
 *     NtGdiEngUnlockSurface @ 0x140251390 (NtGdiEngUnlockSurface.c)
 *     NtGdiEngLockSurface @ 0x140254AE0 (NtGdiEngLockSurface.c)
 *     NtGdiEngDeleteClip @ 0x140257AB0 (NtGdiEngDeleteClip.c)
 *     NtGdiCLIPOBJ_cEnumStart @ 0x14025B530 (NtGdiCLIPOBJ_cEnumStart.c)
 *     NtGdiBRUSHOBJ_pvAllocRbrush @ 0x14032C6E0 (NtGdiBRUSHOBJ_pvAllocRbrush.c)
 *     NtGdiEngAlphaBlend @ 0x14032C760 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngAssociateSurface @ 0x14032CA10 (NtGdiEngAssociateSurface.c)
 *     NtGdiEngCopyBits @ 0x14032CB40 (NtGdiEngCopyBits.c)
 *     NtGdiEngCreateDeviceBitmap @ 0x14032CDE0 (NtGdiEngCreateDeviceBitmap.c)
 *     NtGdiEngCreateDeviceSurface @ 0x14032CE80 (NtGdiEngCreateDeviceSurface.c)
 *     NtGdiEngDeletePalette @ 0x14032CF20 (NtGdiEngDeletePalette.c)
 *     NtGdiEngDeleteSurface @ 0x14032CFB0 (NtGdiEngDeleteSurface.c)
 *     NtGdiEngGradientFill @ 0x14032D080 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x14032D480 (NtGdiEngLineTo.c)
 *     NtGdiEngMarkBandingSurface @ 0x14032D6F0 (NtGdiEngMarkBandingSurface.c)
 *     NtGdiEngPaint @ 0x14032D7D0 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x14032D980 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStretchBlt @ 0x14032DD50 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x14032E1F0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStrokeAndFillPath @ 0x14032E7E0 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x14032EBB0 (NtGdiEngStrokePath.c)
 *     NtGdiEngTextOut @ 0x14032EF00 (NtGdiEngTextOut.c)
 *     NtGdiEngTransparentBlt @ 0x14032F2F0 (NtGdiEngTransparentBlt.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x14032F550 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiFONTOBJ_pfdg @ 0x14032F6B0 (NtGdiFONTOBJ_pfdg.c)
 *     NtGdiPATHOBJ_bEnumClipLines @ 0x14032FA30 (NtGdiPATHOBJ_bEnumClipLines.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x14032FBB0 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 *     NtGdiSTROBJ_dwGetCodePage @ 0x14032FCE0 (NtGdiSTROBJ_dwGetCodePage.c)
 *     NtGdiXLATEOBJ_hGetColorTransform @ 0x14032FE00 (NtGdiXLATEOBJ_hGetColorTransform.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GetThreadCurrentUMPDObj@UMPDOBJ@@SAPEAV1@PEAU_GRETHREAD@@@Z @ 0x1400D6EAC (-GetThreadCurrentUMPDObj@UMPDOBJ@@SAPEAV1@PEAU_GRETHREAD@@@Z.c)
 *     ?UnReTarget@ReEnableTRNH@@QEAAXXZ @ 0x1400D7EFC (-UnReTarget@ReEnableTRNH@@QEAAXXZ.c)
 *     ?ReTarget@ReEnableTRNH@@QEAA_NPEAU_GRETHREAD@@@Z @ 0x14020AE18 (-ReTarget@ReEnableTRNH@@QEAA_NPEAU_GRETHREAD@@@Z.c)
 *     Feature_837235000__private_IsEnabledDeviceUsageNoInline @ 0x14032C688 (Feature_837235000__private_IsEnabledDeviceUsageNoInline.c)
 */

UMPDOBJ::UMPDENGCALL *__fastcall UMPDOBJ::UMPDENGCALL::UMPDENGCALL(UMPDOBJ::UMPDENGCALL *this, struct _GRETHREAD *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  struct _GRETHREAD *v6; // rbx
  __int64 v7; // rcx
  signed __int32 v8; // eax

  *((_QWORD *)this + 4) = UMPDOBJ::GetThreadCurrentUMPDObj(a2);
  *(_OWORD *)((char *)this + 40) = 0LL;
  *(_OWORD *)((char *)this + 56) = 0LL;
  if ( v3 )
    v4 = *(_QWORD *)(v3 + 328);
  else
    v4 = 0LL;
  *((_QWORD *)this + 9) = v4;
  *((_QWORD *)this + 10) = 0LL;
  if ( v4 )
  {
    if ( *(_BYTE *)(v4 + 80) )
      *((_QWORD *)this + 9) = 0LL;
    else
      *(_BYTE *)(v4 + 80) = 1;
  }
  PushThreadGuardedObject(this, this, UMPDOBJ::UMPDENGCALL::UMPDENGCALL_dtor);
  if ( *((_QWORD *)this + 4) )
  {
    if ( !(unsigned int)Feature_837235000__private_IsEnabledDeviceUsageNoInline() )
      ++*(_DWORD *)(*((_QWORD *)this + 4) + 436LL);
    v6 = *(struct _GRETHREAD **)(*((_QWORD *)this + 4) + 416LL);
    if ( GreGetCurrentThread(v5) != v6
      && !ReEnableTRNH::ReTarget(
            (UMPDOBJ::UMPDENGCALL *)((char *)this + 40),
            *(struct _GRETHREAD **)(*((_QWORD *)this + 4) + 416LL)) )
    {
LABEL_20:
      *((_QWORD *)this + 4) = 0LL;
      return this;
    }
    if ( (unsigned int)Feature_837235000__private_IsEnabledDeviceUsageNoInline() )
    {
      v7 = *((_QWORD *)this + 4);
      while ( 1 )
      {
        v8 = *(_DWORD *)(v7 + 436);
        if ( v8 < 0 || (unsigned int)(v8 + 1) >= 0x80000000 )
          break;
        if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 436), v8 + 1, v8) )
          return this;
      }
      ReEnableTRNH::UnReTarget((UMPDOBJ::UMPDENGCALL *)((char *)this + 40));
      goto LABEL_20;
    }
  }
  return this;
}
