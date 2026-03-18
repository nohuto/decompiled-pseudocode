/*
 * XREFs of RGNCOREOBJ::iCombine_RGNCOREOBJ__RGNCOREOBJ::iCombine_::_2_::_lambda_1___ @ 0x14019FAAC
 * Callers:
 *     ?iCombine@RGNCOREOBJ@@QEAAJAEAV1@0J@Z @ 0x14019FA90 (-iCombine@RGNCOREOBJ@@QEAAJAEAV1@0J@Z.c)
 * Callees:
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x14001FB50 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x140021850 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ?bMerge@RGNCOREOBJ@@QEAA_NAEAV1@0E@Z @ 0x140045860 (-bMerge@RGNCOREOBJ@@QEAA_NAEAV1@0E@Z.c)
 *     ?vSet@RGNCOREOBJ@@QEAAXXZ @ 0x1400FD0A0 (-vSet@RGNCOREOBJ@@QEAAXXZ.c)
 *     ?bContain@RGNCOREOBJ@@QEBA_NAEAV1@@Z @ 0x1401205A4 (-bContain@RGNCOREOBJ@@QEBA_NAEAV1@@Z.c)
 *     ?bRectl@RGNCOREOBJ@@QEBA_NXZ @ 0x14012DF58 (-bRectl@RGNCOREOBJ@@QEBA_NXZ.c)
 *     ?iComplexity@RGNCOREOBJ@@QEBAJXZ @ 0x14012E038 (-iComplexity@RGNCOREOBJ@@QEBAJXZ.c)
 *     ?vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x14013472C (-vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z @ 0x14017BE00 (-bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNCOREOBJ::iCombine_RGNCOREOBJ__RGNCOREOBJ::iCombine_::_2_::_lambda_1___(
        const struct REGION_CORE **this,
        struct RGNCOREOBJ *a2,
        struct RGNCOREOBJ *a3,
        int a4,
        REGION_CORE **a5)
{
  struct RGNCOREOBJ *v5; // r14
  __int64 v6; // rbp
  RGNCOREOBJ *v7; // rbx
  unsigned int (__fastcall **v9)(const struct REGION_CORE *); // rsi
  const struct REGION_CORE *v10; // rdi
  unsigned int v11; // ebx
  REGION_CORE **v13; // rdx
  bool v14; // al
  REGION_CORE *v15; // rax
  __m128i v16; // xmm1
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // xmm1_8
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // xmm0_8
  LONG v21; // r8d
  LONG v22; // edx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // r10
  struct _RECTL v26; // [rsp+30h] [rbp-48h] BYREF

  v5 = a3;
  v6 = a4;
  v7 = a2;
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    v9 = *(unsigned int (__fastcall ***)(const struct REGION_CORE *))WPP_MAIN_CB.Dpc.DeferredContext;
    v10 = *this;
    v11 = (*(__int64 (__fastcall **)(const struct REGION_CORE *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext
                                                                                        + 152LL))(
            *this,
            *(_QWORD *)a2,
            *(_QWORD *)a3,
            (unsigned int)a4);
    RgnCaptureLiveMemoryDumpOnZeroSizedScan(v9, v10);
    return v11;
  }
  if ( (unsigned int)(a4 - 1) > 1 )
    goto LABEL_33;
  if ( RGNCOREOBJ::bRectl(a2) && RGNCOREOBJ::bContain(v7, v5) )
  {
    if ( (_DWORD)v6 != 1 )
      v5 = v7;
    v13 = (REGION_CORE **)v5;
LABEL_9:
    v14 = RGNCOREOBJ::bCopy(a5, v13);
    goto LABEL_10;
  }
  if ( RGNCOREOBJ::bRectl(v5) && RGNCOREOBJ::bContain(v5, v7) )
  {
    if ( (_DWORD)v6 != 1 )
      v7 = v5;
    v13 = (REGION_CORE **)v7;
    goto LABEL_9;
  }
  if ( (_DWORD)v6 != 1
    || (unsigned int)REGION_CORE::get_sizeScan(*(REGION_CORE **)v7) != 56
    || (unsigned int)REGION_CORE::get_sizeScan(*(REGION_CORE **)v5) != 56 )
  {
LABEL_33:
    LOBYTE(a4) = byte_140265428[v6];
    v14 = RGNCOREOBJ::bMerge((RGNCOREOBJ *)this, v7, v5, a4);
LABEL_10:
    if ( v14 )
      return RGNCOREOBJ::iComplexity((RGNCOREOBJ *)this);
    RGNCOREOBJ::vSet((RGNCOREOBJ *)this);
    return 0LL;
  }
  v15 = *(REGION_CORE **)v7;
  v26 = 0LL;
  v16 = *(__m128i *)((char *)v15 + 28);
  v17 = *(_QWORD *)((char *)v15 + 28);
  v18 = _mm_srli_si128(v16, 8).m128i_u64[0];
  v19 = *(_QWORD *)(*(_QWORD *)v5 + 28LL);
  v20 = _mm_srli_si128(*(__m128i *)(*(_QWORD *)v5 + 28LL), 8).m128i_u64[0];
  v21 = *(_OWORD *)(*(_QWORD *)v5 + 28LL);
  if ( (int)v17 > (int)v19 )
    v21 = v17;
  v22 = v20;
  v26.left = v21;
  if ( (int)v18 < (int)v20 )
    v22 = v18;
  v23 = HIDWORD(v17);
  v24 = HIDWORD(v19);
  v26.right = v22;
  if ( (int)v23 > (int)v24 )
    LODWORD(v24) = v23;
  v25 = HIDWORD(v20);
  v26.top = v24;
  if ( SHIDWORD(v18) < SHIDWORD(v20) )
    LODWORD(v25) = HIDWORD(v18);
  v26.bottom = v25;
  if ( v21 >= v22 || (int)v24 >= (int)v25 )
    RGNCOREOBJ::vSet((RGNCOREOBJ *)this);
  else
    RGNCOREOBJ::vSet((RGNCOREOBJ *)this, &v26);
  return 2LL;
}
