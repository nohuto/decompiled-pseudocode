/*
 * XREFs of ??1FRINGERECT@@QEAA@XZ @ 0x1400DB344
 * Callers:
 *     EngTextOut @ 0x1400DA230 (EngTextOut.c)
 * Callees:
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1400AED70 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@@Z @ 0x1400DBDFC (--0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@@Z.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1400DBE60 (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1400DC674 (-vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall FRINGERECT::~FRINGERECT(FRINGERECT *this)
{
  int v2; // eax
  SURFACE *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rsi
  char *v6; // rdi
  int (*i)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rbp
  __int64 v8; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v9[80]; // [rsp+70h] [rbp-68h] BYREF

  if ( *((_QWORD *)this + 1) )
  {
    v2 = *((_DWORD *)this + 8) - 1;
    for ( *((_DWORD *)this + 8) = v2; v2 >= 0; *((_DWORD *)this + 8) = v2 )
    {
      vDIBSolidBlt(
        *(struct SURFACE **)this,
        (struct _RECTL *)((char *)this + 16 * v2 + 36),
        *((struct _CLIPOBJ **)this + 2),
        **((_DWORD **)this + 3),
        0);
      v2 = *((_DWORD *)this + 8) - 1;
    }
  }
  else
  {
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem(
      (UMPDReleaseAcquireRFONTSem *)v9,
      *(struct SURFACE **)this,
      *((struct _FONTOBJ **)this + 13));
    v3 = *(SURFACE **)this;
    v4 = *(_QWORD *)this;
    v8 = 0LL;
    v5 = ((unsigned __int64)v3 + 24) & -(__int64)(v4 != 0);
    v6 = (char *)this + 36;
    for ( i = SURFACE::pfnBitBlt(v3); v6 < (char *)this + 16 * *((int *)this + 8) + 36; v6 += 16 )
      ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, char *, _QWORD, _QWORD, _QWORD, __int64 *, int))i)(
        v5,
        0LL,
        0LL,
        *((_QWORD *)this + 2),
        0LL,
        v6,
        0LL,
        0LL,
        *((_QWORD *)this + 3),
        &v8,
        61680);
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v9);
  }
}
