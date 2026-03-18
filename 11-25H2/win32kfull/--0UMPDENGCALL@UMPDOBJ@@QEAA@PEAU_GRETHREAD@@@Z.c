/*
 * XREFs of ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D3B24
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
 *     ?GetThreadCurrentUMPDObj@UMPDOBJ@@SAPEAV1@PEAU_GRETHREAD@@@Z @ 0x1400D3CA0 (-GetThreadCurrentUMPDObj@UMPDOBJ@@SAPEAV1@PEAU_GRETHREAD@@@Z.c)
 *     ?ReTarget@ReEnableTRNH@@QEAA_NPEAU_GRETHREAD@@@Z @ 0x1400D4034 (-ReTarget@ReEnableTRNH@@QEAA_NPEAU_GRETHREAD@@@Z.c)
 *     ?W32GetThreadWin32ThreadCrossSessionCheck@@YAPEAU_W32THREAD@@PEAU_ETHREAD@@@Z @ 0x1400D40B0 (-W32GetThreadWin32ThreadCrossSessionCheck@@YAPEAU_W32THREAD@@PEAU_ETHREAD@@@Z.c)
 *     ?vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z @ 0x1401717F4 (-vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z.c)
 */

UMPDOBJ::UMPDENGCALL *__fastcall UMPDOBJ::UMPDENGCALL::UMPDENGCALL(UMPDOBJ::UMPDENGCALL *this, struct _GRETHREAD *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // rbx
  bool v7; // zf
  struct W32_PUSH_LOCK *v8; // rbx
  __int64 v9; // rcx
  struct _ETHREAD *v10; // rcx
  struct _W32THREAD *v12; // rax
  struct W32_PUSH_LOCK *v13; // [rsp+30h] [rbp+8h] BYREF

  *((_QWORD *)this + 4) = UMPDOBJ::GetThreadCurrentUMPDObj(a2);
  *((_QWORD *)this + 5) = 0LL;
  *((_OWORD *)this + 3) = 0LL;
  *((_OWORD *)this + 4) = 0LL;
  if ( v3 )
    v5 = *(_QWORD *)(v3 + 336);
  else
    v5 = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 10) = v5;
  if ( v5 )
  {
    if ( *(_BYTE *)(v5 + 80) )
      *((_QWORD *)this + 10) = 0LL;
    else
      *(_BYTE *)(v5 + 80) = 1;
  }
  *((_BYTE *)this + 96) = 0;
  PushThreadGuardedObject(this, this, UMPDOBJ::UMPDENGCALL::UMPDENGCALL_dtor, v4);
  v6 = *((_QWORD *)this + 4);
  if ( v6 )
  {
    v7 = v6 == -24;
    v8 = (struct W32_PUSH_LOCK *)(v6 + 24);
    v13 = v8;
    if ( !v7 )
      GreAcquirePushLockExclusive(v8);
    v9 = *((_QWORD *)this + 4);
    if ( *(_BYTE *)(v9 + 457) )
    {
      *((_QWORD *)this + 4) = 0LL;
      Gre::PUSHLOCKEX::vUnlock((Gre::PUSHLOCKEX *)&v13, 0);
    }
    else
    {
      if ( KeReadStateEvent(*(PRKEVENT *)(v9 + 32)) )
      {
        KeResetEvent(*(PRKEVENT *)(*((_QWORD *)this + 4) + 32LL));
        *((_BYTE *)this + 96) = 1;
      }
      if ( v8 )
        GreReleasePushLockExclusive(v8);
      ++*(_DWORD *)(*((_QWORD *)this + 4) + 452LL);
      v10 = *(struct _ETHREAD **)(*((_QWORD *)this + 4) + 432LL);
      if ( KeGetCurrentThread() != v10 )
      {
        v12 = W32GetThreadWin32ThreadCrossSessionCheck(v10);
        if ( !ReEnableTRNH::ReTarget(
                (UMPDOBJ::UMPDENGCALL *)((char *)this + 48),
                (struct _GRETHREAD *)(((unsigned __int64)v12 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)v12 >> 64))) )
          *((_QWORD *)this + 4) = 0LL;
      }
    }
  }
  return this;
}
