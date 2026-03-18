/*
 * XREFs of ?UploadForFloodFill@RGNCOREOBJ@@QEAAJPEBJKPEAJK@Z @ 0x140183E10
 * Callers:
 *     <none>
 * Callees:
 *     ?get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x14000EE30 (-get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?set_sizeScan@REGION_CORE@@IEAAXK@Z @ 0x14000F730 (-set_sizeScan@REGION_CORE@@IEAAXK@Z.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x14001FB50 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x140021850 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A8710 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?bExpand@RGNCOREOBJ@@QEAA_NK@Z @ 0x1401BDB70 (-bExpand@RGNCOREOBJ@@QEAA_NK@Z.c)
 *     ?vMerge@RGNCOREOBJ@@CAXPEBU_INDEX_LONG@@KPEBU_SPAN@@KPEAJJ@Z @ 0x1401FB71C (-vMerge@RGNCOREOBJ@@CAXPEBU_INDEX_LONG@@KPEBU_SPAN@@KPEAJJ@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall RGNCOREOBJ::UploadForFloodFill(
        REGION_CORE **this,
        unsigned int *a2,
        unsigned int a3,
        int *a4,
        unsigned int a5)
{
  unsigned int (__fastcall **v8)(const struct REGION_CORE *); // rsi
  const struct REGION_CORE *v9; // rdi
  unsigned int v10; // ebx
  unsigned int v12; // edx
  __int64 v13; // r13
  __int64 v14; // rsi
  struct SCAN *pScan; // rsi
  int v16; // ebp
  int v17; // r14d
  int v18; // edi
  int v19; // ebx
  __int64 v20; // rcx
  REGION_CORE *v21; // rax
  struct SCAN *pscnTail; // rbp
  struct SCAN *v23; // rax
  int v24; // r8d
  unsigned int *v25; // rdi
  int sizeScan; // ebx
  signed __int64 v27; // rdi
  unsigned int *v28; // r14
  unsigned int *v29; // rbx
  struct SCAN *v30; // rax
  REGION_CORE *v31; // rbx
  int v32; // eax
  int v33; // eax
  unsigned int v34; // eax
  __int64 v35; // rbp
  int v36; // ebx
  signed __int64 v37; // rdi
  struct SCAN *v38; // rax
  int v39; // r8d
  unsigned int *v40; // rsi
  REGION_CORE *v41; // rcx
  int v42; // eax
  struct SCAN *v43; // rax
  REGION_CORE *v44; // rbx
  int v45; // eax
  unsigned int v46; // eax
  unsigned int v47; // eax
  int v48; // [rsp+30h] [rbp-48h]
  unsigned int v49; // [rsp+30h] [rbp-48h]
  __m128i v50; // [rsp+38h] [rbp-40h]
  __m128i v51; // [rsp+38h] [rbp-40h]

  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    v8 = *(unsigned int (__fastcall ***)(const struct REGION_CORE *))WPP_MAIN_CB.Dpc.DeferredContext;
    v9 = *this;
    v10 = (*(__int64 (__fastcall **)(REGION_CORE *, unsigned int *, _QWORD))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext
                                                                           + 296LL))(
            *this,
            a2,
            a3);
    RgnCaptureLiveMemoryDumpOnZeroSizedScan(v8, v9);
    return v10;
  }
  if ( 4 * (unsigned __int64)a3 >= 0xC && a2[1] + 1 == a2[2] )
  {
    v12 = *a2;
    v13 = 2 * v12;
    v14 = 4 * v13;
    if ( 4LL * a3 == 4 * v13 + 12 )
    {
      if ( v12 )
      {
        if ( (unsigned int)REGION_CORE::get_sizeScan(*this) == 16 )
        {
          v48 = 4 * a3 + 36;
          if ( RGNCOREOBJ::bExpand((RGNCOREOBJ *)this, v48) )
          {
            pScan = REGION_CORE::get_pScan(*this);
            *(_DWORD *)pScan = 0;
            *((_DWORD *)pScan + 1) = 0x80000000;
            *((_DWORD *)pScan + 2) = a2[1];
            *((_DWORD *)pScan + 3) = 0;
            v16 = a2[1];
            v17 = a2[2];
            *((_DWORD *)pScan + 4) = v13;
            *((_DWORD *)pScan + 5) = a2[1];
            *((_DWORD *)pScan + 6) = a2[2];
            memmove((char *)pScan + 28, a2 + 3, 4 * v13);
            *((_DWORD *)pScan + v13 + 7) = v13;
            v18 = *((_DWORD *)pScan + 7);
            v19 = *((_DWORD *)pScan + (unsigned int)(v13 - 1) + 7);
            v20 = (unsigned int)(4 * *((_DWORD *)pScan + 4) + 16);
            *(_DWORD *)((char *)pScan + v20 + 16) = 0;
            *(_DWORD *)((char *)pScan + v20 + 20) = a2[2];
            *(_QWORD *)((char *)pScan + v20 + 24) = 0x7FFFFFFFLL;
            REGION_CORE::set_sizeScan(*this, v48);
            *((_DWORD *)*this + 6) = 3;
            v21 = *this;
            *((_DWORD *)v21 + 7) = v18;
            *((_DWORD *)v21 + 8) = v16;
            *((_DWORD *)v21 + 9) = v19;
            *((_DWORD *)v21 + 10) = v17;
            return 0LL;
          }
        }
        else
        {
          pscnTail = REGION_CORE::get_pscnTail(*this);
          v23 = REGION_CORE::get_pScan(*this);
          v24 = a2[1];
          v25 = (unsigned int *)v23;
          while ( v24 > (int)v25[1] )
          {
            v25 += *v25 + 4;
            if ( v25 == (unsigned int *)pscnTail )
              return 0LL;
          }
          if ( v24 == v25[1] && v25[2] == a2[2] )
          {
            v49 = *v25;
            sizeScan = REGION_CORE::get_sizeScan(*this);
            v27 = (char *)v25 - (char *)REGION_CORE::get_pScan(*this);
            if ( RGNCOREOBJ::bExpand((RGNCOREOBJ *)this, v14 + sizeScan) )
            {
              v28 = (unsigned int *)((char *)REGION_CORE::get_pScan(*this) + v27);
              if ( a5 < *v28 + (unsigned int)v13 )
                return 3221225507LL;
              RGNCOREOBJ::vMerge(
                (const struct _INDEX_LONG *)(v28 + 3),
                *v28,
                (const struct _SPAN *)(a2 + 3),
                *a2,
                a4,
                a5);
              v29 = &v28[*v28 + 4];
              v30 = REGION_CORE::get_pscnTail(*this);
              memmove(&v29[(unsigned __int64)v14 / 4], v29, v30 - (struct SCAN *)v29);
              *v28 = v13 + v49;
              memmove(v28 + 3, a4, 4LL * ((unsigned int)v13 + v49));
              v28[*v28 + 3] = *v28;
              v31 = *this;
              v32 = REGION_CORE::get_sizeScan(*this);
              REGION_CORE::set_sizeScan(v31, v14 + v32);
              v33 = _mm_cvtsi128_si32(*(__m128i *)((char *)*this + 28));
              v50 = *(__m128i *)((char *)*this + 28);
              if ( v33 >= (int)v28[3] )
                v33 = v28[3];
              v50.m128i_i32[0] = v33;
              v34 = *(_QWORD *)((char *)*this + 36);
              if ( v50.m128i_i32[2] <= (int)v28[*v28 + 2] )
                v34 = v28[*v28 + 2];
              v50.m128i_i32[2] = v34;
              *(__m128i *)((char *)*this + 28) = v50;
              return 0LL;
            }
          }
          else
          {
            v35 = a3 + 1;
            v36 = REGION_CORE::get_sizeScan(*this);
            v37 = (char *)v25 - (char *)REGION_CORE::get_pScan(*this);
            if ( RGNCOREOBJ::bExpand((RGNCOREOBJ *)this, v36 + 4 * v35) )
            {
              v38 = REGION_CORE::get_pScan(*this);
              v39 = a2[1];
              v40 = (unsigned int *)((char *)v38 + v37);
              if ( *(_DWORD *)((char *)v38 + v37 + 4) == v39 )
              {
                v40[1] = a2[2];
                v41 = *this;
                v51 = *(__m128i *)((char *)*this + 28);
                v51.m128i_i32[3] = a2[2];
              }
              else
              {
                v40[-*(v40 - 1) - 2] = v39;
                v41 = *this;
                v51 = *(__m128i *)((char *)*this + 28);
                v42 = _mm_cvtsi128_si32(_mm_srli_si128(v51, 4));
                if ( v51.m128i_i32[1] >= (int)a2[1] )
                  v42 = a2[1];
                v51.m128i_i32[1] = v42;
              }
              v43 = REGION_CORE::get_pscnTail(v41);
              memmove(&v40[v35], v40, v43 - (struct SCAN *)v40);
              *v40 = v13;
              v40[1] = a2[1];
              v40[2] = a2[2];
              memmove(v40 + 3, a2 + 3, 4LL * (unsigned int)v13);
              v40[*v40 + 3] = *v40;
              v44 = *this;
              v45 = REGION_CORE::get_sizeScan(*this);
              REGION_CORE::set_sizeScan(v44, v45 + 4 * v35);
              ++*((_DWORD *)*this + 6);
              v46 = v51.m128i_i32[0];
              if ( v51.m128i_i32[0] >= (int)v40[3] )
                v46 = v40[3];
              v51.m128i_i32[0] = v46;
              v47 = v51.m128i_u32[2];
              if ( v51.m128i_i32[2] <= (int)v40[*v40 + 2] )
                v47 = v40[*v40 + 2];
              v51.m128i_i32[2] = v47;
              *(__m128i *)((char *)*this + 28) = v51;
              return 0LL;
            }
          }
        }
        return 3221225495LL;
      }
      return 0LL;
    }
  }
  return 3221225485LL;
}
