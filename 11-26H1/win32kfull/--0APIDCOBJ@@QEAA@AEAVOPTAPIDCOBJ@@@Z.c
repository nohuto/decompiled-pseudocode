/*
 * XREFs of ??0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z @ 0x14016C418
 * Callers:
 *     ?GrepCreateDIBitmap@@YA?AVSURFREF@@AEAVOPTAPIDCOBJ@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x1400167D4 (-GrepCreateDIBitmap@@YA-AVSURFREF@@AEAVOPTAPIDCOBJ@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z @ 0x14007F744 (-bStretch@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z.c)
 *     ?GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1400B4DDC (-GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV-$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400B5D94 (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KAEAVOPTAPIDCOBJ@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x14016A6F8 (-bSpUpdateShape@@YAHPEAVSPRITE@@KAEAVOPTAPIDCOBJ@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE.c)
 *     ?GrepSetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@IIPEAX@Z @ 0x14016AE30 (-GrepSetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@IIPEAX@.c)
 *     NtGdiTransparentBlt @ 0x14016B240 (NtGdiTransparentBlt.c)
 *     ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x14016B868 (-GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z.c)
 *     ?GrepMaskBltDevLocked@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKAEAVDEVLOCKBLTOBJ@@AEAVBLTRECORD@@PEAVSURFACE@@@Z @ 0x14016BC94 (-GrepMaskBltDevLocked@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKAEAVDEVLOCKBLTOBJ@@AEAVBLTRECOR.c)
 *     GreTransferDwmStateToSpriteState @ 0x14028A2CC (GreTransferDwmStateToSpriteState.c)
 *     ?GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z @ 0x14031D908 (-GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z.c)
 *     NtGdiPlgBlt @ 0x14031E570 (NtGdiPlgBlt.c)
 * Callees:
 *     <none>
 */

APIDCOBJ *__fastcall APIDCOBJ::APIDCOBJ(APIDCOBJ *this, struct OPTAPIDCOBJ *a2)
{
  *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_OWORD *)this + 2) = 0LL;
  *((_OWORD *)this + 3) = 0LL;
  PushThreadGuardedObject(
    (char *)this + 32,
    (unsigned __int64)this & ((unsigned __int128)-(__int128)((unsigned __int64)this + 32) >> 64),
    UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
  *((_OWORD *)this + 4) = 0LL;
  *((_OWORD *)this + 5) = 0LL;
  PushThreadGuardedObject(
    (char *)this + 64,
    (unsigned __int64)this & ((unsigned __int128)-(__int128)((unsigned __int64)this + 64) >> 64),
    UnexpectedThreadTerminationHandler<APIDCOBJ>::OnUnexpectedThreadTerminationStatic);
  *((_BYTE *)this + 96) = 0;
  *(_QWORD *)this = *(_QWORD *)a2;
  return this;
}
