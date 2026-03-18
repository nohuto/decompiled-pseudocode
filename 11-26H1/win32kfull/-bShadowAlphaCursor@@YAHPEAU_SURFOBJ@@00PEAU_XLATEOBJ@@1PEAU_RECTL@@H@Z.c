/*
 * XREFs of ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x14009EFCC
 * Callers:
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1400A0D50 (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 * Callees:
 *     ?bBlurCursorShadow@@YAHPEAU_SURFOBJ@@@Z @ 0x14009D5A8 (-bBlurCursorShadow@@YAHPEAU_SURFOBJ@@@Z.c)
 *     EngBitBlt @ 0x1400DBF60 (EngBitBlt.c)
 *     EngCopyBits @ 0x1400E3940 (EngCopyBits.c)
 *     EngAlphaBlend @ 0x1400E4850 (EngAlphaBlend.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall bShadowAlphaCursor(
        struct _SURFOBJ *a1,
        SURFOBJ *psoSrc,
        SURFOBJ *a3,
        XLATEOBJ *pxlo,
        struct _XLATEOBJ *a5,
        struct _RECTL *a6,
        int a7)
{
  unsigned int v7; // ebx
  SURFOBJ *v10; // rdi
  LONG cx; // eax
  LONG v12; // r13d
  unsigned int *pvBits; // rcx
  ULONG i; // edx
  unsigned int v15; // eax
  LONG v17; // eax
  LONG v18; // eax
  struct Gre::Base::SESSION_GLOBALS *v19; // rax
  POINTL *p_pptlSrc; // rcx
  LONG v21; // eax
  XLATEOBJ *v22; // rax
  SURFOBJ *v23; // rdx
  _DWORD *v24; // rcx
  ULONG j; // eax
  LONG v26; // eax
  LONG bottom; // eax
  POINTL *v28; // rax
  bool v29; // zf
  XLATEOBJ *v30; // rcx
  unsigned __int64 v31; // [rsp+60h] [rbp-81h] BYREF
  POINTL pptlSrc; // [rsp+68h] [rbp-79h] BYREF
  __int64 v33; // [rsp+70h] [rbp-71h] BYREF
  XLATEOBJ v34; // [rsp+78h] [rbp-69h] BYREF
  BLENDOBJ pBlendObj; // [rsp+90h] [rbp-51h] BYREF
  int v36; // [rsp+94h] [rbp-4Dh]
  char *v37; // [rsp+98h] [rbp-49h]
  char *v38; // [rsp+A0h] [rbp-41h]
  char *v39; // [rsp+A8h] [rbp-39h]
  struct _XLATEOBJ *v40; // [rsp+B0h] [rbp-31h]
  XLATEOBJ *v41; // [rsp+B8h] [rbp-29h]
  RECTL prclDest; // [rsp+C0h] [rbp-21h] BYREF
  RECTL prclSrc; // [rsp+D0h] [rbp-11h] BYREF

  v7 = 0;
  v41 = pxlo;
  v40 = a5;
  *(_QWORD *)&v34.iUniq = 0LL;
  v10 = a3;
  cx = psoSrc->sizlBitmap.cx;
  v12 = psoSrc->sizlBitmap.cy >> 1;
  prclSrc = 0LL;
  *(_QWORD *)&v34.iSrcType = 0LL;
  v33 = 0LL;
  v34.pulXlate = (ULONG *)&v31;
  if ( a7 )
  {
    if ( !a3 )
      return 0LL;
    prclDest.right = cx + 6;
    prclDest.bottom = v12 + 4;
    pptlSrc = 0LL;
    prclDest.left = 6;
    prclDest.top = 4;
    EngBitBlt(a1, a3, 0LL, 0LL, 0LL, &prclDest, &pptlSrc, 0LL, 0LL, 0LL, 0xEEEEu);
    pvBits = (unsigned int *)a1->pvBits;
    for ( i = a1->cjBits >> 2; i; --i )
    {
      if ( (*pvBits & 0xFF000000) != 0 )
        v15 = (*((unsigned __int8 *)pvBits + 3) << 22) & 0xFF000000;
      else
        v15 = 0;
      *pvBits++ = v15;
    }
  }
  else
  {
    prclDest.right = cx;
    p_pptlSrc = (POINTL *)&v33;
    v21 = HIDWORD(v33);
    if ( !a3 )
      v21 = v12;
    HIDWORD(v33) = v21;
    if ( a3 )
      p_pptlSrc = &pptlSrc;
    v22 = a5;
    if ( !a3 )
      v22 = pxlo;
    pptlSrc = 0LL;
    v23 = a3;
    if ( !a3 )
      v23 = psoSrc;
    *(_QWORD *)&prclDest.left = 0LL;
    prclDest.bottom = v12;
    EngBitBlt(a1, v23, 0LL, 0LL, v22, &prclDest, p_pptlSrc, 0LL, 0LL, 0LL, 0xEEEEu);
    v31 = 0xFFFFFFFF00000000uLL;
    EngBitBlt(a1, psoSrc, 0LL, 0LL, &v34, &prclDest, &pptlSrc, 0LL, 0LL, 0LL, 0x8888u);
    v24 = a1->pvBits;
    for ( j = a1->cjBits >> 2; j; --j )
    {
      if ( *v24 )
        return 0LL;
      ++v24;
    }
    v26 = a6->right + 6;
    prclDest.left = 6;
    prclDest.right = v26;
    bottom = a6->bottom;
    prclDest.top = 4;
    prclDest.bottom = bottom + 4;
    v31 = 0x40000000LL;
    EngCopyBits(a1, psoSrc, 0LL, &v34, &prclDest, &pptlSrc);
  }
  if ( (unsigned int)bBlurCursorShadow(a1) && (unsigned int)bBlurCursorShadow(a1) )
  {
    v17 = a6->right + 3;
    prclDest.left = 3;
    prclDest.right = v17;
    v18 = a6->bottom + 3;
    prclDest.top = 3;
    prclDest.bottom = v18;
    if ( a7 )
    {
      v36 = 0;
      v19 = Gre::Base::Globals((Gre::Base *)3);
      pBlendObj = (BLENDOBJ)33488896;
      prclSrc.right = a6->right;
      prclSrc.bottom = a6->bottom;
      v37 = (char *)v19 + 4664;
      v38 = (char *)v19 + 4664;
      v39 = (char *)v19 + 4664;
      EngAlphaBlend(a1, v10, 0LL, (XLATEOBJ *)((char *)v19 + 4664), &prclDest, &prclSrc, &pBlendObj);
    }
    else
    {
      v31 = 0xFFFFFFFF00000000uLL;
      EngBitBlt(a1, psoSrc, 0LL, 0LL, &v34, &prclDest, &pptlSrc, 0LL, 0LL, 0LL, 0x8888u);
      v31 = 4278190080LL;
      EngBitBlt(a1, psoSrc, 0LL, 0LL, &v34, &prclDest, &pptlSrc, 0LL, 0LL, 0LL, 0xEEEEu);
      if ( !v10 )
      {
        LODWORD(v33) = 0;
        HIDWORD(v33) = v12;
      }
      v28 = (POINTL *)&v33;
      v29 = v10 == 0LL;
      if ( v10 )
        v28 = &pptlSrc;
      else
        v10 = psoSrc;
      v30 = v40;
      if ( v29 )
        v30 = v41;
      EngBitBlt(a1, v10, 0LL, 0LL, v30, &prclDest, v28, 0LL, 0LL, 0LL, 0xEEEEu);
    }
    return 1;
  }
  return v7;
}
