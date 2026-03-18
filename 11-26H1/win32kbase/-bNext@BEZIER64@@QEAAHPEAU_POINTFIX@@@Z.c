/*
 * XREFs of ?bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z @ 0x1401822B0
 * Callers:
 *     pprFlattenRec @ 0x14011A500 (pprFlattenRec.c)
 * Callees:
 *     ?vBoundBox@@YAXPEAU_POINTFIX@@PEAU_RECTFX@@@Z @ 0x14011ACCC (-vBoundBox@@YAXPEAU_POINTFIX@@PEAU_RECTFX@@@Z.c)
 *     ?vParentError@HFDBASIS64@@QEBAXPEA_J@Z @ 0x140182808 (-vParentError@HFDBASIS64@@QEBAXPEA_J@Z.c)
 *     ?vInit@HFDBASIS64@@QEAAXJJJJ@Z @ 0x1401829EC (-vInit@HFDBASIS64@@QEAAXJJJJ@Z.c)
 *     ?vUntransform@HFDBASIS64@@QEAAXPEAJ@Z @ 0x140182A64 (-vUntransform@HFDBASIS64@@QEAAXPEAJ@Z.c)
 *     ?vError@HFDBASIS64@@QEBAXPEA_J@Z @ 0x140198C40 (-vError@HFDBASIS64@@QEBAXPEA_J@Z.c)
 *     ?bIntersect@@YA_NPEAU_RECTFX@@0@Z @ 0x1401F18A4 (-bIntersect@@YA_NPEAU_RECTFX@@0@Z.c)
 */

__int64 __fastcall BEZIER64::bNext(BEZIER64 *this, struct _POINTFIX *a2)
{
  bool v2; // zf
  HFDBASIS64 *v5; // r15
  HFDBASIS64 *v6; // r14
  struct _RECTFX *v7; // r12
  HFDBASIS64 *v8; // rsi
  HFDBASIS64 *v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // r10
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r11
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  int i; // r11d
  int v36; // r11d
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  int v44; // r12d
  __int64 v46; // r9
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // r14
  __int64 *v52; // rdi
  __int64 *v53; // r11
  __int64 v54; // rsi
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rsi
  _QWORD *v64; // r11
  __int64 v65; // rdx
  __int64 v66; // rdx
  __int64 v67; // rcx
  _RECTFX v68; // [rsp+30h] [rbp-30h] BYREF
  struct _POINTFIX v69; // [rsp+40h] [rbp-20h] BYREF
  int v70; // [rsp+48h] [rbp-18h]
  int v71; // [rsp+4Ch] [rbp-14h]
  int v72; // [rsp+50h] [rbp-10h]
  int v73; // [rsp+54h] [rbp-Ch]
  int v74; // [rsp+58h] [rbp-8h]
  int v75; // [rsp+5Ch] [rbp-4h]
  __int64 v76; // [rsp+90h] [rbp+30h] BYREF

  v2 = *((_DWORD *)this + 41) == 0;
  v68 = 0LL;
  v76 = 0LL;
  if ( v2 )
  {
    v5 = (BEZIER64 *)((char *)this + 64);
    HFDBASIS64::vUntransform((BEZIER64 *)((char *)this + 64), (int *)&v69);
    v6 = (BEZIER64 *)((char *)this + 96);
    HFDBASIS64::vUntransform((BEZIER64 *)((char *)this + 96), &v69.y);
    HFDBASIS64::vInit(this, v69.x, v70, v72, v74);
    HFDBASIS64::vInit((BEZIER64 *)((char *)this + 32), v69.y, v71, v73, v75);
    v7 = (struct _RECTFX *)*((_QWORD *)this + 17);
    *((_DWORD *)this + 41) = 1;
    if ( !v7 || (vBoundBox(&v69, (__int64)&v68), v8 = v5, v9 = (BEZIER64 *)((char *)this + 96), bIntersect(&v68, v7)) )
    {
      v10 = *((_QWORD *)this + 6);
      v11 = *((_QWORD *)this + 7);
      while ( 1 )
      {
        v12 = *((_QWORD *)this + 2);
        v13 = *((_QWORD *)this + 3);
        v14 = -v12;
        v15 = -v12;
        v16 = -v13;
        if ( v12 >= 0 )
          v15 = *((_QWORD *)this + 2);
        if ( v13 >= 0 )
          v16 = *((_QWORD *)this + 3);
        if ( v15 <= v16 )
        {
          v14 = -*((_QWORD *)this + 3);
          if ( v13 >= 0 )
            v14 = *((_QWORD *)this + 3);
        }
        else if ( v12 >= 0 )
        {
          v14 = *((_QWORD *)this + 2);
        }
        v17 = *((_QWORD *)this + 16);
        if ( v14 <= v17 )
        {
          v18 = -v11;
          v19 = -v10;
          if ( v10 >= 0 )
            v19 = v10;
          if ( v11 >= 0 )
            v18 = v11;
          if ( v19 <= v18 )
          {
            v20 = v11;
            if ( v11 < 0 )
              v20 = -v11;
          }
          else
          {
            v20 = v10;
            if ( v10 < 0 )
              v20 = -v10;
          }
          v76 = v20;
          if ( v20 <= v17 )
            break;
        }
        *((_DWORD *)this + 41) *= 2;
        v21 = (v13 + v12) >> 3;
        v22 = *((_QWORD *)this + 1) - v21;
        *((_QWORD *)this + 2) = v21;
        *((_QWORD *)this + 1) = v22 >> 1;
        v10 = (v11 + v10) >> 3;
        *((_QWORD *)this + 3) = v13 >> 2;
        v23 = *((_QWORD *)this + 5) - v10;
        *((_QWORD *)this + 6) = v10;
        v11 >>= 2;
        *((_QWORD *)this + 7) = v11;
        *((_QWORD *)this + 5) = v23 >> 1;
      }
      v5 = (BEZIER64 *)((char *)this + 64);
      v6 = (BEZIER64 *)((char *)this + 96);
      v8 = (BEZIER64 *)((char *)this + 64);
      v9 = (BEZIER64 *)((char *)this + 96);
    }
    v2 = (*((_DWORD *)this + 40))-- == 1;
    if ( !v2 )
    {
      v24 = *((_QWORD *)v8 + 2);
      v25 = *((_QWORD *)v8 + 1);
      *(_QWORD *)v8 += v25;
      *((_QWORD *)v8 + 1) = v24 + v25;
      *((_QWORD *)v8 + 2) = 2 * v24 - *((_QWORD *)v8 + 3);
      *((_QWORD *)v8 + 3) = v24;
      v26 = *((_QWORD *)v9 + 2);
      v27 = *((_QWORD *)v9 + 1);
      *(_QWORD *)v9 += v27;
      *((_QWORD *)v9 + 1) = v26 + v27;
      v28 = 2 * v26 - *((_QWORD *)v9 + 3);
      *((_QWORD *)v9 + 3) = v26;
      *((_QWORD *)v9 + 2) = v28;
      HFDBASIS64::vError(v5, &v76);
      if ( v76 > 0x300000000000LL || (HFDBASIS64::vError(v6, &v76), v76 > 0x300000000000LL) )
      {
        *((_DWORD *)this + 40) *= 2;
        v29 = *((_QWORD *)this + 11);
        v30 = (v29 + *((_QWORD *)this + 10)) >> 3;
        v31 = *((_QWORD *)this + 9) - v30;
        *((_QWORD *)this + 10) = v30;
        *((_QWORD *)this + 9) = v31 >> 1;
        *((_QWORD *)this + 11) = v29 >> 2;
        v32 = *((_QWORD *)this + 15);
        v33 = (v32 + *((_QWORD *)this + 14)) >> 3;
        v34 = *((_QWORD *)this + 13) - v33;
        *((_QWORD *)this + 14) = v33;
        *((_QWORD *)this + 15) = v32 >> 2;
        *((_QWORD *)this + 13) = v34 >> 1;
      }
      for ( i = *((_DWORD *)this + 40); (i & 1) == 0; *((_DWORD *)this + 40) = i )
      {
        HFDBASIS64::vParentError(v8, &v76);
        if ( v76 > 0x300000000000LL )
          break;
        HFDBASIS64::vParentError(v9, &v76);
        if ( v76 > 0x300000000000LL )
          break;
        *((_QWORD *)this + 11) *= 4LL;
        v37 = *((_QWORD *)this + 10);
        *((_QWORD *)this + 9) = v37 + 2LL * *((_QWORD *)this + 9);
        *((_QWORD *)this + 10) = 8 * v37 - *((_QWORD *)this + 11);
        v38 = *((_QWORD *)this + 14);
        v39 = *((_QWORD *)this + 13);
        *((_QWORD *)this + 15) *= 4LL;
        *((_QWORD *)this + 13) = v38 + 2 * v39;
        i = v36 >> 1;
        *((_QWORD *)this + 14) = 8 * v38 - *((_QWORD *)this + 15);
      }
    }
  }
  v40 = *((_QWORD *)this + 2);
  v41 = *((_QWORD *)this + 1);
  *(_QWORD *)this += v41;
  *((_QWORD *)this + 1) = v40 + v41;
  *((_QWORD *)this + 2) = 2 * v40 - *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = v40;
  v42 = *((_QWORD *)this + 6);
  v43 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 4) += v43;
  *((_QWORD *)this + 5) = v42 + v43;
  *((_QWORD *)this + 6) = 2 * v42 - *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = v42;
  a2->x = (*(_QWORD *)this + 0x8000000LL) >> 28;
  a2->y = (*((_QWORD *)this + 4) + 0x8000000LL) >> 28;
  v44 = *((_DWORD *)this + 41) - 1;
  *((_DWORD *)this + 41) = v44;
  if ( !v44 && !*((_DWORD *)this + 40) )
    return 0LL;
  v46 = *((_QWORD *)this + 2);
  v47 = *((_QWORD *)this + 3);
  v48 = -v46;
  v49 = -v46;
  v50 = -v47;
  if ( v46 >= 0 )
    v49 = *((_QWORD *)this + 2);
  if ( v47 >= 0 )
    v50 = *((_QWORD *)this + 3);
  if ( v49 <= v50 )
  {
    v48 = -*((_QWORD *)this + 3);
    if ( v47 >= 0 )
      v48 = *((_QWORD *)this + 3);
  }
  else if ( v46 >= 0 )
  {
    v48 = *((_QWORD *)this + 2);
  }
  v51 = *((_QWORD *)this + 16);
  v52 = (__int64 *)((char *)this + 48);
  v76 = v48;
  v53 = (__int64 *)((char *)this + 56);
  if ( v48 > v51 )
    goto LABEL_63;
  v54 = *v53;
  v55 = -*v52;
  v56 = v55;
  v57 = -*v53;
  if ( *v52 >= 0 )
    v56 = *v52;
  if ( v54 >= 0 )
    v57 = *v53;
  if ( v56 <= v57 )
  {
    v55 = -*v53;
    if ( v54 >= 0 )
      v55 = *v53;
  }
  else if ( *v52 >= 0 )
  {
    v55 = *v52;
  }
  v76 = v55;
  if ( v55 > v51 )
  {
LABEL_63:
    *((_DWORD *)this + 41) = 2 * v44;
    v58 = *((_QWORD *)this + 1);
    v59 = (v47 + v46) >> 3;
    *((_QWORD *)this + 2) = v59;
    *((_QWORD *)this + 1) = (v58 - v59) >> 1;
    *((_QWORD *)this + 3) = v47 >> 2;
    v60 = *v53;
    *v52 += *v53;
    v61 = *v52 >> 3;
    v62 = *((_QWORD *)this + 5) - v61;
    *v52 = v61;
    *v53 = v60 >> 2;
    *((_QWORD *)this + 5) = v62 >> 1;
  }
  for ( ; (*((_DWORD *)this + 41) & 1) == 0; *((int *)this + 41) >>= 1 )
  {
    HFDBASIS64::vParentError(this, &v76);
    v63 = *((_QWORD *)this + 16);
    if ( v76 > v63 )
      break;
    HFDBASIS64::vParentError((BEZIER64 *)((char *)this + 32), &v76);
    if ( v76 > v63 )
      break;
    *((_QWORD *)this + 3) *= 4LL;
    v65 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 1) = v65 + 2LL * *((_QWORD *)this + 1);
    *((_QWORD *)this + 2) = 8 * v65 - *((_QWORD *)this + 3);
    v66 = *v52;
    *v64 *= 4LL;
    v67 = v66 + 2LL * *((_QWORD *)this + 5);
    *v52 = 8 * v66 - *v64;
    *((_QWORD *)this + 5) = v67;
  }
  return 1LL;
}
