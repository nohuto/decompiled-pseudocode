/*
 * XREFs of RGNCOREOBJ::bMerge__RGNOBJ::bMerge_::_2_::_lambda_1___ @ 0x140022050
 * Callers:
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x140012210 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     GreCombineRgn @ 0x140020BA0 (GreCombineRgn.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x140021F20 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 * Callees:
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x140011E40 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x140015468 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x14001FB50 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x140021D3C (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1400C5470 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?RustOnZeroSizedScanCallback@@YAXXZ @ 0x1401C3F80 (-RustOnZeroSizedScanCallback@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memcmp @ 0x14024C590 (memcmp.c)
 */

char __fastcall RGNCOREOBJ::bMerge__RGNOBJ::bMerge_::_2_::_lambda_1___(
        const struct REGION_CORE **a1,
        _QWORD **a2,
        _QWORD **a3,
        unsigned __int8 a4,
        __int64 a5)
{
  unsigned int (__fastcall ***DeferredContext)(const struct REGION_CORE *); // rdi
  const struct REGION_CORE **v8; // r12
  _DWORD *v9; // r15
  _DWORD *v10; // r14
  _QWORD *v11; // rcx
  unsigned int *v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rbx
  _QWORD *v15; // rcx
  __int64 v16; // rax
  const struct REGION_CORE *v17; // rsi
  const struct REGION_CORE *v18; // rax
  const struct REGION_CORE *v19; // rcx
  unsigned int *v20; // rbx
  unsigned int v21; // r13d
  unsigned int v22; // esi
  const struct REGION_CORE *v23; // rcx
  unsigned int v24; // eax
  int *v25; // r12
  signed int v26; // edx
  _DWORD *v27; // r11
  signed int v28; // r13d
  unsigned int *v29; // r8
  signed int v30; // ecx
  unsigned __int8 v31; // r10
  unsigned __int8 v32; // al
  __int64 v33; // rdx
  int v34; // esi
  int v35; // ecx
  __int64 v36; // r9
  char *v37; // rax
  unsigned __int8 *v38; // rax
  const struct REGION_CORE *v39; // rbp
  int v40; // ecx
  __int64 v41; // rdx
  unsigned __int64 v42; // rcx
  __int32 v43; // r9d
  __int64 v44; // rdx
  signed int v45; // ecx
  int v46; // eax
  __int32 v47; // ecx
  __int32 v48; // eax
  __int32 v49; // eax
  __int32 v50; // eax
  _QWORD *v51; // rcx
  unsigned __int64 v52; // rax
  _QWORD *v53; // rcx
  unsigned __int64 v54; // rax
  int v56; // eax
  unsigned int v57; // eax
  int v58; // eax
  __int64 v59; // rax
  const struct REGION_CORE *v60; // rcx
  unsigned int v61; // eax
  unsigned __int64 v62; // rax
  unsigned int v63; // ecx
  struct RGNOBJ *v64; // r13
  __int64 v65; // rax
  __int64 v66; // rax
  unsigned int (__fastcall **v67)(const struct REGION_CORE *); // rdi
  unsigned int (__fastcall **v68)(const struct REGION_CORE *); // rbx
  unsigned int v69; // eax
  unsigned int (__fastcall **v70)(const struct REGION_CORE *); // rdi
  const struct REGION_CORE *v71; // rsi
  unsigned int v72; // ebx
  __int64 v73; // rcx
  const struct REGION_CORE *v74; // rcx
  __int64 v75; // rax
  __int64 v76; // [rsp+28h] [rbp-70h] BYREF
  __int64 v77; // [rsp+30h] [rbp-68h]
  _DWORD *v78; // [rsp+38h] [rbp-60h]
  __m128i v79; // [rsp+40h] [rbp-58h]

  DeferredContext = (unsigned int (__fastcall ***)(const struct REGION_CORE *))WPP_MAIN_CB.Dpc.DeferredContext;
  v8 = a1;
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    v65 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 208LL))(*a2);
    DeferredContext = (unsigned int (__fastcall ***)(const struct REGION_CORE *))WPP_MAIN_CB.Dpc.DeferredContext;
    v9 = (_DWORD *)v65;
  }
  else
  {
    v9 = (_DWORD *)**a2;
  }
  if ( DeferredContext )
  {
    v66 = ((__int64 (__fastcall *)(_QWORD))(*DeferredContext)[26])(*a3);
    DeferredContext = (unsigned int (__fastcall ***)(const struct REGION_CORE *))WPP_MAIN_CB.Dpc.DeferredContext;
    v10 = (_DWORD *)v66;
  }
  else
  {
    v10 = (_DWORD *)**a3;
  }
  v11 = *a2;
  v78 = v10;
  v12 = 0LL;
  if ( DeferredContext )
  {
    v13 = ((__int64 (__fastcall *)(_QWORD *))(*DeferredContext)[28])(v11);
    DeferredContext = (unsigned int (__fastcall ***)(const struct REGION_CORE *))WPP_MAIN_CB.Dpc.DeferredContext;
  }
  else
  {
    v13 = *v11 + v11[2];
  }
  v14 = v13 - 4 - (unsigned int)(4 * *(_DWORD *)(v13 - 4) + 16);
  v15 = *a3;
  if ( DeferredContext )
  {
    v16 = ((__int64 (__fastcall *)(_QWORD *))(*DeferredContext)[28])(v15);
    DeferredContext = (unsigned int (__fastcall ***)(const struct REGION_CORE *))WPP_MAIN_CB.Dpc.DeferredContext;
  }
  else
  {
    v16 = *v15 + v15[2];
  }
  if ( *(_DWORD *)(v14 + 12) != 0x7FFFFFFF
    || *(_DWORD *)(v16 - 4 - (unsigned int)(4 * *(_DWORD *)(v16 - 4) + 16) + 12) != 0x7FFFFFFF )
  {
    return 0;
  }
  v17 = *v8;
  if ( DeferredContext )
  {
    v68 = *DeferredContext;
    ((void (__fastcall *)(const struct REGION_CORE *, _QWORD))(*DeferredContext)[24])(*v8, 0LL);
    RgnCaptureLiveMemoryDumpOnZeroSizedScan(v68, v17);
    DeferredContext = (unsigned int (__fastcall ***)(const struct REGION_CORE *))WPP_MAIN_CB.Dpc.DeferredContext;
  }
  else
  {
    *((_QWORD *)v17 + 2) = 0LL;
  }
  *((_DWORD *)*v8 + 6) = 0;
  v18 = *v8;
  *((_DWORD *)v18 + 7) = 0x7FFFFFFF;
  *((_DWORD *)v18 + 8) = 0x7FFFFFFF;
  *((_DWORD *)v18 + 9) = 0x80000000;
  *((_DWORD *)v18 + 10) = 0x80000000;
  while ( 2 )
  {
    v19 = *v8;
    if ( DeferredContext )
    {
      v59 = ((__int64 (__fastcall *)(const struct REGION_CORE *))(*DeferredContext)[28])(v19);
      DeferredContext = (unsigned int (__fastcall ***)(const struct REGION_CORE *))WPP_MAIN_CB.Dpc.DeferredContext;
      v20 = (unsigned int *)v59;
    }
    else
    {
      v20 = (unsigned int *)(*(_QWORD *)v19 + *((_QWORD *)v19 + 2));
    }
    v21 = 4 * (*v10 + *v9) + 16;
    if ( DeferredContext )
    {
      v57 = (*DeferredContext)[23](*v8);
      DeferredContext = (unsigned int (__fastcall ***)(const struct REGION_CORE *))WPP_MAIN_CB.Dpc.DeferredContext;
      v22 = v57;
    }
    else
    {
      v22 = *((_DWORD *)*v8 + 2);
    }
    v23 = *v8;
    if ( DeferredContext )
    {
      v24 = (*DeferredContext)[22](v23);
      DeferredContext = (unsigned int (__fastcall ***)(const struct REGION_CORE *))WPP_MAIN_CB.Dpc.DeferredContext;
    }
    else
    {
      v24 = *((_DWORD *)v23 + 4);
    }
    if ( v21 > v22 - v24 )
    {
      v60 = *v8;
      if ( DeferredContext )
      {
        v61 = (*DeferredContext)[23](v60);
        DeferredContext = (unsigned int (__fastcall ***)(const struct REGION_CORE *))WPP_MAIN_CB.Dpc.DeferredContext;
      }
      else
      {
        v61 = *((_DWORD *)v60 + 2);
      }
      v62 = 2LL * v61;
      if ( v62 > 0xFFFFFFFF )
        return 0;
      v63 = v62 + v21;
      if ( (unsigned int)v62 + v21 < (unsigned int)v62 || v63 + 1120 < v63 )
        return 0;
      v64 = *(struct RGNOBJ **)(a5 + 8);
      if ( DeferredContext )
      {
        v70 = *DeferredContext;
        v71 = (const struct REGION_CORE *)(*(_QWORD *)v64 + 24LL);
        if ( !*(_QWORD *)v64 )
          v71 = 0LL;
        v72 = v70[8](v71);
        RgnCaptureLiveMemoryDumpOnZeroSizedScan(v70, v71);
        if ( !v72 )
          return 0;
      }
      else
      {
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v76, v63 + 1120);
        if ( !v76 )
        {
          EngSetLastError(8u);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v76);
          return 0;
        }
        RGNOBJ::vCopy((RGNOBJ *)&v76, v64);
        RGNOBJ::vSwap(v64, (struct RGNOBJ *)&v76);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v76);
      }
      DeferredContext = (unsigned int (__fastcall ***)(const struct REGION_CORE *))WPP_MAIN_CB.Dpc.DeferredContext;
      v73 = *(_QWORD *)v64 + 24LL;
      if ( !*(_QWORD *)v64 )
        v73 = 0LL;
      **(_QWORD **)a5 = v73;
      v74 = *v8;
      if ( DeferredContext )
      {
        v75 = ((__int64 (__fastcall *)(const struct REGION_CORE *))(*DeferredContext)[28])(v74);
        DeferredContext = (unsigned int (__fastcall ***)(const struct REGION_CORE *))WPP_MAIN_CB.Dpc.DeferredContext;
        v20 = (unsigned int *)v75;
      }
      else
      {
        v20 = (unsigned int *)(*(_QWORD *)v74 + *((_QWORD *)v74 + 2));
      }
      if ( v12 )
        v12 = &v20[-*(v20 - 1) - 4];
    }
    v25 = v10 + 3;
    v26 = v10[1];
    v27 = v20 + 3;
    v28 = v9[2];
    v29 = v9 + 3;
    v30 = v9[1];
    v31 = a4;
    if ( v28 >= v10[2] )
      v28 = v10[2];
    v20[2] = v28;
    v32 = 1;
    if ( v30 <= v26 )
      v30 = v26;
    v20[1] = v30;
    v33 = 0LL;
    v34 = *v10;
    v35 = *v9;
    *v20 = 0;
    while ( v35 )
    {
      v33 = *v29;
      v36 = v32;
      if ( v34 && (v56 = *v25, (int)v33 >= *v25) )
      {
        v79.m128i_i64[0] = (__int64)(v25 + 1);
        v77 = (__int64)(v25 + 1);
        --v34;
        if ( (int)v33 > v56 )
        {
          v25 = (int *)v77;
          v33 = (unsigned int)v56;
          v37 = (char *)&afjB;
          goto LABEL_30;
        }
        v77 = v79.m128i_i64[0];
        v37 = (char *)&afjAB;
        v25 = (int *)v79.m128i_i64[0];
      }
      else
      {
        v37 = (char *)&afjA;
      }
      ++v29;
      --v35;
LABEL_30:
      v38 = (unsigned __int8 *)&v37[v36];
LABEL_31:
      v32 = *v38;
      if ( (v32 & v31) != 0 )
      {
        ++*v20;
        *v27++ = v33;
        v31 ^= 0xFu;
      }
    }
    if ( v34 )
    {
      v33 = (unsigned int)*v25;
      --v34;
      ++v25;
      v38 = (unsigned __int8 *)&afjB + v32;
      goto LABEL_31;
    }
    v10 = v78;
    v8 = a1;
    v20[*v20 + 3] = *v20;
    if ( v12 && *v12 == *v20 && !memcmp(v12 + 3, v20 + 3, 4LL * *v12) )
    {
      v69 = v20[2];
      v20 = v12;
      v12[2] = v69;
    }
    else if ( v12 != v20 )
    {
      v39 = *a1;
      if ( DeferredContext )
      {
        v58 = ((__int64 (__fastcall *)(const struct REGION_CORE *, __int64, unsigned int *))(*DeferredContext)[22])(
                *a1,
                v33,
                v29);
        DeferredContext = (unsigned int (__fastcall ***)(const struct REGION_CORE *))WPP_MAIN_CB.Dpc.DeferredContext;
        v40 = v58;
      }
      else
      {
        v40 = *((_DWORD *)v39 + 4);
      }
      v41 = v40 + 4 * (*v20 + 4);
      if ( DeferredContext )
      {
        v67 = *DeferredContext;
        ((void (__fastcall *)(const struct REGION_CORE *, __int64, unsigned int *))v67[24])(v39, v41, v29);
        RgnCaptureLiveMemoryDumpOnZeroSizedScan(v67, v39);
        DeferredContext = (unsigned int (__fastcall ***)(const struct REGION_CORE *))WPP_MAIN_CB.Dpc.DeferredContext;
      }
      else
      {
        v42 = *((_QWORD *)v39 + 1);
        *((_QWORD *)v39 + 2) = (unsigned int)v41;
        if ( v42 < (unsigned int)v41 )
        {
          *((_QWORD *)v39 + 2) = v42;
          RustOnZeroSizedScanCallback();
          DeferredContext = (unsigned int (__fastcall ***)(const struct REGION_CORE *))WPP_MAIN_CB.Dpc.DeferredContext;
        }
      }
      ++*((_DWORD *)*a1 + 6);
    }
    v43 = v20[2];
    if ( v43 == 0x7FFFFFFF )
      return 1;
    v44 = *v20;
    if ( (_DWORD)v44 )
    {
      v45 = v20[3];
      v29 = (unsigned int *)*a1;
      v79 = *(__m128i *)((char *)*a1 + 28);
      v46 = _mm_cvtsi128_si32(v79);
      if ( v45 < v46 )
        v46 = v45;
      v47 = v20[1];
      v79.m128i_i32[0] = v46;
      v48 = v79.m128i_i32[1];
      if ( v47 < v79.m128i_i32[1] )
        v48 = v47;
      v79.m128i_i32[1] = v48;
      v44 = v20[(unsigned int)(v44 - 1) + 3];
      v49 = v79.m128i_i32[2];
      if ( (int)v44 > v79.m128i_i32[2] )
        v49 = v44;
      v79.m128i_i32[2] = v49;
      v50 = v79.m128i_i32[3];
      if ( v43 > v79.m128i_i32[3] )
        v50 = v43;
      v79.m128i_i32[3] = v50;
      *(__m128i *)(v29 + 7) = v79;
    }
    if ( v28 == v9[2] )
      v9 = (_DWORD *)((char *)v9 + (unsigned int)(4 * *v9 + 16));
    if ( v28 == v10[2] )
    {
      v10 = (_DWORD *)((char *)v10 + (unsigned int)(4 * *v10 + 16));
      v78 = v10;
    }
    v51 = *a2;
    if ( DeferredContext )
    {
      v52 = ((__int64 (__fastcall *)(_QWORD *, __int64, unsigned int *))(*DeferredContext)[28])(v51, v44, v29);
      DeferredContext = (unsigned int (__fastcall ***)(const struct REGION_CORE *))WPP_MAIN_CB.Dpc.DeferredContext;
    }
    else
    {
      v52 = *v51 + v51[2];
    }
    if ( (unsigned __int64)v9 < v52 )
    {
      v53 = *a3;
      if ( DeferredContext )
      {
        v54 = ((__int64 (__fastcall *)(_QWORD *, __int64, unsigned int *))(*DeferredContext)[28])(v53, v44, v29);
        DeferredContext = (unsigned int (__fastcall ***)(const struct REGION_CORE *))WPP_MAIN_CB.Dpc.DeferredContext;
      }
      else
      {
        v54 = *v53 + v53[2];
      }
      if ( (unsigned __int64)v10 < v54 )
      {
        v12 = v20;
        continue;
      }
    }
    return 0;
  }
}
