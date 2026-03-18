/*
 * XREFs of ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14007C824
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x14005D1D0 (CreateOrGetRedirectionBitmap.c)
 *     UpdateSprite @ 0x14007B8E4 (UpdateSprite.c)
 *     GreUpdateSprite @ 0x14007BD8C (GreUpdateSprite.c)
 *     GreGetDIBitsInternal @ 0x14007C00C (GreGetDIBitsInternal.c)
 *     GreCreateCompatibleBitmapEx @ 0x14007C0C0 (GreCreateCompatibleBitmapEx.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x14007C330 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     NtGdiCreateCompatibleBitmap @ 0x14007C6D0 (NtGdiCreateCompatibleBitmap.c)
 *     GreCreateDIBitmapReal @ 0x14007C73C (GreCreateDIBitmapReal.c)
 *     GreExtGetObjectW @ 0x14007D99C (GreExtGetObjectW.c)
 *     ?GrepPolyPatBlt@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1400807B8 (-GrepPolyPatBlt@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1400835D0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     ?GrepUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x14008B768 (-GrepUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x14008D9F8 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1400962F4 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     GrePatBlt @ 0x14009F4D0 (GrePatBlt.c)
 *     ?GrepPatBlt@@YAHAEAVXDCOBJ@@HHHHK@Z @ 0x14009F970 (-GrepPatBlt@@YAHAEAVXDCOBJ@@HHHHK@Z.c)
 *     ?bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1400DED60 (-bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1400E1C54 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     GreTransferDwmStateToSpriteState @ 0x14012313C (GreTransferDwmStateToSpriteState.c)
 *     NtGdiGetDIBitsInternal @ 0x140150C80 (NtGdiGetDIBitsInternal.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x140173F98 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     NtGdiCreateDIBitmapInternal @ 0x14017F5E0 (NtGdiCreateDIBitmapInternal.c)
 *     DxgkEngBltViaGDI @ 0x1401B4070 (DxgkEngBltViaGDI.c)
 *     bMoveDevDragRect @ 0x1401EDDDC (bMoveDevDragRect.c)
 *     GreSetDIBits @ 0x140313160 (GreSetDIBits.c)
 *     ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x14032AD1C (-bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140260B30 (--0DCOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VOPTAPIDCOBJ@@@@QEAA@XZ @ 0x140300060 (--0-$UnexpectedThreadTerminationHandler@VOPTAPIDCOBJ@@@@QEAA@XZ.c)
 */

OPTAPIDCOBJ *__fastcall OPTAPIDCOBJ::OPTAPIDCOBJ(OPTAPIDCOBJ *this, HDC a2)
{
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  OPTAPIDCOBJ *result; // rax

  v4 = Gre::Base::Globals(this);
  DCOBJ::DCOBJ(this, v4);
  UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>::UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>((char *)this + 72);
  *((_QWORD *)this + 13) = a2;
  result = this;
  *((_WORD *)this + 56) = 1;
  return result;
}
