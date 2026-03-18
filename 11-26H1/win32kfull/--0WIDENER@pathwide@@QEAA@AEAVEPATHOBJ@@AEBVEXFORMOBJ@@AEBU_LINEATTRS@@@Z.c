/*
 * XREFs of ??0WIDENER@pathwide@@QEAA@AEAVEPATHOBJ@@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x140109C68
 * Callers:
 *     ?bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x140119278 (-bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 * Callees:
 *     ?bWiden@WIDENER@pathwide@@IEAAHXZ @ 0x140108D94 (-bWiden@WIDENER@pathwide@@IEAAHXZ.c)
 *     ?bNextFigure@READER@pathwide@@IEAAHXZ @ 0x14010A090 (-bNextFigure@READER@pathwide@@IEAAHXZ.c)
 *     ?bPolygonizePen@WIDEPENOBJ@pathwide@@QEAAHAEBVEXFORMOBJ@@J@Z @ 0x14010A140 (-bPolygonizePen@WIDEPENOBJ@pathwide@@QEAAHAEBVEXFORMOBJ@@J@Z.c)
 */

pathwide::WIDENER *__fastcall pathwide::WIDENER::WIDENER(
        pathwide::WIDENER *this,
        struct EPATHOBJ *a2,
        const struct EXFORMOBJ *a3,
        const struct _LINEATTRS *a4)
{
  unsigned int *v4; // rbx
  __int64 v5; // r10
  __int64 *v10; // rax
  __int64 v11; // rcx
  unsigned int *v12; // r9
  int v13; // eax
  ULONG *p_cstyle; // r8
  int v15; // ecx
  unsigned int v16; // edx
  PFLOAT_LONG pstyle; // rcx
  __int64 v18; // rax
  int v20; // eax
  unsigned int v21; // edx
  _QWORD *v22; // rcx
  ULONG iEndCap; // eax
  ULONG iJoin; // edx
  int v25; // r8d
  __int64 v26; // rbx
  int v27; // eax
  int v28; // ecx
  unsigned int v29; // eax
  __m128i l; // xmm0
  int v31; // r9d
  unsigned int v32; // r8d
  __int64 v33; // rax
  __int64 v34; // rax
  float v35; // xmm1_4
  _DWORD *v36; // rcx
  int v37; // [rsp+20h] [rbp-28h] BYREF
  int v38; // [rsp+24h] [rbp-24h]
  int v39; // [rsp+28h] [rbp-20h]
  int v40; // [rsp+2Ch] [rbp-1Ch]

  *(_QWORD *)this = a2;
  v4 = (unsigned int *)((char *)this + 40);
  v5 = *((_QWORD *)a2 + 1);
  *(_DWORD *)a2 &= ~8u;
  *(_QWORD *)(v5 + 80) = *(_QWORD *)(v5 + 32);
  *((_DWORD *)this + 10) |= 1u;
  if ( (unsigned int)pathwide::READER::bNextFigure(this) )
  {
    v10 = (__int64 *)*((_QWORD *)this + 3);
    if ( (unsigned __int64)v10 >= *((_QWORD *)this + 4) )
    {
      if ( (*((_DWORD *)this + 2) & 2) == 0 )
      {
        v20 = EPATHOBJ::bEnum(*(EPATHOBJ **)this, (struct _PATHDATA *)((char *)this + 8));
        v21 = *v4 | 1;
        if ( !v20 )
          v21 = *v4 & 0xFFFFFFFE;
        *v4 = v21;
        v22 = (_QWORD *)*((_QWORD *)this + 2);
        *((_QWORD *)this + 28) = *v22;
        *((_QWORD *)this + 3) = v22 + 1;
        *((_QWORD *)this + 4) = &v22[*((unsigned int *)this + 3)];
      }
    }
    else
    {
      v11 = *v10;
      *((_QWORD *)this + 3) = v10 + 1;
      *((_QWORD *)this + 28) = v11;
    }
    v12 = (unsigned int *)((char *)this + 40);
    *((_QWORD *)this + 29) = *((_QWORD *)this + 28);
    v13 = 1;
  }
  else
  {
    v13 = 4;
    v12 = v4;
  }
  *((_DWORD *)this + 126) = v13;
  p_cstyle = &a4->cstyle;
  *((_QWORD *)this + 101) = (char *)this + 768;
  if ( !a4->pstyle || (v15 = 1, !*p_cstyle) )
    v15 = 0;
  v16 = *v4 | 2;
  if ( !v15 )
    v16 = *v4 & 0xFFFFFFFD;
  *v4 = v16;
  if ( (v16 & 2) != 0 )
  {
    pstyle = a4->pstyle;
    *((_QWORD *)this + 90) = pstyle;
    *((_QWORD *)this + 91) = pstyle;
    v18 = *p_cstyle;
    *v12 = v16 & 0xFFFFFFFB;
    *((_QWORD *)this + 92) = &pstyle[v18];
  }
  PATHMEMOBJ::PATHMEMOBJ((pathwide::WIDENER *)((char *)this + 816));
  *((_DWORD *)this + 234) = 0;
  *((_DWORD *)this + 242) = 0;
  PATHMEMOBJ::PATHMEMOBJ((pathwide::WIDENER *)((char *)this + 976));
  *((_DWORD *)this + 274) = 0;
  PATHMEMOBJ::PATHMEMOBJ((pathwide::WIDENER *)((char *)this + 1128));
  *((_DWORD *)this + 312) = 0;
  if ( *((_QWORD *)this + 142)
    && *((_QWORD *)this + 123)
    && !*((_DWORD *)this + 274)
    && *((_QWORD *)this + 103)
    && !*((_DWORD *)this + 234) )
  {
    iEndCap = a4->iEndCap;
    *((_DWORD *)this + 321) = iEndCap;
    iJoin = a4->iJoin;
    *((_DWORD *)this + 320) = iJoin;
    if ( iJoin || (v25 = 1, iEndCap > 1) )
      v25 = 0;
    LODWORD(v26) = 0;
    v27 = *((_DWORD *)this + 10);
    v28 = v27 | 0x10;
    v29 = v27 & 0xFFFFFFEF;
    if ( !v25 )
      v28 = v29;
    *((_DWORD *)this + 10) = v28;
    l = (__m128i)(unsigned int)a4->elWidth.l;
    v31 = _mm_cvtsi128_si32(l);
    v32 = (unsigned __int8)(v31 >> 23);
    if ( v32 <= 0x9E )
    {
      v33 = v31 & 0x7FFFFF | 0x800000LL;
      v34 = v32 < 0x76 ? v33 >> (118 - (unsigned __int8)v32) : v33 << ((unsigned __int8)v32 - 118);
      v26 = (v34 + 0x80000000LL) >> 32;
      if ( v31 < 0 )
        LODWORD(v26) = -(int)v26;
    }
    *((_DWORD *)this + 323) = l.m128i_i32[0];
    *((float *)this + 323) = *((float *)this + 323) * 0.5;
    if ( iJoin == 2 )
    {
      v35 = *((float *)this + 323) * a4->eMiterLimit;
      *((float *)this + 322) = v35;
      *((float *)this + 322) = v35 * *((float *)this + 322);
    }
    if ( !a4->pstyle && iJoin != 2 && *((_DWORD *)this + 321) != 1 )
      goto LABEL_35;
    if ( EXFORMOBJ::bInverse((pathwide::WIDENER *)((char *)this + 808), *(const struct MATRIX **)a3) )
    {
      v36 = (_DWORD *)*((_QWORD *)a2 + 1);
      v37 = v36[14] - v36[12];
      v38 = v36[15] - v36[13];
      v40 = v38;
      v39 = -v37;
      if ( EXFORMOBJ::bXform(
             (pathwide::WIDENER *)((char *)this + 808),
             (const struct _VECTORFX *)&v37,
             (struct _VECTORL *)&v37,
             2uLL) )
      {
LABEL_35:
        if ( *((_QWORD *)this + 142)
          && !*((_DWORD *)this + 312)
          && *((_QWORD *)this + 123)
          && !*((_DWORD *)this + 274)
          && *((_QWORD *)this + 103)
          && !*((_DWORD *)this + 234)
          && (!(unsigned int)pathwide::WIDEPENOBJ::bPolygonizePen((pathwide::WIDENER *)((char *)this + 816), a3, v26)
           || !(unsigned int)pathwide::WIDENER::bWiden(this)) )
        {
          *((_DWORD *)this + 312) = 1;
        }
        return this;
      }
    }
    else
    {
      EngSetLastError(0x216u);
    }
    *((_DWORD *)this + 312) = 1;
    goto LABEL_35;
  }
  return this;
}
