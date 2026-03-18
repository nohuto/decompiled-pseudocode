/*
 * XREFs of ?EPATHOBJ_vUpdateCosmeticStyleState@@YAXAEBVEPATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1400E16E8
 * Callers:
 *     ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x140117414 (-EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 * Callees:
 *     ?bInit@DDA_CLIPLINE@@QEAAHPEBU_POINTFIX@@0@Z @ 0x1400E1DD4 (-bInit@DDA_CLIPLINE@@QEAAHPEBU_POINTFIX@@0@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall EPATHOBJ_vUpdateCosmeticStyleState(
        const struct EPATHOBJ *a1,
        struct SURFACE *a2,
        struct _LINEATTRS *a3)
{
  int v4; // esi
  FLONG fl; // eax
  _DWORD *v7; // rax
  int v8; // esi
  PFLOAT_LONG pstyle; // rdx
  int v10; // r12d
  union _FLOAT_LONG *i; // rcx
  const struct _POINTFIX *j; // rbx
  FIX x; // eax
  unsigned __int64 v14; // rdi
  const struct _POINTFIX *v15; // rbp
  const struct _POINTFIX *v16; // r14
  unsigned __int64 v17; // r13
  FIX y; // edx
  int v19; // r8d
  FIX v20; // eax
  int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rax
  unsigned int v26; // [rsp+20h] [rbp-88h]
  unsigned int v27; // [rsp+24h] [rbp-84h]
  unsigned int v28; // [rsp+28h] [rbp-80h]
  _OWORD v30[2]; // [rsp+38h] [rbp-70h] BYREF
  __int128 v31; // [rsp+58h] [rbp-50h]

  v4 = 2;
  memset(v30, 0, sizeof(v30));
  fl = a3->fl;
  v31 = 0LL;
  if ( (fl & 2) != 0 )
  {
    v26 = 1;
    v10 = 1;
    v27 = 1;
    v28 = 1;
  }
  else
  {
    v7 = (_DWORD *)*((_QWORD *)a2 + 6);
    v8 = 0;
    pstyle = a3->pstyle;
    v10 = v7[551];
    v26 = v7[549];
    v27 = v7[550];
    v28 = v10;
    for ( i = &pstyle[a3->cstyle]; i > pstyle; v8 += i->l )
      --i;
    v4 = 2 * v10 * v8;
  }
  for ( j = *(const struct _POINTFIX **)(*((_QWORD *)a1 + 1) + 40LL); ; j = (const struct _POINTFIX *)j[1] )
  {
    x = j[2].x;
    if ( (x & 1) != 0 )
      break;
  }
  LODWORD(v14) = 0;
  if ( (x & 4) == 0 )
    LODWORD(v14) = LOWORD(a3->elStyleState.e) + v10 * HIWORD(a3->elStyleState.l);
  v15 = j + 3;
  v16 = j + 4;
  while ( 2 )
  {
    v17 = (unsigned __int64)&j[(unsigned int)j[2].y + 3];
    while ( (unsigned __int64)v16 < v17 )
    {
      if ( !(unsigned int)DDA_CLIPLINE::bInit((DDA_CLIPLINE *)v30, v15, v16) )
        goto LABEL_29;
      y = v15->y;
      v19 = v15->x - v16->x;
      v20 = v16->y;
      if ( v16->x - v15->x >= 0 )
        v19 = v16->x - v15->x;
      v21 = v20 - y;
      v22 = (unsigned int)(y - v20);
      if ( v21 >= 0 )
        v22 = (unsigned int)v21;
      if ( v26 == v27 )
      {
        if ( v19 >= (int)v22 )
          goto LABEL_22;
      }
      else if ( v26 * (unsigned __int64)(unsigned int)v19 >= (unsigned __int64)v27 * v22 )
      {
LABEL_22:
        if ( (v30[0] & 5) != 0 )
          goto LABEL_23;
        goto LABEL_25;
      }
      if ( (v30[0] & 5) == 0 )
      {
LABEL_23:
        v23 = v27;
        v24 = HIDWORD(v31) - DWORD1(v31);
        goto LABEL_26;
      }
LABEL_25:
      v23 = v26;
      v24 = DWORD2(v31) - v31;
LABEL_26:
      v25 = (unsigned int)(v24 + 1);
      if ( (v25 & 0xFFFF0000) != 0 )
      {
        v14 = ((int)v14 + v23 * v25) % (unsigned __int64)(unsigned int)v4;
      }
      else
      {
        LODWORD(v14) = v23 * v25 + v14;
        if ( (int)v14 >= v4 )
          LODWORD(v14) = (int)v14 % v4;
      }
LABEL_29:
      v15 = v16++;
    }
    j = (const struct _POINTFIX *)*j;
    if ( j )
    {
      v16 = j + 3;
      continue;
    }
    break;
  }
  a3->elStyleState.l = (unsigned __int16)((unsigned int)v14 % v28) | ((unsigned __int16)((unsigned int)v14 / v28) << 16);
}
