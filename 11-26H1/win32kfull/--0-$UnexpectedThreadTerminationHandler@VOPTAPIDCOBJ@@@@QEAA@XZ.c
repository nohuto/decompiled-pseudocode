/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VOPTAPIDCOBJ@@@@QEAA@XZ @ 0x14001678C
 * Callers:
 *     GreExtGetObjectW @ 0x140014058 (GreExtGetObjectW.c)
 *     ??0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140015900 (--0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     GreCreateDIBitmap @ 0x140015974 (GreCreateDIBitmap.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x140015AE0 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     UpdateSprite @ 0x140015F78 (UpdateSprite.c)
 *     NtGdiStretchBlt @ 0x140016260 (NtGdiStretchBlt.c)
 *     GreUpdateSprite @ 0x140016514 (GreUpdateSprite.c)
 *     ?GrepUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1400727E0 (-GrepUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x14007C6DC (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     ?GrepRectBlt@@YAHAEAVXDCOBJ@@PEAVERECTL@@@Z @ 0x1400ABA6C (-GrepRectBlt@@YAHAEAVXDCOBJ@@PEAVERECTL@@@Z.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401A98C8 (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     DxgkEngBltViaGDI @ 0x1401A9910 (DxgkEngBltViaGDI.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>::UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>(
        _OWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  PushThreadGuardedObject(
    a1,
    (unsigned __int64)(a1 - 4) & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64),
    UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
