/*
 * XREFs of ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x14000DF38
 * Callers:
 *     ?MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x14000A130 (-MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x14000ADB0 (-MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 *     ?MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x14000B680 (-MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x14000BA90 (-MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x14000C220 (-MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEA.c)
 *     ?MulCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x14000C9D0 (-MulCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x14000CCF0 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x14000E26C (-bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PE.c)
 *     ?MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x14000EA90 (-MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 *     ?MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1401DBF80 (-MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     ?MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1401DC8D0 (-MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_.c)
 *     ?MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1401E5EE0 (-MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL.c)
 *     ?MulEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x140333190 (-MulEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1403332F0 (-MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MSURF::bFindSurface(MSURF *this, struct _SURFOBJ *a2, struct _CLIPOBJ *a3, struct _RECTL *a4)
{
  USHORT iType; // ax
  DHPDEV dhpdev; // rax
  CLIPOBJ **v9; // rdi
  DHSURF dhsurf; // r9
  __int64 **v11; // rdx
  __int64 v12; // r8
  CLIPOBJ *Clip; // rax
  __int64 v15; // rcx
  BYTE *v16; // r12
  struct _CLIPOBJ *v17; // rax
  RECTL *v18; // r14
  struct _RECTL *v19; // r15
  __int64 *i; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  char v23; // cl

  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  iType = a2->iType;
  if ( iType == 3 )
  {
    dhpdev = a2->dhpdev;
    v9 = (CLIPOBJ **)((char *)this + 72);
    *(_QWORD *)this = dhpdev;
    *((_QWORD *)this + 9) = a3;
    dhsurf = a2->dhsurf;
    *((_QWORD *)this + 3) = a2->dhsurf;
    v11 = *(__int64 ***)dhpdev;
    *((_QWORD *)this + 7) = *(_QWORD *)dhpdev;
    while ( v11 )
    {
      v12 = *(_QWORD *)(*((_QWORD *)dhsurf + 1) + 8LL * *((unsigned int *)v11 + 4));
      if ( v12 )
      {
        *((_QWORD *)this + 8) = v12;
        *((_QWORD *)this + 10) = *(_QWORD *)(W32GetSessionState() + 96) + 696LL;
        return 1LL;
      }
      v11 = (__int64 **)*v11;
      *((_QWORD *)this + 7) = v11;
    }
    goto LABEL_28;
  }
  if ( iType == 1 && ((_DWORD)a2->hdev[10] & 0x20000) == 0 )
    return 0LL;
  *(_QWORD *)this = a2->dhpdev;
  if ( !a3 || !a3->iDComplexity )
  {
    Clip = EngCreateClip();
    v9 = (CLIPOBJ **)((char *)this + 72);
    *((_QWORD *)this + 9) = Clip;
    if ( Clip )
    {
      v15 = *(_QWORD *)this;
      *((_DWORD *)this + 13) = 1;
      Clip->rclBounds = *(RECTL *)(v15 + 72);
      RGNOBJ::vSet((RGNOBJ *)&(*v9)[2].rclBounds.top, &(*v9)->rclBounds);
      v16 = (BYTE *)this + 88;
      v17 = a3;
      *((_BYTE *)this + 88) = 0;
      if ( !a3 )
        v17 = *v9;
      v18 = (RECTL *)((char *)this + 8);
      v19 = (struct _RECTL *)((char *)this + 32);
      *(RECTL *)((char *)this + 8) = v17->rclBounds;
      if ( a3 )
      {
        if ( !bIntersect(a4, (const struct _RECTL *)((char *)this + 8), (struct _RECTL *)this + 2) )
        {
LABEL_28:
          if ( *((_DWORD *)this + 13) == 1 )
            EngDeleteClip(*v9);
          return 0LL;
        }
      }
      else
      {
        *v19 = *a4;
      }
      goto LABEL_17;
    }
    return 0LL;
  }
  v18 = (RECTL *)((char *)this + 8);
  v9 = (CLIPOBJ **)((char *)this + 72);
  *((_QWORD *)this + 9) = a3;
  v16 = (BYTE *)this + 88;
  v19 = (struct _RECTL *)((char *)this + 32);
  *((_BYTE *)this + 88) = a3->iDComplexity;
  *(RECTL *)((char *)this + 8) = a3->rclBounds;
  if ( !bIntersect(a4, (const struct _RECTL *)((char *)this + 8), (struct _RECTL *)this + 2) )
    return 0LL;
LABEL_17:
  for ( i = *(__int64 **)this; ; i = (__int64 *)*((_QWORD *)this + 7) )
  {
    v21 = *i;
    *((_QWORD *)this + 7) = *i;
    if ( !v21 )
    {
      (*v9)->rclBounds = *v18;
      (*v9)->iDComplexity = *v16;
      goto LABEL_28;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v21 + 56) + 40LL) & 0x400) == 0 )
      break;
LABEL_35:
    ;
  }
  if ( !*v16
    && v19->left >= *(_DWORD *)(v21 + 28)
    && *((_DWORD *)this + 9) >= *(_DWORD *)(v21 + 32)
    && *((_DWORD *)this + 10) <= *(_DWORD *)(v21 + 36)
    && *((_DWORD *)this + 11) <= *(_DWORD *)(v21 + 40) )
  {
    (*v9)->iDComplexity = 0;
    (*v9)->rclBounds = *v19;
    goto LABEL_26;
  }
  if ( !bIntersect(v19, (const struct _RECTL *)(v21 + 28), &(*v9)->rclBounds) )
  {
    (*v9)->rclBounds = *v18;
    goto LABEL_35;
  }
  v23 = 1;
  if ( *v16 )
    v23 = *v16;
  (*v9)->iDComplexity = v23;
LABEL_26:
  v22 = *((_QWORD *)this + 7);
  *((_QWORD *)this + 8) = *(_QWORD *)(v22 + 64);
  *((_QWORD *)this + 10) = v22 + 72;
  return 1LL;
}
