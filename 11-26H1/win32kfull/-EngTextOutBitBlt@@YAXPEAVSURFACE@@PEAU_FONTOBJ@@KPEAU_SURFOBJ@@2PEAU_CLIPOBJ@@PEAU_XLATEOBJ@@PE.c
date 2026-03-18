/*
 * XREFs of ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x14026BA50
 * Callers:
 *     EngTextOut @ 0x1400DA230 (EngTextOut.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1400D55E8 (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@@Z @ 0x1400DBDFC (--0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@@Z.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1400DBE60 (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     EngBitBlt @ 0x1400DBF60 (EngBitBlt.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall EngTextOutBitBlt(
        struct SURFACE *this,
        struct _FONTOBJ *a2,
        char a3,
        struct _SURFOBJ *a4,
        struct _SURFOBJ *a5,
        CLIPOBJ *pco,
        struct _XLATEOBJ *a7,
        RECTL *a8,
        struct _POINTL *a9,
        struct _POINTL *a10,
        struct _BRUSHOBJ *a11,
        struct _POINTL *pptlBrush)
{
  struct _SURFOBJ *v13; // r8
  struct _SURFOBJ *v14; // r9
  RECTL *prclTrg; // [rsp+28h] [rbp-C0h]
  POINTL *pptlMask; // [rsp+38h] [rbp-B0h]
  struct _POINTL *pbo; // [rsp+40h] [rbp-A8h]
  _QWORD v18[2]; // [rsp+60h] [rbp-88h] BYREF
  _BYTE v19[80]; // [rsp+70h] [rbp-78h] BYREF

  if ( (a3 & 0x10) != 0 )
  {
    v18[0] = a2;
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v19, this, a2);
    TextOutBitBlt(
      this,
      (struct RFONTOBJ *)v18,
      v13,
      v14,
      pco,
      (struct _XLATEOBJ *)prclTrg,
      a8,
      pptlMask,
      pbo,
      a11,
      pptlBrush);
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v19);
    v18[0] = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v18);
  }
  else
  {
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v19, this, a2);
    EngBitBlt(
      (SURFOBJ *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL)),
      0LL,
      0LL,
      pco,
      0LL,
      a8,
      0LL,
      0LL,
      a11,
      pptlBrush,
      0xF0F0u);
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v19);
  }
}
