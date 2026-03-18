/*
 * XREFs of ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x140061724
 * Callers:
 *     EngGradientFill @ 0x140061280 (EngGradientFill.c)
 * Callees:
 *     ?bIsTriangleInBounds@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z @ 0x140060120 (-bIsTriangleInBounds@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z.c)
 *     ?bDetermineTriangleFillRoutine@@YAHPEAVSURFACE@@PEAVXEPALOBJ@@PEAP6AX0PEAU_TRIANGLEDATA@@@ZPEAP6AX0PEAU_GRADIENTRECTDATA@@@Z@Z @ 0x140062120 (-bDetermineTriangleFillRoutine@@YAHPEAVSURFACE@@PEAVXEPALOBJ@@PEAP6AX0PEAU_TRIANGLEDATA@@@ZPEAP6.c)
 *     PALLOCMEM @ 0x140183124 (PALLOCMEM.c)
 *     PALLOCNOZ @ 0x140184030 (PALLOCNOZ.c)
 *     ?bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z @ 0x1401DECD8 (-bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z.c)
 *     ?bSplitTriangle@@YAHPEAU_TRIVERTEX@@PEAKPEAU_GRADIENT_TRIANGLE@@1PEAE@Z @ 0x14031C640 (-bSplitTriangle@@YAHPEAU_TRIVERTEX@@PEAKPEAU_GRADIENT_TRIANGLE@@1PEAE@Z.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall bTriangleMesh(
        struct SURFACE *a1,
        struct _XLATEOBJ *a2,
        struct _TRIVERTEX *a3,
        unsigned int a4,
        struct _GRADIENT_TRIANGLE *a5,
        size_t Size,
        unsigned int a7,
        struct _TRIVERTEX *a8,
        struct _RECTL *a9,
        struct _POINTL *a10)
{
  struct _TRIVERTEX *v10; // rbx
  struct _TRIVERTEX *v11; // r13
  __int64 v12; // r14
  unsigned int v15; // r12d
  unsigned int v16; // r9d
  __int64 v17; // rdi
  __int64 v18; // rax
  struct _RECTL *v19; // rdx
  struct _TRIVERTEX v20; // xmm0
  struct _POINTL *v21; // rax
  __int64 v22; // rsi
  ULONG *p_Vertex3; // rbx
  struct _TRIVERTEX *v24; // r14
  struct _TRIVERTEX *v25; // r13
  __int64 v26; // rsi
  __int64 v27; // rbx
  unsigned __int64 v28; // rcx
  struct _TRIVERTEX *v29; // rax
  struct _TRIVERTEX *v30; // r13
  unsigned int v31; // r15d
  struct SURFACE *v32; // rbx
  ULONG Vertex1; // r9d
  ULONG Vertex2; // r8d
  ULONG Vertex3; // edx
  int v36; // eax
  unsigned __int8 v37; // cl
  unsigned int v39; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v40; // [rsp+34h] [rbp-4Ch]
  __int64 v41; // [rsp+38h] [rbp-48h] BYREF
  struct _GRADIENT_TRIANGLE *v42; // [rsp+40h] [rbp-40h]
  void (*v43)(struct SURFACE *, struct _TRIANGLEDATA *); // [rsp+48h] [rbp-38h] BYREF
  unsigned __int8 *v44; // [rsp+50h] [rbp-30h]
  struct _TRIVERTEX *v45; // [rsp+58h] [rbp-28h]
  struct _TRIVERTEX *v46; // [rsp+60h] [rbp-20h]
  struct _TRIVERTEX *v47; // [rsp+68h] [rbp-18h]
  struct _TRIVERTEX *v48; // [rsp+70h] [rbp-10h]

  v10 = a8;
  v11 = a3;
  v12 = a4;
  v43 = 0LL;
  v15 = 1;
  if ( *(_DWORD *)&a8->Blue - a8->y <= 0 )
    return 0;
  v16 = *(_DWORD *)&a8->Blue - a8->y - 1;
  if ( v16 > 0x6666661 )
    return 0;
  v17 = PALLOCMEM(40 * v16 + 208, 1734624615LL);
  if ( !v17 )
    return 0;
  v41 = *((_QWORD *)a1 + 16);
  if ( v41 || (v18 = *((_QWORD *)a1 + 6)) != 0 && (v41 = *(_QWORD *)(v18 + 1792)) != 0 )
  {
    bDetermineTriangleFillRoutine(
      a1,
      (struct XEPALOBJ *)&v41,
      &v43,
      (void (**)(struct SURFACE *, struct _GRADIENTRECTDATA *))&a8);
    v19 = a9;
    v20 = *v10;
    *(_DWORD *)(v17 + 144) = a7;
    *(_QWORD *)(v17 + 160) = &v41;
    v21 = a10;
    *(struct _TRIVERTEX *)v17 = v20;
    *(_QWORD *)(v17 + 152) = a2;
    *(struct _POINTL *)(v17 + 128) = *v21;
    if ( v19->right - v19->left < 0x4000 && v19->bottom - v19->top < 0x4000 )
    {
      if ( (_DWORD)Size )
      {
        v22 = (unsigned int)Size;
        p_Vertex3 = &a5->Vertex3;
        do
        {
          v24 = &v11[*(p_Vertex3 - 2)];
          v25 = &v11[*(p_Vertex3 - 1)];
          a8 = &a3[*p_Vertex3];
          if ( bIsTriangleInBounds(v24, v25, a8, (struct _TRIANGLEDATA *)v17) )
            v15 = bCalculateAndDrawTriangle(a1, v24, v25, a8, (struct _TRIANGLEDATA *)v17, v43);
          v11 = a3;
          p_Vertex3 += 3;
          --v22;
        }
        while ( v22 );
      }
      goto LABEL_38;
    }
    if ( (unsigned int)v12 >= 0xFFFFFFE3
      || (LODWORD(v26) = Size, v40 = Size + 58, (unsigned int)Size >= 0xFFFFFFC6)
      || (v27 = (unsigned int)(v12 + 29),
          a8 = (struct _TRIVERTEX *)(unsigned int)(Size + 58),
          v28 = v27 * 16 + 13LL * (_QWORD)a8,
          v28 > 0xFFFFFFFF) )
    {
      Win32FreePool((void *)v17);
      return 0LL;
    }
    v29 = (struct _TRIVERTEX *)PALLOCNOZ(v28, 1953920071LL);
    v48 = v29;
    v30 = v29;
    if ( v29 )
    {
      v40 -= 2;
      v42 = (struct _GRADIENT_TRIANGLE *)&v29[v27];
      v31 = v12 + 28;
      v44 = (unsigned __int8 *)&v29[v27] + 12 * (_QWORD)a8;
      memmove(v29, a3, 16 * v12);
      memmove(v42, a5, 12LL * (unsigned int)Size);
      memset_0(v44, 0, (unsigned int)Size);
      v32 = a1;
      LODWORD(a8) = v12;
      v39 = Size;
      while ( 1 )
      {
        Vertex1 = v42[(unsigned int)(v26 - 1)].Vertex1;
        if ( Vertex1 >= v31
          || (Vertex2 = v42[(unsigned int)(v26 - 1)].Vertex2, Vertex2 >= v31)
          || (Vertex3 = v42[(unsigned int)(v26 - 1)].Vertex3, Vertex3 >= v31) )
        {
LABEL_32:
          Win32FreePool(v30);
          goto LABEL_38;
        }
        v46 = &v30[Vertex2];
        v47 = &v30[Vertex1];
        v45 = &v30[Vertex3];
        if ( !bIsTriangleInBounds(v47, v46, v45, (struct _TRIANGLEDATA *)v17) )
          goto LABEL_26;
        if ( !(unsigned int)bSplitTriangle(v30, (unsigned int *)&a8, v42, &v39, v44) )
          break;
        LODWORD(v12) = (_DWORD)a8;
        if ( (unsigned int)a8 > v31 )
          goto LABEL_32;
        LODWORD(v26) = v39;
        if ( v39 > v40 )
          goto LABEL_32;
LABEL_31:
        if ( !(_DWORD)v26 )
          goto LABEL_32;
      }
      v36 = bCalculateAndDrawTriangle(v32, v47, v46, v45, (struct _TRIANGLEDATA *)v17, v43);
      LODWORD(v12) = (_DWORD)a8;
      v15 = v36;
      LODWORD(v26) = v39;
      do
      {
LABEL_26:
        v26 = (unsigned int)(v26 - 1);
        v37 = v44[v26];
        if ( v37 )
        {
          LODWORD(v12) = v12 - 1;
          LODWORD(a8) = v12;
        }
      }
      while ( (_DWORD)v26 && v37 == 1 );
      v30 = v48;
      v32 = a1;
      v39 = v26;
      goto LABEL_31;
    }
  }
  v15 = 0;
LABEL_38:
  Win32FreePool((void *)v17);
  return v15;
}
