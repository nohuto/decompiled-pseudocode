/*
 * XREFs of ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D3F84
 * Callers:
 *     NtGdiSTROBJ_vEnumStart @ 0x1400A9080 (NtGdiSTROBJ_vEnumStart.c)
 *     NtGdiSTROBJ_bGetAdvanceWidths @ 0x1400A9190 (NtGdiSTROBJ_bGetAdvanceWidths.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1400A9830 (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1400D1DA0 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     NtGdiXLATEOBJ_iXlate @ 0x1400D23A0 (NtGdiXLATEOBJ_iXlate.c)
 *     NtGdiPATHOBJ_vGetBounds @ 0x1400D2420 (NtGdiPATHOBJ_vGetBounds.c)
 *     NtGdiPATHOBJ_vEnumStart @ 0x1400D3280 (NtGdiPATHOBJ_vEnumStart.c)
 *     NtGdiPATHOBJ_bEnum @ 0x1400D39B0 (NtGdiPATHOBJ_bEnum.c)
 *     NtGdiEngDeletePath @ 0x1400D41D0 (NtGdiEngDeletePath.c)
 *     NtGdiFONTOBJ_pifi @ 0x1400D4710 (NtGdiFONTOBJ_pifi.c)
 *     NtGdiBRUSHOBJ_ulGetBrushColor @ 0x1400D4870 (NtGdiBRUSHOBJ_ulGetBrushColor.c)
 *     NtGdiXFORMOBJ_iGetXform @ 0x1400D4A30 (NtGdiXFORMOBJ_iGetXform.c)
 *     NtGdiCLIPOBJ_ppoGetPath @ 0x1400D4B40 (NtGdiCLIPOBJ_ppoGetPath.c)
 *     NtGdiFONTOBJ_pvTrueTypeFontFile @ 0x1400D5310 (NtGdiFONTOBJ_pvTrueTypeFontFile.c)
 *     NtGdiFONTOBJ_pxoGetXform @ 0x1400D5430 (NtGdiFONTOBJ_pxoGetXform.c)
 *     NtGdiXFORMOBJ_bApplyXform @ 0x1400D5490 (NtGdiXFORMOBJ_bApplyXform.c)
 *     NtGdiCLIPOBJ_bEnum @ 0x1400D5C80 (NtGdiCLIPOBJ_bEnum.c)
 *     NtGdiBRUSHOBJ_DeleteRbrush @ 0x1400D5DE0 (NtGdiBRUSHOBJ_DeleteRbrush.c)
 *     NtGdiEngBitBlt @ 0x1400D5EE0 (NtGdiEngBitBlt.c)
 *     NtGdiEngComputeGlyphSet @ 0x14017CE30 (NtGdiEngComputeGlyphSet.c)
 *     NtGdiEngEraseSurface @ 0x1401E2D60 (NtGdiEngEraseSurface.c)
 *     NtGdiEngCreatePalette @ 0x1401F0EE0 (NtGdiEngCreatePalette.c)
 *     NtGdiXLATEOBJ_cGetPalette @ 0x1401F37B0 (NtGdiXLATEOBJ_cGetPalette.c)
 *     NtGdiBRUSHOBJ_hGetColorTransform @ 0x1401F6330 (NtGdiBRUSHOBJ_hGetColorTransform.c)
 *     NtGdiEngCheckAbort @ 0x1401F8490 (NtGdiEngCheckAbort.c)
 *     NtGdiEngLockSurface @ 0x1402016E0 (NtGdiEngLockSurface.c)
 *     NtGdiFONTOBJ_vGetInfo @ 0x140201BC0 (NtGdiFONTOBJ_vGetInfo.c)
 *     NtGdiEngCreateBitmap @ 0x140202D60 (NtGdiEngCreateBitmap.c)
 *     NtGdiEngFillPath @ 0x14020DCC0 (NtGdiEngFillPath.c)
 *     NtGdiEngCreateClip @ 0x140214B80 (NtGdiEngCreateClip.c)
 *     NtGdiEngUnlockSurface @ 0x140216E00 (NtGdiEngUnlockSurface.c)
 *     NtGdiEngAssociateSurface @ 0x140217060 (NtGdiEngAssociateSurface.c)
 *     NtGdiEngDeleteClip @ 0x14021CF90 (NtGdiEngDeleteClip.c)
 *     NtGdiCLIPOBJ_cEnumStart @ 0x140220D00 (NtGdiCLIPOBJ_cEnumStart.c)
 *     NtGdiBRUSHOBJ_pvGetRbrush @ 0x140222E20 (NtGdiBRUSHOBJ_pvGetRbrush.c)
 *     NtGdiEngDeletePalette @ 0x140263E10 (NtGdiEngDeletePalette.c)
 *     NtGdiEngDeleteSurface @ 0x140263EF0 (NtGdiEngDeleteSurface.c)
 *     NtGdiEngStretchBlt @ 0x140263F90 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1402644B0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStrokePath @ 0x140264B40 (NtGdiEngStrokePath.c)
 *     NtGdiEngTextOut @ 0x140264F30 (NtGdiEngTextOut.c)
 *     NtGdiEngMarkBandingSurface @ 0x14026EB30 (NtGdiEngMarkBandingSurface.c)
 *     ?UMPDENGCALL_dtor@UMPDENGCALL@UMPDOBJ@@SAXPEAX@Z @ 0x14033AAC0 (-UMPDENGCALL_dtor@UMPDENGCALL@UMPDOBJ@@SAXPEAX@Z.c)
 *     NtGdiBRUSHOBJ_pvAllocRbrush @ 0x14033AEC0 (NtGdiBRUSHOBJ_pvAllocRbrush.c)
 *     NtGdiEngAlphaBlend @ 0x14033AF40 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngCopyBits @ 0x14033B220 (NtGdiEngCopyBits.c)
 *     NtGdiEngCreateDeviceBitmap @ 0x14033B4D0 (NtGdiEngCreateDeviceBitmap.c)
 *     NtGdiEngCreateDeviceSurface @ 0x14033B570 (NtGdiEngCreateDeviceSurface.c)
 *     NtGdiEngGradientFill @ 0x14033B610 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x14033BA90 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x14033BD70 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x14033BF20 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStrokeAndFillPath @ 0x14033C2E0 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngTransparentBlt @ 0x14033C780 (NtGdiEngTransparentBlt.c)
 *     NtGdiFONTOBJ_cGetAllGlyphHandles @ 0x14033C9F0 (NtGdiFONTOBJ_cGetAllGlyphHandles.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x14033CB00 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiFONTOBJ_pfdg @ 0x14033CC60 (NtGdiFONTOBJ_pfdg.c)
 *     NtGdiPATHOBJ_bEnumClipLines @ 0x14033CFC0 (NtGdiPATHOBJ_bEnumClipLines.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x14033D130 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 *     NtGdiSTROBJ_dwGetCodePage @ 0x14033D260 (NtGdiSTROBJ_dwGetCodePage.c)
 *     NtGdiXLATEOBJ_hGetColorTransform @ 0x14033D3C0 (NtGdiXLATEOBJ_hGetColorTransform.c)
 * Callees:
 *     ?Transfer@ThreadRestrictNewHandlesRegion@@QEAAXPEAV1@@Z @ 0x14021EEB8 (-Transfer@ThreadRestrictNewHandlesRegion@@QEAAXPEAV1@@Z.c)
 */

void __fastcall UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(struct W32_PUSH_LOCK **this)
{
  struct W32_PUSH_LOCK *v2; // rax
  struct ThreadRestrictNewHandlesRegion *v3; // rdx
  struct W32_PUSH_LOCK *v4; // rax
  struct W32_PUSH_LOCK *v5; // rcx

  PopThreadGuardedObject(this);
  v2 = this[4];
  if ( v2 )
  {
    --*((_DWORD *)v2 + 113);
    v3 = this[11];
    if ( v3 )
    {
      ThreadRestrictNewHandlesRegion::Transfer(this[10], v3);
      ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion(this[10]);
      Win32FreePool(this[10]);
      this[10] = 0LL;
    }
    if ( *((_BYTE *)this + 96) )
      KeSetEvent(*((PRKEVENT *)this[4] + 4), 0, 0);
  }
  v4 = this[10];
  if ( v4 )
    *((_BYTE *)v4 + 80) = 0;
  v5 = this[5];
  if ( v5 )
    GreReleasePushLockExclusive(v5);
}
