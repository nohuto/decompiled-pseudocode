/*
 * XREFs of ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x140012210
 * Callers:
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x140011C5C (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ??$GrepCombineUniqueRgns@$00VRGNOBJAPI@@@@YAJAEAVRGNOBJAPI@@00H@Z @ 0x140022C50 (--$GrepCombineUniqueRgns@$00VRGNOBJAPI@@@@YAJAEAVRGNOBJAPI@@00H@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x140022E10 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x140037910 (-bCompute@DC@@QEAAHXZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x14003E960 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z @ 0x1401A5920 (-iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z.c)
 *     GreIntersectVisRect @ 0x1401BABF0 (GreIntersectVisRect.c)
 * Callees:
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x140011E40 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     _RGNOBJ::iCombine_::_2_::_lambda_1_::operator() @ 0x140012020 (_RGNOBJ--iCombine_--_2_--_lambda_1_--operator().c)
 *     ?bRectl@RGNOBJ@@QEBAHXZ @ 0x140012140 (-bRectl@RGNOBJ@@QEBAHXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x140012FA0 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x140015468 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vSet@RGNOBJ@@QEAAXXZ @ 0x1400156C0 (-vSet@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x14001F730 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x14001FB50 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x140021850 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x140021D3C (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ?bIsResizeRequiredBeforeCopyingRegion@RGNCOREOBJ@@QEBA_NAEBV1@PEAK@Z @ 0x140021DD0 (-bIsResizeRequiredBeforeCopyingRegion@RGNCOREOBJ@@QEBA_NAEBV1@PEAK@Z.c)
 *     RGNCOREOBJ::bMerge__RGNOBJ::bMerge_::_2_::_lambda_1___ @ 0x140022050 (RGNCOREOBJ--bMerge__RGNOBJ--bMerge_--_2_--_lambda_1___.c)
 *     ?vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z @ 0x1401BCBC0 (-vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNOBJ::iCombine(RGNOBJ *this, struct RGNOBJ *a2, struct RGNOBJ *a3, int a4)
{
  __int64 v4; // r13
  __int64 SessionState; // rax
  __int64 v9; // r9
  __int64 *DeferredContext; // rbx
  unsigned int v11; // esi
  __int64 v12; // rcx
  const struct BaseRustExports *v13; // rbx
  const struct REGION_CORE *v14; // rdi
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // r8
  int v29; // ecx
  __int64 v30; // rax
  _BYTE *v31; // r9
  __int64 v32; // rcx
  int v33; // r15d
  __int64 v34; // rdx
  __int64 v35; // rbx
  const struct REGION_CORE *v36; // rdi
  RGNOBJ *v37; // rcx
  __int64 v38; // rax
  __m128i v39; // xmm1
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // xmm1_8
  unsigned __int64 v42; // r9
  unsigned __int64 v43; // xmm0_8
  LONG v44; // r8d
  LONG v45; // edx
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // r9
  unsigned __int64 v48; // r10
  bool v49; // al
  int v50; // eax
  __int64 v51; // rax
  unsigned int v52[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v53; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v54[2]; // [rsp+40h] [rbp-30h] BYREF
  struct _RECTL v55; // [rsp+50h] [rbp-20h] BYREF

  v4 = a4;
  SessionState = W32GetSessionState(this);
  v9 = *(_QWORD *)this;
  if ( *(_QWORD *)this != *(_QWORD *)(*(_QWORD *)(SessionState + 88) + 4264LL) )
  {
    DeferredContext = (__int64 *)WPP_MAIN_CB.Dpc.DeferredContext;
    v11 = 0;
    *(_QWORD *)&v55.left = this;
    if ( WPP_MAIN_CB.Dpc.DeferredContext )
    {
      v12 = *(_QWORD *)a3;
      v13 = *(const struct BaseRustExports **)WPP_MAIN_CB.Dpc.DeferredContext;
      v14 = (const struct REGION_CORE *)((v9 + 24) & -(__int64)(v9 != 0));
      v11 = (*(__int64 (__fastcall **)(const struct REGION_CORE *, __int64, __int64, _QWORD))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext
                                                                                            + 152LL))(
              v14,
              (*(_QWORD *)a2 + 24LL) & -(__int64)(*(_QWORD *)a2 != 0LL),
              (v12 + 24) & -(__int64)(v12 != 0),
              (unsigned int)v4);
      RgnCaptureLiveMemoryDumpOnZeroSizedScan(v13, v14);
      return v11;
    }
    if ( (unsigned int)(v4 - 1) > 1 )
    {
LABEL_38:
      v30 = *(_QWORD *)this;
      v31 = byte_140265428;
      LOBYTE(v31) = byte_140265428[v4];
      v32 = *(_QWORD *)this + 24LL;
      if ( DeferredContext )
      {
        v34 = *(_QWORD *)a3;
        v35 = *DeferredContext;
        v36 = (const struct REGION_CORE *)(v32 & -(__int64)(v30 != 0));
        v33 = (*(__int64 (__fastcall **)(const struct REGION_CORE *, __int64, __int64, _BYTE *))(v35 + 144))(
                v36,
                (*(_QWORD *)a2 + 24LL) & -(__int64)(*(_QWORD *)a2 != 0LL),
                (v34 + 24) & -(__int64)(v34 != 0),
                v31);
        RgnCaptureLiveMemoryDumpOnZeroSizedScan((const struct BaseRustExports *)v35, v36);
      }
      else
      {
        v54[1] = this;
        v53 = v32 & -(__int64)(v30 != 0);
        *(_QWORD *)v52 = (*(_QWORD *)a2 + 24LL) & -(__int64)(*(_QWORD *)a2 != 0LL);
        *(_QWORD *)&v55.left = (*(_QWORD *)a3 + 24LL) & -(__int64)(*(_QWORD *)a3 != 0LL);
        v54[0] = &v53;
        v33 = (unsigned __int8)RGNCOREOBJ::bMerge__RGNOBJ::bMerge_::_2_::_lambda_1___(
                                 (unsigned int)&v53,
                                 (unsigned int)v52,
                                 (unsigned int)&v55,
                                 (_DWORD)v31,
                                 (__int64)v54);
      }
      if ( v33 )
        goto LABEL_43;
      goto LABEL_72;
    }
    v16 = *(_QWORD *)a2;
    v17 = *(_QWORD *)a2 + 40LL;
    if ( !*(_QWORD *)a2 )
      v17 = 16LL;
    if ( *(_DWORD *)v17 != 56 )
      goto LABEL_29;
    v18 = *(_QWORD *)a3;
    v19 = v16 + 52;
    if ( !v16 )
      v19 = 28LL;
    v20 = v18 + 52;
    if ( !v18 )
      v20 = 28LL;
    if ( *(_DWORD *)v19 > *(_DWORD *)v20 )
      goto LABEL_29;
    v21 = v16 + 60;
    v22 = v18 + 60;
    if ( !v16 )
      v21 = 36LL;
    if ( !v18 )
      v22 = 36LL;
    if ( *(_DWORD *)v21 < *(_DWORD *)v22 )
      goto LABEL_29;
    v23 = v16 + 56;
    v24 = v18 + 56;
    if ( !v16 )
      v23 = 32LL;
    if ( !v18 )
      v24 = 32LL;
    if ( *(_DWORD *)v23 > *(_DWORD *)v24 )
      goto LABEL_29;
    v25 = v16 + 64;
    v26 = v18 + 64;
    if ( !v16 )
      v25 = 40LL;
    if ( !v18 )
      v26 = 40LL;
    if ( *(_DWORD *)v25 < *(_DWORD *)v26 )
    {
LABEL_29:
      v27 = RGNOBJ::bRectl(a3);
      DeferredContext = (__int64 *)WPP_MAIN_CB.Dpc.DeferredContext;
      if ( v27 )
      {
        v28 = *(_QWORD *)a2 + 24LL;
        if ( WPP_MAIN_CB.Dpc.DeferredContext )
        {
          v50 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 16LL))(
                  (*(_QWORD *)a3 + 24LL) & -(__int64)(*(_QWORD *)a3 != 0LL),
                  v28 & -(__int64)(*(_QWORD *)a2 != 0LL));
          DeferredContext = (__int64 *)WPP_MAIN_CB.Dpc.DeferredContext;
          v29 = v50 != 0;
        }
        else if ( *(_DWORD *)(((*(_QWORD *)a3 + 24LL) & -(__int64)(*(_QWORD *)a3 != 0LL)) + 0x1C) > *(_DWORD *)((v28 & -(__int64)(*(_QWORD *)a2 != 0LL)) + 0x1C)
               || *(_DWORD *)(((*(_QWORD *)a3 + 24LL) & -(__int64)(*(_QWORD *)a3 != 0LL)) + 0x24) < *(_DWORD *)((v28 & -(__int64)(*(_QWORD *)a2 != 0LL)) + 0x24)
               || *(_DWORD *)(((*(_QWORD *)a3 + 24LL) & -(__int64)(*(_QWORD *)a3 != 0LL)) + 0x20) > *(_DWORD *)((v28 & -(__int64)(*(_QWORD *)a2 != 0LL)) + 0x20)
               || (v29 = LODWORD(WPP_MAIN_CB.Dpc.DeferredContext) + 1,
                   *(_DWORD *)(((*(_QWORD *)a3 + 24LL) & -(__int64)(*(_QWORD *)a3 != 0LL)) + 0x28) < *(_DWORD *)((v28 & -(__int64)(*(_QWORD *)a2 != 0LL)) + 0x28)) )
        {
          v29 = 0;
        }
        if ( v29 )
        {
          if ( (_DWORD)v4 != 1 )
            a2 = a3;
          v49 = RGNOBJ::iCombine_::_2_::_lambda_1_::operator()((RGNOBJ **)&v55, (__int64 *)a2);
          v37 = this;
          if ( v49 )
            return (unsigned int)RGNOBJ::iComplexity(v37);
LABEL_61:
          RGNOBJ::vSet(v37);
          return v11;
        }
      }
      if ( (_DWORD)v4 == 1 )
      {
        if ( REGION_CORE::get_sizeScan((REGION_CORE *)(*(_QWORD *)a2 + 24LL)) == 56
          && REGION_CORE::get_sizeScan((REGION_CORE *)(*(_QWORD *)a3 + 24LL)) == 56 )
        {
          v38 = *(_QWORD *)a2;
          v55 = 0LL;
          v39 = *(__m128i *)(v38 + 52);
          v40 = *(_QWORD *)(v38 + 52);
          v41 = _mm_srli_si128(v39, 8).m128i_u64[0];
          v42 = *(_QWORD *)(*(_QWORD *)a3 + 52LL);
          v43 = _mm_srli_si128(*(__m128i *)(*(_QWORD *)a3 + 52LL), 8).m128i_u64[0];
          v44 = *(_OWORD *)(*(_QWORD *)a3 + 52LL);
          if ( (int)v40 > (int)v42 )
            v44 = v40;
          v45 = v43;
          v55.left = v44;
          if ( (int)v41 < (int)v43 )
            v45 = v41;
          v46 = HIDWORD(v40);
          v47 = HIDWORD(v42);
          v55.right = v45;
          if ( (int)v46 > (int)v47 )
            LODWORD(v47) = v46;
          v48 = HIDWORD(v43);
          v55.top = v47;
          if ( SHIDWORD(v41) < SHIDWORD(v43) )
            LODWORD(v48) = HIDWORD(v41);
          v55.bottom = v48;
          if ( v44 >= v45 || (int)v47 >= (int)v48 )
            RGNOBJ::vSet(this);
          else
            RGNOBJ::vSet(this, &v55);
          return 2;
        }
        DeferredContext = (__int64 *)WPP_MAIN_CB.Dpc.DeferredContext;
      }
      goto LABEL_38;
    }
    if ( (_DWORD)v4 != 1 )
      a3 = a2;
    v51 = *(_QWORD *)a3;
    v52[0] = 0;
    v53 = (v51 + 24) & -(__int64)(v51 != 0);
    *(_QWORD *)&v55.left = (v9 + 24) & -(__int64)(v9 != 0);
    if ( RGNCOREOBJ::bIsResizeRequiredBeforeCopyingRegion((RGNCOREOBJ *)&v55, (const struct RGNCOREOBJ *)&v53, v52) )
    {
      if ( **(_QWORD **)this )
      {
LABEL_72:
        v37 = this;
        goto LABEL_61;
      }
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v52, v52[0]);
      if ( !*(_QWORD *)v52 )
      {
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v52);
        goto LABEL_72;
      }
      RGNOBJ::vSwap(this, (struct RGNOBJ *)v52);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v52);
    }
    *(_QWORD *)&v55.left = (*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL);
    RGNCOREOBJ::vCopy((RGNCOREOBJ *)&v55, (const struct RGNCOREOBJ *)&v53);
LABEL_43:
    v37 = this;
    return (unsigned int)RGNOBJ::iComplexity(v37);
  }
  return RGNOBJ::iComplexity(this);
}
