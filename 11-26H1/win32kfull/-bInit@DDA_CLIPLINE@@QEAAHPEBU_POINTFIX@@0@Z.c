/*
 * XREFs of ?bInit@DDA_CLIPLINE@@QEAAHPEBU_POINTFIX@@0@Z @ 0x1400E1DD4
 * Callers:
 *     ?EPATHOBJ_vUpdateCosmeticStyleState@@YAXAEBVEPATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1400E16E8 (-EPATHOBJ_vUpdateCosmeticStyleState@@YAXAEBVEPATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
 *     ?bEnumStartLine@XCLIPOBJ@@QEAAHK@Z @ 0x1400E1C6C (-bEnumStartLine@XCLIPOBJ@@QEAAHK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DDA_CLIPLINE::bInit(DDA_CLIPLINE *this, const struct _POINTFIX *a2, const struct _POINTFIX *a3)
{
  int v3; // ebx
  int v5; // r10d
  FIX x; // edi
  FIX v7; // r9d
  int v8; // r9d
  FIX y; // edx
  FIX v10; // ecx
  int v11; // ecx
  int v12; // r8d
  __int64 v13; // r12
  int v14; // r15d
  int v15; // edi
  int v16; // r15d
  int v17; // r10d
  int v18; // eax
  int v19; // edx
  signed __int64 v20; // rbp
  __int64 v21; // rbp
  char v22; // r14
  char v23; // r8
  int v24; // r14d
  unsigned int v25; // esi
  signed int v26; // r9d
  int v27; // r8d
  int v28; // r8d
  unsigned __int64 v29; // rcx
  int v30; // eax
  int v31; // r8d
  signed __int64 v32; // rax
  int v33; // ecx
  __int64 result; // rax
  FIX v35; // eax
  int v36; // ecx
  int v37; // ecx

  v3 = 0;
  *(_DWORD *)this = 0;
  v5 = 0;
  x = a2->x;
  v7 = a3->x;
  if ( a3->x < a2->x )
  {
    x = -x;
    v5 = 32;
    *(_DWORD *)this = 32;
    v7 = -v7;
  }
  v8 = v7 - x;
  *((_DWORD *)this + 4) = v8;
  if ( v8 < 0 )
    return 0LL;
  y = a2->y;
  v10 = a3->y;
  if ( v10 < y )
  {
    v5 |= 8u;
    y = -y;
    *(_DWORD *)this = v5;
    v10 = -v10;
  }
  v11 = v10 - y;
  *((_DWORD *)this + 3) = v11;
  if ( v11 < 0 )
    return 0LL;
  v12 = v11;
  if ( v11 >= (unsigned int)v8 )
  {
    if ( v11 == v8 )
    {
      v5 |= 0x10u;
    }
    else
    {
      v35 = x;
      *((_DWORD *)this + 3) = v8;
      x = y;
      *((_DWORD *)this + 4) = v11;
      v12 = v8;
      y = v35;
      v5 |= 5u;
      v8 = v11;
    }
  }
  v13 = v12;
  v14 = x;
  v15 = x & 0xF;
  v16 = v14 >> 4;
  *((_DWORD *)this + 1) = v16;
  v17 = *(_DWORD *)((char *)&gaflRound + (v5 & 0xFFFFFFFC)) | v5;
  v18 = y >> 4;
  v19 = y & 0xF;
  *((_DWORD *)this + 2) = v18;
  *(_DWORD *)this = v17;
  v20 = v8 * (unsigned __int64)(unsigned int)(v19 + 8) - v12 * (unsigned __int64)(unsigned int)v15;
  if ( (v17 & 0x8000) != 0 )
    --v20;
  v21 = v20 >> 4;
  v22 = v12 + v19;
  *((_QWORD *)this + 3) = v21;
  v23 = v8 + v15;
  v24 = v22 & 0xF;
  v25 = (unsigned int)(v8 + v15) >> 4;
  v26 = v25 - 1;
  v27 = v23 & 0xF;
  if ( v27 )
  {
    if ( v24 )
    {
      v37 = 8 - v24;
      if ( 8 - v24 < 0 )
        v37 = v24 - 8;
      if ( v37 <= v27 )
        v26 = v25;
    }
    else
    {
      if ( v27 - (unsigned int)((v17 & 0x80) != 0) + 8 < 0x10 )
        --v25;
      v26 = v25;
    }
  }
  if ( (v17 & 0x90) != 0x90 )
    goto LABEL_12;
  if ( v27 && v24 == v27 + 8 )
    --v26;
  if ( v15 && v19 == v15 + 8 )
  {
    v28 = 0;
  }
  else
  {
LABEL_12:
    v28 = 0;
    if ( v15 )
    {
      if ( v19 )
      {
        v36 = 8 - v19;
        if ( 8 - v19 < 0 )
          v36 = v19 - 8;
        if ( v36 <= v15 )
          v28 = 1;
      }
      else
      {
        LOBYTE(v28) = v15 - (unsigned int)((v17 & 0x80) != 0) + 8 >= 0x10;
      }
    }
  }
  if ( v21 >= 0 && *((_DWORD *)this + 6) >= *((_DWORD *)this + 4) - (*((_DWORD *)this + 3) & (unsigned int)-v28) )
    v3 = 1;
  if ( v26 < v28 )
    return 0LL;
  v29 = *((unsigned int *)this + 4);
  v30 = v16 + v28;
  v31 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 8) = v30;
  *((_DWORD *)this + 10) = v16 + v26;
  *((_DWORD *)this + 9) = v31 + v3;
  v32 = v21 + v13 * v26;
  if ( v32 >= 0xFFFFFFFFLL )
    v32 = (v21 + v13 * v26) / v29;
  else
    LODWORD(v32) = (unsigned int)v32 / (unsigned int)v29;
  v33 = v31 + v32;
  result = 1LL;
  *((_DWORD *)this + 11) = v33;
  return result;
}
