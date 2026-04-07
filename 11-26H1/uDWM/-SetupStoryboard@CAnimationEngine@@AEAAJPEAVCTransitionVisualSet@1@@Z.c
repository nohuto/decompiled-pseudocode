/*
 * XREFs of ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x180051450
 * Callers:
 *     ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x1800512BC (-StartAnimations@CAnimationEngine@@AEAAJXZ.c)
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800164E0 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x1800528DC (-RoundToNearestInt@@YAHM@Z.c)
 *     ?GetWindowAnimationSettings@CDesktopManager@@SAAEBUWindowAnimationSettings@1@XZ @ 0x180052918 (-GetWindowAnimationSettings@CDesktopManager@@SAAEBUWindowAnimationSettings@1@XZ.c)
 *     ?SetStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXPEAUIUIAnimationStoryboard2@@@Z @ 0x180052930 (-SetStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXPEAUIUIAnimationStoryboard2@@@Z.c)
 *     ?AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NNPEAN2IPEAUTA_TIMINGFUNCTION@@W4TransformMode@@22I@Z @ 0x180052988 (-AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NN.c)
 *     ?_CalculateStaggerDelay@CAnimationEngine@@AEAAXPEAXHHIPEAN@Z @ 0x18005327C (-_CalculateStaggerDelay@CAnimationEngine@@AEAAXPEAXHHIPEAN@Z.c)
 *     _tlgKeywordOn @ 0x18006E790 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180078A10 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAnimationEngine::SetupStoryboard(
        CAnimationEngine *this,
        struct CAnimationEngine::CTransitionVisualSet *a2)
{
  __int64 v4; // rcx
  void *v5; // r14
  float *v6; // rdi
  int v7; // eax
  unsigned int ThemeAnimationTransform; // ebx
  int v9; // eax
  unsigned __int64 v10; // rdx
  __m128i si128; // xmm14
  unsigned int v12; // r15d
  float v13; // xmm6_4
  __int64 v14; // rax
  __int64 *v15; // rsi
  char v16; // r12
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rax
  float v25; // xmm9_4
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned int v28; // esi
  void *v29; // rdx
  CAnimationEngine *v30; // rcx
  double v31; // xmm12_8
  unsigned int v32; // eax
  unsigned __int64 v33; // rbx
  int v34; // eax
  double v35; // xmm6_8
  double v36; // xmm7_8
  const struct std::nothrow_t *v37; // rdx
  int v38; // r12d
  int v39; // esi
  int v40; // r11d
  int v41; // r14d
  int v42; // r15d
  int v43; // esi
  int v44; // r10d
  int v45; // r8d
  int v46; // r9d
  int v47; // ecx
  int v48; // ecx
  int v49; // ecx
  int v50; // ecx
  int v51; // ecx
  int v52; // ecx
  unsigned __int64 v53; // rbx
  int ThemeTimingFunction; // eax
  float v55; // xmm0_4
  float v56; // xmm1_4
  __int64 v57; // r8
  __int64 v58; // rdx
  int v59; // eax
  int v60; // ecx
  int v61; // eax
  unsigned int v62; // eax
  int v63; // ecx
  int v64; // eax
  int v65; // eax
  float v67; // xmm0_4
  float v68; // xmm1_4
  float *v69; // rcx
  int v70; // eax
  bool v71; // cl
  __int64 v72; // r8
  CAnimationEngine *v73; // r12
  int v74; // eax
  __int64 j; // rax
  __int64 k; // rax
  int v77; // eax
  float v78; // xmm1_4
  float v79; // xmm1_4
  int v80; // ecx
  int v81; // r8d
  int v82; // r9d
  int v83; // eax
  int v84; // eax
  int v85; // eax
  __int64 v86; // rdx
  BOOL v87; // r12d
  double v88; // xmm0_8
  double v89; // xmm1_8
  double v90; // xmm2_8
  double v91; // xmm3_8
  double v92; // xmm4_8
  double v93; // xmm5_8
  int v94; // xmm0_4
  int v95; // xmm1_4
  _DWORD *v96; // rcx
  int v97; // eax
  double v98; // xmm0_8
  int v99; // xmm0_4
  float v100; // xmm1_4
  float v101; // xmm2_4
  float *v102; // rcx
  int v103; // eax
  __int64 v104; // r8
  __m128i v105; // xmm0
  __int64 v106; // rdx
  int v107; // eax
  int v108; // eax
  int v109; // ecx
  double v110; // xmm0_8
  double v111; // xmm0_8
  float v112; // xmm0_4
  __int64 v113; // r8
  __int64 v114; // rdx
  int v115; // eax
  double v116; // xmm0_8
  double v117; // xmm1_8
  double v118; // xmm2_8
  double v119; // xmm3_8
  int v120; // xmm0_4
  _DWORD *v121; // rcx
  int v122; // eax
  double v123; // xmm0_8
  double v124; // xmm0_8
  unsigned int v125; // [rsp+28h] [rbp-E0h]
  void *v126; // [rsp+58h] [rbp-B0h]
  void *v127; // [rsp+58h] [rbp-B0h]
  char v128; // [rsp+88h] [rbp-80h]
  char v129; // [rsp+89h] [rbp-7Fh]
  char v130; // [rsp+8Ah] [rbp-7Eh]
  unsigned int v131; // [rsp+8Ch] [rbp-7Ch]
  unsigned int i; // [rsp+90h] [rbp-78h]
  unsigned int v133; // [rsp+94h] [rbp-74h] BYREF
  unsigned int v134; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v135; // [rsp+9Ch] [rbp-6Ch] BYREF
  double v136; // [rsp+A0h] [rbp-68h] BYREF
  void *v137; // [rsp+A8h] [rbp-60h]
  float v138; // [rsp+B0h] [rbp-58h] BYREF
  float v139; // [rsp+B4h] [rbp-54h] BYREF
  int v140; // [rsp+B8h] [rbp-50h]
  CAnimationEngine *v141; // [rsp+C0h] [rbp-48h]
  float v142; // [rsp+C8h] [rbp-40h] BYREF
  float v143; // [rsp+CCh] [rbp-3Ch] BYREF
  int v144; // [rsp+D0h] [rbp-38h]
  BOOL v145; // [rsp+D4h] [rbp-34h]
  __int128 v146; // [rsp+D8h] [rbp-30h] BYREF
  __m128i v147; // [rsp+E8h] [rbp-20h] BYREF
  unsigned int v148; // [rsp+F8h] [rbp-10h] BYREF
  unsigned int v149; // [rsp+FCh] [rbp-Ch] BYREF
  struct IUIAnimationStoryboard2 *v150; // [rsp+100h] [rbp-8h] BYREF
  float v151; // [rsp+108h] [rbp+0h] BYREF
  unsigned int v152; // [rsp+10Ch] [rbp+4h] BYREF
  double v153; // [rsp+110h] [rbp+8h] BYREF
  __int64 v154; // [rsp+118h] [rbp+10h]
  double v155; // [rsp+120h] [rbp+18h] BYREF
  double v156; // [rsp+128h] [rbp+20h] BYREF
  double v157; // [rsp+130h] [rbp+28h] BYREF
  __int128 v158; // [rsp+138h] [rbp+30h] BYREF
  __int128 v159; // [rsp+148h] [rbp+40h] BYREF
  __int128 v160; // [rsp+158h] [rbp+50h] BYREF
  __int128 v161; // [rsp+168h] [rbp+60h] BYREF
  __int128 v162; // [rsp+178h] [rbp+70h] BYREF
  double v163; // [rsp+188h] [rbp+80h]
  __m128i v164; // [rsp+190h] [rbp+88h] BYREF
  double v165; // [rsp+1A0h] [rbp+98h]
  _OWORD v166[2]; // [rsp+1A8h] [rbp+A0h] BYREF
  _OWORD v167[2]; // [rsp+1C8h] [rbp+C0h] BYREF

  v131 = *((_DWORD *)a2 + 7);
  v141 = this;
  v4 = *((_QWORD *)this + 1);
  v150 = 0LL;
  v5 = 0LL;
  v137 = 0LL;
  v6 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, struct IUIAnimationStoryboard2 **))(*(_QWORD *)v4 + 48LL))(v4, &v150);
  ThemeAnimationTransform = v7;
  if ( v7 < 0 )
  {
    v125 = 624;
    goto LABEL_5;
  }
  CAnimationEngine::CTransitionVisualSet::SetStoryboard(a2, v150);
  v9 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, _QWORD, _QWORD))v150->lpVtbl->SetTag)(
         v150,
         0LL,
         *((unsigned int *)a2 + 4));
  ThemeAnimationTransform = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x274u, 0LL);
    goto LABEL_75;
  }
  v7 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, CAnimationEngine *, _QWORD, _QWORD))v150->lpVtbl->SetStoryboardEventHandler)(
         v150,
         this,
         0LL,
         0LL);
  ThemeAnimationTransform = v7;
  if ( v7 < 0 )
  {
    v125 = 629;
LABEL_5:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, v125, 0LL);
    goto LABEL_75;
  }
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v12 = 0;
  v13 = FLOAT_0_0099999998;
  for ( i = 0; ; i = v12 )
  {
    if ( v12 >= *((_DWORD *)a2 + 5) )
      goto LABEL_72;
    v14 = *((_QWORD *)a2 + 5);
    v159 = 0LL;
    v139 = 0.0;
    v160 = 0LL;
    v138 = 0.0;
    v143 = 0.0;
    v158 = 0LL;
    v151 = 0.0;
    v161 = 0LL;
    v142 = 0.0;
    v148 = 0;
    v154 = v12;
    v15 = **(__int64 ***)(v14 + 8LL * v12);
    v16 = (*(__int64 (__fastcall **)(__int64 *))(*v15 + 256))(v15);
    v130 = v16;
    v129 = (*(__int64 (__fastcall **)(__int64 *))(*v15 + 136))(v15);
    v17 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(*v15 + 16))(v15, &v159);
    ThemeAnimationTransform = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x289u, 0LL);
      goto LABEL_72;
    }
    v18 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(*v15 + 24))(v15, &v158);
    ThemeAnimationTransform = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x28Au, 0LL);
      goto LABEL_72;
    }
    v19 = (*(__int64 (__fastcall **)(__int64 *, float *))(*v15 + 32))(v15, &v139);
    ThemeAnimationTransform = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x28Bu, 0LL);
      goto LABEL_72;
    }
    v20 = (*(__int64 (__fastcall **)(__int64 *, float *))(*v15 + 40))(v15, &v138);
    ThemeAnimationTransform = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x28Cu, 0LL);
      goto LABEL_72;
    }
    v21 = (*(__int64 (__fastcall **)(__int64 *, float *))(*v15 + 48))(v15, &v143);
    ThemeAnimationTransform = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x28Du, 0LL);
      goto LABEL_72;
    }
    v22 = (*(__int64 (__fastcall **)(__int64 *, float *))(*v15 + 56))(v15, &v151);
    ThemeAnimationTransform = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x28Eu, 0LL);
      goto LABEL_72;
    }
    v23 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v15 + 64))(v15, &v148);
    ThemeAnimationTransform = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x28Fu, 0LL);
      goto LABEL_72;
    }
    if ( (*(int (__fastcall **)(__int64 *, float *))(*v15 + 112))(v15, &v142) < 0 )
      v142 = 0.0;
    if ( v16 )
    {
      v83 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(*v15 + 72))(v15, &v160);
      ThemeAnimationTransform = v83;
      if ( v83 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v83, 0x296u, 0LL);
      }
      else
      {
        v84 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(*v15 + 80))(v15, &v161);
        ThemeAnimationTransform = v84;
        if ( v84 >= 0 )
          goto LABEL_19;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v84, 0x297u, 0LL);
      }
LABEL_72:
      if ( v6 )
        goto LABEL_50;
      goto LABEL_73;
    }
LABEL_19:
    v153 = 0.0;
    v128 = 0;
    v155 = 0.0;
    v152 = 0;
    v24 = *v15;
    LOBYTE(v145) = 0;
    v25 = fmaxf(v13, 1.0 - v142);
    if ( (*(int (__fastcall **)(__int64 *, unsigned int *))(v24 + 88))(v15, &v152) >= 0 )
    {
      v85 = (*(__int64 (__fastcall **)(__int64 *, double *))(*v15 + 96))(v15, &v153);
      v86 = *v15;
      v87 = v85 >= 0;
      v145 = v87;
      if ( (*(int (__fastcall **)(__int64 *, double *))(v86 + 104))(v15, &v155) < 0 )
      {
        v145 = v87;
        v128 = 0;
      }
      else
      {
        v128 = 1;
      }
    }
    v26 = *((_QWORD *)a2 + 5);
    v134 = 0;
    v27 = **(_QWORD **)(v26 + 8LL * v12);
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v27 + 128LL))(v27, &v134);
    v28 = v131;
    v149 = 0;
    v133 = 0;
    v29 = (void *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 139);
    v136 = 0.0;
    CAnimationEngine::_CalculateStaggerDelay(v30, v29, v131, v134, v148, &v136);
    if ( (int)GetThemeAnimationProperty(
                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 139),
                v131,
                v134,
                1LL,
                &v149,
                4,
                &v133) >= 0 )
      break;
    if ( (unsigned int)dword_1801140F8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1801140F8, 1LL) )
    {
      LODWORD(v136) = v134;
      v135 = v131;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v80,
        (unsigned int)&unk_1800FF94E,
        v81,
        v82,
        (__int64)&v135,
        (__int64)&v136);
    }
LABEL_64:
    ++v12;
  }
  v31 = v136;
  v32 = 0;
  while ( 2 )
  {
    v135 = v32;
    if ( v32 >= v149 )
    {
      v13 = FLOAT_0_0099999998;
      goto LABEL_64;
    }
    ThemeAnimationTransform = GetThemeAnimationTransform(
                                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 139),
                                v28,
                                v134,
                                v32,
                                0LL,
                                0,
                                &v133);
    if ( ThemeAnimationTransform != -2147024662 )
      goto LABEL_44;
    v33 = v133;
    if ( v6 )
      CDisplayBlackCurtainAnimatedVisual::operator delete(v6, (const struct std::nothrow_t *)v10);
    v6 = (float *)operator new(v33);
    if ( !v6 )
    {
      ThemeAnimationTransform = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x2CCu, 0LL);
      goto LABEL_73;
    }
    v34 = GetThemeAnimationTransform(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 139),
            v28,
            v134,
            v135,
            v6,
            v33,
            &v133);
    ThemeAnimationTransform = v34;
    if ( v34 >= 0 )
    {
      v35 = ((float)((float)*((int *)v6 + 2) / 1000.0) + v31) * v25;
      v36 = (float)((float)((float)*((int *)v6 + 3) / 1000.0) * v25);
      if ( v28 == 104 )
        v36 = (float)(v25 * *((float *)CDesktopManager::GetWindowAnimationSettings() + 5));
      if ( (unsigned int)GetThemeTimingFunction(
                           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 140),
                           *((unsigned int *)v6 + 1),
                           0LL,
                           0LL,
                           &v133) == -2147024662 )
      {
        v53 = v133;
        if ( v5 )
          CDisplayBlackCurtainAnimatedVisual::operator delete(v5, v37);
        v137 = operator new(v53);
        v5 = v137;
        if ( !v137 )
        {
          ThemeAnimationTransform = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x2EBu, 0LL);
          goto LABEL_50;
        }
        ThemeTimingFunction = GetThemeTimingFunction(
                                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 140),
                                *((unsigned int *)v6 + 1),
                                v137,
                                (unsigned int)v53,
                                &v133);
        ThemeAnimationTransform = ThemeTimingFunction;
        if ( ThemeTimingFunction < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ThemeTimingFunction, 0x2EDu, 0LL);
          goto LABEL_50;
        }
      }
      v38 = DWORD2(v159);
      v39 = v159;
      v147 = 0LL;
      v165 = 0.0;
      v164 = 0LL;
      v163 = 0.0;
      memset(v167, 0, sizeof(v167));
      v146 = 0LL;
      v162 = 0LL;
      memset(v166, 0, sizeof(v166));
      v144 = RoundToNearestInt((float)(DWORD2(v159) + v159) * 0.5);
      v140 = HIDWORD(v159);
      v40 = RoundToNearestInt((float)(HIDWORD(v159) + DWORD1(v159)) * 0.5);
      v41 = HIDWORD(v158);
      v42 = DWORD2(v158);
      LODWORD(v136) = v40;
      if ( v130 )
        goto LABEL_32;
      v63 = 0;
      if ( v38 - v39 >= 0 )
        v63 = v38 - v39;
      v64 = 0;
      if ( DWORD2(v158) - (int)v158 >= 0 )
        v64 = DWORD2(v158) - v158;
      if ( v63 == v64 )
      {
LABEL_32:
        v43 = v144 + v158 - v159;
        if ( !v130 )
          goto LABEL_57;
        v44 = DWORD1(v159);
        v45 = DWORD1(v158);
      }
      else
      {
        v65 = RoundToNearestInt((float)(DWORD2(v158) + v158) * 0.5);
        v40 = LODWORD(v136);
        v43 = v65;
LABEL_57:
        v45 = DWORD1(v158);
        v44 = DWORD1(v159);
        v60 = 0;
        if ( v41 - DWORD1(v158) >= 0 )
          v60 = v41 - DWORD1(v158);
        v61 = 0;
        if ( v140 - DWORD1(v159) >= 0 )
          v61 = v140 - DWORD1(v159);
        if ( v61 != v60 )
        {
          v62 = RoundToNearestInt((float)(v41 + DWORD1(v158)) * 0.5);
          v44 = DWORD1(v159);
          v10 = v62;
          v40 = LODWORD(v136);
LABEL_35:
          v46 = *((_DWORD *)v6 + 4);
          v47 = *(_DWORD *)v6;
          LODWORD(v136) = v46 & 4;
          if ( v47 )
          {
            v48 = v47 - 1;
            if ( v48 )
            {
              v49 = v48 - 1;
              if ( v49 )
              {
                v50 = v49 - 254;
                if ( v50 )
                {
                  v51 = v50 - 2;
                  if ( v51 )
                  {
                    v52 = v51 - 1;
                    if ( v52 )
                    {
                      if ( v52 == 1 )
                      {
                        if ( (v46 & 2) != 0 )
                        {
                          v88 = v6[8];
                          *(double *)v164.m128i_i64 = v88;
                          v89 = v6[9];
                          *(double *)&v164.m128i_i64[1] = v89;
                          v90 = v6[10];
                        }
                        else
                        {
                          v88 = 0.0;
                          v164 = 0LL;
                          *(_QWORD *)&v89 = *(_OWORD *)&_mm_unpackhi_pd((__m128d)0LL, (__m128d)0LL);
                          v90 = 0.0;
                        }
                        v165 = v90;
                        v91 = v6[5];
                        *(double *)&v162 = v91;
                        v92 = v6[6];
                        *((double *)&v162 + 1) = v92;
                        v93 = v6[7];
                        v163 = v93;
                        if ( v129 )
                        {
                          v164.m128i_i64[0] = *(_QWORD *)&v88 ^ _xmm;
                          v164.m128i_i64[1] = *(_QWORD *)&v89 ^ _xmm;
                          *(_QWORD *)&v165 = *(_QWORD *)&v90 ^ _xmm;
                          *(_QWORD *)&v162 = *(_QWORD *)&v91 ^ _xmm;
                          *((_QWORD *)&v162 + 1) = *(_QWORD *)&v92 ^ _xmm;
                          *(_QWORD *)&v163 = *(_QWORD *)&v93 ^ _xmm;
                        }
                        v94 = *((_DWORD *)v6 + 12);
                        v95 = *((_DWORD *)v6 + 13);
                        v5 = v137;
                        v12 = i;
                        v96 = *(_DWORD **)(*((_QWORD *)a2 + 5) + 8 * v154);
                        v96[19] = *((_DWORD *)v6 + 11);
                        v96[20] = v94;
                        v96[21] = v95;
                        v97 = CAnimationEngine::AddToStoryboard(
                                v141,
                                *((_QWORD *)a2 + 4),
                                *((unsigned int *)a2 + 4),
                                i,
                                3,
                                *(_QWORD *)&v35,
                                *(_QWORD *)&v36,
                                &v164,
                                &v162,
                                3,
                                v5,
                                0,
                                0LL,
                                0LL,
                                0);
                        ThemeAnimationTransform = v97;
                        if ( v97 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v97, 0x45Fu, 0LL);
                          goto LABEL_50;
                        }
                      }
                      else
                      {
                        v5 = v137;
                        v12 = i;
                      }
                    }
                    else
                    {
                      if ( (v46 & 1) != 0 )
                      {
                        v165 = v139;
                        *(double *)v164.m128i_i64 = (double)(v38 - (int)v159);
                        *(double *)&v164.m128i_i64[1] = (double)(v140 - v44);
                        v163 = v138;
                        *(double *)&v162 = (double)(v42 - (int)v158);
                        *((double *)&v162 + 1) = (double)(v41 - DWORD1(v158));
                      }
                      else
                      {
                        if ( (v46 & 2) != 0 )
                        {
                          *(double *)v164.m128i_i64 = v6[8];
                          *(double *)&v164.m128i_i64[1] = v6[9];
                          v98 = v6[10];
                        }
                        else
                        {
                          v98 = DOUBLE_1_0;
                          v164 = si128;
                        }
                        v165 = v98;
                        *(double *)&v162 = v6[5];
                        *((double *)&v162 + 1) = v6[6];
                        v163 = v6[7];
                      }
                      if ( LODWORD(v136) )
                      {
                        v99 = *((_DWORD *)v6 + 13);
                        v100 = v6[12];
                        v101 = v6[11];
                      }
                      else
                      {
                        v99 = 0;
                        v100 = FLOAT_0_5;
                        v101 = FLOAT_0_5;
                      }
                      v5 = v137;
                      v12 = i;
                      v102 = *(float **)(*((_QWORD *)a2 + 5) + 8 * v154);
                      v127 = v137;
                      v102[16] = v101;
                      v102[17] = v100;
                      *((_DWORD *)v102 + 18) = v99;
                      v103 = CAnimationEngine::AddToStoryboard(
                               v141,
                               *((_QWORD *)a2 + 4),
                               *((unsigned int *)a2 + 4),
                               i,
                               4,
                               *(_QWORD *)&v35,
                               *(_QWORD *)&v36,
                               &v164,
                               &v162,
                               3,
                               v127,
                               0,
                               0LL,
                               0LL,
                               0);
                      ThemeAnimationTransform = v103;
                      if ( v103 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v103, 0x434u, 0LL);
                        goto LABEL_50;
                      }
                    }
                  }
                  else
                  {
                    v165 = 0.0;
                    v164 = 0LL;
                    if ( ((_BYTE)v6[4] & 1) != 0 )
                    {
                      v5 = v137;
                      v12 = i;
                      v104 = *((unsigned int *)a2 + 4);
                      *(double *)&v162 = (double)(v43 - v144);
                      v105 = _mm_cvtsi32_si128((int)v10 - v40);
                      v106 = *((_QWORD *)a2 + 4);
                      *((_QWORD *)&v162 + 1) = *(_OWORD *)&_mm_cvtepi32_pd(v105);
                      v163 = (float)(v138 - v139);
                      v107 = CAnimationEngine::AddToStoryboard(
                               v141,
                               v106,
                               v104,
                               i,
                               0,
                               *(_QWORD *)&v35,
                               *(_QWORD *)&v36,
                               &v164,
                               &v162,
                               3,
                               v137,
                               0,
                               0LL,
                               0LL,
                               0);
                      ThemeAnimationTransform = v107;
                      if ( v107 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v107, 0x3CAu, 0LL);
                        goto LABEL_50;
                      }
                    }
                    else
                    {
                      v108 = 1;
                      v109 = 0;
                      if ( ((_DWORD)v6[4] & 0x1000) != 0 )
                      {
                        v108 = 2;
                        v110 = (double)(((int)v158 + v42 - v38 - (int)v159) / 2);
                      }
                      else
                      {
                        v110 = v6[5];
                      }
                      *(double *)&v162 = v110;
                      if ( ((_DWORD)v6[4] & 0x2000) != 0 )
                      {
                        v108 = 3;
                        v111 = (double)((DWORD1(v158) + v41 - v140 - v44) / 2);
                        v109 = 1;
                      }
                      else
                      {
                        v111 = v6[6];
                      }
                      *((double *)&v162 + 1) = v111;
                      if ( ((_DWORD)v6[4] & 0x4000) != 0 )
                      {
                        v108 = 4;
                        v112 = v138 - v139;
                        v109 = 2;
                      }
                      else
                      {
                        v112 = v6[7];
                      }
                      v5 = v137;
                      v12 = i;
                      v113 = *((unsigned int *)a2 + 4);
                      v114 = *((_QWORD *)a2 + 4);
                      v163 = v112;
                      v115 = CAnimationEngine::AddToStoryboard(
                               v141,
                               v114,
                               v113,
                               i,
                               v109,
                               *(_QWORD *)&v35,
                               *(_QWORD *)&v36,
                               &v164,
                               &v162,
                               3,
                               v137,
                               v108,
                               0LL,
                               0LL,
                               0);
                      ThemeAnimationTransform = v115;
                      if ( v115 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v115, 0x3FEu, 0LL);
                        goto LABEL_50;
                      }
                    }
                  }
                }
                else
                {
                  if ( (v46 & 2) != 0 )
                  {
                    v116 = v6[7];
                    *(double *)v147.m128i_i64 = v116;
                    v117 = v6[8];
                    *(double *)&v147.m128i_i64[1] = v117;
                  }
                  else
                  {
                    v116 = 0.0;
                    v147 = 0LL;
                    *(_QWORD *)&v117 = *(_OWORD *)&_mm_unpackhi_pd((__m128d)0LL, (__m128d)0LL);
                  }
                  v118 = v6[5];
                  *(double *)&v146 = v118;
                  v119 = v6[6];
                  *((double *)&v146 + 1) = v119;
                  if ( v129 )
                  {
                    v147.m128i_i64[0] = *(_QWORD *)&v116 ^ _xmm;
                    v147.m128i_i64[1] = *(_QWORD *)&v117 ^ _xmm;
                    *(_QWORD *)&v146 = *(_QWORD *)&v118 ^ _xmm;
                    *((_QWORD *)&v146 + 1) = *(_QWORD *)&v119 ^ _xmm;
                  }
                  v120 = *((_DWORD *)v6 + 10);
                  v5 = v137;
                  v12 = i;
                  v121 = *(_DWORD **)(*((_QWORD *)a2 + 5) + 8 * v154);
                  v121[19] = *((_DWORD *)v6 + 9);
                  v121[20] = v120;
                  v121[21] = 0;
                  v122 = CAnimationEngine::AddToStoryboard(
                           v141,
                           *((_QWORD *)a2 + 4),
                           *((unsigned int *)a2 + 4),
                           i,
                           3,
                           *(_QWORD *)&v35,
                           *(_QWORD *)&v36,
                           &v147,
                           &v146,
                           2,
                           v5,
                           0,
                           0LL,
                           0LL,
                           0);
                  ThemeAnimationTransform = v122;
                  if ( v122 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v122, 0x3ACu, 0LL);
                    goto LABEL_50;
                  }
                }
              }
              else
              {
                if ( (v46 & 1) != 0 )
                {
                  v56 = v151;
                  v55 = v143;
                }
                else
                {
                  if ( (v46 & 2) != 0 )
                    v55 = v6[6];
                  else
                    v55 = v143;
                  v56 = v6[5];
                }
                v5 = v137;
                v12 = i;
                v57 = *((unsigned int *)a2 + 4);
                v58 = *((_QWORD *)a2 + 4);
                v157 = v55;
                v156 = v56;
                v59 = CAnimationEngine::AddToStoryboard(
                        v141,
                        v58,
                        v57,
                        i,
                        5,
                        *(_QWORD *)&v35,
                        *(_QWORD *)&v36,
                        &v157,
                        &v156,
                        1,
                        v137,
                        0,
                        0LL,
                        0LL,
                        0);
                ThemeAnimationTransform = v59;
                if ( v59 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v59, 0x475u, 0LL);
                  goto LABEL_50;
                }
              }
            }
            else
            {
              if ( (v46 & 1) != 0 )
              {
                v147 = si128;
                if ( v38 == (_DWORD)v159 )
                  v78 = FLOAT_1_0;
                else
                  v78 = (float)(v42 - v158) / (float)(v38 - v159);
                *(double *)&v146 = v78;
                if ( v140 == v44 )
                  v79 = FLOAT_1_0;
                else
                  v79 = (float)(v41 - DWORD1(v158)) / (float)(v140 - v44);
                *((double *)&v146 + 1) = v79;
              }
              else
              {
                if ( (v46 & 2) != 0 )
                {
                  *(double *)v147.m128i_i64 = v6[7];
                  *(double *)&v147.m128i_i64[1] = v6[8];
                }
                else
                {
                  v147 = si128;
                }
                *(double *)&v146 = v6[5];
                *((double *)&v146 + 1) = v6[6];
              }
              if ( LODWORD(v136) )
              {
                v67 = v6[10];
                v68 = v6[9];
              }
              else
              {
                v67 = FLOAT_0_5;
                v68 = FLOAT_0_5;
              }
              v5 = v137;
              v12 = i;
              v69 = *(float **)(*((_QWORD *)a2 + 5) + 8 * v154);
              v126 = v137;
              v69[16] = v68;
              v69[17] = v67;
              v69[18] = 0.0;
              v70 = CAnimationEngine::AddToStoryboard(
                      v141,
                      *((_QWORD *)a2 + 4),
                      *((unsigned int *)a2 + 4),
                      i,
                      4,
                      *(_QWORD *)&v35,
                      *(_QWORD *)&v36,
                      &v147,
                      &v146,
                      2,
                      v126,
                      0,
                      0LL,
                      0LL,
                      0);
              ThemeAnimationTransform = v70;
              if ( v70 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v70, 0x386u, 0LL);
                goto LABEL_50;
              }
            }
          }
          else
          {
            if ( (v46 & 1) != 0 )
            {
              v147 = 0LL;
              *(double *)&v146 = (double)(v43 - v144);
              *((double *)&v146 + 1) = (double)((int)v10 - v40);
            }
            v71 = v145;
            v72 = v152;
            if ( v145 )
            {
              v123 = v153 + *(double *)&v147.m128i_i64[v152];
              v153 = 0.0;
              *(double *)&v147.m128i_i64[v152] = v123;
            }
            if ( v128 )
            {
              v124 = *((double *)&v146 + v72) + v155;
              v155 = *((double *)&v146 + v72);
              *((double *)&v146 + v72) = v124;
            }
            v5 = v137;
            v73 = v141;
            v12 = i;
            v74 = CAnimationEngine::AddToStoryboard(
                    v141,
                    *((_QWORD *)a2 + 4),
                    *((unsigned int *)a2 + 4),
                    i,
                    0,
                    *(_QWORD *)&v35,
                    *(_QWORD *)&v36,
                    &v147,
                    &v146,
                    2,
                    v137,
                    0,
                    (unsigned __int64)&v153 & -(__int64)v71,
                    (unsigned __int64)&v155 & -(__int64)(v128 != 0),
                    v72);
            ThemeAnimationTransform = v74;
            if ( v74 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v74, 0x340u, 0LL);
              goto LABEL_50;
            }
            if ( v130 )
            {
              for ( j = 0LL; j < 4; ++j )
                *((double *)v167 + j) = (double)*((int *)&v160 + j);
              for ( k = 0LL; k < 4; ++k )
                *((double *)v166 + k) = (double)*((int *)&v161 + k);
              v77 = CAnimationEngine::AddToStoryboard(
                      v73,
                      *((_QWORD *)a2 + 4),
                      *((unsigned int *)a2 + 4),
                      i,
                      6,
                      *(_QWORD *)&v35,
                      *(_QWORD *)&v36,
                      v167,
                      v166,
                      4,
                      v5,
                      0,
                      0LL,
                      0LL,
                      0);
              ThemeAnimationTransform = v77;
              if ( v77 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v77, 0x355u, 0LL);
                goto LABEL_50;
              }
            }
          }
          v28 = v131;
LABEL_44:
          v32 = v135 + 1;
          continue;
        }
      }
      v10 = (unsigned int)(v40 + v45 - v44);
      goto LABEL_35;
    }
    break;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v34, 0x2CFu, 0LL);
LABEL_50:
  CDisplayBlackCurtainAnimatedVisual::operator delete(v6, (const struct std::nothrow_t *)v10);
LABEL_73:
  if ( v5 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(v5, (const struct std::nothrow_t *)v10);
LABEL_75:
  if ( v150 )
    ((void (__fastcall *)(struct IUIAnimationStoryboard2 *))v150->lpVtbl->Release)(v150);
  return ThemeAnimationTransform;
}
