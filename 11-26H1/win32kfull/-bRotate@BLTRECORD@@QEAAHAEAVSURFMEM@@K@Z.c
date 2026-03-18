/*
 * XREFs of ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x14031E398
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0KE@Z @ 0x1401A91A0 (-bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0KE@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@AEAVSURFMEM@@1KK@Z @ 0x14031E140 (-bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@AEAVSURFMEM@@1KK@Z.c)
 * Callees:
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x140080170 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     EngPlgBlt @ 0x1400EA130 (EngPlgBlt.c)
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1401AAD6C (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vAltUnlockFast@SURFACE@@QEAAXXZ @ 0x14023A214 (-vAltUnlockFast@SURFACE@@QEAAXXZ.c)
 *     ?vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z @ 0x1402909EC (-vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall BLTRECORD::bRotate(BLTRECORD *this, struct SURFMEM *a2, ULONG a3)
{
  int v6; // esi
  int v7; // r14d
  int v8; // edx
  __int64 v9; // r15
  int v10; // esi
  int v11; // r14d
  struct SURFACE *v12; // rax
  __int64 result; // rax
  POINTL pptlBrushOrg; // [rsp+60h] [rbp-39h] BYREF
  int v15; // [rsp+68h] [rbp-31h] BYREF
  int v16; // [rsp+6Ch] [rbp-2Dh]
  int v17; // [rsp+70h] [rbp-29h]
  int v18; // [rsp+74h] [rbp-25h]
  _DWORD v19[4]; // [rsp+78h] [rbp-21h] BYREF
  __int64 v20; // [rsp+88h] [rbp-11h]
  int v21; // [rsp+90h] [rbp-9h]
  int v22; // [rsp+94h] [rbp-5h]
  POINTFIX pptfx; // [rsp+98h] [rbp-1h] BYREF
  int v24; // [rsp+A0h] [rbp+7h]
  int v25; // [rsp+A4h] [rbp+Bh]
  int v26; // [rsp+A8h] [rbp+Fh]
  int v27; // [rsp+ACh] [rbp+13h]
  int v28; // [rsp+B0h] [rbp+17h]
  int v29; // [rsp+B4h] [rbp+1Bh]

  BLTRECORD::vBound(this, (struct ERECTL *)&v15);
  v6 = v15;
  v7 = v16;
  v19[1] = v17 - v15;
  v19[3] = 0;
  v19[2] = v18 - v16;
  v22 = 0;
  v19[0] = 1;
  v20 = 0LL;
  v21 = *((_DWORD *)BLTRECORD::pSurfMskOut(this) + 28) & 0x40000;
  SURFMEM::bCreateDIB(a2, (struct _DEVBITMAPINFO *)v19, 0LL, 0LL, 0, 0LL, 0LL, 0, v8, 0);
  v9 = *(_QWORD *)a2;
  if ( !*(_QWORD *)a2 )
    return 0LL;
  v10 = 16 * v6;
  v11 = 16 * v7;
  pptfx.x = *((_DWORD *)this + 24) - v10;
  pptfx.y = *((_DWORD *)this + 25) - v11;
  v24 = *((_DWORD *)this + 26) - v10;
  v25 = *((_DWORD *)this + 27) - v11;
  v26 = *((_DWORD *)this + 28) - v10;
  v27 = *((_DWORD *)this + 29) - v11;
  v28 = *((_DWORD *)this + 30) - v10;
  v29 = *((_DWORD *)this + 31) - v11;
  BLTRECORD::vMirror(this, &pptfx);
  pptlBrushOrg = 0LL;
  v12 = BLTRECORD::pSurfMskOut(this);
  if ( !EngPlgBlt(
          (SURFOBJ *)(v9 + 24),
          (SURFOBJ *)(((unsigned __int64)v12 + 24) & -(__int64)(v12 != 0LL)),
          0LL,
          0LL,
          0LL,
          0LL,
          &pptlBrushOrg,
          &pptfx,
          (RECTL *)((char *)this + 168),
          0LL,
          a3) )
    return 0LL;
  *((_DWORD *)this + 49) &= ~0x20000u;
  SURFACE::vAltUnlockFast(*((SURFACE **)this + 8));
  result = 1LL;
  *((_QWORD *)this + 8) = *(_QWORD *)a2;
  *((_DWORD *)this + 42) = 0;
  *((_DWORD *)this + 43) = 0;
  return result;
}
