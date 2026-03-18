/*
 * XREFs of RGNCOREOBJ::bMerge__RGNCOREOBJ::bMerge_::_2_::_lambda_1___ @ 0x1400458FC
 * Callers:
 *     ?Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z @ 0x1400445B0 (-Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x140045580 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?bMerge@RGNCOREOBJ@@QEAA_NAEAV1@0E@Z @ 0x140045860 (-bMerge@RGNCOREOBJ@@QEAA_NAEAV1@0E@Z.c)
 * Callees:
 *     ?get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x14000EE30 (-get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?set_sizeScan@REGION_CORE@@IEAAXK@Z @ 0x14000F730 (-set_sizeScan@REGION_CORE@@IEAAXK@Z.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x140021850 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ?get_sizeScanAlloc@REGION_CORE@@IEBAKXZ @ 0x140021EE0 (-get_sizeScanAlloc@REGION_CORE@@IEBAKXZ.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A8710 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?bExpand@RGNCOREOBJ@@QEAA_NK@Z @ 0x1401BDB70 (-bExpand@RGNCOREOBJ@@QEAA_NK@Z.c)
 *     memcmp @ 0x14024C590 (memcmp.c)
 */

char __fastcall RGNCOREOBJ::bMerge__RGNCOREOBJ::bMerge_::_2_::_lambda_1___(
        REGION_CORE **a1,
        REGION_CORE **a2,
        REGION_CORE **a3,
        unsigned __int8 a4,
        RGNCOREOBJ *a5)
{
  REGION_CORE **v5; // r14
  struct SCAN *pScan; // rbp
  struct SCAN *v9; // r15
  struct SCAN *v10; // rdi
  struct SCAN *pscnTail; // rax
  __int64 v12; // rbx
  _DWORD *v13; // rax
  REGION_CORE *v14; // rax
  struct SCAN *v15; // rsi
  unsigned int v16; // r12d
  int sizeScanAlloc; // ebx
  unsigned __int64 v18; // rax
  unsigned int v19; // ecx
  struct SCAN *v20; // rax
  _DWORD *v21; // rbx
  int v22; // r13d
  int *v23; // r10
  int v24; // edx
  int v25; // ecx
  unsigned __int8 v26; // r11
  unsigned __int8 v27; // al
  int *v28; // rdx
  int v29; // r9d
  int v30; // r8d
  int v31; // ecx
  int v32; // r11d
  __int64 v33; // rax
  unsigned int v34; // eax
  REGION_CORE *v35; // rdi
  int v36; // ebx
  int sizeScan; // eax
  int v38; // r9d
  int v39; // eax
  __int32 v40; // eax
  __int32 v41; // eax
  __int32 v42; // eax
  unsigned __int8 v44; // [rsp+20h] [rbp-68h]
  _DWORD *v45; // [rsp+28h] [rbp-60h]
  __m128i v46; // [rsp+28h] [rbp-60h]

  v5 = a1;
  pScan = REGION_CORE::get_pScan(*a2);
  v9 = REGION_CORE::get_pScan(*a3);
  v10 = 0LL;
  pscnTail = REGION_CORE::get_pscnTail(*a2);
  v12 = (__int64)pscnTail - (unsigned int)(4 * *((_DWORD *)pscnTail - 1) + 16) - 4;
  v13 = (_DWORD *)((char *)REGION_CORE::get_pscnTail(*a3) - 4);
  if ( *(_DWORD *)(v12 + 12) != 0x7FFFFFFF
    || *(_DWORD *)((char *)v13 - (unsigned int)(4 * *v13 + 16) + 12) != 0x7FFFFFFF )
  {
    return 0;
  }
  REGION_CORE::set_sizeScan(*v5, 0);
  *((_DWORD *)*v5 + 6) = 0;
  v14 = *v5;
  *((_DWORD *)v14 + 7) = 0x7FFFFFFF;
  *((_DWORD *)v14 + 8) = 0x7FFFFFFF;
  *((_DWORD *)v14 + 9) = 0x80000000;
  *((_DWORD *)v14 + 10) = 0x80000000;
  while ( 2 )
  {
    v15 = REGION_CORE::get_pscnTail(*v5);
    v16 = 4 * (*(_DWORD *)v9 + *(_DWORD *)pScan) + 16;
    sizeScanAlloc = REGION_CORE::get_sizeScanAlloc(*v5);
    if ( v16 > sizeScanAlloc - (unsigned int)REGION_CORE::get_sizeScan(*v5) )
    {
      v18 = 2LL * (unsigned int)REGION_CORE::get_sizeScanAlloc(*v5);
      if ( v18 > 0xFFFFFFFF )
        return 0;
      v19 = v18 + v16;
      if ( (unsigned int)v18 + v16 < (unsigned int)v18 || v19 + 1120 < v19 || !RGNCOREOBJ::bExpand(a5, v19 + 1120) )
        return 0;
      v20 = REGION_CORE::get_pscnTail(*v5);
      v15 = v20;
      if ( v10 )
        v10 = (struct SCAN *)((char *)v20 - (unsigned int)(4 * *((_DWORD *)v20 - 1) + 16));
    }
    v21 = (_DWORD *)((char *)v15 + 12);
    v22 = *((_DWORD *)pScan + 2);
    v23 = (int *)((char *)v9 + 12);
    v24 = *((_DWORD *)v9 + 1);
    v25 = *((_DWORD *)pScan + 1);
    v26 = a4;
    if ( v22 >= *((_DWORD *)v9 + 2) )
      v22 = *((_DWORD *)v9 + 2);
    *((_DWORD *)v15 + 2) = v22;
    v27 = 1;
    if ( v25 <= v24 )
      v25 = v24;
    *((_DWORD *)v15 + 1) = v25;
    v28 = (int *)((char *)pScan + 12);
    v29 = *(_DWORD *)pScan;
    v30 = *(_DWORD *)v9;
    *(_DWORD *)v15 = 0;
LABEL_16:
    v44 = v26;
    v45 = v21;
    while ( v29 )
    {
      v31 = *v28;
      if ( !v30 )
      {
        ++v28;
        v33 = v27 + 2512088LL;
        --v29;
        goto LABEL_29;
      }
      v32 = *v23;
      if ( v31 < *v23 )
      {
        v33 = v27 + 2512088LL;
LABEL_24:
        ++v28;
        --v29;
        goto LABEL_25;
      }
      ++v23;
      v21 = v45;
      --v30;
      if ( v31 <= v32 )
      {
        v33 = v27 + 2512120LL;
        goto LABEL_24;
      }
      v31 = v32;
      v33 = v27 + 2512104LL;
LABEL_25:
      v26 = v44;
LABEL_29:
      v27 = *(_BYTE *)(0x140000000LL + v33);
      if ( (v27 & v26) != 0 )
      {
        ++*(_DWORD *)v15;
        *v21++ = v31;
        v26 ^= 0xFu;
        goto LABEL_16;
      }
    }
    if ( v30 )
    {
      v31 = *v23++;
      --v30;
      v33 = v27 + 2512104LL;
      goto LABEL_29;
    }
    v5 = a1;
    *((_DWORD *)v15 + *(unsigned int *)v15 + 3) = *(_DWORD *)v15;
    if ( v10
      && *(_DWORD *)v10 == *(_DWORD *)v15
      && !memcmp((char *)v10 + 12, (char *)v15 + 12, 4LL * *(unsigned int *)v10) )
    {
      v34 = *((_DWORD *)v15 + 2);
      v15 = v10;
      *((_DWORD *)v10 + 2) = v34;
    }
    else if ( v10 != v15 )
    {
      v35 = *a1;
      v36 = 4 * *(_DWORD *)v15;
      sizeScan = REGION_CORE::get_sizeScan(*a1);
      REGION_CORE::set_sizeScan(v35, v36 + sizeScan + 16);
      ++*((_DWORD *)*a1 + 6);
    }
    v38 = *((_DWORD *)v15 + 2);
    if ( v38 == 0x7FFFFFFF )
      return 1;
    if ( *(_DWORD *)v15 )
    {
      v46 = *(__m128i *)((char *)*a1 + 28);
      v39 = _mm_cvtsi128_si32(v46);
      if ( *((_DWORD *)v15 + 3) < v39 )
        v39 = *((_DWORD *)v15 + 3);
      v46.m128i_i32[0] = v39;
      v40 = HIDWORD(*(_QWORD *)((char *)*a1 + 28));
      if ( *((_DWORD *)v15 + 1) < v46.m128i_i32[1] )
        v40 = *((_DWORD *)v15 + 1);
      v46.m128i_i32[1] = v40;
      v41 = *(_QWORD *)((char *)*a1 + 36);
      if ( *((_DWORD *)v15 + (unsigned int)(*(_DWORD *)v15 - 1) + 3) > v46.m128i_i32[2] )
        v41 = *((_DWORD *)v15 + (unsigned int)(*(_DWORD *)v15 - 1) + 3);
      v46.m128i_i32[2] = v41;
      v42 = HIDWORD(*(_OWORD *)((char *)*a1 + 28));
      if ( v38 > v46.m128i_i32[3] )
        v42 = *((_DWORD *)v15 + 2);
      v46.m128i_i32[3] = v42;
      *(__m128i *)((char *)*a1 + 28) = v46;
    }
    if ( v22 == *((_DWORD *)pScan + 2) )
      pScan = (struct SCAN *)((char *)pScan + (unsigned int)(4 * *(_DWORD *)pScan + 16));
    if ( v22 == *((_DWORD *)v9 + 2) )
      v9 = (struct SCAN *)((char *)v9 + (unsigned int)(4 * *(_DWORD *)v9 + 16));
    if ( pScan < REGION_CORE::get_pscnTail(*a2) && v9 < REGION_CORE::get_pscnTail(*a3) )
    {
      v10 = v15;
      continue;
    }
    return 0;
  }
}
