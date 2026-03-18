/*
 * XREFs of ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@AEAVXDCOBJ@@@Z @ 0x140084F0C
 * Callers:
 *     BltIcon @ 0x140056A38 (BltIcon.c)
 *     GreAlphaBlend @ 0x140073C58 (GreAlphaBlend.c)
 *     NtGdiStretchBlt @ 0x140076870 (NtGdiStretchBlt.c)
 *     GreBitBltInternal @ 0x140084DC8 (GreBitBltInternal.c)
 *     ??0MAPIDCOBJ@@QEAA@PEAUHDC__@@0@Z @ 0x140084F74 (--0MAPIDCOBJ@@QEAA@PEAUHDC__@@0@Z.c)
 *     NtGdiBitBlt @ 0x14016F4A0 (NtGdiBitBlt.c)
 *     NtGdiMaskBlt @ 0x140189500 (NtGdiMaskBlt.c)
 *     NtGdiTransparentBlt @ 0x1401B4C50 (NtGdiTransparentBlt.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140260B30 (--0DCOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VOPTAPIDCOBJ@@@@QEAA@XZ @ 0x140300060 (--0-$UnexpectedThreadTerminationHandler@VOPTAPIDCOBJ@@@@QEAA@XZ.c)
 */

OPTAPIDCOBJ *__fastcall OPTAPIDCOBJ::OPTAPIDCOBJ(OPTAPIDCOBJ *this, HDC a2, struct Gre::Base::SESSION_GLOBALS **a3)
{
  DCOBJ::DCOBJ(this, a3[2]);
  UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>::UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>((char *)this + 72);
  *((_QWORD *)this + 13) = a2;
  *((_WORD *)this + 56) = 1;
  if ( *a3 && a2 == *(HDC *)*a3 )
  {
    *((_WORD *)this + 56) = 256;
    *(_QWORD *)this = *a3;
  }
  return this;
}
