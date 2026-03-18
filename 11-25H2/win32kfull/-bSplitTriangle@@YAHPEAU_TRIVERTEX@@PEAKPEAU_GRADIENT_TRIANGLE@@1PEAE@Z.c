/*
 * XREFs of ?bSplitTriangle@@YAHPEAU_TRIVERTEX@@PEAKPEAU_GRADIENT_TRIANGLE@@1PEAE@Z @ 0x140304C34
 * Callers:
 *     ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x1400F7C94 (-bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_R.c)
 * Callees:
 *     bFToL @ 0x1400A4410 (bFToL.c)
 *     ?lCalculateTriangleArea@@YAJPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z @ 0x1401AEE28 (-lCalculateTriangleArea@@YAJPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z.c)
 */

__int64 __fastcall bSplitTriangle(
        struct _TRIVERTEX *a1,
        unsigned int *a2,
        struct _GRADIENT_TRIANGLE *a3,
        unsigned int *a4,
        unsigned __int8 *a5)
{
  __int64 v6; // rax
  __int64 v8; // r12
  __int64 Vertex1; // rax
  ULONG Vertex2; // edx
  ULONG Vertex3; // ecx
  __int64 v12; // rsi
  struct _TRIVERTEX *v13; // r8
  __int64 v14; // rax
  LONG x; // edx
  LONG y; // r8d
  struct _TRIVERTEX *v17; // r9
  LONG v18; // r11d
  struct _TRIVERTEX *v19; // r14
  LONG v20; // r10d
  LONG v21; // r9d
  int v22; // eax
  int v23; // eax
  LONG v24; // ecx
  __int64 v25; // rdi
  int v26; // eax
  LONG v27; // edx
  int v28; // ecx
  __int64 v29; // r13
  int v30; // eax
  __int64 v31; // r14
  int v32; // eax
  int v33; // r9d
  int v34; // eax
  int v35; // edx
  __int64 v36; // rbx
  int v37; // eax
  unsigned int v38; // ecx
  __int64 v39; // rdi
  __int64 v40; // r14
  __int64 v41; // rbx
  int v42; // r13d
  ULONG v43; // r14d
  __int64 v44; // rsi
  ULONG v45; // edi
  unsigned __int64 v46; // rbx
  double v47; // xmm0_8
  double v48; // xmm0_8
  unsigned int v49; // r8d
  double v50; // xmm0_8
  float v51; // xmm1_4
  int v52; // eax
  double v53; // xmm0_8
  int v54; // eax
  double v55; // xmm0_8
  float v56; // xmm1_4
  double v57; // xmm0_8
  unsigned int v58; // r8d
  unsigned int *v59; // r10
  ULONG v60; // r9d
  __int64 v61; // r8
  __int64 v62; // rax
  __int64 v63; // rax
  unsigned __int8 *v64; // rax
  ULONG v66; // [rsp+28h] [rbp-51h]
  struct _TRIVERTEX v67; // [rsp+30h] [rbp-49h] BYREF
  __int64 v68; // [rsp+40h] [rbp-39h]
  __int64 v69; // [rsp+48h] [rbp-31h]
  unsigned __int64 v70; // [rsp+50h] [rbp-29h]
  struct _TRIVERTEX *v71; // [rsp+58h] [rbp-21h]
  struct _TRIVERTEX *v72; // [rsp+60h] [rbp-19h]
  struct _TRIVERTEX *v73; // [rsp+68h] [rbp-11h]
  __int64 v74; // [rsp+70h] [rbp-9h]
  __int64 v75; // [rsp+78h] [rbp-1h]
  __int64 v76; // [rsp+80h] [rbp+7h]
  int v79; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned int *v80; // [rsp+F0h] [rbp+77h]

  v80 = a4;
  v6 = *a4 - 1;
  *(_QWORD *)&v67.x = 0LL;
  v8 = v6;
  Vertex1 = a3[v6].Vertex1;
  Vertex2 = a3[v8].Vertex2;
  Vertex3 = a3[v8].Vertex3;
  v79 = Vertex1;
  v12 = Vertex3;
  v75 = Vertex1;
  v76 = 16 * Vertex1;
  v66 = Vertex2;
  v13 = &a1[Vertex1];
  v14 = Vertex2;
  x = v13->x;
  v69 = 16 * v14;
  v73 = v13;
  y = v13->y;
  v17 = &a1[v14];
  v18 = v17->x;
  v70 = 16LL * Vertex3;
  v72 = v17;
  v19 = &a1[v70 / 0x10];
  v20 = v17->y;
  v21 = v19->x;
  v22 = v18 - x;
  v71 = v19;
  if ( x - v18 >= 0 )
    v22 = x - v18;
  v68 = v22;
  v23 = v20 - y;
  if ( y - v20 >= 0 )
    v23 = y - v20;
  v24 = x;
  v25 = v23;
  v26 = v21 - x;
  v27 = v19->y;
  v28 = v24 - v21;
  if ( v28 >= 0 )
    v26 = v28;
  v29 = v26;
  v30 = v27 - y;
  if ( y - v27 >= 0 )
    v30 = y - v27;
  v31 = v30;
  v32 = v18 - v21;
  v33 = v21 - v18;
  if ( v32 >= 0 )
    v33 = v32;
  v34 = v20 - v27;
  v35 = v27 - v20;
  v74 = v33;
  if ( v34 >= 0 )
    v35 = v34;
  v36 = v35;
  if ( v68 <= 0x4000 && v25 <= 0x4000 && v29 <= 0x4000 && v31 <= 0x4000 && v33 <= 0x4000LL && v35 <= 0x4000LL )
    return 0;
  v37 = lCalculateTriangleArea(v73, v72, v71, 0LL);
  v38 = 0;
  if ( v37 )
  {
    v39 = v68 * v68 + v25 * v25;
    v40 = v29 * v29 + v31 * v31;
    v41 = v74 * v74 + v36 * v36;
    if ( v39 <= v40 )
    {
      if ( v40 > v41 )
      {
        v43 = a3[v8].Vertex2;
        v45 = a3[v8].Vertex3;
        v46 = v70;
        v44 = v76;
        v42 = v79;
LABEL_31:
        v79 = 0;
        *(_QWORD *)&v47 = COERCE_UNSIGNED_INT((float)*(int *)((char *)&a1->x + v46));
        *(float *)&v47 = (float)((float)(*(float *)&v47 - (float)*(int *)((char *)&a1->x + v44)) * 0.5)
                       + (float)*(int *)((char *)&a1->x + v44);
        bFToL(v47, &v67.x, 6u);
        *(_QWORD *)&v48 = COERCE_UNSIGNED_INT((float)*(int *)((char *)&a1->y + v46));
        *(float *)&v48 = (float)((float)(*(float *)&v48 - (float)*(int *)((char *)&a1->y + v44)) * 0.5)
                       + (float)*(int *)((char *)&a1->y + v44);
        bFToL(v48, &v67.y, v49);
        *(_QWORD *)&v50 = COERCE_UNSIGNED_INT((float)*(unsigned __int16 *)((char *)&a1->Red + v46));
        v51 = (float)*(unsigned __int16 *)((char *)&a1->Red + v44);
        *(float *)&v50 = (float)((float)(*(float *)&v50 - v51) * 0.5) + v51;
        bFToL(v50, &v79, 6u);
        v52 = *(unsigned __int16 *)((char *)&a1->Green + v44);
        v67.Red = v79;
        *(_QWORD *)&v53 = COERCE_UNSIGNED_INT((float)*(unsigned __int16 *)((char *)&a1->Green + v46));
        *(float *)&v53 = (float)((float)(*(float *)&v53 - (float)v52) * 0.5) + (float)v52;
        bFToL(v53, &v79, 6u);
        v54 = *(unsigned __int16 *)((char *)&a1->Blue + v44);
        v67.Green = v79;
        *(_QWORD *)&v55 = COERCE_UNSIGNED_INT((float)*(unsigned __int16 *)((char *)&a1->Blue + v46));
        *(float *)&v55 = (float)((float)(*(float *)&v55 - (float)v54) * 0.5) + (float)v54;
        bFToL(v55, &v79, 6u);
        v67.Blue = v79;
        v56 = (float)*(unsigned __int16 *)((char *)&a1->Alpha + v44);
        *(_QWORD *)&v57 = COERCE_UNSIGNED_INT((float)*(unsigned __int16 *)((char *)&a1->Alpha + v46));
        *(float *)&v57 = (float)((float)(*(float *)&v57 - v56) * 0.5) + v56;
        bFToL(v57, &v79, v58);
        v59 = v80;
        v67.Alpha = v79;
        v60 = *a2;
        v61 = *v80;
        a1[*a2] = v67;
        v62 = v61;
        a3[v62].Vertex1 = v42;
        a3[v62].Vertex2 = v43;
        a3[v62].Vertex3 = v60;
        v63 = (unsigned int)(v61 + 1);
        a3[v63].Vertex1 = v45;
        a3[v63].Vertex2 = v43;
        a3[v63].Vertex3 = v60;
        v64 = a5;
        a5[(unsigned int)(v61 + 1)] = 0;
        v38 = 1;
        v64[v61] = 1;
        *v59 = v61 + 2;
        *a2 = v60 + 1;
        return v38;
      }
      v43 = a3[v8].Vertex1;
      v42 = a3[v8].Vertex3;
      v44 = v70;
    }
    else
    {
      if ( v39 > v41 )
      {
        v42 = v79;
        v43 = v12;
      }
      else
      {
        v42 = a3[v8].Vertex3;
        v43 = a3[v8].Vertex1;
      }
      if ( v39 > v41 )
        v12 = v75;
      v44 = 16 * v12;
    }
    v45 = v66;
    v46 = v69;
    goto LABEL_31;
  }
  return v38;
}
