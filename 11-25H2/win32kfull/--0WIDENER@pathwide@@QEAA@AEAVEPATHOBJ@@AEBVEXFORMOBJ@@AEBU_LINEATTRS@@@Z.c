/*
 * XREFs of ??0WIDENER@pathwide@@QEAA@AEAVEPATHOBJ@@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x1400A5104
 * Callers:
 *     ?bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x1400A4EB4 (-bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 *     GreFrameRgn @ 0x1400E295C (GreFrameRgn.c)
 *     NtGdiWidenPath @ 0x1400E53B0 (NtGdiWidenPath.c)
 * Callees:
 *     ??0STYLER@pathwide@@QEAA@AEAVEPATHOBJ@@AEBU_LINEATTRS@@@Z @ 0x1400A538C (--0STYLER@pathwide@@QEAA@AEAVEPATHOBJ@@AEBU_LINEATTRS@@@Z.c)
 *     ?bValid@WIDENER@pathwide@@QEBAHXZ @ 0x1400A5420 (-bValid@WIDENER@pathwide@@QEBAHXZ.c)
 *     ?bPolygonizePen@WIDEPENOBJ@pathwide@@QEAAHAEBVEXFORMOBJ@@J@Z @ 0x1400A5464 (-bPolygonizePen@WIDEPENOBJ@pathwide@@QEAAHAEBVEXFORMOBJ@@J@Z.c)
 *     ?bWiden@WIDENER@pathwide@@IEAAHXZ @ 0x1400A5C54 (-bWiden@WIDENER@pathwide@@IEAAHXZ.c)
 */

pathwide::WIDENER *__fastcall pathwide::WIDENER::WIDENER(
        pathwide::WIDENER *this,
        struct EPATHOBJ *a2,
        const struct MATRIX **a3,
        const struct _LINEATTRS *a4)
{
  ULONG iEndCap; // r8d
  ULONG iJoin; // edx
  BOOL v10; // r9d
  unsigned int v11; // ecx
  int v12; // ebx
  __m128i l; // xmm0
  int v14; // r10d
  unsigned int v15; // r9d
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  float v19; // xmm1_4
  _DWORD *v21; // rdx
  int v22; // [rsp+20h] [rbp-28h] BYREF
  int v23; // [rsp+24h] [rbp-24h]
  int v24; // [rsp+28h] [rbp-20h]
  int v25; // [rsp+2Ch] [rbp-1Ch]

  pathwide::STYLER::STYLER(this, a2, a4);
  PATHMEMOBJ::PATHMEMOBJ((pathwide::WIDENER *)((char *)this + 816));
  *((_DWORD *)this + 234) = 0;
  *((_DWORD *)this + 242) = 0;
  PATHMEMOBJ::PATHMEMOBJ((pathwide::WIDENER *)((char *)this + 976));
  *((_DWORD *)this + 274) = 0;
  PATHMEMOBJ::PATHMEMOBJ((pathwide::WIDENER *)((char *)this + 1128));
  *((_DWORD *)this + 312) = 0;
  if ( !(unsigned int)pathwide::WIDENER::bValid(this) )
    return this;
  iEndCap = a4->iEndCap;
  *((_DWORD *)this + 321) = iEndCap;
  iJoin = a4->iJoin;
  *((_DWORD *)this + 320) = iJoin;
  v10 = !iJoin && iEndCap <= 1;
  v11 = *((_DWORD *)this + 10) | 0x10;
  if ( !v10 )
    v11 = *((_DWORD *)this + 10) & 0xFFFFFFEF;
  v12 = 0;
  *((_DWORD *)this + 10) = v11;
  l = (__m128i)(unsigned int)a4->elWidth.l;
  v14 = _mm_cvtsi128_si32(l);
  v15 = (unsigned __int8)(v14 >> 23);
  if ( v15 <= 0x9E )
  {
    v16 = v14 & 0x7FFFFF | 0x800000LL;
    v17 = v15 < 0x76 ? v16 >> (118 - (unsigned __int8)v15) : v16 << ((unsigned __int8)v15 - 118);
    v18 = (v17 + 0x80000000LL) >> 32;
    v12 = -(int)v18;
    if ( v14 >= 0 )
      v12 = v18;
  }
  *((_DWORD *)this + 323) = l.m128i_i32[0];
  *((float *)this + 323) = *((float *)this + 323) * 0.5;
  if ( iJoin == 2 )
  {
    v19 = *((float *)this + 323) * a4->eMiterLimit;
    *((float *)this + 322) = v19;
    *((float *)this + 322) = v19 * *((float *)this + 322);
  }
  if ( a4->pstyle || iJoin == 2 || iEndCap == 1 )
  {
    if ( EXFORMOBJ::bInverse((pathwide::WIDENER *)((char *)this + 808), *a3) )
    {
      v21 = (_DWORD *)*((_QWORD *)a2 + 1);
      v22 = v21[14] - v21[12];
      v23 = v21[15] - v21[13];
      v25 = v23;
      v24 = -v22;
      if ( EXFORMOBJ::bXform(
             (pathwide::WIDENER *)((char *)this + 808),
             (const struct _VECTORFX *)&v22,
             (struct _VECTORL *)&v22,
             2uLL) )
      {
        goto LABEL_17;
      }
    }
    else
    {
      EngSetLastError(0x216u);
    }
    *((_DWORD *)this + 312) = 1;
  }
LABEL_17:
  if ( (unsigned int)pathwide::WIDENER::bValid(this)
    && (!(unsigned int)pathwide::WIDEPENOBJ::bPolygonizePen(
                         (pathwide::WIDENER *)((char *)this + 816),
                         (const struct EXFORMOBJ *)a3,
                         v12)
     || !(unsigned int)pathwide::WIDENER::bWiden(this)) )
  {
    *((_DWORD *)this + 312) = 1;
  }
  return this;
}
