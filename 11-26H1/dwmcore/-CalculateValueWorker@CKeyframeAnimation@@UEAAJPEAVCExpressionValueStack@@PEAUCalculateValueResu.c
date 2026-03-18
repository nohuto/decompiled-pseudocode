/*
 * XREFs of ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x180046660
 * Callers:
 *     ?CalculateValueWorker@CScrollKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x18028BFC0 (-CalculateValueWorker@CScrollKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateVal.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ?UpdateTime@CKeyframeAnimation@@AEAAXH@Z @ 0x180045390 (-UpdateTime@CKeyframeAnimation@@AEAAXH@Z.c)
 *     ?Repeat@KeyframeSequence@@QEAAXH@Z @ 0x1800457E4 (-Repeat@KeyframeSequence@@QEAAXH@Z.c)
 *     ?GetTimePositionWithinIteration@CKeyframeAnimation@@AEAAMM@Z @ 0x180045860 (-GetTimePositionWithinIteration@CKeyframeAnimation@@AEAAMM@Z.c)
 *     ?ToMilliseconds@TimeDelta@@QEBAHXZ @ 0x180045960 (-ToMilliseconds@TimeDelta@@QEBAHXZ.c)
 *     ?GetGlobalPlaybackRate@CKeyframeAnimation@@AEAAMXZ @ 0x1800459D0 (-GetGlobalPlaybackRate@CKeyframeAnimation@@AEAAMXZ.c)
 *     ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x180045A40 (-Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?SortKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x180045E3C (-SortKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x180045EB0 (-ConfigureTimer@KeyframeSequence@@QEAAXXZ.c)
 *     ?Pause@CKeyframeAnimation@@AEAAXXZ @ 0x180045F40 (-Pause@CKeyframeAnimation@@AEAAXXZ.c)
 *     ?SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z @ 0x180045F80 (-SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x180046058 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?Play@KeyframeSequence@@QEAAXXZ @ 0x180046330 (-Play@KeyframeSequence@@QEAAXXZ.c)
 *     ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x180046480 (-PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z.c)
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x180046570 (-GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ.c)
 *     ?ResetTime@KeyframeSequence@@QEAAXI@Z @ 0x1800465A4 (-ResetTime@KeyframeSequence@@QEAAXI@Z.c)
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x180046630 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x180048510 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ @ 0x18004C220 (-ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ.c)
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CalculateValue@CBaseExpression@@IEAAJPEAVCExpressionValueStack@@_KPEAUCalculateValueResult@@@Z @ 0x180080910 (-CalculateValue@CBaseExpression@@IEAAJPEAVCExpressionValueStack@@_KPEAUCalculateValueResult@@@Z.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180080E30 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAX_NPEAVCExpressionValueStack@@@Z @ 0x18010BE88 (-Reset@CKeyframeAnimation@@AEAAX_NPEAVCExpressionValueStack@@@Z.c)
 *     ?resize@?$vector_facade@VCExpressionValue@@V?$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x18010C430 (-resize@-$vector_facade@VCExpressionValue@@V-$buffer_impl@VCExpressionValue@@$00$00Vliberal_expa.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x18010D710 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?PopStackValue@CExpressionValueStack@@QEAAXXZ @ 0x1801B4884 (-PopStackValue@CExpressionValueStack@@QEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ??R?$_Conditionally_enabled_hash@PEAVCBaseExpression@@$00@std@@SA_KAEBQEAVCBaseExpression@@@Z @ 0x180211A54 (--R-$_Conditionally_enabled_hash@PEAVCBaseExpression@@$00@std@@SA_KAEBQEAVCBaseExpression@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?find@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@V?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@@std@@@std@@@std@@@2@AEBQEAVCChannelContext@@@Z @ 0x180261D90 (-find@-$_Hash@V-$_Umap_traits@PEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@V-$_Uhash_.c)
 *     ?find@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVCBaseExpression@@@std@@@std@@@2@AEBQEAVCBaseExpression@@@Z @ 0x180261DEC (-find@-$_Hash@V-$_Uset_traits@PEAVCBaseExpression@@V-$_Uhash_compare@PEAVCBaseExpression@@U-$has.c)
 *     ?EnsureAvailablePushSpace@CExpressionValueStack@@AEAAXXZ @ 0x1802882B8 (-EnsureAvailablePushSpace@CExpressionValueStack@@AEAAXXZ.c)
 *     fmod_0 @ 0x1802B9714 (fmod_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CKeyframeAnimation::CalculateValueWorker(
        CKeyframeAnimation *this,
        struct CExpressionValueStack *a2,
        struct CalculateValueResult *a3)
{
  __m128i v3; // xmm0
  __m128 v4; // xmm2
  unsigned int v5; // r14d
  float v6; // xmm10_4
  __int64 v10; // rax
  float v11; // xmm1_4
  float v12; // xmm1_4
  int v13; // eax
  int v14; // ecx
  char v15; // cl
  __int64 v16; // rax
  const char *v17; // r9
  LONGLONG v18; // rdi
  __int64 v19; // r13
  LONGLONG v20; // rbx
  char v21; // cl
  int v22; // eax
  unsigned __int8 v23; // dl
  __int64 v24; // rbx
  char v25; // al
  int v26; // xmm6_4
  char v27; // dl
  char v28; // r8
  char v29; // al
  int v30; // ecx
  __int64 v31; // rcx
  __int64 result; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  char *v35; // rdi
  __int64 v36; // rcx
  char **v37; // rbx
  int v38; // eax
  int v39; // eax
  int v40; // xmm6_4
  __int64 v41; // rax
  __int64 v42; // rax
  const char *v43; // r9
  bool v44; // zf
  int *v45; // rdi
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  int **v49; // rbx
  int v50; // eax
  int v51; // eax
  LONGLONG v52; // rbx
  __int64 v53; // rbx
  __int64 v54; // rdi
  float v55; // xmm1_4
  int v56; // edx
  int v57; // ecx
  int v58; // eax
  int v59; // ecx
  __int64 v60; // rax
  __int64 v61; // r8
  __m128 v62; // xmm0
  int v63; // eax
  __m128d v64; // xmm0
  int v65; // ecx
  float v66; // xmm1_4
  bool v67; // al
  int v68; // edx
  int v69; // r10d
  float v70; // xmm1_4
  int v71; // r9d
  char v72; // al
  __int64 v73; // rdx
  int v74; // eax
  int v75; // ecx
  char v76; // al
  int v77; // eax
  float v78; // xmm3_4
  __int64 v79; // r9
  __m128i v80; // xmm0
  int v81; // r8d
  int v82; // ecx
  int v83; // ebx
  int v84; // edx
  __m128 v85; // xmm12
  __m128i v86; // xmm0
  __m128i v87; // xmm3
  int v88; // ecx
  __m128i v89; // xmm11
  float v90; // xmm1_4
  int v91; // ecx
  int v92; // eax
  float v93; // xmm1_4
  char v94; // dl
  __int64 v95; // rdx
  bool v96; // cl
  __int64 v97; // r8
  __m128i v98; // xmm0
  int v99; // eax
  int v100; // ebx
  float v101; // xmm1_4
  __int64 v102; // rcx
  float v103; // xmm2_4
  int v104; // edx
  int v105; // r9d
  int v106; // r8d
  __int64 v107; // rcx
  __m128i v108; // xmm11
  float v109; // xmm11_4
  __int64 v110; // rax
  __int64 v111; // rcx
  __int64 v112; // rax
  int v113; // eax
  int v114; // edx
  int v115; // ecx
  __m128d v116; // xmm0
  int v117; // edx
  __int64 v118; // r8
  int v119; // eax
  int v120; // ebx
  __int64 v121; // rax
  DWORD CurrentProcessId; // eax
  __int64 v123; // rcx
  int v124; // edx
  char v125; // al
  CBaseExpression **v126; // rdi
  CBaseExpression **v127; // rbx
  unsigned __int64 v128; // r14
  int v129; // eax
  char v130; // dl
  __int64 v131; // rdx
  bool v132; // cl
  char v133; // cl
  __int64 v134; // rax
  _QWORD *v135; // rbx
  __int64 v136; // rdi
  __int64 v137; // rax
  _QWORD *v138; // r11
  __int64 v139; // rdx
  __int64 v140; // rcx
  _QWORD *v141; // rax
  __int64 v142; // rcx
  int v143; // eax
  int v144; // ecx
  unsigned int v145; // edx
  __int64 i; // r10
  int v147; // ecx
  LONGLONG v148; // rbx
  float v149; // xmm1_4
  char v150; // cl
  int v151; // eax
  char v152; // cl
  int TimePositionWithinIteration; // edx
  int v154; // eax
  char v155; // al
  int v156; // ebx
  __int64 v157; // rcx
  __int64 v158; // rax
  int v159; // ebx
  unsigned int v160; // eax
  int v161; // edx
  int v162; // r10d
  float v163; // xmm0_4
  int v164; // ecx
  int v165; // edx
  bool v166; // sf
  int v167; // eax
  int v168; // r10d
  __m128 v169; // xmm1
  __int64 v170; // rax
  char v171; // di
  char v172; // di
  int v173; // eax
  LONGLONG v174; // rax
  float v175; // xmm0_4
  float v176; // xmm1_4
  float v177; // xmm0_4
  __int64 v178; // rdx
  int v179; // [rsp+28h] [rbp-E0h]
  unsigned int v180; // [rsp+28h] [rbp-E0h]
  __int64 v181; // [rsp+38h] [rbp-D0h] BYREF
  CKeyframeAnimation *j; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v183; // [rsp+48h] [rbp-C0h] BYREF
  CKeyframeAnimation *v184; // [rsp+50h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v185; // [rsp+58h] [rbp-B0h] BYREF
  __int64 *v186; // [rsp+68h] [rbp-A0h]
  __int64 v187; // [rsp+70h] [rbp-98h]
  __int64 *v188; // [rsp+78h] [rbp-90h]
  __int64 v189; // [rsp+80h] [rbp-88h]
  CKeyframeAnimation **v190; // [rsp+88h] [rbp-80h]
  __int64 v191; // [rsp+90h] [rbp-78h]
  CKeyframeAnimation **p_j; // [rsp+98h] [rbp-70h]
  __int64 v193; // [rsp+A0h] [rbp-68h]
  void *retaddr; // [rsp+160h] [rbp+58h]

  v5 = 0;
  v6 = FLOAT_1_0;
  if ( !*((_DWORD *)g_pComposition + 1613) )
  {
    if ( (*((_BYTE *)this + 217) & 1) == 0 )
    {
      *((_BYTE *)a3 + 1) = 1;
      goto LABEL_30;
    }
    if ( *((int *)this + 107) >= 0 )
    {
      v3 = (__m128i)*((unsigned int *)this + 103);
      if ( *(float *)v3.m128i_i32 != 1.0 )
      {
        *((_BYTE *)this + 464) |= 4u;
        *((_DWORD *)this + 103) = 1065353216;
      }
      *((_BYTE *)this + 464) &= ~2u;
    }
    v134 = *((_QWORD *)this + 3);
    j = this;
    v135 = *(_QWORD **)(v134 + 816);
    std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::find(
      v135 + 62,
      &v183,
      &j);
    v136 = v135[63];
    if ( v183 != v136 )
    {
      v137 = std::_Conditionally_enabled_hash<CBaseExpression *,1>::operator()((unsigned __int8 *)(v183 + 16));
      v139 = v135[65];
      v140 = 2 * (v135[68] & v137);
      v141 = *(_QWORD **)(v139 + 16 * (v135[68] & v137));
      if ( *(_QWORD **)(v139 + 8 * v140 + 8) == v138 )
      {
        if ( v141 == v138 )
          *(_QWORD *)(v139 + 8 * v140) = v136;
        else
          v136 = v138[1];
        *(_QWORD *)(v139 + 8 * v140 + 8) = v136;
      }
      else if ( v141 == v138 )
      {
        *(_QWORD *)(v139 + 8 * v140) = *v138;
      }
      v142 = *v138;
      --v135[64];
      *(_QWORD *)v138[1] = v142;
      *(_QWORD *)(v142 + 8) = v138[1];
      std::_Deallocate<16>(v138, 24LL);
    }
  }
  v10 = *((_QWORD *)this + 35);
  if ( v10 )
  {
    v11 = *(float *)(v10 + 84);
    if ( *((float *)this + 102) != v11 )
    {
      if ( v11 != 0.0 )
      {
        if ( v11 >= 0.0 )
        {
          v176 = fmaxf(v11, 0.0625);
          v177 = FLOAT_16_0;
        }
        else
        {
          v176 = fmaxf(v11, -16.0);
          v177 = FLOAT_N0_0625;
        }
        v11 = fminf(v177, v176);
      }
      v178 = *((_QWORD *)this + 38);
      *((float *)this + 102) = v11;
      *(_BYTE *)(v178 + 132) &= ~0x10u;
      *(_BYTE *)(v178 + 88) = v11 < 0.0;
      *(_BYTE *)(v178 + 132) |= 16 * (v11 < 0.0);
    }
    v3 = (__m128i)*((unsigned int *)this + 103);
    v12 = *(float *)(*((_QWORD *)this + 35) + 80LL);
    if ( *(float *)v3.m128i_i32 != v12 )
    {
      *((_BYTE *)this + 464) |= 4u;
      v3 = (__m128i)LODWORD(FLOAT_1_0);
      *((float *)this + 103) = fminf(1.0, fmaxf(v12, 0.0));
    }
  }
  v13 = *((_DWORD *)this + 111);
  v14 = *((_DWORD *)this + 112);
  if ( v14 != v13 )
  {
    if ( v13 )
    {
      if ( !v14 )
      {
        if ( CBaseExpression::ResolveTargetNoRef(this) )
        {
          v156 = *((_DWORD *)a2 + 24);
          CKeyframeAnimation::Reset(this, 1, a2);
          v157 = *((unsigned int *)a2 + 24);
          if ( (_DWORD)v157 == v156 + 1 )
          {
            if ( (_DWORD)v157 )
              v157 = (unsigned int)(v157 - 1);
            v159 = CBaseExpression::SetOutputValue(this, (const struct CExpressionValue *)(*(_QWORD *)a2 + 72 * v157));
            v5 = v159;
            if ( v159 < 0 )
            {
              v160 = 921;
              goto LABEL_278;
            }
            v173 = *((_DWORD *)a2 + 24);
            if ( v173 )
              *((_DWORD *)a2 + 24) = v173 - 1;
          }
        }
        v158 = *((_QWORD *)this + 42);
        if ( v158 )
        {
          if ( *(_BYTE *)(v158 + 294) )
          {
            v159 = CBaseExpression::NotifyAnimationCompleted(this);
            v5 = v159;
            if ( v159 < 0 )
            {
              v160 = 930;
LABEL_278:
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, v160, 0LL);
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v159, 0x61Fu, 0LL);
              goto LABEL_30;
            }
          }
        }
        goto LABEL_244;
      }
      if ( v14 == 2 )
      {
LABEL_243:
        CKeyframeAnimation::Pause(this);
LABEL_244:
        v13 = *((_DWORD *)this + 112);
        v150 = *((_BYTE *)this + 464) & 0xFE;
        *((_BYTE *)this + 464) = v150;
        if ( v13 == 1 )
          *((_BYTE *)this + 464) = v150 | 1;
        *((_DWORD *)this + 111) = v13;
        goto LABEL_7;
      }
    }
    else if ( v14 )
    {
      CKeyframeAnimation::Play(this, a2);
      v148 = *((_QWORD *)this + 47) - Time::s_luBegin.QuadPart;
      j = (CKeyframeAnimation *)(CComposition::GetFrameTargetTime(*((CComposition **)this + 3))
                               - v148
                               - Time::s_luBegin.QuadPart);
      v149 = (float)(int)TimeDelta::ToMilliseconds((TimeDelta *)&j) * *((float *)this + 102);
      if ( (float)(v149 * CKeyframeAnimation::GetGlobalPlaybackRate(this)) > 0.0 )
        CKeyframeAnimation::UpdateTime(this, 0, *(double *)v4.m128_u64);
      if ( *((_DWORD *)this + 112) != 2 )
        goto LABEL_244;
      goto LABEL_243;
    }
    CKeyframeAnimation::Play(this, a2);
    *((_QWORD *)this + 48) = CComposition::GetFrameTargetTime(*((CComposition **)this + 3));
    goto LABEL_244;
  }
LABEL_7:
  if ( !v13 )
    goto LABEL_11;
  v15 = *((_BYTE *)this + 464);
  if ( (v15 & 6) == 6 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
  if ( (v15 & 2) == 0 )
  {
    if ( (v15 & 4) == 0 )
      goto LABEL_11;
    v78 = *((float *)this + 103);
    if ( v78 >= 0.0 && v78 <= 1.0 )
    {
      if ( (*((_BYTE *)this + 465) & 3) == 1 )
      {
        v79 = *((_QWORD *)this + 38);
        v80 = 0LL;
        v81 = *(_DWORD *)(v79 + 104);
        if ( v81 > 0 )
        {
          v80 = 0LL;
          *(float *)v80.m128i_i32 = (float)*(int *)(*(_QWORD *)(v79 + 96) + 24LL * (unsigned int)(v81 - 1)) / 1000.0;
        }
        *(float *)v80.m128i_i32 = *(float *)v80.m128i_i32 * 1000.0;
        if ( (_mm_cvtsi128_si32(v80) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          v4.m128_f32[0] = (float)(int)*(float *)v80.m128i_i32 - *(float *)v80.m128i_i32;
          v4 = _mm_cmple_ss(v4, (__m128)LODWORD(FLOAT_N0_5));
          v82 = (int)*(float *)v80.m128i_i32 - _mm_cvtsi128_si32((__m128i)v4);
        }
        else
        {
          *(float *)&v181 = *(float *)v80.m128i_i32 + 6291456.25;
          v82 = (int)((_DWORD)v181 << 10) >> 11;
        }
        v83 = *((_DWORD *)this + 107);
        v84 = 0;
        if ( v83 > 0 )
          v82 *= v83 + 1;
        if ( *((_DWORD *)this + 104) == 1 && *((_DWORD *)this + 92) )
          v84 = *((_DWORD *)this + 92);
        v85 = 0LL;
        v85.m128_f32[0] = (float)(v84 + v82) * v78;
        v87 = 0LL;
        v86 = 0LL;
        *(float *)v87.m128i_i32 = fmaxf(0.0, v85.m128_f32[0] - (float)v84);
        if ( v81 > 0 )
        {
          v86 = 0LL;
          *(float *)v86.m128i_i32 = (float)*(int *)(*(_QWORD *)(v79 + 96) + 24LL * (unsigned int)(v81 - 1)) / 1000.0;
        }
        *(float *)v86.m128i_i32 = *(float *)v86.m128i_i32 * 1000.0;
        if ( (_mm_cvtsi128_si32(v86) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          v4.m128_f32[0] = (float)(int)*(float *)v86.m128i_i32 - *(float *)v86.m128i_i32;
          v4 = _mm_cmple_ss(v4, (__m128)LODWORD(FLOAT_N0_5));
          v88 = (int)*(float *)v86.m128i_i32 - _mm_cvtsi128_si32((__m128i)v4);
        }
        else
        {
          *(float *)&v181 = *(float *)v86.m128i_i32 + 6291456.25;
          v88 = (int)((_DWORD)v181 << 10) >> 11;
        }
        v89 = v87;
        *(float *)v89.m128i_i32 = *(float *)v87.m128i_i32 / (float)v88;
        v90 = fmod_0(*(float *)v87.m128i_i32, (double)v88);
        if ( v90 == 0.0 )
        {
          v3 = 0LL;
          *(float *)v3.m128i_i32 = fmaxf(0.0, *(float *)v89.m128i_i32 - 1.0);
        }
        else
        {
          v3 = v89;
        }
        v91 = (int)*(float *)v3.m128i_i32;
        *((_DWORD *)this + 106) = (int)*(float *)v3.m128i_i32;
        if ( v83 > 0 )
          *((_DWORD *)this + 108) = v83 - v91;
        v92 = *((_DWORD *)this + 114);
        v93 = FLOAT_1_0;
        if ( v92 )
        {
          if ( v92 == 2 )
          {
            v94 = *((_BYTE *)this + 465) >> 3;
            if ( (v91 & 1) != 0 )
              v94 = (*((_BYTE *)this + 465) & 8) == 0;
          }
          else
          {
            v94 = 0;
          }
        }
        else
        {
          v94 = *((_BYTE *)this + 465) >> 3;
        }
        if ( v83 >= 0 && v91 == v83 )
        {
          v3 = (__m128i)*((unsigned int *)this + 109);
          if ( *(float *)v3.m128i_i32 != 1.0 )
            v93 = *((float *)this + 109);
        }
        *(_BYTE *)(*((_QWORD *)this + 38) + 132LL) ^= (*(_BYTE *)(*((_QWORD *)this + 38) + 132LL) ^ (8 * v94)) & 8;
        v95 = *((_QWORD *)this + 38);
        v96 = *((float *)this + 102) < 0.0;
        *(_BYTE *)(v95 + 132) &= ~0x10u;
        *(_BYTE *)(v95 + 88) = v96;
        *(_BYTE *)(v95 + 132) |= 16 * v96;
        *(_DWORD *)(*((_QWORD *)this + 38) + 124LL) = 0;
        *(float *)(*((_QWORD *)this + 38) + 128LL) = v93;
        if ( *((_DWORD *)this + 104) == 1 && (v151 = *((_DWORD *)this + 92)) != 0 )
        {
          v3 = (__m128i)COERCE_UNSIGNED_INT((float)v151);
          if ( *(float *)v3.m128i_i32 < v85.m128_f32[0] )
          {
            *((_DWORD *)this + 93) = v151;
            TimePositionWithinIteration = (int)CKeyframeAnimation::GetTimePositionWithinIteration(
                                                 this,
                                                 v85.m128_f32[0] - *(float *)v3.m128i_i32,
                                                 *(double *)v4.m128_u64);
          }
          else
          {
            v152 = 0;
            if ( *((_DWORD *)this + 93) >= v151 )
              v152 = 64;
            *((_BYTE *)this + 464) = *((_BYTE *)this + 464) & 0xBF | v152;
            TimePositionWithinIteration = 0;
            *((_DWORD *)this + 93) = (int)v85.m128_f32[0];
          }
          KeyframeSequence::ResetTime(*((KeyframeSequence **)this + 38), TimePositionWithinIteration);
        }
        else
        {
          if ( v85.m128_f32[0] == 0.0 )
          {
            v101 = 0.0;
          }
          else
          {
            v97 = *((_QWORD *)this + 38);
            v98 = 0LL;
            v99 = *(_DWORD *)(v97 + 104);
            if ( v99 > 0 )
            {
              v98 = 0LL;
              *(float *)v98.m128i_i32 = (float)*(int *)(*(_QWORD *)(v97 + 96) + 24LL * (unsigned int)(v99 - 1)) / 1000.0;
            }
            *(float *)v98.m128i_i32 = *(float *)v98.m128i_i32 * 1000.0;
            if ( (_mm_cvtsi128_si32(v98) & 0x7FFFFFFFu) > 0x497FFFF0 )
            {
              v4.m128_f32[0] = (float)(int)*(float *)v98.m128i_i32 - *(float *)v98.m128i_i32;
              v100 = (int)*(float *)v98.m128i_i32
                   - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v4, (__m128)LODWORD(FLOAT_N0_5)));
            }
            else
            {
              *(float *)&v181 = *(float *)v98.m128i_i32 + 6291456.25;
              v100 = (int)((_DWORD)v181 << 10) >> 11;
            }
            v3 = (__m128i)_mm_cvtps_pd(v85);
            *(double *)v3.m128i_i64 = fmod_0(*(double *)v3.m128i_i64, (double)v100);
            v101 = *(double *)v3.m128i_i64;
            if ( v101 == 0.0 )
              v101 = (float)v100;
          }
          v102 = *((_QWORD *)this + 38);
          v103 = *(float *)(v102 + 128);
          if ( v103 == 1.0 )
          {
            v104 = *(_DWORD *)(v102 + 112);
            v105 = v104;
          }
          else
          {
            v105 = *(_DWORD *)(v102 + 112);
            v3 = (__m128i)COERCE_UNSIGNED_INT((float)v105);
            v104 = (int)(float)(*(float *)v3.m128i_i32 * v103);
          }
          v4 = (__m128)*(unsigned int *)(v102 + 124);
          if ( v4.m128_f32[0] == 0.0 )
          {
            v106 = 0;
          }
          else
          {
            v3 = (__m128i)COERCE_UNSIGNED_INT((float)v105);
            v106 = (int)(float)(*(float *)v3.m128i_i32 * v4.m128_f32[0]);
          }
          *(_BYTE *)(v102 + 88) = (*(_BYTE *)(v102 + 132) & 0x10) != 0;
          *(_DWORD *)(v102 + 72) = v106;
          *(_DWORD *)(v102 + 76) = v104;
          *(_DWORD *)(v102 + 80) = v105;
          *(_BYTE *)(v102 + 132) |= 0x20u;
          *(_DWORD *)(v102 + 84) = (int)v101;
          *((_BYTE *)this + 464) |= 0x40u;
        }
      }
      goto LABEL_11;
    }
    v5 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      (wil::details::in1diag3 *)retaddr,
      (void *)0xA1E,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\keyframeanimation.cpp",
      (const char *)0x80070057LL,
      v179);
    v160 = 1010;
    goto LABEL_277;
  }
  v107 = *((_QWORD *)this + 50);
  v108 = 0LL;
  if ( v107 < 0 )
  {
    v170 = *((_QWORD *)this + 50) & 1LL | (*((_QWORD *)this + 50) >> 1);
    v109 = (float)(int)v170 + (float)(int)v170;
  }
  else
  {
    v109 = (float)(int)v107;
  }
  *(float *)v108.m128i_i32 = v109 / 10000000.0;
  v110 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 3) + 312LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 3) + 312LL));
  v111 = *((_QWORD *)this + 49);
  v112 = *(_QWORD *)(v110 + 24);
  if ( v111 != v112 )
  {
    v174 = (unsigned __int64)(v112 - v111) / g_qpcFrequency.QuadPart;
    v3 = 0LL;
    if ( v174 < 0 )
      v175 = (float)(v174 & 1 | (unsigned int)((unsigned __int64)v174 >> 1))
           + (float)(v174 & 1 | (unsigned int)((unsigned __int64)v174 >> 1));
    else
      v175 = (float)(int)v174;
    *(float *)v108.m128i_i32 = *(float *)v108.m128i_i32 + v175;
  }
  if ( *(float *)v108.m128i_i32 < 0.0 )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x9CAu, 0LL);
    v160 = 1002;
LABEL_277:
    v159 = -2147024809;
    goto LABEL_278;
  }
  if ( (*((_BYTE *)this + 465) & 3) == 1 )
  {
    v113 = *((_DWORD *)this + 92);
    if ( v113 > 0 )
    {
      v3 = v108;
      if ( (float)(*(float *)v108.m128i_i32 * 1000.0) > (float)v113 )
      {
        *(float *)v108.m128i_i32 = *(float *)v108.m128i_i32 - (float)((float)v113 / 1000.0);
      }
      else
      {
        v113 = (int)(float)(*(float *)v108.m128i_i32 * 1000.0);
        v108 = 0LL;
      }
      *((_DWORD *)this + 93) = v113;
    }
    *(float *)v3.m128i_i32 = CKeyframeAnimation::GetAnimationTimeLength(this);
    v114 = *((_DWORD *)this + 107);
    v4 = (__m128)v3;
    v115 = (int)(float)(*(float *)v108.m128i_i32 / *(float *)v3.m128i_i32);
    if ( v114 >= 0 && (*((_DWORD *)this + 108) = v114 - v115, v114 - v115 < 0) )
    {
      *((_DWORD *)this + 108) = 0;
    }
    else
    {
      v114 = (int)(float)(*(float *)v108.m128i_i32 / *(float *)v3.m128i_i32);
      v4 = (__m128)v108;
      v4.m128_f32[0] = *(float *)v108.m128i_i32 - (float)((float)v115 * *(float *)v3.m128i_i32);
    }
    *((_DWORD *)this + 106) = v114;
    CKeyframeAnimation::PrepareSequenceForIteration(this, v114);
    v4.m128_f32[0] = v4.m128_f32[0] * 1000.0;
    if ( (_mm_cvtsi128_si32((__m128i)v4) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v161 = (int)v4.m128_f32[0];
      v3 = (__m128i)LODWORD(FLOAT_N0_5);
      v4.m128_f32[0] = (float)(int)v4.m128_f32[0] - v4.m128_f32[0];
      v4 = _mm_cmple_ss(v4, (__m128)LODWORD(FLOAT_N0_5));
      v117 = v161 - _mm_cvtsi128_si32((__m128i)v4);
    }
    else
    {
      v116 = 0LL;
      v116.m128d_f64[0] = v4.m128_f32[0] + 6291456.25;
      v3 = (__m128i)_mm_cvtpd_ps(v116);
      LODWORD(v181) = v3.m128i_i32[0];
      v117 = v3.m128i_i32[0] << 10 >> 11;
    }
    KeyframeSequence::ResetTime(*((KeyframeSequence **)this + 38), v117);
  }
  *((_QWORD *)this + 48) = CComposition::GetFrameTargetTime(*((CComposition **)this + 3));
LABEL_11:
  v16 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 3) + 312LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 3) + 312LL));
  v5 = 0;
  v18 = *((_QWORD *)this + 48) - Time::s_luBegin.QuadPart;
  v19 = *((unsigned int *)a2 + 24);
  v20 = *(_QWORD *)(v16 + 24) - Time::s_luBegin.QuadPart;
  if ( v20 - v18 < 0 )
    goto LABEL_29;
  if ( (*((_BYTE *)this + 465) & 1) == 0 )
  {
    if ( *((_DWORD *)this + 36) )
    {
      if ( v19 == 0x8E38E38E38E38E39uLL * ((__int64)(*((_QWORD *)a2 + 1) - *(_QWORD *)a2) >> 3) )
        CExpressionValueStack::EnsureAvailablePushSpace(a2);
      v34 = *((unsigned int *)a2 + 24);
      v35 = (char *)this + 80;
      *((_DWORD *)a2 + 24) = v34 + 1;
      v36 = 9 * v34;
      v37 = (char **)(*(_QWORD *)a2 + 8 * v36);
      v38 = *((_DWORD *)this + 36);
      switch ( v38 )
      {
        case 18:
          v40 = *(_DWORD *)v35;
          if ( *((_DWORD *)v37 + 16) == 11 )
            (*(void (__fastcall **)(char *))(*(_QWORD *)*v37 + 16LL))(*v37);
          *(_DWORD *)v37 = v40;
          *((_DWORD *)v37 + 16) = 18;
          goto LABEL_29;
        case 35:
          if ( *((_DWORD *)v37 + 16) == 11 )
            (*(void (__fastcall **)(char *))(*(_QWORD *)*v37 + 16LL))(*v37);
          *((_DWORD *)v37 + 16) = 35;
          *v37 = *(char **)v35;
          goto LABEL_29;
        case 11:
          v35 = *(char **)v35;
          v39 = 0;
          break;
        case 0:
          if ( *((_DWORD *)v37 + 16) == 11 )
          {
            (*(void (__fastcall **)(char *))(*(_QWORD *)*v37 + 16LL))(*v37);
            *((_DWORD *)v37 + 16) = 0;
          }
          else
          {
LABEL_59:
            *((_DWORD *)v37 + 16) = 0;
          }
          goto LABEL_29;
        case 17:
          v172 = *v35;
          if ( *((_DWORD *)v37 + 16) == 11 )
            (*(void (__fastcall **)(char *))(*(_QWORD *)*v37 + 16LL))(*v37);
          *((_DWORD *)v37 + 16) = 17;
          *(_BYTE *)v37 = v172;
          goto LABEL_29;
        default:
          v39 = v38 - 11;
          break;
      }
      switch ( v39 )
      {
        case 0:
          CExpressionValue::DestroyCurrent((CExpressionValue *)(*(_QWORD *)a2 + 8 * v36));
          if ( !v35 )
            goto LABEL_59;
          *((_DWORD *)v37 + 16) = 11;
          *v37 = v35;
          (*(void (__fastcall **)(char *))(*(_QWORD *)v35 + 8LL))(v35);
          break;
        case 31:
          CExpressionValue::DestroyCurrent((CExpressionValue *)(*(_QWORD *)a2 + 8 * v36));
          *((_DWORD *)v37 + 16) = 42;
          *(_DWORD *)v37 = *(_DWORD *)v35;
          goto LABEL_29;
        case 41:
          if ( *((_DWORD *)v37 + 16) == 11 )
            (*(void (__fastcall **)(char *))(*(_QWORD *)*v37 + 16LL))(*v37);
          *((_DWORD *)v37 + 16) = 52;
          *v37 = *(char **)v35;
          *((_DWORD *)v37 + 2) = *((_DWORD *)v35 + 2);
          goto LABEL_29;
        case 58:
          CExpressionValue::DestroyCurrent((CExpressionValue *)(*(_QWORD *)a2 + 8 * v36));
          *((_DWORD *)v37 + 16) = 69;
          goto LABEL_165;
        case 59:
          if ( *((_DWORD *)v37 + 16) == 11 )
            (*(void (__fastcall **)(char *))(*(_QWORD *)*v37 + 16LL))(*v37);
          *((_DWORD *)v37 + 16) = 70;
          goto LABEL_165;
        case 60:
          CExpressionValue::DestroyCurrent((CExpressionValue *)(*(_QWORD *)a2 + 8 * v36));
          *((_DWORD *)v37 + 16) = 71;
LABEL_165:
          *(_OWORD *)v37 = *(_OWORD *)v35;
          break;
        case 93:
          CExpressionValue::DestroyCurrent((CExpressionValue *)(*(_QWORD *)a2 + 8 * v36));
          *((_DWORD *)v37 + 16) = 104;
          *(_OWORD *)v37 = *(_OWORD *)v35;
          v37[2] = (char *)*((_QWORD *)v35 + 2);
          break;
        case 254:
          CExpressionValue::DestroyCurrent((CExpressionValue *)(*(_QWORD *)a2 + 8 * v36));
          *((_DWORD *)v37 + 16) = 265;
          *(_OWORD *)v37 = *(_OWORD *)v35;
          *((_OWORD *)v37 + 1) = *((_OWORD *)v35 + 1);
          *((_OWORD *)v37 + 2) = *((_OWORD *)v35 + 2);
          *((_OWORD *)v37 + 3) = *((_OWORD *)v35 + 3);
          break;
        default:
          wil::details::in1diag3::_FailFast_Unexpected(
            (wil::details::in1diag3 *)retaddr,
            (void *)0x2D6,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expressionvalue.cpp",
            v17);
      }
      goto LABEL_29;
    }
LABEL_35:
    *((_BYTE *)a3 + 1) = 1;
    goto LABEL_30;
  }
  if ( *((_DWORD *)this + 111) != 2 )
  {
    v41 = (*(__int64 (__fastcall **)(CKeyframeAnimation *))(*(_QWORD *)this + 160LL))(this);
    if ( v41 )
      ++*(_DWORD *)(v41 + 40);
  }
  v21 = *((_BYTE *)this + 464);
  v22 = *((_DWORD *)this + 111);
  if ( (v21 & 6) == 0 && *((_DWORD *)this + 36) )
  {
    if ( v22 == 2 )
      goto LABEL_65;
LABEL_82:
    v52 = v20 - v18;
    if ( v52 == 0x7FFFFFFFFFFFFFFFLL )
      LODWORD(v53) = 0x7FFFFFFF;
    else
      v53 = (__int64)((((1000000 * v52 / Time::s_luFreq.QuadPart) >> 63) & 0xFFFFFFFFFFFFFC18uLL)
                    + 500
                    + 1000000 * v52 / Time::s_luFreq.QuadPart)
          / 1000;
    v54 = *(_QWORD *)(*((_QWORD *)this + 3) + 816LL);
    j = (CKeyframeAnimation *)*((_QWORD *)this + 7);
    if ( !j
      || (std::_Hash<std::_Umap_traits<CChannelContext *,CAnimationGlobalConfiguration *,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,CAnimationGlobalConfiguration *>>,0>>::find(
            v54 + 432,
            &v183,
            &j),
          v183 == *(_QWORD *)(v54 + 440)) )
    {
      v55 = FLOAT_1_0;
    }
    else
    {
      v55 = *(float *)(*(_QWORD *)(v183 + 24) + 72LL);
    }
    v3 = (__m128i)COERCE_UNSIGNED_INT((float)(int)v53);
    v56 = (int)(float)((float)(*(float *)v3.m128i_i32 * *((float *)this + 102)) * v55);
    if ( *((char *)this + 464) < 0 )
    {
      if ( *((_DWORD *)this + 114) == 4 )
      {
        v61 = *((_QWORD *)this + 38);
        v62 = 0LL;
        v63 = *(_DWORD *)(v61 + 104);
        if ( v63 > 0 )
        {
          v62 = 0LL;
          v62.m128_f32[0] = (float)*(int *)(*(_QWORD *)(v61 + 96) + 24LL * (unsigned int)(v63 - 1)) / 1000.0;
        }
        v62.m128_f32[0] = (float)(v62.m128_f32[0] * *((float *)this + 110)) * 1000.0;
        if ( (_mm_cvtsi128_si32((__m128i)v62) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          v144 = (int)v62.m128_f32[0];
          v4.m128_f32[0] = (float)(int)v62.m128_f32[0] - v62.m128_f32[0];
          v3 = (__m128i)LODWORD(FLOAT_N0_5);
          v4 = _mm_cmple_ss(v4, (__m128)LODWORD(FLOAT_N0_5));
          v65 = v144 - _mm_cvtsi128_si32((__m128i)v4);
        }
        else
        {
          v64 = _mm_cvtps_pd(v62);
          v64.m128d_f64[0] = v64.m128d_f64[0] + 6291456.25;
          v3 = (__m128i)_mm_cvtpd_ps(v64);
          LODWORD(v181) = v3.m128i_i32[0];
          v65 = v3.m128i_i32[0] << 10 >> 11;
        }
        v66 = *(float *)(v61 + 128);
        v67 = (*(_BYTE *)(v61 + 132) & 0x10) != 0;
        if ( v66 == 1.0 )
        {
          v68 = *(_DWORD *)(v61 + 112);
          v69 = v68;
        }
        else
        {
          v69 = *(_DWORD *)(v61 + 112);
          v3 = (__m128i)COERCE_UNSIGNED_INT((float)v69);
          v68 = (int)(float)(*(float *)v3.m128i_i32 * v66);
        }
        v70 = *(float *)(v61 + 124);
        if ( v70 == 0.0 )
        {
          v71 = 0;
        }
        else
        {
          v3 = (__m128i)COERCE_UNSIGNED_INT((float)v69);
          v71 = (int)(float)(*(float *)v3.m128i_i32 * v70);
        }
        *(_DWORD *)(v61 + 72) = v71;
        *(_DWORD *)(v61 + 76) = v68;
        *(_DWORD *)(v61 + 80) = v69;
        *(_BYTE *)(v61 + 88) = v67;
        *(_BYTE *)(v61 + 132) |= 0x20u;
        *(_DWORD *)(v61 + 84) = v65;
      }
      else
      {
        v57 = *((_DWORD *)this + 92);
        v58 = *((_DWORD *)this + 93);
        if ( v58 < v57 )
        {
          v59 = v57 - v58;
          if ( v56 < v59 )
            v59 = (int)(float)((float)(*(float *)v3.m128i_i32 * *((float *)this + 102)) * v55);
          *((_DWORD *)this + 93) = v59 + v58;
          v56 -= v59;
        }
        v60 = *((_QWORD *)this + 38);
        if ( (*(_BYTE *)(v60 + 132) & 2) != 0 )
          *(_DWORD *)(v60 + 84) += v56;
      }
    }
    goto LABEL_65;
  }
  if ( v22 != 2 )
    goto LABEL_82;
  v23 = *((_BYTE *)this + 465);
  if ( (v23 & 1) == 0 )
  {
    v129 = *((_DWORD *)this + 114);
    *((_DWORD *)this + 106) = 0;
    if ( !v129 || v129 == 2 )
      v130 = v23 >> 3;
    else
      v130 = 0;
    if ( !*((_DWORD *)this + 107) )
    {
      v3 = (__m128i)*((unsigned int *)this + 109);
      if ( *(float *)v3.m128i_i32 != 1.0 )
        v6 = *((float *)this + 109);
    }
    *(_BYTE *)(*((_QWORD *)this + 38) + 132LL) ^= (*(_BYTE *)(*((_QWORD *)this + 38) + 132LL) ^ (8 * v130)) & 8;
    v131 = *((_QWORD *)this + 38);
    v132 = *((float *)this + 102) < 0.0;
    *(_BYTE *)(v131 + 132) &= ~0x10u;
    *(_BYTE *)(v131 + 88) = v132;
    *(_BYTE *)(v131 + 132) |= 16 * v132;
    *(_DWORD *)(*((_QWORD *)this + 38) + 124LL) = 0;
    *(float *)(*((_QWORD *)this + 38) + 128LL) = v6;
    KeyframeSequence::Play(*((KeyframeSequence **)this + 38));
    v133 = *((_BYTE *)this + 464) | 0x80;
    *((_BYTE *)this + 465) = *((_BYTE *)this + 465) & 0xFC | 1;
    *((_DWORD *)this + 108) = *((_DWORD *)this + 107);
    *((_BYTE *)this + 464) = v133;
    if ( (v133 & 0x20) == 0 )
    {
      if ( *((_DWORD *)this + 56) != 4 )
        *((_DWORD *)this + 56) = 4;
      if ( *((_DWORD *)this + 93) >= *((_DWORD *)this + 92) )
      {
        v154 = CKeyframeAnimation::SampleExpressionsAndStartingValue(this, a2);
        if ( v154 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v154, 0x76Eu, 0LL);
      }
    }
    *((_BYTE *)this + 465) |= 4u;
    *((_BYTE *)this + 464) |= 0x20u;
    goto LABEL_65;
  }
  if ( v21 >= 0 && (v23 & 2) == 0 )
  {
    v24 = *((_QWORD *)this + 38);
    *((_BYTE *)this + 464) = v21 | 0x80;
    v25 = *(_BYTE *)(v24 + 132);
    if ( (v25 & 1) == 0 )
    {
      KeyframeSequence::SortKeyFrames((void **)v24);
      KeyframeSequence::ConfigureTimer((KeyframeSequence *)v24);
      v145 = *(_DWORD *)(v24 + 104);
      for ( i = 0LL; (unsigned int)i < v145; i = (unsigned int)(i + 1) )
      {
        v147 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 96) + 24 * i + 8) + 20LL);
        if ( v147 != 1 && (unsigned int)(v147 - 2) >= 2 )
          ModuleFailFastForHRESULT(-2147418113, retaddr);
      }
      *(_BYTE *)(v24 + 132) |= 3u;
      *((_BYTE *)this + 464) |= 0x20u;
      goto LABEL_65;
    }
    *(_BYTE *)(v24 + 132) = v25 | 2;
  }
  *((_BYTE *)this + 464) |= 0x20u;
LABEL_65:
  v42 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 3) + 312LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 3) + 312LL));
  v44 = (*((_BYTE *)this + 465) & 1) == 0;
  *((_QWORD *)this + 48) = *(_QWORD *)(v42 + 24);
  if ( !v44 && *((_DWORD *)this + 93) < *((_DWORD *)this + 92) )
  {
    v125 = *((_BYTE *)this + 464);
    if ( (v125 & 0x40) == 0 && (*((_DWORD *)this + 113) != 1 || (v125 & 0x10) != 0) )
      goto LABEL_25;
  }
  if ( (*((_BYTE *)this + 464) & 8) == 0 )
  {
    v126 = (CBaseExpression **)*((_QWORD *)this + 40);
    v127 = (CBaseExpression **)*((_QWORD *)this + 39);
    v128 = *(_QWORD *)(*((_QWORD *)this + 3) + 880LL);
    for ( j = 0LL; v127 != v126; ++v127 )
      CBaseExpression::CalculateValue(*v127, a2, v128, (struct CalculateValueResult *)&j);
    if ( (*((_BYTE *)this + 465) & 0x10) != 0 )
    {
      v143 = CKeyframeAnimation::SampleStartingValue(this);
      v5 = v143;
      if ( v143 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v143, 0x8D6u, 0LL);
        v180 = 1630;
        goto LABEL_124;
      }
    }
    *((_BYTE *)this + 464) |= 8u;
  }
  if ( *((char *)this + 464) >= 0 )
    goto LABEL_69;
  if ( *((int *)this + 107) < 0 )
  {
    v118 = *((_QWORD *)this + 38);
    v119 = *(_DWORD *)(v118 + 104);
    if ( v119 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000) != 0 )
      {
        v120 = *(_DWORD *)(*(_QWORD *)(v118 + 96) + 24LL * (unsigned int)(v119 - 1));
        v121 = *((_QWORD *)this + 7);
        if ( v121 )
          CurrentProcessId = *(_DWORD *)(v121 + 28);
        else
          CurrentProcessId = GetCurrentProcessId();
        v123 = *((_QWORD *)this + 7);
        if ( v123 )
          v124 = *(_DWORD *)(v123 + 24);
        else
          v124 = 0;
        LODWORD(v183) = CurrentProcessId;
        LODWORD(v181) = v124;
        v186 = &v181;
        LODWORD(j) = v120;
        v188 = &v183;
        v184 = this;
        v190 = &v184;
        p_j = &j;
        v187 = 4LL;
        v189 = 4LL;
        v191 = 8LL;
        v193 = 4LL;
        McGenEventWrite_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &CHANNELANIMATIONS_REPEATFOREVER_KEYFRAMEANIMATION,
          v118,
          5u,
          &v185);
      }
    }
  }
  v72 = *((_BYTE *)this + 465);
  if ( (v72 & 4) != 0 )
    *((_BYTE *)this + 465) = v72 & 0xFB;
  KeyframeSequence::Calculate(*((KeyframeSequence **)this + 38), a2);
  v73 = *((_QWORD *)this + 38);
  if ( (*(_BYTE *)(v73 + 132) & 3) != 1 )
    goto LABEL_69;
  v74 = *(_DWORD *)(v73 + 84);
  v75 = *(_DWORD *)(v73 + 72);
  if ( *(_BYTE *)(v73 + 88) )
  {
    if ( v74 > v75 && v74 <= *(_DWORD *)(v73 + 76) )
      goto LABEL_69;
  }
  else if ( v74 >= v75 && v74 < *(_DWORD *)(v73 + 76) )
  {
    goto LABEL_69;
  }
  if ( *((_DWORD *)this + 114) == 4 )
    goto LABEL_69;
  v43 = (const char *)*((unsigned __int8 *)this + 465);
  LOBYTE(v43) = (unsigned __int8)v43 | 4;
  v44 = *((_DWORD *)this + 108) == 0;
  *((_BYTE *)this + 465) = (_BYTE)v43;
  if ( v44 )
    goto LABEL_121;
  *(float *)v3.m128i_i32 = CKeyframeAnimation::GetAnimationTimeLength(this) * 1000.0;
  if ( (_mm_cvtsi128_si32(v3) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v4.m128_f32[0] = (float)(int)*(float *)v3.m128i_i32 - *(float *)v3.m128i_i32;
    v169.m128_f32[0] = -0.5;
    v164 = (int)*(float *)v3.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v4, v169));
  }
  else
  {
    v163 = *(float *)v3.m128i_i32 + 6291456.25;
    *(float *)&j = v163;
    v164 = (int)(LODWORD(v163) << 10) >> 11;
  }
  v165 = 0;
  do
  {
    ++v165;
    if ( v162 < 0 )
    {
      v162 += v164;
    }
    else if ( v162 <= v164 )
    {
      v166 = v162 < 0;
      if ( v162 )
        continue;
      if ( *((float *)this + 102) >= 0.0 )
        break;
      v162 = v164;
    }
    else
    {
      v162 -= v164;
    }
    v166 = v162 < 0;
  }
  while ( v166 || v162 > v164 );
  v167 = *((_DWORD *)this + 108);
  if ( v165 > v167 )
  {
    if ( v167 <= 0 )
      goto LABEL_294;
    *((_DWORD *)this + 108) = 0;
    goto LABEL_121;
  }
  *((_DWORD *)this + 108) = v167 - v165;
LABEL_294:
  if ( v165 )
  {
    *((_DWORD *)this + 106) += v165;
    CKeyframeAnimation::PrepareSequenceForIteration(this, *((_DWORD *)this + 106));
    KeyframeSequence::Repeat(*((KeyframeSequence **)this + 38), v168);
    goto LABEL_69;
  }
LABEL_121:
  LOBYTE(v43) = (unsigned __int8)v43 | 2;
  v76 = *((_BYTE *)this + 464) & 0x7F;
  *((_BYTE *)this + 465) = (_BYTE)v43;
  *((_BYTE *)this + 464) = v76;
  if ( (v76 & 0x20) == 0 )
  {
    v77 = CBaseExpression::NotifyAnimationCompleted(this);
    v5 = v77;
    if ( v77 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v77, 0x759u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xC52u, 0LL);
      v180 = 1633;
      goto LABEL_124;
    }
  }
LABEL_69:
  v45 = (int *)*((_QWORD *)this + 38);
  v5 = 0;
  if ( !v45[16] )
    goto LABEL_35;
  v46 = *((unsigned int *)a2 + 24);
  if ( v46 == 0x8E38E38E38E38E39uLL * ((__int64)(*((_QWORD *)a2 + 1) - *(_QWORD *)a2) >> 3) )
  {
    if ( (unsigned int)~(_DWORD)v46 < 5 )
      wil::details::in1diag3::_FailFast_Unexpected(
        (wil::details::in1diag3 *)retaddr,
        (void *)0x44,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expressionvaluestack.cpp",
        v43);
    detail::vector_facade<CExpressionValue,detail::buffer_impl<CExpressionValue,1,1,detail::liberal_expansion_policy>>::resize(
      a2,
      (unsigned int)(v46 + 5));
  }
  v47 = *((unsigned int *)a2 + 24);
  *((_DWORD *)a2 + 24) = v47 + 1;
  v48 = 9 * v47;
  v49 = (int **)(*(_QWORD *)a2 + 8 * v48);
  v50 = v45[16];
  switch ( v50 )
  {
    case 18:
      v26 = *v45;
      if ( *((_DWORD *)v49 + 16) == 11 )
        (*(void (__fastcall **)(int *))(*(_QWORD *)*v49 + 16LL))(*v49);
      *(_DWORD *)v49 = v26;
      *((_DWORD *)v49 + 16) = 18;
      break;
    case 35:
      if ( *((_DWORD *)v49 + 16) == 11 )
        (*(void (__fastcall **)(int *))(*(_QWORD *)*v49 + 16LL))(*v49);
      *((_DWORD *)v49 + 16) = 35;
      *v49 = *(int **)v45;
      break;
    case 11:
      v45 = *(int **)v45;
      v51 = 0;
LABEL_75:
      switch ( v51 )
      {
        case 0:
          if ( *((_DWORD *)v49 + 16) == 11 )
            (*(void (__fastcall **)(int *))(*(_QWORD *)*v49 + 16LL))(*v49);
          if ( !v45 )
            goto LABEL_97;
          *((_DWORD *)v49 + 16) = 11;
          *v49 = v45;
          (*(void (__fastcall **)(int *))(*(_QWORD *)v45 + 8LL))(v45);
          break;
        case 31:
          CExpressionValue::DestroyCurrent((CExpressionValue *)(*(_QWORD *)a2 + 8 * v48));
          *((_DWORD *)v49 + 16) = 42;
          *(_DWORD *)v49 = *v45;
          goto LABEL_25;
        case 41:
          if ( *((_DWORD *)v49 + 16) == 11 )
            (*(void (__fastcall **)(int *))(*(_QWORD *)*v49 + 16LL))(*v49);
          *((_DWORD *)v49 + 16) = 52;
          *v49 = *(int **)v45;
          *((_DWORD *)v49 + 2) = v45[2];
          goto LABEL_25;
        case 58:
          CExpressionValue::DestroyCurrent((CExpressionValue *)(*(_QWORD *)a2 + 8 * v48));
          *((_DWORD *)v49 + 16) = 69;
          *(_OWORD *)v49 = *(_OWORD *)v45;
          goto LABEL_25;
        case 59:
          if ( *((_DWORD *)v49 + 16) == 11 )
            (*(void (__fastcall **)(int *))(*(_QWORD *)*v49 + 16LL))(*v49);
          *((_DWORD *)v49 + 16) = 70;
          *(_OWORD *)v49 = *(_OWORD *)v45;
          goto LABEL_25;
        case 60:
          CExpressionValue::DestroyCurrent((CExpressionValue *)(*(_QWORD *)a2 + 8 * v48));
          *((_DWORD *)v49 + 16) = 71;
          *(_OWORD *)v49 = *(_OWORD *)v45;
          goto LABEL_25;
        case 93:
          if ( *((_DWORD *)v49 + 16) == 11 )
            (*(void (__fastcall **)(int *))(*(_QWORD *)*v49 + 16LL))(*v49);
          *((_DWORD *)v49 + 16) = 104;
          *(_OWORD *)v49 = *(_OWORD *)v45;
          v49[2] = (int *)*((_QWORD *)v45 + 2);
          goto LABEL_25;
        case 254:
          CExpressionValue::DestroyCurrent((CExpressionValue *)(*(_QWORD *)a2 + 8 * v48));
          *((_DWORD *)v49 + 16) = 265;
          *(_OWORD *)v49 = *(_OWORD *)v45;
          *((_OWORD *)v49 + 1) = *((_OWORD *)v45 + 1);
          *((_OWORD *)v49 + 2) = *((_OWORD *)v45 + 2);
          *((_OWORD *)v49 + 3) = *((_OWORD *)v45 + 3);
          goto LABEL_25;
        default:
          wil::details::in1diag3::_FailFast_Unexpected(
            (wil::details::in1diag3 *)retaddr,
            (void *)0x2D6,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expressionvalue.cpp",
            v43);
      }
      break;
    default:
      if ( v50 )
      {
        if ( v50 != 17 )
        {
          v51 = v50 - 11;
          goto LABEL_75;
        }
        v171 = *(_BYTE *)v45;
        if ( *((_DWORD *)v49 + 16) == 11 )
          (*(void (__fastcall **)(int *))(*(_QWORD *)*v49 + 16LL))(*v49);
        *((_DWORD *)v49 + 16) = 17;
        *(_BYTE *)v49 = v171;
      }
      else if ( *((_DWORD *)v49 + 16) == 11 )
      {
        (*(void (__fastcall **)(int *))(*(_QWORD *)*v49 + 16LL))(*v49);
        *((_DWORD *)v49 + 16) = 0;
      }
      else
      {
LABEL_97:
        *((_DWORD *)v49 + 16) = 0;
      }
      break;
  }
LABEL_25:
  v27 = *((_BYTE *)this + 464);
  v28 = v27;
  if ( (((unsigned __int8)v27 >> 5) & *((_BYTE *)this + 465) & 1) != 0 && v27 < 0 )
  {
    v33 = *((_QWORD *)this + 38);
    *((_BYTE *)this + 464) = v27 & 0x7F;
    *(_BYTE *)(v33 + 132) &= ~2u;
    v28 = *((_BYTE *)this + 464);
  }
  v29 = *((_BYTE *)this + 465);
  if ( (v29 & 2) != 0 )
  {
    CExpressionValueStack::PopStackValue(a2);
    CKeyframeAnimation::Reset(this, 1, a2);
    v155 = *((_BYTE *)this + 464) & 0xFE;
    *((_BYTE *)this + 464) = v155;
    if ( (v155 & 0x20) != 0 )
    {
      CKeyframeAnimation::Play(this, a2);
      CKeyframeAnimation::Pause(this);
    }
    else
    {
      *(_QWORD *)((char *)this + 444) = 0LL;
    }
LABEL_29:
    v30 = *((_DWORD *)a2 + 24);
    if ( v30 == (_DWORD)v19 + 1 )
      goto LABEL_30;
    if ( v30 == (_DWORD)v19 )
    {
      *((_BYTE *)a3 + 1) = 1;
      goto LABEL_30;
    }
    v5 = -2147418113;
    v180 = 1734;
LABEL_124:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, v180, 0LL);
    goto LABEL_30;
  }
  if ( (v29 & 1) == 0 || *((_DWORD *)this + 93) >= *((_DWORD *)this + 92) )
    goto LABEL_29;
  if ( *((_DWORD *)this + 113) == 1 && (v28 & 0x10) == 0 )
  {
    *((_BYTE *)this + 464) = v28 | 0x10;
    goto LABEL_29;
  }
  if ( (v28 & 0x40) != 0 )
    goto LABEL_29;
  *((_BYTE *)a3 + 1) = 1;
LABEL_30:
  if ( !*((_BYTE *)a3 + 1) )
  {
    v31 = *((_QWORD *)this + 7);
    if ( v31 )
    {
      ++*(_DWORD *)(v31 + 124);
      *(_BYTE *)(*((_QWORD *)this + 3) + 6457LL) = 1;
    }
  }
  result = v5;
  *(_BYTE *)a3 = *((_BYTE *)this + 464) & 1;
  *((_BYTE *)this + 464) &= 0x99u;
  return result;
}
