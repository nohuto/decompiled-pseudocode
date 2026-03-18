/*
 * XREFs of ?UploadForFloodFill@RGNCOREOBJ@@QEAAJPEBJKPEAJK@Z @ 0x140094AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?set_sizeScan@REGION_CORE@@IEAAXK@Z @ 0x1400112F0 (-set_sizeScan@REGION_CORE@@IEAAXK@Z.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400113C0 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x1400133F0 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ?RegionCore_upload_for_floodfill@Win32kRS@@YAJPEAVREGION_CORE@@PEBJKPEAJK@Z @ 0x140094A0C (-RegionCore_upload_for_floodfill@Win32kRS@@YAJPEAVREGION_CORE@@PEBJKPEAJK@Z.c)
 *     ?bExpand@RGNCOREOBJ@@QEAA_NK@Z @ 0x140095A28 (-bExpand@RGNCOREOBJ@@QEAA_NK@Z.c)
 *     ?get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x140096A80 (-get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?vMerge@RGNCOREOBJ@@CAXPEBU_INDEX_LONG@@KPEBU_SPAN@@KPEAJJ@Z @ 0x1401D2630 (-vMerge@RGNCOREOBJ@@CAXPEBU_INDEX_LONG@@KPEBU_SPAN@@KPEAJJ@Z.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall RGNCOREOBJ::UploadForFloodFill(Win32kRS **this, int *a2, unsigned int a3, int *a4, unsigned int a5)
{
  unsigned __int64 v9; // rcx
  int v10; // edx
  __int64 v11; // r13
  __int64 v12; // rbp
  struct SCAN *pscnTail; // rdi
  struct REGION_CORE *v14; // rdx
  struct SCAN *v15; // rax
  int v16; // r8d
  unsigned int *v17; // rsi
  __int64 v18; // r14
  int sizeScan; // ebx
  struct REGION_CORE *v20; // rdx
  struct SCAN *v21; // rdi
  struct REGION_CORE *v22; // rdx
  struct SCAN *v23; // rax
  int v24; // r8d
  unsigned int *v25; // rsi
  REGION_CORE *v26; // rcx
  struct SCAN *v27; // rax
  REGION_CORE *v28; // rbx
  int v29; // eax
  unsigned int v30; // r8d
  unsigned int v31; // eax
  unsigned int v32; // eax
  struct REGION_CORE *v34; // rdx
  struct SCAN *pScan; // rax
  _DWORD *v36; // rsi
  int v37; // ecx
  int v38; // ebp
  int v39; // r14d
  int v40; // edi
  int v41; // ebx
  _DWORD *v42; // rsi
  unsigned int v43; // r8d
  Win32kRS *v44; // rax
  int v45; // ebx
  struct REGION_CORE *v46; // rdx
  struct SCAN *v47; // rdi
  struct REGION_CORE *v48; // rdx
  unsigned int *v49; // rsi
  unsigned int *v50; // rbx
  struct SCAN *v51; // rax
  REGION_CORE *v52; // rbx
  int v53; // eax
  unsigned int v54; // r8d
  int v55; // eax
  unsigned int v56; // eax
  int *v57; // [rsp+20h] [rbp-58h]
  unsigned int v58; // [rsp+30h] [rbp-48h]
  unsigned int v59; // [rsp+30h] [rbp-48h]
  __int128 v60; // [rsp+38h] [rbp-40h]
  __int128 v61; // [rsp+38h] [rbp-40h]

  if ( qword_1402A10B0 )
  {
    LODWORD(v57) = a5;
    return Win32kRS::RegionCore_upload_for_floodfill(*this, (struct REGION_CORE *)a2, (const int *)a3, (__int64)a4, v57);
  }
  v9 = 4LL * a3;
  if ( v9 < 0xC )
    return 3221225485LL;
  if ( a2[1] + 1 != a2[2] )
    return 3221225485LL;
  v10 = *a2;
  v11 = (unsigned int)(2 * v10);
  v12 = 4 * v11;
  if ( v9 != 4 * v11 + 12 )
    return 3221225485LL;
  if ( !v10 )
    return 0LL;
  if ( (unsigned int)REGION_CORE::get_sizeScan(*this) == 16 )
  {
    v58 = 4 * a3 + 36;
    if ( !RGNCOREOBJ::bExpand((RGNCOREOBJ *)this, v58) )
      return 3221225495LL;
    pScan = REGION_CORE::get_pScan(*this, v34);
    *(_DWORD *)pScan = 0;
    v36 = (_DWORD *)((char *)pScan + 16);
    *((_DWORD *)pScan + 1) = 0x80000000;
    v37 = a2[1];
    *((_DWORD *)pScan + 3) = 0;
    *((_DWORD *)pScan + 2) = v37;
    v38 = a2[1];
    v39 = a2[2];
    *((_DWORD *)pScan + 4) = v11;
    *((_DWORD *)pScan + 5) = a2[1];
    *((_DWORD *)pScan + 6) = a2[2];
    memmove((char *)pScan + 28, a2 + 3, 4 * v11);
    v36[v11 + 3] = v11;
    v40 = v36[3];
    v41 = v36[(unsigned int)(v11 - 1) + 3];
    v42 = (_DWORD *)((char *)v36 + (unsigned int)(4 * *v36 + 16));
    *v42 = 0;
    v42[1] = a2[2];
    v42[2] = 0x7FFFFFFF;
    v42[3] = 0;
    REGION_CORE::set_sizeScan(*this, (struct REGION_CORE *)v58, v43);
    *((_DWORD *)*this + 6) = 3;
    v44 = *this;
    *((_DWORD *)v44 + 7) = v40;
    *((_DWORD *)v44 + 8) = v38;
    *((_DWORD *)v44 + 9) = v41;
    *((_DWORD *)v44 + 10) = v39;
    return 0LL;
  }
  pscnTail = REGION_CORE::get_pscnTail(*this);
  v15 = REGION_CORE::get_pScan(*this, v14);
  v16 = a2[1];
  v17 = (unsigned int *)v15;
  while ( v16 > (int)v17[1] )
  {
    v17 += *v17 + 4;
    if ( v17 == (unsigned int *)pscnTail )
      return 0LL;
  }
  if ( v16 != v17[1] || v17[2] != a2[2] )
  {
    v18 = a3 + 1;
    sizeScan = REGION_CORE::get_sizeScan(*this);
    v21 = REGION_CORE::get_pScan(*this, v20);
    if ( RGNCOREOBJ::bExpand((RGNCOREOBJ *)this, sizeScan + 4 * v18) )
    {
      v23 = REGION_CORE::get_pScan(*this, v22);
      v24 = a2[1];
      v25 = (unsigned int *)((char *)v17 + v23 - v21);
      if ( v25[1] == v24 )
      {
        v25[1] = a2[2];
        v26 = *this;
        v60 = *(_OWORD *)((char *)*this + 28);
        HIDWORD(v60) = a2[2];
      }
      else
      {
        v25[-*(v25 - 1) - 2] = v24;
        v26 = *this;
        v60 = *(_OWORD *)((char *)*this + 28);
        if ( (int)HIDWORD(*(_QWORD *)((char *)*this + 28)) >= a2[1] )
          DWORD1(v60) = a2[1];
      }
      v27 = REGION_CORE::get_pscnTail(v26);
      memmove(&v25[v18], v25, v27 - (struct SCAN *)v25);
      *v25 = v11;
      v25[1] = a2[1];
      v25[2] = a2[2];
      memmove(v25 + 3, a2 + 3, 4LL * (unsigned int)v11);
      v25[*v25 + 3] = *v25;
      v28 = *this;
      v29 = REGION_CORE::get_sizeScan(*this);
      REGION_CORE::set_sizeScan(v28, (struct REGION_CORE *)(unsigned int)(v29 + 4 * v18), v30);
      ++*((_DWORD *)*this + 6);
      v31 = v60;
      if ( (int)v60 >= (int)v25[3] )
        v31 = v25[3];
      LODWORD(v60) = v31;
      v32 = DWORD2(v60);
      if ( SDWORD2(v60) <= (int)v25[*v25 + 2] )
        v32 = v25[*v25 + 2];
      DWORD2(v60) = v32;
      *(_OWORD *)((char *)*this + 28) = v60;
      return 0LL;
    }
    return 3221225495LL;
  }
  v59 = *v17;
  v45 = REGION_CORE::get_sizeScan(*this);
  v47 = REGION_CORE::get_pScan(*this, v46);
  if ( !RGNCOREOBJ::bExpand((RGNCOREOBJ *)this, v45 + v12) )
    return 3221225495LL;
  v49 = (unsigned int *)((char *)v17 + REGION_CORE::get_pScan(*this, v48) - v47);
  if ( a5 >= *v49 + (unsigned int)v11 )
  {
    RGNCOREOBJ::vMerge((const struct _INDEX_LONG *)(v49 + 3), *v49, (const struct _SPAN *)(a2 + 3), *a2, a4, a5);
    v50 = &v49[*v49 + 4];
    v51 = REGION_CORE::get_pscnTail(*this);
    memmove(&v50[(unsigned __int64)v12 / 4], v50, v51 - (struct SCAN *)v50);
    *v49 = v11 + v59;
    memmove(v49 + 3, a4, 4LL * ((unsigned int)v11 + v59));
    v49[*v49 + 3] = *v49;
    v52 = *this;
    v53 = REGION_CORE::get_sizeScan(*this);
    REGION_CORE::set_sizeScan(v52, (struct REGION_CORE *)(unsigned int)(v53 + v12), v54);
    v55 = _mm_cvtsi128_si32(*(__m128i *)((char *)*this + 28));
    v61 = *(_OWORD *)((char *)*this + 28);
    if ( v55 >= (int)v49[3] )
      v55 = v49[3];
    LODWORD(v61) = v55;
    v56 = *(_QWORD *)((char *)*this + 36);
    if ( SDWORD2(v61) <= (int)v49[*v49 + 2] )
      v56 = v49[*v49 + 2];
    DWORD2(v61) = v56;
    *(_OWORD *)((char *)*this + 28) = v61;
    return 0LL;
  }
  return 3221225507LL;
}
