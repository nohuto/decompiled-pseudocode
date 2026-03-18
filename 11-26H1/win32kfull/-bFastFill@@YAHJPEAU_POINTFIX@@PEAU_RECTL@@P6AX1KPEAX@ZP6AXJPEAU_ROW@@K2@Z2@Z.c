/*
 * XREFs of ?bFastFill@@YAHJPEAU_POINTFIX@@PEAU_RECTL@@P6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x140119840
 * Callers:
 *     ?EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x140118D68 (-EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?bPaintPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@KHK@Z @ 0x140119398 (-bPaintPath@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_RECTL@@KHK@Z.c)
 *     ?bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x140119674 (-bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall bFastFill(
        int a1,
        struct _POINTFIX *a2,
        __m128i *a3,
        void (*a4)(struct _RECTL *, unsigned int, void *),
        void (*a5)(int, struct _ROW *, unsigned int, void *),
        void *a6)
{
  struct _POINTFIX *v6; // r10
  int v7; // esi
  struct _POINTFIX *v8; // rax
  struct _POINTFIX *v9; // r14
  struct _POINTFIX *v10; // r11
  int v11; // edx
  FIX y; // r9d
  FIX *v13; // r8
  FIX v14; // ecx
  FIX v15; // eax
  int *v17; // r13
  unsigned int v18; // r15d
  unsigned int v19; // r12d
  int v20; // r14d
  int v21; // ebx
  int v22; // edi
  int i; // r8d
  __int64 v24; // r11
  __int64 *v25; // rdi
  int *v26; // rdx
  struct _POINTFIX *v27; // rcx
  FIX v28; // r10d
  unsigned __int32 v29; // r10d
  int v30; // ebx
  bool v31; // sf
  unsigned int v32; // r9d
  __int32 *v33; // rcx
  unsigned int *v34; // rax
  int v35; // ecx
  __int64 *v36; // rax
  int v37; // r11d
  int v38; // r9d
  int v39; // edx
  int v40; // ecx
  int v41; // r9d
  int v42; // edx
  int v43; // eax
  int v44; // ecx
  __int32 v45; // edx
  int v46; // edx
  unsigned int v47; // r9d
  int v48; // r8d
  int v49; // ecx
  int v50; // edx
  int v51; // eax
  __m128i v52; // xmm5
  __m128i v53; // xmm4
  __int64 v54; // xmm1_8
  __m128i v55; // xmm3
  int v56; // edx
  struct _POINTFIX *v57; // rax
  int v58; // eax
  int v59; // r11d
  struct _POINTFIX *v60; // rax
  FIX *p_y; // r8
  FIX v62; // ecx
  FIX v63; // eax
  __int64 v64; // r9
  int v65; // r11d
  int v66; // r8d
  int v67; // edx
  __int64 v68; // r9
  __int8 *v69; // r8
  struct _POINTFIX *v70; // rdx
  unsigned __int64 v71; // rax
  int v72; // ecx
  int v73; // eax
  __int32 v74; // ebx
  int v75; // edi
  __int64 v76; // r9
  unsigned __int64 v77; // rax
  unsigned __int32 v78; // r11d
  int v79; // [rsp+30h] [rbp-298h]
  int v80; // [rsp+30h] [rbp-298h]
  unsigned int v81; // [rsp+34h] [rbp-294h]
  int v82; // [rsp+38h] [rbp-290h]
  __m128i v84; // [rsp+58h] [rbp-270h]
  __m128i v85; // [rsp+70h] [rbp-258h] BYREF
  __m128i v86; // [rsp+80h] [rbp-248h] BYREF
  __int64 v87; // [rsp+90h] [rbp-238h]
  __m128i v88; // [rsp+98h] [rbp-230h]
  __m128i v89; // [rsp+A8h] [rbp-220h] BYREF
  __int64 v90; // [rsp+B8h] [rbp-210h]
  int *v91; // [rsp+C0h] [rbp-208h]
  struct _POINTFIX *v92; // [rsp+C8h] [rbp-200h]
  int v93; // [rsp+D0h] [rbp-1F8h]
  __int64 *v94; // [rsp+D8h] [rbp-1F0h]
  void (*v95)(int, struct _ROW *, unsigned int, void *); // [rsp+E0h] [rbp-1E8h]
  __m128i *v96; // [rsp+E8h] [rbp-1E0h]
  unsigned int v97; // [rsp+F0h] [rbp-1D8h]
  int *v98; // [rsp+F8h] [rbp-1D0h]
  struct _POINTFIX *v99; // [rsp+100h] [rbp-1C8h]
  __int32 *v100; // [rsp+108h] [rbp-1C0h]
  __int32 *v101; // [rsp+110h] [rbp-1B8h]
  void (*v102)(struct _RECTL *, unsigned int, void *); // [rsp+118h] [rbp-1B0h]
  struct _POINTFIX *v103; // [rsp+128h] [rbp-1A0h]
  __int128 v104; // [rsp+130h] [rbp-198h] BYREF
  _BYTE v105[320]; // [rsp+140h] [rbp-188h] BYREF

  v6 = a2;
  v7 = a1;
  v92 = a2;
  v103 = a2;
  v96 = a3;
  v102 = a4;
  v95 = a5;
  v8 = a2;
  v9 = a2;
  v10 = &a2[a1 - 1];
  v99 = v10;
  v11 = a1 - 1;
  y = v9->y;
  if ( v9[1].y <= y )
  {
    while ( 1 )
    {
      ++v9;
      if ( !--v11 )
        break;
      if ( v9[1].y > v9->y )
      {
        v60 = v9;
        while ( --v11 )
        {
          ++v60;
          p_y = &v60[1].y;
          v62 = v60[1].y;
          if ( v62 < v60->y )
          {
            while ( 1 )
            {
              v63 = v62;
              if ( v62 < y )
                return 0LL;
              if ( !--v11 )
                break;
              p_y += 2;
              v62 = *p_y;
              if ( *p_y > v63 )
                return 0LL;
            }
            goto LABEL_11;
          }
        }
        break;
      }
    }
  }
  else
  {
    while ( --v11 )
    {
      ++v8;
      if ( v8[1].y < v8->y )
      {
        while ( --v11 )
        {
          ++v8;
          v13 = &v8[1].y;
          v14 = v8[1].y;
          if ( v14 > v8->y )
          {
            v9 = v8;
            do
            {
              v15 = v14;
              if ( v14 > y )
                break;
              if ( !--v11 )
                goto LABEL_11;
              v13 += 2;
              v14 = *v13;
            }
            while ( *v13 >= v15 );
            return 0LL;
          }
        }
        if ( v8[1].y < y )
          v9 = v8 + 1;
        break;
      }
    }
  }
LABEL_11:
  v87 = 8LL;
  v90 = 4294967288LL;
  v89.m128i_i64[1] = (__int64)v9;
  v86.m128i_i64[1] = (__int64)v9;
  v82 = 0;
  v81 = 0;
  v17 = (int *)v105;
  v91 = (int *)v105;
  v18 = 0;
  v19 = 0;
  v20 = (v9->y + 15) >> 4;
  if ( v96 )
  {
    v84 = *v96;
    v71 = HIDWORD(v96->m128i_i64[0]);
    if ( (int)HIDWORD(v96->m128i_i64[0]) <= v20 )
      LODWORD(v71) = v20;
    v20 = v71;
    if ( (int)v71 >= _mm_srli_si128(*v96, 8).m128i_i32[1] )
      return 1LL;
    v81 = v96->m128i_i64[1];
    v82 = (int)*v96;
  }
  else
  {
    v84.m128i_i32[1] = 0x80000000;
    v84.m128i_i32[3] = 0x7FFFFFFF;
  }
  if ( v96 )
  {
    v68 = 1LL;
    v69 = &v89.m128i_i8[8];
    while ( v68 >= 0 )
    {
      while ( 1 )
      {
        if ( !v7 )
          return 1LL;
        v70 = (struct _POINTFIX *)(*(_QWORD *)v69 + *((int *)v69 + 2));
        if ( v70 < v6 )
        {
          v70 = v10;
        }
        else if ( v70 > v10 )
        {
          v70 = v6;
        }
        if ( v70->y >> 4 >= v84.m128i_i32[1] )
          break;
        --v7;
        *(_QWORD *)v69 = v70;
      }
      --v68;
      v69 -= 40;
    }
  }
  v21 = v88.m128i_i32[0];
  v22 = v85.m128i_i32[0];
LABEL_15:
  v97 = v19;
  for ( i = 1; ; --i )
  {
LABEL_16:
    if ( i < 0 )
    {
      v44 = HIDWORD(v87);
      if ( SHIDWORD(v90) < SHIDWORD(v87) )
        v44 = HIDWORD(v90);
      HIDWORD(v90) -= v44;
      HIDWORD(v87) -= v44;
      v80 = v44;
      if ( v44 + v20 > v84.m128i_i32[3] )
        v80 = v84.m128i_i32[3] - v20;
      if ( !(v88.m128i_i32[3] | v85.m128i_i32[3]) && !(v88.m128i_i32[1] | v85.m128i_i32[1]) && v80 > 2 )
      {
        if ( v18 )
        {
          ((void (__fastcall *)(_QWORD, _BYTE *, _QWORD, void *))v95)(v19, v105, v18, a6);
          v6 = a2;
          v64 = v81;
          v65 = v82;
          v17 = (int *)v105;
          v91 = (int *)v105;
          v18 = 0;
        }
        else
        {
          v64 = v81;
          v65 = v82;
        }
        if ( v21 != v22 )
        {
          v66 = v21;
          if ( v21 <= v22 )
            v66 = v22;
          v67 = v22;
          if ( v21 <= v22 )
            v67 = v21;
          v104 = 0LL;
          DWORD1(v104) = v20;
          HIDWORD(v104) = v20 + v80;
          if ( v96 )
          {
            v72 = v65;
            if ( v67 >= v65 )
              v72 = v67;
            LODWORD(v104) = v72;
            v73 = v64;
            if ( v66 <= (int)v64 )
              v73 = v66;
            DWORD2(v104) = v73;
            if ( v72 < v73 )
            {
              ((void (__fastcall *)(__int128 *, __int64, void *))v102)(&v104, 1LL, a6);
              v6 = a2;
            }
          }
          else
          {
            LODWORD(v104) = v67;
            DWORD2(v104) = v66;
            ((void (__fastcall *)(__int128 *, __int64, void *, __int64))v102)(&v104, 1LL, a6, v64);
            v6 = a2;
          }
        }
        v20 += v80;
        goto LABEL_15;
      }
      v19 = v20;
      if ( v18 )
        v19 = v97;
      while ( 1 )
      {
        while ( v22 - v21 > 0 )
        {
          if ( v96 )
          {
            v48 = v82;
            v49 = v82;
            if ( v21 >= v82 )
              v49 = v21;
            *v17 = v49;
            v50 = v81;
            v51 = v81;
            if ( v22 <= (int)v81 )
              v51 = v22;
            v17[1] = v51;
            if ( v49 >= v51 )
            {
              if ( v18 )
              {
                ((void (__fastcall *)(_QWORD, _BYTE *, _QWORD, void *))v95)(v19, v105, v18, a6);
                v50 = v81;
                v48 = v82;
                v17 = (int *)v105;
                v91 = (int *)v105;
                v18 = 0;
              }
              v19 = v20 + 1;
              if ( v21 < v48 && *(int *)v89.m128i_i64[1] >> 4 < v48 && *(int *)v86.m128i_i64[1] >> 4 < v48
                || v21 >= v50 && *(int *)v89.m128i_i64[1] >> 4 >= v50 && *(int *)v86.m128i_i64[1] >> 4 >= v50 )
              {
                v20 += v80;
LABEL_49:
                v6 = a2;
                goto LABEL_15;
              }
              goto LABEL_44;
            }
          }
          else
          {
            *v17 = v21;
            v17[1] = v22;
          }
          ++v18;
          v17 += 2;
          v91 = v17;
          if ( v18 == 40 )
          {
            ((void (__fastcall *)(_QWORD, _BYTE *, __int64, void *))v95)(v19, v105, 40LL, a6);
LABEL_106:
            v17 = (int *)v105;
            v91 = (int *)v105;
            v18 = 0;
            v19 = v20 + 1;
          }
LABEL_44:
          v22 += v85.m128i_i32[1];
          v85.m128i_i32[0] = v22;
          v31 = v85.m128i_i32[3] + v85.m128i_i32[2] < 0;
          v45 = v85.m128i_i32[3] + v85.m128i_i32[2];
          v85.m128i_i32[2] += v85.m128i_i32[3];
          if ( !v31 )
          {
            v85.m128i_i32[2] = v45 - v86.m128i_i32[0];
            v85.m128i_i32[0] = ++v22;
          }
          v21 += v88.m128i_i32[1];
          v88.m128i_i32[0] = v21;
          v31 = v88.m128i_i32[3] + v88.m128i_i32[2] < 0;
          v46 = v88.m128i_i32[3] + v88.m128i_i32[2];
          v88.m128i_i32[2] += v88.m128i_i32[3];
          if ( !v31 )
          {
            v88.m128i_i32[2] = v46 - v89.m128i_i32[0];
            v88.m128i_i32[0] = ++v21;
          }
          --v80;
          ++v20;
          if ( !v80 )
            goto LABEL_49;
        }
        if ( v22 == v21 )
        {
          if ( v18 )
          {
            ((void (__fastcall *)(_QWORD, _BYTE *, _QWORD, void *))v95)(v19, v105, v18, a6);
            goto LABEL_106;
          }
          v19 = v20 + 1;
          goto LABEL_44;
        }
        v52 = v88;
        v53 = v89;
        v54 = v90;
        v55 = v85;
        v88.m128i_i64[0] = __PAIR64__(_mm_cvtsi128_si32(_mm_srli_si128(v85, 4)), v85.m128i_u32[0]);
        v90 = v87;
        v85.m128i_i64[0] = __PAIR64__(_mm_cvtsi128_si32(_mm_srli_si128(v52, 4)), v52.m128i_u32[0]);
        v87 = v54;
        v89.m128i_i64[1] = _mm_srli_si128(v86, 8).m128i_u64[0];
        v89.m128i_i64[0] = __PAIR64__(v86.m128i_u32[1], _mm_cvtsi128_si32(v86));
        v88.m128i_i64[1] = __PAIR64__(
                             _mm_cvtsi128_si32(_mm_srli_si128(v55, 12)),
                             _mm_cvtsi128_si32(_mm_srli_si128(v55, 8)));
        v21 = _mm_cvtsi128_si32(v55);
        v86.m128i_i64[1] = _mm_srli_si128(v53, 8).m128i_u64[0];
        v86.m128i_i64[0] = __PAIR64__(v53.m128i_u32[1], _mm_cvtsi128_si32(v53));
        v85.m128i_i64[1] = __PAIR64__(
                             _mm_cvtsi128_si32(_mm_srli_si128(v52, 12)),
                             _mm_cvtsi128_si32(_mm_srli_si128(v52, 8)));
        v22 = _mm_cvtsi128_si32(v52);
      }
    }
    v24 = 40LL * i;
    v98 = &v85.m128i_i32[(unsigned __int64)v24 / 4];
    if ( !*(_DWORD *)((char *)&v87 + v24 + 4) )
      break;
LABEL_32:
    ;
  }
  while ( --v7 >= 0 && v20 < v84.m128i_i32[3] )
  {
    v25 = &v86.m128i_i64[(unsigned __int64)v24 / 8 + 1];
    *(_QWORD *)&v104 = v25;
    v26 = (int *)v86.m128i_i64[(unsigned __int64)v24 / 8 + 1];
    v27 = (struct _POINTFIX *)(v86.m128i_i64[5 * i + 1] + *((int *)&v87 + 10 * i));
    *v25 = (__int64)v27;
    if ( v27 < v6 )
    {
      v57 = v99;
      *v25 = (__int64)v99;
      v27 = v57;
    }
    else if ( v27 > v99 )
    {
      *v25 = (__int64)v6;
      v27 = v103;
    }
    v28 = v27->y;
    *((_DWORD *)&v87 + 10 * i + 1) = ((v28 + 15) >> 4) - v20;
    if ( ((v28 + 15) >> 4) - v20 > 0 )
    {
      v93 = v26[1];
      v29 = v28 - v93;
      v30 = *v26;
      v31 = v27->x - *v26 < 0;
      v32 = v27->x - *v26;
      v33 = &v85.m128i_i32[(unsigned __int64)v24 / 4 + 1];
      v100 = &v85.m128i_i32[(unsigned __int64)v24 / 4 + 1];
      v34 = &v85.m128i_u32[(unsigned __int64)v24 / 4 + 3];
      v101 = &v85.m128i_i32[(unsigned __int64)v24 / 4 + 3];
      if ( v31 )
      {
        v47 = -v32;
        if ( (int)v47 >= (int)v29 )
        {
          v79 = -(int)(v47 / v29);
          *v33 = v79;
          v56 = v47 % v29;
          v35 = v47 % v29;
          v85.m128i_i32[10 * i + 3] = v47 % v29;
          if ( (int)(v47 % v29) > 0 )
          {
            v85.m128i_i32[10 * i + 1] = --v79;
            v35 = v29 - v56;
            v85.m128i_i32[10 * i + 3] = v29 - v56;
          }
        }
        else
        {
          *v33 = -1;
          v35 = v29 - v47;
          *v34 = v29 - v47;
          v79 = -1;
        }
      }
      else if ( (int)v32 >= (int)v29 )
      {
        v79 = v32 / v29;
        *v33 = v32 / v29;
        v35 = v32 % v29;
        v85.m128i_i32[10 * i + 3] = v32 % v29;
      }
      else
      {
        *v33 = 0;
        *v34 = v32;
        v79 = 0;
        v35 = v32;
      }
      v86.m128i_i32[10 * i] = v29;
      v36 = &v85.m128i_i64[(unsigned __int64)v24 / 8 + 1];
      v94 = &v85.m128i_i64[(unsigned __int64)v24 / 8 + 1];
      v37 = v93 & 0xF;
      v38 = v30;
      v39 = -1;
      if ( (v93 & 0xF) != 0 )
      {
        v58 = 16 - v37;
        if ( 16 - v37 > 0 )
        {
          v59 = -1;
          do
          {
            v38 = v79 + v30;
            v39 = v35 + v59;
            if ( v35 + v59 >= 0 )
            {
              ++v38;
              v39 = v59 + v35 - v29;
            }
            --v58;
            v30 = v38;
            v59 = v39;
          }
          while ( v58 > 0 );
          v25 = (__int64 *)v104;
        }
        v36 = v94;
      }
      v40 = v38 & 0xF;
      if ( (v38 & 0xF) != 0 )
      {
        v38 += 15;
        v39 -= v29 * (16 - v40);
        v36 = v94;
      }
      v41 = v38 >> 4;
      *v98 = v41;
      v42 = v39 >> 4;
      *(_DWORD *)v36 = v42;
      v43 = (v93 + 15) >> 4;
      if ( v43 >= v84.m128i_i32[1]
        || (v74 = v84.m128i_i32[1] - v43, *(int *)(*v25 + 4) >> 4 < v84.m128i_i32[1]) && !*v100 && !*v101 )
      {
        v21 = v88.m128i_i32[0];
        v22 = v85.m128i_i32[0];
        v6 = a2;
        goto LABEL_32;
      }
      v75 = v41 + *v100 * v74;
      *v98 = v75;
      v76 = v42 + v74 * (__int64)*v101;
      if ( v76 >= 0 )
      {
        if ( (v76 & 0xFFFFFFFF80000000uLL) != 0 )
        {
          v78 = v76 % (unsigned __int64)v29 - v29;
          v77 = v76 / (unsigned __int64)v29;
        }
        else
        {
          LODWORD(v77) = (int)v76 / (int)v29;
          v78 = (int)v76 % (int)v29 - v29;
        }
        *v98 = v75 + 1 + v77;
        *(_DWORD *)v94 = v78;
        v21 = v88.m128i_i32[0];
        v22 = v85.m128i_i32[0];
        v6 = a2;
        --i;
      }
      else
      {
        *(_DWORD *)v94 = v76;
        v21 = v88.m128i_i32[0];
        v22 = v85.m128i_i32[0];
        v6 = a2;
        --i;
      }
      goto LABEL_16;
    }
    v6 = a2;
  }
  if ( v18 )
    ((void (__fastcall *)(_QWORD, _BYTE *, _QWORD, void *))v95)(v19, v105, v18, a6);
  return 1LL;
}
