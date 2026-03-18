/*
 * XREFs of ?bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z @ 0x14000F0A4
 * Callers:
 *     ?bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z @ 0x14000EE98 (-bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     ?set_sizeScan@REGION_CORE@@IEAAXK@Z @ 0x14000F730 (-set_sizeScan@REGION_CORE@@IEAAXK@Z.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x140015AE0 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?get_sizeScanAlloc@REGION_CORE@@IEBAKXZ @ 0x140021EE0 (-get_sizeScanAlloc@REGION_CORE@@IEBAKXZ.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A8710 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 */

__int64 __fastcall RGNMEMOBJ::bFastFill(RGNMEMOBJ *this, struct EPATHOBJ *a2, int a3, struct _POINTFIX *a4)
{
  int v4; // r10d
  struct _POINTFIX *v5; // r14
  struct _POINTFIX *v8; // r11
  FIX y; // ebx
  struct _POINTFIX *v10; // rdi
  FIX v11; // eax
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // ecx
  struct REGION *Region; // rax
  _QWORD *v17; // rax
  struct SCAN *pScan; // rax
  int v19; // r15d
  struct SCAN *v20; // r8
  int v21; // r12d
  struct SCAN *v22; // rdi
  __int64 v23; // r13
  char *i; // r9
  int *v25; // rdx
  struct _POINTFIX *v26; // rcx
  FIX v27; // r11d
  int v28; // r14d
  unsigned int v29; // r11d
  unsigned int v30; // ecx
  int v31; // r10d
  int v32; // eax
  bool v33; // zf
  int v34; // r14d
  int v35; // r14d
  int v36; // edx
  int j; // r13d
  int v38; // eax
  int v39; // ecx
  int v40; // edx
  int v41; // edx
  __int128 v42; // xmm8
  int v43; // r15d
  __m128i v44; // xmm6
  int v45; // r10d
  int v46; // ecx
  __int128 v47; // xmm9
  int v48; // r13d
  __m128i v49; // xmm7
  int v50; // r11d
  int v51; // r9d
  __m128i v52; // xmm5
  __m128i v53; // xmm4
  __int64 v54; // rax
  bool v55; // sf
  int v56; // ecx
  __int32 v57; // eax
  int v58; // r10d
  __int32 v59; // r9d
  int v60; // eax
  struct _POINTFIX *v61; // rax
  __int64 v62; // rbx
  unsigned int v63; // eax
  unsigned int v65; // ecx
  int v66; // eax
  FIX *v67; // rcx
  FIX v68; // eax
  FIX v69; // edx
  __m128i v70; // xmm1
  __int128 v71; // xmm0
  __m128i v72; // xmm2
  struct _POINTFIX *v73; // rcx
  FIX *p_y; // rdx
  FIX v75; // eax
  FIX v76; // ecx
  __m128i v77; // [rsp+28h] [rbp-89h]
  __m128i v78; // [rsp+38h] [rbp-79h]
  __int64 v79; // [rsp+48h] [rbp-69h]
  __m128i v80; // [rsp+50h] [rbp-61h]
  __m128i v81; // [rsp+60h] [rbp-51h] BYREF
  __int64 v82; // [rsp+70h] [rbp-41h]
  int v83; // [rsp+78h] [rbp-39h]
  int v84; // [rsp+7Ch] [rbp-35h]
  __int64 v85; // [rsp+80h] [rbp-31h]
  struct _POINTFIX *v86; // [rsp+88h] [rbp-29h]
  int v88; // [rsp+128h] [rbp+77h]

  v88 = a3;
  v4 = a3 - 1;
  v5 = a4;
  v8 = v5;
  y = v5->y;
  v10 = v5;
  v86 = &v5[a3 - 1];
  if ( v5[1].y <= y )
  {
    while ( 1 )
    {
      ++v10;
      if ( !--v4 )
        break;
      if ( v10[1].y > v10->y )
      {
        v73 = v10;
        while ( --v4 )
        {
          ++v73;
          p_y = &v73[1].y;
          v75 = v73[1].y;
          if ( v75 < v73->y )
          {
            while ( 1 )
            {
              v76 = v75;
              if ( v75 < y )
                return 0LL;
              if ( !--v4 )
                break;
              p_y += 2;
              v75 = *p_y;
              if ( *p_y > v76 )
                return 0LL;
            }
            goto LABEL_7;
          }
        }
        break;
      }
    }
  }
  else
  {
    while ( --v4 )
    {
      v11 = v8[1].y;
      ++v8;
      if ( v8[1].y < v11 )
      {
        while ( --v4 )
        {
          ++v8;
          v67 = &v8[1].y;
          v68 = v8[1].y;
          if ( v68 > v8->y )
          {
            v10 = v8;
            do
            {
              v69 = v68;
              if ( v68 > y )
                break;
              if ( !--v4 )
                goto LABEL_7;
              v67 += 2;
              v68 = *v67;
            }
            while ( *v67 >= v69 );
            return 0LL;
          }
        }
        if ( v8[1].y < y )
          v10 = v8 + 1;
        break;
      }
    }
  }
LABEL_7:
  v12 = (v10->y + 15) >> 4;
  v13 = *(int *)(*((_QWORD *)a2 + 1) + 60LL) - (__int64)*(int *)(*((_QWORD *)a2 + 1) + 52LL);
  v79 = 8LL;
  v82 = 4294967288LL;
  v81.m128i_i64[1] = (__int64)v10;
  v78.m128i_i64[1] = (__int64)v10;
  v14 = 24 * ((v13 + 15) >> 4) + 32;
  if ( v14 > 0x7FFFFFFF )
    return 0LL;
  v15 = 112;
  if ( (unsigned __int64)v14 > 0x70 )
    v15 = v14;
  Region = RGNMEMOBJ::AllocateRegion(v15);
  *(_QWORD *)this = Region;
  if ( !Region )
    return 0LL;
  REGION_CORE::set_sizeScan((struct REGION *)((char *)Region + 24), 0);
  *(_DWORD *)(*(_QWORD *)this + 76LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 48LL) = 0;
  v17 = (_QWORD *)(*(_QWORD *)this + 80LL);
  v17[1] = v17;
  *v17 = v17;
  REGION_CORE::get_pScan((REGION_CORE *)(*(_QWORD *)this + 24LL));
  REGION_CORE::get_sizeScanAlloc((REGION_CORE *)(*(_QWORD *)this + 24LL));
  pScan = REGION_CORE::get_pScan((REGION_CORE *)(*(_QWORD *)this + 24LL));
  v19 = 0;
  v20 = pScan;
  v21 = 1;
  *(_DWORD *)pScan = 0;
  v22 = (struct SCAN *)((char *)pScan + 16);
  *((_DWORD *)pScan + 3) = 0;
  *((_DWORD *)pScan + 1) = 0x80000000;
  *((_DWORD *)pScan + 2) = v12;
LABEL_12:
  v23 = 1LL;
  v85 = 1LL;
  for ( i = &v81.m128i_i8[8]; ; i -= 40 )
  {
    if ( v23 < 0 )
    {
      v41 = HIDWORD(v79);
      if ( SHIDWORD(v82) < SHIDWORD(v79) )
        v41 = HIDWORD(v82);
      HIDWORD(v82) -= v41;
      HIDWORD(v79) -= v41;
      if ( !(v80.m128i_i32[3] | v77.m128i_i32[3]) && !(v80.m128i_i32[1] | v77.m128i_i32[1]) )
      {
        v57 = v77.m128i_i32[0];
        v58 = *(_DWORD *)v20;
        if ( v80.m128i_i32[0] == v77.m128i_i32[0] )
        {
          v60 = v41 + v12;
          if ( v58 )
          {
            *((_DWORD *)v22 + 3) = 0;
            v20 = v22;
            *((_DWORD *)v22 + 1) = v12;
            *((_DWORD *)v22 + 2) = v60;
            *(_DWORD *)v22 = 0;
            v22 = (struct SCAN *)((char *)v22 + 16);
            goto LABEL_58;
          }
LABEL_82:
          *((_DWORD *)v20 + 2) = v60;
        }
        else
        {
          v59 = v80.m128i_i32[0];
          if ( v80.m128i_i32[0] <= v77.m128i_i32[0] )
          {
            v59 = v77.m128i_i32[0];
            v57 = v80.m128i_i32[0];
          }
          if ( v58 == 2 && *((_DWORD *)v20 + 3) == v57 && *((_DWORD *)v20 + 4) == v59 )
          {
            v60 = v41 + v12;
            goto LABEL_82;
          }
          *((_DWORD *)v22 + 3) = v57;
          v20 = v22;
          *(_DWORD *)v22 = 2;
          v60 = v41 + v12;
          *((_DWORD *)v22 + 4) = v59;
          *((_DWORD *)v22 + 5) = 2;
          *((_DWORD *)v22 + 2) = v41 + v12;
          *((_DWORD *)v22 + 1) = v12;
          v22 = (struct SCAN *)((char *)v22 + 24);
LABEL_58:
          ++v21;
        }
        v12 = v60;
        goto LABEL_12;
      }
      v42 = (unsigned __int64)v82;
      v43 = v81.m128i_i32[0];
      v44 = v81;
      v45 = v80.m128i_i32[2];
      v46 = v80.m128i_i32[0];
      v47 = (unsigned __int64)v79;
      v48 = v78.m128i_i32[0];
      v49 = v78;
      v50 = v77.m128i_i32[2];
      v51 = v77.m128i_i32[0];
      do
      {
        v52 = v77;
        v53 = v80;
        while ( 1 )
        {
          if ( v51 - v46 > 0 )
          {
            if ( *(_DWORD *)v20 != 2 || *((_DWORD *)v20 + 3) != v46 || *((_DWORD *)v20 + 4) != v51 )
            {
              *(_DWORD *)v22 = 2;
              *((_DWORD *)v22 + 5) = 2;
              v54 = 24LL;
              *((_DWORD *)v22 + 3) = v46;
              *((_DWORD *)v22 + 4) = v51;
LABEL_40:
              *((_DWORD *)v22 + 1) = v12;
              v20 = v22;
              *((_DWORD *)v22 + 2) = ++v12;
              v22 = (struct SCAN *)((char *)v22 + v54);
              ++v21;
              goto LABEL_41;
            }
            goto LABEL_68;
          }
          if ( v51 == v46 )
            break;
          v70 = v53;
          v71 = v42;
          v53 = v52;
          v77 = v70;
          v72 = v44;
          v46 = _mm_cvtsi128_si32(v52);
          v44 = v49;
          v48 = _mm_cvtsi128_si32(v72);
          v42 = v47;
          v43 = _mm_cvtsi128_si32(v49);
          v47 = v71;
          v51 = _mm_cvtsi128_si32(v70);
          v49 = v72;
          v45 = _mm_cvtsi128_si32(_mm_srli_si128(v52, 8));
          v80 = v52;
          v50 = _mm_cvtsi128_si32(_mm_srli_si128(v70, 8));
          v52 = v70;
        }
        if ( *(_DWORD *)v20 )
        {
          *(_DWORD *)v22 = 0;
          *((_DWORD *)v22 + 3) = 0;
          v54 = 16LL;
          goto LABEL_40;
        }
LABEL_68:
        *((_DWORD *)v20 + 2) = ++v12;
LABEL_41:
        v51 += v77.m128i_i32[1];
        v55 = v77.m128i_i32[3] + v50 < 0;
        v50 += v77.m128i_i32[3];
        v77.m128i_i32[0] = v51;
        v77.m128i_i32[2] = v50;
        if ( !v55 )
        {
          v50 -= v48;
          ++v51;
          v77.m128i_i32[2] = v50;
          v77.m128i_i32[0] = v51;
        }
        v46 += v80.m128i_i32[1];
        v55 = v80.m128i_i32[3] + v45 < 0;
        v45 += v80.m128i_i32[3];
        v80.m128i_i32[0] = v46;
        v80.m128i_i32[2] = v45;
        if ( !v55 )
        {
          v45 -= v43;
          ++v46;
          v80.m128i_i32[2] = v45;
          v80.m128i_i32[0] = v46;
        }
        --v41;
      }
      while ( v41 );
      v81 = v44;
      v19 = 0;
      v78 = v49;
      v82 = v42;
      v79 = v47;
      goto LABEL_12;
    }
    if ( !*((_DWORD *)i + 3) )
      break;
LABEL_51:
    v85 = --v23;
  }
  while ( --v88 >= 0 )
  {
    v25 = *(int **)i;
    v26 = (struct _POINTFIX *)(*(_QWORD *)i + *((int *)i + 2));
    *(_QWORD *)i = v26;
    if ( v26 < v5 )
    {
      v61 = v86;
      *(_QWORD *)i = v86;
      v26 = v61;
    }
    else if ( v26 > v86 )
    {
      *(_QWORD *)i = v5;
      v26 = v5;
    }
    v27 = v26->y;
    *((_DWORD *)i + 3) = ((v27 + 15) >> 4) - v12;
    if ( ((v27 + 15) >> 4) - v12 > 0 )
    {
      v28 = v25[1];
      v29 = v27 - v28;
      v30 = v26->x - *v25;
      v83 = *v25;
      if ( (v30 & 0x80000000) != 0 )
      {
        v65 = -v30;
        if ( (int)v65 < (int)v29 )
        {
          *((_DWORD *)i - 5) = -1;
          v31 = v29 - v65;
          *((_DWORD *)i - 3) = v29 - v65;
          v19 = -1;
        }
        else
        {
          v19 = -(int)(v65 / v29);
          *((_DWORD *)i - 5) = v19;
          v31 = v65 % v29;
          *((_DWORD *)i - 3) = v65 % v29;
          v66 = v65 % v29;
          if ( (int)(v65 % v29) > 0 )
          {
            --v19;
            v31 = v29 - v66;
            *((_DWORD *)i - 5) = v19;
            *((_DWORD *)i - 3) = v29 - v66;
          }
        }
      }
      else if ( (int)v30 >= (int)v29 )
      {
        v19 = v30 / v29;
        *((_DWORD *)i - 5) = v30 / v29;
        v31 = v30 % v29;
        *((_DWORD *)i - 3) = v30 % v29;
      }
      else
      {
        *((_DWORD *)i - 5) = 0;
        v31 = v30;
        *((_DWORD *)i - 3) = v30;
      }
      v32 = v83;
      v34 = v28 & 0xF;
      v33 = v34 == 0;
      v84 = v34;
      v35 = v83;
      *((_DWORD *)i - 2) = v29;
      v36 = -1;
      if ( !v33 )
      {
        for ( j = 16 - v84; j > 0; --j )
        {
          v38 = v19 + v32;
          v40 = v36 + v31;
          v39 = v40;
          v35 = v38 + 1;
          if ( v40 < 0 )
            v35 = v38;
          v36 = v40 - v29;
          v32 = v35;
          if ( v39 < 0 )
            v36 = v39;
        }
        v23 = v85;
      }
      v56 = v35 & 0xF;
      if ( (v35 & 0xF) != 0 )
      {
        v35 += 15;
        v36 -= v29 * (16 - v56);
      }
      *((_DWORD *)i - 6) = v35 >> 4;
      v19 = 0;
      v5 = a4;
      *((_DWORD *)i - 4) = v36 >> 4;
      goto LABEL_51;
    }
  }
  if ( *(_DWORD *)v20 )
  {
    ++v21;
    *(_DWORD *)v22 = 0;
    *((_QWORD *)v22 + 1) = 0x7FFFFFFFLL;
    *((_DWORD *)v22 + 1) = v12;
    LODWORD(v22) = (_DWORD)v22 + 16;
  }
  else
  {
    *((_DWORD *)v20 + 2) = 0x7FFFFFFF;
  }
  *(_DWORD *)(*(_QWORD *)this + 48LL) = v21;
  v62 = *(_QWORD *)this;
  v63 = (unsigned int)REGION_CORE::get_pScan((REGION_CORE *)(*(_QWORD *)this + 24LL));
  REGION_CORE::set_sizeScan((REGION_CORE *)(v62 + 24), (_DWORD)v22 - v63);
  return 1LL;
}
