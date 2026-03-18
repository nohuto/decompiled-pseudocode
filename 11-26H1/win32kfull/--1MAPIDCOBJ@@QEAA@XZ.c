/*
 * XREFs of ??1MAPIDCOBJ@@QEAA@XZ @ 0x1400B4334
 * Callers:
 *     _DrawIconEx @ 0x140027334 (_DrawIconEx.c)
 *     BltIcon @ 0x140027954 (BltIcon.c)
 *     GreAlphaBlend @ 0x1400B0E88 (GreAlphaBlend.c)
 *     NtGdiBitBlt @ 0x1400B5500 (NtGdiBitBlt.c)
 *     GreBitBltInternal @ 0x1400B5980 (GreBitBltInternal.c)
 *     NtGdiTransparentBlt @ 0x14016B240 (NtGdiTransparentBlt.c)
 *     NtGdiMaskBlt @ 0x14016B360 (NtGdiMaskBlt.c)
 *     NtGdiPlgBlt @ 0x14031E570 (NtGdiPlgBlt.c)
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400B5850 (--1DCOBJ@@QEAA@XZ.c)
 */

void __fastcall MAPIDCOBJ::~MAPIDCOBJ(MAPIDCOBJ *this)
{
  if ( !*((_BYTE *)this + 208) )
    *((_QWORD *)this + 13) = 0LL;
  PopThreadGuardedObject((char *)this + 168);
  DCOBJ::~DCOBJ((MAPIDCOBJ *)((char *)this + 104));
  APIDCOBJ::~APIDCOBJ(this);
}
