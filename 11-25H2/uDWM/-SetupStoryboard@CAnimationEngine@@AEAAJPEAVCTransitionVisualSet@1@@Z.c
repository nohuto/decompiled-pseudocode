/*
 * XREFs of ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x180047834
 * Callers:
 *     ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x1800476AC (-StartAnimations@CAnimationEngine@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x180017004 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NNPEAN2IPEAUTA_TIMINGFUNCTION@@W4TransformMode@@22I@Z @ 0x180046334 (-AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NN.c)
 *     ?GetWindowAnimationSettings@CDesktopManager@@SAAEBUWindowAnimationSettings@1@XZ @ 0x180048CA8 (-GetWindowAnimationSettings@CDesktopManager@@SAAEBUWindowAnimationSettings@1@XZ.c)
 *     ?SetStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXPEAUIUIAnimationStoryboard2@@@Z @ 0x180048CC0 (-SetStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXPEAUIUIAnimationStoryboard2@@@Z.c)
 *     ?_CalculateStaggerDelay@CAnimationEngine@@AEAAXPEAXHHIPEAN@Z @ 0x180048D18 (-_CalculateStaggerDelay@CAnimationEngine@@AEAAXPEAXHHIPEAN@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x18004B474 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180065BF8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     _tlgKeywordOn @ 0x18007C780 (_tlgKeywordOn.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800946B8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAnimationEngine::SetupStoryboard(
        CAnimationEngine *this,
        struct CAnimationEngine::CTransitionVisualSet *a2)
{
  struct CAnimationEngine::CTransitionVisualSet *v3; // r14
  __int64 v4; // rcx
  struct TA_TIMINGFUNCTION *v5; // r15
  float *v6; // rdi
  int v7; // eax
  unsigned int ThemeAnimationTransform; // ebx
  int v9; // eax
  const struct std::nothrow_t *v10; // rdx
  unsigned int v11; // r12d
  float v12; // xmm6_4
  __int64 v13; // rax
  __int64 *v14; // rsi
  char v15; // r13
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 v23; // rax
  float v24; // xmm9_4
  __int64 v25; // rcx
  __int64 v26; // rdx
  void *Theme; // rax
  unsigned int v28; // esi
  CAnimationEngine *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rax
  double v32; // xmm12_8
  __int64 v33; // rax
  unsigned int v34; // edx
  const struct std::nothrow_t *v35; // rdx
  unsigned __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rdx
  double v41; // xmm6_8
  double v42; // xmm7_8
  __int64 v43; // rax
  const struct std::nothrow_t *v44; // rdx
  unsigned __int64 v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rax
  int ThemeTimingFunction; // eax
  int v49; // r12d
  int v50; // esi
  int v51; // eax
  int v52; // r13d
  int v53; // r11d
  int v54; // r14d
  int v55; // r15d
  int v56; // esi
  int v57; // r10d
  int v58; // r8d
  int v59; // edx
  int v60; // r9d
  int v61; // ecx
  int v62; // ecx
  int v63; // ecx
  int v64; // ecx
  int v65; // ecx
  int v66; // ecx
  float v67; // xmm0_4
  float v68; // xmm1_4
  unsigned int v69; // r8d
  struct IUIAnimationStoryboard2 *v70; // rdx
  int v71; // eax
  int v72; // ecx
  int v73; // eax
  int v74; // eax
  int v75; // edx
  int v76; // eax
  int v77; // eax
  float v79; // xmm0_4
  float v80; // xmm1_4
  float *v81; // rcx
  int v82; // eax
  float v83; // xmm1_4
  float v84; // xmm1_4
  int v85; // ecx
  int v86; // r8d
  int v87; // r9d
  int v88; // eax
  int v89; // eax
  int v90; // eax
  __int64 v91; // rdx
  BOOL v92; // r13d
  double v93; // xmm0_8
  double v94; // xmm1_8
  double v95; // xmm2_8
  double v96; // xmm3_8
  double v97; // xmm4_8
  double v98; // xmm5_8
  int v99; // xmm0_4
  int v100; // xmm1_4
  _DWORD *v101; // rcx
  int v102; // eax
  double v103; // xmm0_8
  int v104; // xmm0_4
  float v105; // xmm1_4
  float v106; // xmm2_4
  float *v107; // rcx
  int v108; // eax
  unsigned int v109; // r8d
  __m128i v110; // xmm0
  struct IUIAnimationStoryboard2 *v111; // rdx
  int v112; // eax
  unsigned int v113; // eax
  int v114; // ecx
  double v115; // xmm0_8
  double v116; // xmm0_8
  float v117; // xmm0_4
  unsigned int v118; // r8d
  struct IUIAnimationStoryboard2 *v119; // rdx
  int v120; // eax
  double v121; // xmm0_8
  double v122; // xmm1_8
  double v123; // xmm2_8
  double v124; // xmm3_8
  int v125; // xmm0_4
  _DWORD *v126; // rcx
  int v127; // eax
  bool v128; // cl
  __int64 v129; // rdx
  double v130; // xmm0_8
  double v131; // xmm0_8
  CAnimationEngine *v132; // r13
  int v133; // eax
  __int64 j; // rax
  __int64 k; // rax
  int v136; // eax
  unsigned int v137; // [rsp+28h] [rbp-E0h]
  struct TA_TIMINGFUNCTION *v138; // [rsp+58h] [rbp-B0h]
  struct TA_TIMINGFUNCTION *v139; // [rsp+58h] [rbp-B0h]
  struct TA_TIMINGFUNCTION *v140; // [rsp+58h] [rbp-B0h]
  struct TA_TIMINGFUNCTION *v141; // [rsp+58h] [rbp-B0h]
  char v142; // [rsp+88h] [rbp-80h]
  char v143; // [rsp+89h] [rbp-7Fh]
  char v144; // [rsp+8Ah] [rbp-7Eh]
  unsigned int v145; // [rsp+8Ch] [rbp-7Ch]
  unsigned int i; // [rsp+90h] [rbp-78h]
  unsigned int v147; // [rsp+94h] [rbp-74h] BYREF
  unsigned int v148; // [rsp+98h] [rbp-70h] BYREF
  double v149; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int v150; // [rsp+A8h] [rbp-60h] BYREF
  struct TA_TIMINGFUNCTION *v151; // [rsp+B0h] [rbp-58h]
  float v152; // [rsp+B8h] [rbp-50h] BYREF
  float v153; // [rsp+BCh] [rbp-4Ch] BYREF
  struct CAnimationEngine::CTransitionVisualSet *v154; // [rsp+C0h] [rbp-48h]
  CAnimationEngine *v155; // [rsp+C8h] [rbp-40h]
  float v156; // [rsp+D0h] [rbp-38h] BYREF
  float v157; // [rsp+D4h] [rbp-34h] BYREF
  BOOL v158; // [rsp+D8h] [rbp-30h]
  __int128 v159; // [rsp+E0h] [rbp-28h] BYREF
  __m128i si128; // [rsp+F0h] [rbp-18h] BYREF
  double v161; // [rsp+100h] [rbp-8h] BYREF
  unsigned int v162; // [rsp+108h] [rbp+0h] BYREF
  unsigned int v163; // [rsp+10Ch] [rbp+4h] BYREF
  struct IUIAnimationStoryboard2 *v164; // [rsp+110h] [rbp+8h] BYREF
  float v165; // [rsp+118h] [rbp+10h] BYREF
  unsigned int v166; // [rsp+11Ch] [rbp+14h] BYREF
  double v167; // [rsp+120h] [rbp+18h] BYREF
  __int64 v168; // [rsp+128h] [rbp+20h]
  double v169; // [rsp+130h] [rbp+28h] BYREF
  __int128 v170; // [rsp+138h] [rbp+30h] BYREF
  __int128 v171; // [rsp+148h] [rbp+40h] BYREF
  __int128 v172; // [rsp+158h] [rbp+50h] BYREF
  __int128 v173; // [rsp+168h] [rbp+60h] BYREF
  __int128 v174; // [rsp+178h] [rbp+70h] BYREF
  double v175; // [rsp+188h] [rbp+80h]
  __int128 v176; // [rsp+190h] [rbp+88h] BYREF
  double v177; // [rsp+1A0h] [rbp+98h]
  _OWORD v178[2]; // [rsp+1A8h] [rbp+A0h] BYREF
  _OWORD v179[2]; // [rsp+1C8h] [rbp+C0h] BYREF

  v145 = *((_DWORD *)a2 + 7);
  v155 = this;
  v3 = a2;
  v4 = *((_QWORD *)this + 1);
  v5 = 0LL;
  v164 = 0LL;
  v6 = 0LL;
  v154 = a2;
  v151 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, struct IUIAnimationStoryboard2 **))(*(_QWORD *)v4 + 48LL))(v4, &v164);
  ThemeAnimationTransform = v7;
  if ( v7 < 0 )
  {
    v137 = 624;
    goto LABEL_5;
  }
  CAnimationEngine::CTransitionVisualSet::SetStoryboard(v3, v164);
  v9 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, _QWORD, _QWORD))v164->lpVtbl->SetTag)(
         v164,
         0LL,
         *((unsigned int *)v3 + 4));
  ThemeAnimationTransform = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x274u, 0LL);
    goto LABEL_72;
  }
  v7 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, CAnimationEngine *, _QWORD, _QWORD))v164->lpVtbl->SetStoryboardEventHandler)(
         v164,
         this,
         0LL,
         0LL);
  ThemeAnimationTransform = v7;
  if ( v7 < 0 )
  {
    v137 = 629;
LABEL_5:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, v137, 0LL);
    goto LABEL_72;
  }
  v11 = 0;
  v12 = FLOAT_0_0099999998;
  for ( i = 0; ; i = v11 )
  {
    if ( v11 >= *((_DWORD *)v3 + 5) )
      goto LABEL_69;
    v153 = 0.0;
    v152 = 0.0;
    v157 = 0.0;
    v165 = 0.0;
    v156 = 0.0;
    v13 = *((_QWORD *)v3 + 5);
    v171 = 0LL;
    v162 = 0;
    v170 = 0LL;
    v172 = 0LL;
    v168 = v11;
    v173 = 0LL;
    v14 = **(__int64 ***)(v13 + 8LL * v11);
    v15 = (*(__int64 (__fastcall **)(__int64 *))(*v14 + 256))(v14);
    v144 = v15;
    v143 = (*(__int64 (__fastcall **)(__int64 *))(*v14 + 136))(v14);
    v16 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(*v14 + 16))(v14, &v171);
    ThemeAnimationTransform = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x289u, 0LL);
      goto LABEL_69;
    }
    v17 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(*v14 + 24))(v14, &v170);
    ThemeAnimationTransform = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x28Au, 0LL);
      goto LABEL_69;
    }
    v18 = (*(__int64 (__fastcall **)(__int64 *, float *))(*v14 + 32))(v14, &v153);
    ThemeAnimationTransform = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x28Bu, 0LL);
      goto LABEL_69;
    }
    v19 = (*(__int64 (__fastcall **)(__int64 *, float *))(*v14 + 40))(v14, &v152);
    ThemeAnimationTransform = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x28Cu, 0LL);
      goto LABEL_69;
    }
    v20 = (*(__int64 (__fastcall **)(__int64 *, float *))(*v14 + 48))(v14, &v157);
    ThemeAnimationTransform = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x28Du, 0LL);
      goto LABEL_69;
    }
    v21 = (*(__int64 (__fastcall **)(__int64 *, float *))(*v14 + 56))(v14, &v165);
    ThemeAnimationTransform = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x28Eu, 0LL);
      goto LABEL_69;
    }
    v22 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v14 + 64))(v14, &v162);
    ThemeAnimationTransform = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x28Fu, 0LL);
      goto LABEL_69;
    }
    if ( (*(int (__fastcall **)(__int64 *, float *))(*v14 + 112))(v14, &v156) < 0 )
      v156 = 0.0;
    if ( v15 )
    {
      v88 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(*v14 + 72))(v14, &v172);
      ThemeAnimationTransform = v88;
      if ( v88 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v88, 0x296u, 0LL);
      }
      else
      {
        v89 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(*v14 + 80))(v14, &v173);
        ThemeAnimationTransform = v89;
        if ( v89 >= 0 )
          goto LABEL_18;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v89, 0x297u, 0LL);
      }
LABEL_69:
      if ( v6 )
        goto LABEL_165;
      goto LABEL_70;
    }
LABEL_18:
    v166 = 0;
    v167 = 0.0;
    v142 = 0;
    v169 = 0.0;
    v23 = *v14;
    LOBYTE(v158) = 0;
    v24 = fmaxf(v12, 1.0 - v156);
    if ( (*(int (__fastcall **)(__int64 *, unsigned int *))(v23 + 88))(v14, &v166) >= 0 )
    {
      v90 = (*(__int64 (__fastcall **)(__int64 *, double *))(*v14 + 96))(v14, &v167);
      v91 = *v14;
      v92 = v90 >= 0;
      v158 = v92;
      if ( (*(int (__fastcall **)(__int64 *, double *))(v91 + 104))(v14, &v169) < 0 )
      {
        v158 = v92;
        v142 = 0;
      }
      else
      {
        v142 = 1;
      }
    }
    v148 = 0;
    v25 = **(_QWORD **)(*((_QWORD *)v3 + 5) + 8LL * v11);
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v25 + 128LL))(v25, &v148);
    v163 = 0;
    v147 = 0;
    v149 = 0.0;
    Theme = (void *)CDesktopManager::GetTheme(3LL, v26);
    v28 = v145;
    CAnimationEngine::_CalculateStaggerDelay(v29, Theme, v145, v148, v162, &v149);
    v31 = CDesktopManager::GetTheme(3LL, v30);
    if ( (int)GetThemeAnimationProperty(v31, v145, v148, 1LL, &v163, 4, &v147) >= 0 )
      break;
    if ( (unsigned int)dword_180118130 > 5 && (unsigned __int8)tlgKeywordOn(&dword_180118130, 1LL) )
    {
      LODWORD(v149) = v148;
      v150 = v145;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v85,
        (unsigned int)&unk_1801042DE,
        v86,
        v87,
        (__int64)&v150,
        (__int64)&v149);
    }
LABEL_61:
    ++v11;
  }
  v32 = v149;
  v10 = 0LL;
  while ( 2 )
  {
    v150 = (unsigned int)v10;
    if ( (unsigned int)v10 >= v163 )
    {
      v12 = FLOAT_0_0099999998;
      goto LABEL_61;
    }
    v33 = CDesktopManager::GetTheme(3LL, v10);
    ThemeAnimationTransform = GetThemeAnimationTransform(v33, v28, v148, v34, 0LL, 0, &v147);
    if ( ThemeAnimationTransform != -2147024662 )
      goto LABEL_47;
    v36 = v147;
    if ( v6 )
      CDisplayBlackCurtainAnimatedVisual::operator delete(v6, v35);
    v6 = (float *)operator new[](v36, v35);
    if ( !v6 )
    {
      ThemeAnimationTransform = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x2CCu, 0LL);
      goto LABEL_70;
    }
    v38 = CDesktopManager::GetTheme(3LL, v37);
    v39 = GetThemeAnimationTransform(v38, v28, v148, v150, v6, v36, &v147);
    ThemeAnimationTransform = v39;
    if ( v39 >= 0 )
    {
      v41 = ((float)((float)*((int *)v6 + 2) / 1000.0) + v32) * v24;
      v42 = (float)((float)((float)*((int *)v6 + 3) / 1000.0) * v24);
      if ( v28 == 104 )
        v42 = (float)(v24 * *((float *)CDesktopManager::GetWindowAnimationSettings() + 11));
      v43 = CDesktopManager::GetTheme(4LL, v40);
      if ( (unsigned int)GetThemeTimingFunction(v43, *((unsigned int *)v6 + 1), 0LL, 0LL, &v147) == -2147024662 )
      {
        v45 = v147;
        if ( v5 )
          CDisplayBlackCurtainAnimatedVisual::operator delete(v5, v44);
        v151 = (struct TA_TIMINGFUNCTION *)operator new[](v45, v44);
        v5 = v151;
        if ( !v151 )
        {
          ThemeAnimationTransform = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x2EBu, 0LL);
          goto LABEL_165;
        }
        v47 = CDesktopManager::GetTheme(4LL, v46);
        ThemeTimingFunction = GetThemeTimingFunction(v47, *((unsigned int *)v6 + 1), v5, (unsigned int)v45, &v147);
        ThemeAnimationTransform = ThemeTimingFunction;
        if ( ThemeTimingFunction < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ThemeTimingFunction, 0x2EDu, 0LL);
          goto LABEL_165;
        }
      }
      v49 = DWORD2(v171);
      v50 = v171;
      si128 = 0LL;
      v177 = 0.0;
      v176 = 0LL;
      v175 = 0.0;
      memset(v179, 0, sizeof(v179));
      v159 = 0LL;
      v174 = 0LL;
      memset(v178, 0, sizeof(v178));
      v51 = RoundToNearestInt((float)(DWORD2(v171) + v171) * 0.5);
      v52 = HIDWORD(v171);
      LODWORD(v161) = v51;
      v53 = RoundToNearestInt((float)(HIDWORD(v171) + DWORD1(v171)) * 0.5);
      v54 = HIDWORD(v170);
      v55 = DWORD2(v170);
      LODWORD(v149) = v53;
      if ( v144 )
        goto LABEL_35;
      v75 = 0;
      if ( DWORD2(v170) - (int)v170 >= 0 )
        v75 = DWORD2(v170) - v170;
      v76 = 0;
      if ( v49 - v50 >= 0 )
        v76 = v49 - v50;
      if ( v76 == v75 )
      {
LABEL_35:
        v56 = v170 + LODWORD(v161) - v171;
        if ( !v144 )
          goto LABEL_54;
        v57 = DWORD1(v171);
        v58 = DWORD1(v170);
      }
      else
      {
        v77 = RoundToNearestInt((float)(DWORD2(v170) + v170) * 0.5);
        v53 = LODWORD(v149);
        v56 = v77;
LABEL_54:
        v58 = DWORD1(v170);
        v57 = DWORD1(v171);
        v72 = 0;
        if ( v54 - DWORD1(v170) >= 0 )
          v72 = v54 - DWORD1(v170);
        v73 = 0;
        if ( v52 - DWORD1(v171) >= 0 )
          v73 = v52 - DWORD1(v171);
        if ( v73 != v72 )
        {
          v74 = RoundToNearestInt((float)(v54 + DWORD1(v170)) * 0.5);
          v57 = DWORD1(v171);
          v59 = v74;
          v53 = LODWORD(v149);
LABEL_38:
          v60 = *((_DWORD *)v6 + 4);
          v61 = *(_DWORD *)v6;
          LODWORD(v149) = v60 & 4;
          if ( v61 )
          {
            v62 = v61 - 1;
            if ( v62 )
            {
              v63 = v62 - 1;
              if ( v63 )
              {
                v64 = v63 - 254;
                if ( v64 )
                {
                  v65 = v64 - 2;
                  if ( v65 )
                  {
                    v66 = v65 - 1;
                    if ( v66 )
                    {
                      if ( v66 == 1 )
                      {
                        if ( (v60 & 2) != 0 )
                        {
                          v93 = v6[8];
                          *(double *)&v176 = v93;
                          v94 = v6[9];
                          *((double *)&v176 + 1) = v94;
                          v95 = v6[10];
                        }
                        else
                        {
                          v93 = 0.0;
                          v176 = 0LL;
                          *(_QWORD *)&v94 = *(_OWORD *)&_mm_unpackhi_pd((__m128d)0LL, (__m128d)0LL);
                          v95 = 0.0;
                        }
                        v177 = v95;
                        v96 = v6[5];
                        *(double *)&v174 = v96;
                        v97 = v6[6];
                        *((double *)&v174 + 1) = v97;
                        v98 = v6[7];
                        v175 = v98;
                        if ( v143 )
                        {
                          *(_QWORD *)&v176 = *(_QWORD *)&v93 ^ _xmm;
                          *((_QWORD *)&v176 + 1) = *(_QWORD *)&v94 ^ _xmm;
                          *(_QWORD *)&v177 = *(_QWORD *)&v95 ^ _xmm;
                          *(_QWORD *)&v174 = *(_QWORD *)&v96 ^ _xmm;
                          *((_QWORD *)&v174 + 1) = *(_QWORD *)&v97 ^ _xmm;
                          *(_QWORD *)&v175 = *(_QWORD *)&v98 ^ _xmm;
                        }
                        v99 = *((_DWORD *)v6 + 12);
                        v100 = *((_DWORD *)v6 + 13);
                        v3 = v154;
                        v5 = v151;
                        v11 = i;
                        v101 = *(_DWORD **)(*((_QWORD *)v154 + 5) + 8 * v168);
                        v139 = v151;
                        v101[19] = *((_DWORD *)v6 + 11);
                        v101[20] = v99;
                        v101[21] = v100;
                        v102 = CAnimationEngine::AddToStoryboard(
                                 (__int64)v155,
                                 *((struct IUIAnimationStoryboard2 **)v3 + 4),
                                 *((_DWORD *)v3 + 4),
                                 i,
                                 3,
                                 v41,
                                 v42,
                                 (double *)&v176,
                                 (double *)&v174,
                                 3u,
                                 v139,
                                 0,
                                 0LL,
                                 0LL,
                                 0);
                        ThemeAnimationTransform = v102;
                        if ( v102 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v102, 0x45Fu, 0LL);
                          goto LABEL_165;
                        }
                      }
                      else
                      {
                        v3 = v154;
                        v5 = v151;
                        v11 = i;
                      }
                    }
                    else
                    {
                      if ( (v60 & 1) != 0 )
                      {
                        v177 = v153;
                        *(double *)&v176 = (double)(v49 - (int)v171);
                        *((double *)&v176 + 1) = (double)(v52 - v57);
                        v175 = v152;
                        *(double *)&v174 = (double)(v55 - (int)v170);
                        *((double *)&v174 + 1) = (double)(v54 - DWORD1(v170));
                      }
                      else
                      {
                        if ( (v60 & 2) != 0 )
                        {
                          *(double *)&v176 = v6[8];
                          *((double *)&v176 + 1) = v6[9];
                          v103 = v6[10];
                        }
                        else
                        {
                          v176 = _xmm;
                          v103 = DOUBLE_1_0;
                        }
                        v177 = v103;
                        *(double *)&v174 = v6[5];
                        *((double *)&v174 + 1) = v6[6];
                        v175 = v6[7];
                      }
                      if ( (v60 & 4) != 0 )
                      {
                        v104 = *((_DWORD *)v6 + 13);
                        v105 = v6[12];
                        v106 = v6[11];
                      }
                      else
                      {
                        v104 = 0;
                        v105 = FLOAT_0_5;
                        v106 = FLOAT_0_5;
                      }
                      v3 = v154;
                      v5 = v151;
                      v11 = i;
                      v107 = *(float **)(*((_QWORD *)v154 + 5) + 8 * v168);
                      v140 = v151;
                      v107[16] = v106;
                      v107[17] = v105;
                      *((_DWORD *)v107 + 18) = v104;
                      v108 = CAnimationEngine::AddToStoryboard(
                               (__int64)v155,
                               *((struct IUIAnimationStoryboard2 **)v3 + 4),
                               *((_DWORD *)v3 + 4),
                               i,
                               4,
                               v41,
                               v42,
                               (double *)&v176,
                               (double *)&v174,
                               3u,
                               v140,
                               0,
                               0LL,
                               0LL,
                               0);
                      ThemeAnimationTransform = v108;
                      if ( v108 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v108, 0x434u, 0LL);
                        goto LABEL_165;
                      }
                    }
                  }
                  else
                  {
                    v177 = 0.0;
                    v176 = 0LL;
                    if ( ((_BYTE)v6[4] & 1) != 0 )
                    {
                      v3 = v154;
                      v5 = v151;
                      v11 = i;
                      v109 = *((_DWORD *)v154 + 4);
                      *(double *)&v174 = (double)(v56 - LODWORD(v161));
                      v110 = _mm_cvtsi32_si128(v59 - v53);
                      v111 = (struct IUIAnimationStoryboard2 *)*((_QWORD *)v154 + 4);
                      *((_QWORD *)&v174 + 1) = *(_OWORD *)&_mm_cvtepi32_pd(v110);
                      v175 = (float)(v152 - v153);
                      v112 = CAnimationEngine::AddToStoryboard(
                               (__int64)v155,
                               v111,
                               v109,
                               i,
                               0,
                               v41,
                               v42,
                               (double *)&v176,
                               (double *)&v174,
                               3u,
                               v151,
                               0,
                               0LL,
                               0LL,
                               0);
                      ThemeAnimationTransform = v112;
                      if ( v112 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v112, 0x3CAu, 0LL);
                        goto LABEL_165;
                      }
                    }
                    else
                    {
                      v113 = 1;
                      v114 = 0;
                      if ( ((_DWORD)v6[4] & 0x1000) != 0 )
                      {
                        v113 = 2;
                        v115 = (double)(((int)v170 + v55 - v49 - (int)v171) / 2);
                      }
                      else
                      {
                        v115 = v6[5];
                      }
                      *(double *)&v174 = v115;
                      if ( ((_DWORD)v6[4] & 0x2000) != 0 )
                      {
                        v113 = 3;
                        v116 = (double)((DWORD1(v170) + v54 - v52 - v57) / 2);
                        v114 = 1;
                      }
                      else
                      {
                        v116 = v6[6];
                      }
                      *((double *)&v174 + 1) = v116;
                      if ( ((_DWORD)v6[4] & 0x4000) != 0 )
                      {
                        v113 = 4;
                        v117 = v152 - v153;
                        v114 = 2;
                      }
                      else
                      {
                        v117 = v6[7];
                      }
                      v3 = v154;
                      v5 = v151;
                      v11 = i;
                      v118 = *((_DWORD *)v154 + 4);
                      v119 = (struct IUIAnimationStoryboard2 *)*((_QWORD *)v154 + 4);
                      v175 = v117;
                      v120 = CAnimationEngine::AddToStoryboard(
                               (__int64)v155,
                               v119,
                               v118,
                               i,
                               v114,
                               v41,
                               v42,
                               (double *)&v176,
                               (double *)&v174,
                               3u,
                               v151,
                               v113,
                               0LL,
                               0LL,
                               0);
                      ThemeAnimationTransform = v120;
                      if ( v120 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v120, 0x3FEu, 0LL);
                        goto LABEL_165;
                      }
                    }
                  }
                }
                else
                {
                  if ( (v60 & 2) != 0 )
                  {
                    v121 = v6[7];
                    *(double *)si128.m128i_i64 = v121;
                    v122 = v6[8];
                    *(double *)&si128.m128i_i64[1] = v122;
                  }
                  else
                  {
                    v121 = 0.0;
                    si128 = 0LL;
                    *(_QWORD *)&v122 = *(_OWORD *)&_mm_unpackhi_pd((__m128d)0LL, (__m128d)0LL);
                  }
                  v123 = v6[5];
                  *(double *)&v159 = v123;
                  v124 = v6[6];
                  *((double *)&v159 + 1) = v124;
                  if ( v143 )
                  {
                    si128.m128i_i64[0] = *(_QWORD *)&v121 ^ _xmm;
                    si128.m128i_i64[1] = *(_QWORD *)&v122 ^ _xmm;
                    *(_QWORD *)&v159 = *(_QWORD *)&v123 ^ _xmm;
                    *((_QWORD *)&v159 + 1) = *(_QWORD *)&v124 ^ _xmm;
                  }
                  v125 = *((_DWORD *)v6 + 10);
                  v3 = v154;
                  v5 = v151;
                  v11 = i;
                  v126 = *(_DWORD **)(*((_QWORD *)v154 + 5) + 8 * v168);
                  v141 = v151;
                  v126[19] = *((_DWORD *)v6 + 9);
                  v126[20] = v125;
                  v126[21] = 0;
                  v127 = CAnimationEngine::AddToStoryboard(
                           (__int64)v155,
                           *((struct IUIAnimationStoryboard2 **)v3 + 4),
                           *((_DWORD *)v3 + 4),
                           i,
                           3,
                           v41,
                           v42,
                           (double *)si128.m128i_i64,
                           (double *)&v159,
                           2u,
                           v141,
                           0,
                           0LL,
                           0LL,
                           0);
                  ThemeAnimationTransform = v127;
                  if ( v127 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v127, 0x3ACu, 0LL);
                    goto LABEL_165;
                  }
                }
              }
              else
              {
                if ( (v60 & 1) != 0 )
                {
                  v68 = v165;
                  v67 = v157;
                }
                else
                {
                  if ( (v60 & 2) != 0 )
                    v67 = v6[6];
                  else
                    v67 = v157;
                  v68 = v6[5];
                }
                v3 = v154;
                v5 = v151;
                v11 = i;
                v69 = *((_DWORD *)v154 + 4);
                v70 = (struct IUIAnimationStoryboard2 *)*((_QWORD *)v154 + 4);
                v161 = v67;
                v149 = v68;
                v71 = CAnimationEngine::AddToStoryboard(
                        (__int64)v155,
                        v70,
                        v69,
                        i,
                        5,
                        v41,
                        v42,
                        &v161,
                        &v149,
                        1u,
                        v151,
                        0,
                        0LL,
                        0LL,
                        0);
                ThemeAnimationTransform = v71;
                if ( v71 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v71, 0x475u, 0LL);
                  goto LABEL_165;
                }
              }
            }
            else
            {
              if ( (v60 & 1) != 0 )
              {
                si128 = _mm_load_si128((const __m128i *)&_xmm);
                if ( v49 == (_DWORD)v171 )
                  v83 = FLOAT_1_0;
                else
                  v83 = (float)(v55 - v170) / (float)(v49 - v171);
                *(double *)&v159 = v83;
                if ( v52 == v57 )
                  v84 = FLOAT_1_0;
                else
                  v84 = (float)(v54 - DWORD1(v170)) / (float)(v52 - v57);
                *((double *)&v159 + 1) = v84;
              }
              else
              {
                if ( (v60 & 2) != 0 )
                {
                  *(double *)si128.m128i_i64 = v6[7];
                  *(double *)&si128.m128i_i64[1] = v6[8];
                }
                else
                {
                  si128 = _mm_load_si128((const __m128i *)&_xmm);
                }
                *(double *)&v159 = v6[5];
                *((double *)&v159 + 1) = v6[6];
              }
              if ( LODWORD(v149) )
              {
                v79 = v6[10];
                v80 = v6[9];
              }
              else
              {
                v79 = FLOAT_0_5;
                v80 = FLOAT_0_5;
              }
              v3 = v154;
              v5 = v151;
              v11 = i;
              v81 = *(float **)(*((_QWORD *)v154 + 5) + 8 * v168);
              v138 = v151;
              v81[16] = v80;
              v81[17] = v79;
              v81[18] = 0.0;
              v82 = CAnimationEngine::AddToStoryboard(
                      (__int64)v155,
                      *((struct IUIAnimationStoryboard2 **)v3 + 4),
                      *((_DWORD *)v3 + 4),
                      i,
                      4,
                      v41,
                      v42,
                      (double *)si128.m128i_i64,
                      (double *)&v159,
                      2u,
                      v138,
                      0,
                      0LL,
                      0LL,
                      0);
              ThemeAnimationTransform = v82;
              if ( v82 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v82, 0x386u, 0LL);
                goto LABEL_165;
              }
            }
          }
          else
          {
            if ( (v60 & 1) != 0 )
            {
              si128 = 0LL;
              *(double *)&v159 = (double)(v56 - LODWORD(v161));
              *((double *)&v159 + 1) = (double)(v59 - v53);
            }
            v128 = v158;
            v129 = v166;
            if ( v158 )
            {
              v130 = v167 + *(double *)&si128.m128i_i64[v166];
              v167 = 0.0;
              *(double *)&si128.m128i_i64[v166] = v130;
            }
            if ( v142 )
            {
              v131 = *((double *)&v159 + v129) + v169;
              v169 = *((double *)&v159 + v129);
              *((double *)&v159 + v129) = v131;
            }
            v3 = v154;
            v5 = v151;
            v132 = v155;
            v11 = i;
            v133 = CAnimationEngine::AddToStoryboard(
                     (__int64)v155,
                     *((struct IUIAnimationStoryboard2 **)v154 + 4),
                     *((_DWORD *)v154 + 4),
                     i,
                     0,
                     v41,
                     v42,
                     (double *)si128.m128i_i64,
                     (double *)&v159,
                     2u,
                     v151,
                     0,
                     (double *)((unsigned __int64)&v167 & -(__int64)v128),
                     (double *)((unsigned __int64)&v169 & -(__int64)(v142 != 0)),
                     v129);
            ThemeAnimationTransform = v133;
            if ( v133 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v133, 0x340u, 0LL);
              goto LABEL_165;
            }
            if ( v144 )
            {
              for ( j = 0LL; j < 4; ++j )
                *((double *)v179 + j) = (double)*((int *)&v172 + j);
              for ( k = 0LL; k < 4; ++k )
                *((double *)v178 + k) = (double)*((int *)&v173 + k);
              v136 = CAnimationEngine::AddToStoryboard(
                       (__int64)v132,
                       *((struct IUIAnimationStoryboard2 **)v3 + 4),
                       *((_DWORD *)v3 + 4),
                       i,
                       6,
                       v41,
                       v42,
                       (double *)v179,
                       (double *)v178,
                       4u,
                       v5,
                       0,
                       0LL,
                       0LL,
                       0);
              ThemeAnimationTransform = v136;
              if ( v136 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v136, 0x355u, 0LL);
                goto LABEL_165;
              }
            }
          }
          v28 = v145;
LABEL_47:
          v10 = (const struct std::nothrow_t *)(v150 + 1);
          continue;
        }
      }
      v59 = v58 + v53 - v57;
      goto LABEL_38;
    }
    break;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v39, 0x2CFu, 0LL);
LABEL_165:
  CDisplayBlackCurtainAnimatedVisual::operator delete(v6, v10);
LABEL_70:
  if ( v5 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(v5, v10);
LABEL_72:
  if ( v164 )
    ((void (__fastcall *)(struct IUIAnimationStoryboard2 *))v164->lpVtbl->Release)(v164);
  return ThemeAnimationTransform;
}
