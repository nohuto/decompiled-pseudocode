/*
 * XREFs of ?bSplitTriangle@@YAHPEAU_TRIVERTEX@@PEAKPEAU_GRADIENT_TRIANGLE@@1PEAE@Z @ 0x14031C640
 * Callers:
 *     ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x140061724 (-bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_R.c)
 * Callees:
 *     bFToL @ 0x140111E60 (bFToL.c)
 *     ?lCalculateTriangleArea@@YAJPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z @ 0x1401DF6D8 (-lCalculateTriangleArea@@YAJPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z.c)
 */

__int64 __fastcall bSplitTriangle(
        struct _TRIVERTEX *a1,
        unsigned int *a2,
        struct _GRADIENT_TRIANGLE *a3,
        unsigned int *a4,
        unsigned __int8 *a5)
{
  unsigned int v5; // r13d
  __int64 v6; // rax
  __int64 v8; // rsi
  __int64 Vertex2; // rdx
  __int64 Vertex3; // r14
  struct _TRIVERTEX *v11; // r12
  struct _TRIVERTEX *v12; // r15
  struct _TRIVERTEX *v13; // rbx
  unsigned int x; // edx
  int v15; // r9d
  LONG y; // r8d
  int v17; // ecx
  LONG v18; // r10d
  LONG v19; // ecx
  int v20; // r11d
  unsigned int v21; // eax
  unsigned int v22; // edx
  int v23; // eax
  LONG v24; // eax
  LONG v25; // edx
  int v26; // ecx
  int v27; // eax
  int v28; // eax
  int v29; // r10d
  int v30; // eax
  int v31; // edx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  ULONG v35; // r15d
  __int64 v36; // rbx
  struct _TRIVERTEX *v37; // rsi
  __m128i v38; // xmm1
  double v39; // xmm0_8
  double v40; // xmm0_8
  unsigned int v41; // r8d
  double v42; // xmm0_8
  unsigned int v43; // r11d
  int Green; // eax
  double v45; // xmm0_8
  unsigned int v46; // r11d
  int Blue; // eax
  double v48; // xmm0_8
  unsigned int v49; // r11d
  int Alpha; // eax
  double v51; // xmm0_8
  unsigned int v52; // r8d
  unsigned int *v53; // r10
  ULONG *v54; // r11
  __int64 v55; // rdx
  ULONG v56; // r8d
  ULONG v57; // r9d
  __int64 v58; // rax
  __int64 v59; // rax
  unsigned __int8 *v60; // rax
  int v62; // [rsp+20h] [rbp-58h]
  int v63; // [rsp+24h] [rbp-54h]
  int v64; // [rsp+28h] [rbp-50h]
  int v65; // [rsp+2Ch] [rbp-4Ch]
  int v66; // [rsp+30h] [rbp-48h]
  struct _TRIVERTEX v67; // [rsp+38h] [rbp-40h] BYREF
  __int64 Vertex1; // [rsp+48h] [rbp-30h]
  __int64 v69; // [rsp+50h] [rbp-28h]
  __int64 v70; // [rsp+58h] [rbp-20h]
  __int64 v71; // [rsp+60h] [rbp-18h]
  struct _TRIVERTEX *v72; // [rsp+C0h] [rbp+48h] BYREF
  ULONG *v73; // [rsp+C8h] [rbp+50h]
  int v74; // [rsp+D0h] [rbp+58h]
  unsigned int *v75; // [rsp+D8h] [rbp+60h]

  v75 = a4;
  v73 = a2;
  v72 = a1;
  v5 = 0;
  v6 = *a4 - 1;
  *(_QWORD *)&v67.x = 0LL;
  v8 = v6;
  Vertex2 = a3[v6].Vertex2;
  Vertex3 = a3[v6].Vertex3;
  Vertex1 = a3[v6].Vertex1;
  v71 = Vertex1;
  v11 = &a1[(unsigned int)Vertex2];
  v12 = &a1[(unsigned int)Vertex3];
  v69 = Vertex2;
  v13 = &a1[Vertex1];
  v70 = Vertex3;
  x = v13->x;
  v15 = v11->x;
  y = v11->y;
  v17 = v11->x - v13->x;
  v18 = v12->x;
  v74 = v12->x;
  if ( (int)(x - v15) >= 0 )
    v17 = x - v15;
  v63 = v17;
  v19 = v13->y;
  v20 = y - v19;
  if ( v19 - y >= 0 )
    v20 = v13->y - y;
  v21 = x;
  v64 = v20;
  v22 = v74 - x;
  v23 = v21 - v18;
  if ( v23 >= 0 )
    v22 = v23;
  v24 = v13->y;
  v74 = v22;
  v25 = v12->y;
  v26 = v25 - v19;
  v27 = v24 - v25;
  if ( v27 >= 0 )
    v26 = v27;
  v28 = v15 - v18;
  v62 = v26;
  v29 = v18 - v15;
  if ( v28 >= 0 )
    v29 = v28;
  v30 = y - v25;
  v66 = v29;
  v31 = v25 - y;
  if ( v30 >= 0 )
    v31 = v30;
  v65 = v31;
  if ( (v63 > 0x4000 || v20 > 0x4000 || v74 > 0x4000 || v26 > 0x4000 || v29 > 0x4000 || v31 > 0x4000)
    && (unsigned int)lCalculateTriangleArea(v13, v11, v12, 0LL) )
  {
    v32 = v63 * (__int64)v63 + v64 * (__int64)v64;
    v33 = v74 * (__int64)v74 + v62 * (__int64)v62;
    v34 = v66 * (__int64)v66 + v65 * (__int64)v65;
    if ( v32 <= v33 )
    {
      if ( v33 <= v34 )
      {
        LODWORD(Vertex3) = a3[v8].Vertex1;
        v13 = v12;
        v35 = a3[v8].Vertex3;
      }
      else
      {
        LODWORD(Vertex3) = a3[v8].Vertex2;
        v11 = v12;
        v35 = Vertex1;
        LODWORD(v69) = a3[v8].Vertex3;
      }
      v37 = v72;
    }
    else
    {
      if ( v32 > v34 )
      {
        v35 = Vertex1;
      }
      else
      {
        v35 = a3[v8].Vertex3;
        LODWORD(Vertex3) = a3[v8].Vertex1;
      }
      v36 = v70;
      if ( v32 > v34 )
        v36 = v71;
      v37 = v72;
      v13 = &v72[v36];
    }
    v38 = _mm_cvtsi32_si128(v13->x);
    *(_QWORD *)&v39 = COERCE_UNSIGNED_INT((float)v11->x);
    LODWORD(v72) = 0;
    *(float *)v38.m128i_i32 = _mm_cvtepi32_ps(v38).m128_f32[0];
    *(float *)&v39 = (float)((float)(*(float *)&v39 - *(float *)v38.m128i_i32) * 0.5) + *(float *)v38.m128i_i32;
    bFToL(v39, &v67.x, 6u);
    *(_QWORD *)&v40 = COERCE_UNSIGNED_INT((float)v11->y);
    *(float *)&v40 = (float)((float)(*(float *)&v40 - (float)v13->y) * 0.5) + (float)v13->y;
    bFToL(v40, &v67.y, v41);
    *(_QWORD *)&v42 = COERCE_UNSIGNED_INT((float)v11->Red);
    *(float *)&v42 = (float)((float)(*(float *)&v42 - (float)v13->Red) * 0.5) + (float)v13->Red;
    bFToL(v42, (int *)&v72, v43);
    Green = v13->Green;
    v67.Red = (unsigned __int16)v72;
    *(_QWORD *)&v45 = COERCE_UNSIGNED_INT((float)v11->Green);
    *(float *)&v45 = (float)((float)(*(float *)&v45 - (float)Green) * 0.5) + (float)Green;
    bFToL(v45, (int *)&v72, v46);
    Blue = v13->Blue;
    v67.Green = (unsigned __int16)v72;
    *(_QWORD *)&v48 = COERCE_UNSIGNED_INT((float)v11->Blue);
    *(float *)&v48 = (float)((float)(*(float *)&v48 - (float)Blue) * 0.5) + (float)Blue;
    bFToL(v48, (int *)&v72, v49);
    Alpha = v13->Alpha;
    v67.Blue = (unsigned __int16)v72;
    *(_QWORD *)&v51 = COERCE_UNSIGNED_INT((float)v11->Alpha);
    *(float *)&v51 = (float)((float)(*(float *)&v51 - (float)Alpha) * 0.5) + (float)Alpha;
    bFToL(v51, (int *)&v72, v52);
    v53 = v75;
    v54 = v73;
    v67.Alpha = (unsigned __int16)v72;
    v55 = *v75;
    v56 = *v73;
    v57 = v69;
    v37[*v73] = v67;
    v58 = v55;
    a3[v58].Vertex1 = v35;
    a3[v58].Vertex2 = Vertex3;
    a3[v58].Vertex3 = v56;
    v59 = (unsigned int)(v55 + 1);
    a3[v59].Vertex1 = v57;
    a3[v59].Vertex2 = Vertex3;
    a3[v59].Vertex3 = v56;
    v60 = a5;
    a5[(unsigned int)(v55 + 1)] = 0;
    v5 = 1;
    v60[v55] = 1;
    *v53 = v55 + 2;
    *v54 = v56 + 1;
  }
  return v5;
}
