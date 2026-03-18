/*
 * XREFs of ?bInit@DDA_CLIPLINE@@QEAAHPEBU_POINTFIX@@0@Z @ 0x14006B334
 * Callers:
 *     ?EPATHOBJ_vUpdateCosmeticStyleState@@YAXAEBVEPATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x14006A004 (-EPATHOBJ_vUpdateCosmeticStyleState@@YAXAEBVEPATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
 *     ?bEnumStartLine@XCLIPOBJ@@QEAAHK@Z @ 0x14006B1D8 (-bEnumStartLine@XCLIPOBJ@@QEAAHK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DDA_CLIPLINE::bInit(DDA_CLIPLINE *this, const struct _POINTFIX *a2, const struct _POINTFIX *a3)
{
  int v3; // ebx
  FIX x; // r10d
  FIX v7; // r9d
  int v8; // edx
  int v9; // r9d
  FIX y; // edi
  FIX v11; // r8d
  int v12; // r8d
  int v13; // edx
  int v14; // eax
  int v15; // r10d
  int v16; // eax
  int v17; // edi
  signed __int64 v18; // rbp
  __int64 v19; // rbp
  char v20; // r14
  char v21; // r8
  int v22; // r14d
  unsigned int v23; // esi
  signed int v24; // r9d
  int v25; // r8d
  int v26; // r8d
  int v27; // ecx
  int v28; // r10d
  int v29; // eax
  unsigned __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // r8
  unsigned __int64 v33; // rax
  int v34; // ecx
  __int64 result; // rax
  int v36; // ecx
  FIX v37; // eax
  int v38; // ecx
  int v39; // ecx

  v3 = 0;
  *(_DWORD *)this = 0;
  x = a2->x;
  v7 = a3->x;
  if ( a3->x >= a2->x )
  {
    v8 = 0;
  }
  else
  {
    x = -x;
    v8 = 32;
    *(_DWORD *)this = 32;
    v7 = -v7;
  }
  v9 = v7 - x;
  *((_DWORD *)this + 4) = v9;
  if ( v9 < 0 )
    return 0LL;
  y = a2->y;
  v11 = a3->y;
  if ( v11 < y )
  {
    v8 |= 8u;
    y = -y;
    *(_DWORD *)this = v8;
    v11 = -v11;
  }
  v12 = v11 - y;
  *((_DWORD *)this + 3) = v12;
  if ( v12 < 0 )
    return 0LL;
  if ( v12 >= (unsigned int)v9 )
  {
    if ( v12 == v9 )
    {
      v8 |= 0x10u;
    }
    else
    {
      v36 = v9;
      *((_DWORD *)this + 3) = v9;
      v37 = x;
      *((_DWORD *)this + 4) = v12;
      x = y;
      v9 = v12;
      y = v37;
      v12 = v36;
      v8 |= 5u;
    }
  }
  v13 = *(_DWORD *)((char *)&gaflRound + (v8 & 0xFFFFFFFC)) | v8;
  v14 = x >> 4;
  v15 = x & 0xF;
  *((_DWORD *)this + 1) = v14;
  v16 = y >> 4;
  v17 = y & 0xF;
  *((_DWORD *)this + 2) = v16;
  *(_DWORD *)this = v13;
  v18 = v9 * (unsigned __int64)(unsigned int)(v17 + 8) - v12 * (unsigned __int64)(unsigned int)v15;
  if ( (v13 & 0x8000) != 0 )
    --v18;
  v19 = v18 >> 4;
  v20 = v12 + v17;
  *((_QWORD *)this + 3) = v19;
  v21 = v9 + v15;
  v22 = v20 & 0xF;
  v23 = (unsigned int)(v9 + v15) >> 4;
  v24 = v23 - 1;
  v25 = v21 & 0xF;
  if ( v25 )
  {
    if ( v22 )
    {
      v39 = 8 - v22;
      if ( 8 - v22 < 0 )
        v39 = v22 - 8;
      if ( v39 <= v25 )
        v24 = v23;
    }
    else
    {
      if ( v25 - (unsigned int)((v13 & 0x80) != 0) + 8 < 0x10 )
        --v23;
      v24 = v23;
    }
  }
  if ( (v13 & 0x90) != 0x90 )
    goto LABEL_12;
  if ( v25 && v22 == v25 + 8 )
    --v24;
  if ( v15 && v17 == v15 + 8 )
  {
    v26 = 0;
  }
  else
  {
LABEL_12:
    v26 = 0;
    if ( v15 )
    {
      if ( v17 )
      {
        v38 = 8 - v17;
        if ( 8 - v17 < 0 )
          v38 = v17 - 8;
        if ( v38 <= v15 )
          v26 = 1;
      }
      else
      {
        LOBYTE(v26) = v15 - (unsigned int)((v13 & 0x80) != 0) + 8 >= 0x10;
      }
    }
  }
  if ( v19 >= 0 && *((_DWORD *)this + 6) >= *((_DWORD *)this + 4) - (*((_DWORD *)this + 3) & (unsigned int)-v26) )
    v3 = 1;
  if ( v24 < v26 )
    return 0LL;
  v27 = *((_DWORD *)this + 1);
  v28 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 8) = v27 + v26;
  v29 = v27 + v24;
  v30 = *((unsigned int *)this + 4);
  *((_DWORD *)this + 10) = v29;
  *((_DWORD *)this + 9) = v28 + v3;
  v31 = *((int *)this + 3);
  v32 = v19 + v31 * v24;
  if ( v32 >= 0xFFFFFFFFLL )
    v33 = (v19 + v31 * v24) / v30;
  else
    LODWORD(v33) = (unsigned int)v32 / (unsigned int)v30;
  v34 = v28 + v33;
  result = 1LL;
  *((_DWORD *)this + 11) = v34;
  return result;
}
