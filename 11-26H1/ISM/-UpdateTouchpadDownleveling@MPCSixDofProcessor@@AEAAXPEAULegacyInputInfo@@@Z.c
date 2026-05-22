/*
 * XREFs of ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C2128
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1800241E0 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputI.c)
 * Callees:
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800244EC (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x180024524 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x180024D74 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 *     ?length@?$_WChar_traits@G@std@@SA_KPEBG@Z @ 0x180025A0C (-length@-$_WChar_traits@G@std@@SA_KPEBG@Z.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x180025DA0 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BB00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007AFE8 (--$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     _o_sqrtf_0 @ 0x18009AB9C (_o_sqrtf_0.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B1CCC (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ?GetLastScrollVelocityAvg@MPCGestureHandlerManager@@QEAAMV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B1EB8 (-GetLastScrollVelocityAvg@MPCGestureHandlerManager@@QEAAMV-$com_ptr_t@UIMPCInputProviderBase@@Ue.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B2008 (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?IsWorkspaceScrolling@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B208C (-IsWorkspaceScrolling@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 *     ??1?$unique_ptr@VMPCSpatialGestureRecognizerHandler@@U?$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@@std@@QEAA@XZ @ 0x1800BD024 (--1-$unique_ptr@VMPCSpatialGestureRecognizerHandler@@U-$default_delete@VMPCSpatialGestureRecogni.c)
 *     ??$?4U?$default_delete@VMPCButtonHoldHelper@@@std@@$0A@@?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800BF110 (--$-4U-$default_delete@VMPCButtonHoldHelper@@@std@@$0A@@-$unique_ptr@VMPCButtonHoldHelper@@U-$de.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BF168 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ??$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BF1B4 (--$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$.c)
 *     ??$make_unique@VMPCButtonHoldHelper@@M$0A@@std@@YA?AV?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@0@$$QEAM@Z @ 0x1800BF368 (--$make_unique@VMPCButtonHoldHelper@@M$0A@@std@@YA-AV-$unique_ptr@VMPCButtonHoldHelper@@U-$defau.c)
 *     ?GetButtonHoldHelper@MPCSlateDeadzoneHelper@@QEAA?BV?$shared_ptr@VMPCButtonHoldHelper@@@std@@XZ @ 0x1800BFA70 (-GetButtonHoldHelper@MPCSlateDeadzoneHelper@@QEAA-BV-$shared_ptr@VMPCButtonHoldHelper@@@std@@XZ.c)
 *     ?EndGesture@MPCSixDofProcessor@@AEAAXXZ @ 0x1801C03EC (-EndGesture@MPCSixDofProcessor@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCSixDofProcessor::UpdateTouchpadDownleveling(MPCSixDofProcessor *this, struct LegacyInputInfo *a2)
{
  char v4; // r13
  MPCButtonHoldHelper *v5; // r15
  __int64 v6; // r12
  struct MPCGestureHandlerManager *Instance; // rbx
  __int64 *v8; // rax
  char v9; // dl
  char v10; // r12
  _QWORD *ButtonHoldHelper; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  const char *v15; // r9
  struct MPCGestureHandlerManager *v16; // rbx
  __int64 *v17; // rax
  bool IsWorkspaceScrolling; // al
  char v19; // bl
  char v20; // r15
  __int64 v21; // rcx
  __int64 v22; // rdx
  char v23; // bl
  __int64 v24; // r8
  const char *v25; // r9
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  struct MPCGestureHandlerManager *v30; // rbx
  __int64 *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r9
  __int64 v35; // rdx
  std::_Ref_count_base *v36; // rcx
  __int64 v37; // r8
  const char *v38; // r9
  char v39; // bl
  float v40; // xmm6_4
  __int64 v41; // r9
  float v42; // xmm6_4
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  const char *v46; // r9
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  const char *v51; // r9
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  const char *v56; // r9
  float v57; // xmm7_4
  float v58; // xmm6_4
  struct MPCConstantManager *v59; // rbx
  float v60; // xmm6_4
  __int64 v61; // rdx
  __int64 v62; // rcx
  char v63; // r15
  float v64; // xmm1_4
  struct MPCGestureHandlerManager *v65; // rbx
  __int64 *v66; // rax
  bool v67; // al
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  const char *v72; // r9
  __int64 v73; // r9
  __int64 v74; // rax
  struct MPCGestureHandlerManager *v75; // rbx
  __int64 *v76; // rax
  __int64 v77; // r8
  const char *v78; // r9
  float v79; // xmm7_4
  float v80; // xmm6_4
  struct MPCConstantManager *v81; // rbx
  float v82; // xmm6_4
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  const char *v86; // r9
  unsigned int v87; // ebx
  __int64 v88; // r9
  MPCGestureHandlerManager *v89; // rbx
  __int64 *v90; // rax
  const char *v91; // r9
  struct MPCGestureHandlerManager *v92; // rbx
  __int64 *v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  struct MPCGestureHandlerManager *v96; // rbx
  __int64 *v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rcx
  struct MPCGestureHandlerManager *v100; // rbx
  __int64 *v101; // rax
  float v102; // xmm6_4
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  const char *v106; // r9
  __int64 v107; // r9
  __int64 *v108; // rax
  __int128 v109; // [rsp+20h] [rbp-40h] BYREF
  __int64 v110; // [rsp+30h] [rbp-30h] BYREF
  std::_Ref_count_base *v111; // [rsp+38h] [rbp-28h]
  __int64 v112; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v113; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v114; // [rsp+B0h] [rbp+50h] BYREF

  LODWORD(v112) = 0;
  v4 = 0;
  v5 = (MPCButtonHoldHelper *)*((_QWORD *)this + 515);
  v6 = *((_QWORD *)a2 + 2);
  Instance = MPCGestureHandlerManager::GetInstance((__int64)this, (__int64)a2);
  v8 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
         &v112,
         ((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  v9 = !MPCGestureHandlerManager::IsWorkspaceScrolling((__int64)Instance, v8) || *((_BYTE *)this + 3666);
  MPCButtonHoldHelper::UpdateState(v5, v9, v6);
  *((_DWORD *)a2 + 218) = *((_DWORD *)a2 + 61);
  *((_DWORD *)a2 + 219) = *((_DWORD *)a2 + 62);
  v10 = 0;
  *((_DWORD *)a2 + 214) = 0;
  ButtonHoldHelper = MPCSlateDeadzoneHelper::GetButtonHoldHelper(*((_QWORD *)this + 519), &v109);
  LODWORD(v112) = 1;
  if ( !*(_BYTE *)(*ButtonHoldHelper + 8LL)
    || (v16 = MPCGestureHandlerManager::GetInstance(v13, v12),
        v17 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                &v113,
                ((unsigned __int64)this + 24) & -(__int64)(this != 0LL)),
        IsWorkspaceScrolling = MPCGestureHandlerManager::IsWorkspaceScrolling((__int64)v16, v17),
        v19 = 1,
        IsWorkspaceScrolling) )
  {
    v19 = 0;
  }
  v20 = 0;
  v21 = *((_QWORD *)&v109 + 1);
  if ( *((_QWORD *)&v109 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v109 + 1));
  if ( v19 )
  {
    v23 = *(_BYTE *)(*MPCSlateDeadzoneHelper::GetButtonHoldHelper(*((_QWORD *)this + 519), &v109) + 10LL);
    v26 = *((_QWORD *)&v109 + 1);
    if ( *((_QWORD *)&v109 + 1) )
      std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v109 + 1));
    MPCConstantManager::GetInstance(v26, v22, v24, v25);
    *(_QWORD *)&v109 = L"IsTouchpadClickingEnabled";
    *((_QWORD *)&v109 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"IsTouchpadClickingEnabled");
    if ( (unsigned __int8)MPCConstantManager::GetConstant<bool>(
                            v27,
                            ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
                            &v109)
      && (v23 || *(_BYTE *)(*((_QWORD *)this + 519) + 13LL)) )
    {
      v30 = MPCGestureHandlerManager::GetInstance(v29, v28);
      v31 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
              &v112,
              ((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
      v33 = MPCGestureHandlerManager::IsInjecting((__int64)v30, v31) != 0 ? 7 : 1;
      *((_DWORD *)a2 + 214) = v33;
LABEL_54:
      *((_BYTE *)this + 3666) = 1;
LABEL_55:
      *((_OWORD *)a2 + 55) = *(_OWORD *)((char *)a2 + 252);
      *((_DWORD *)a2 + 224) = *((_DWORD *)a2 + 68);
      v89 = MPCGestureHandlerManager::GetInstance(v33, v32);
      v90 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
              &v112,
              ((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
      MPCGestureHandlerManager::DownLevelTo2D(v89, a2, v90, v91);
      *((_BYTE *)this + 3677) = 1;
      return;
    }
    return;
  }
  MPCConstantManager::GetInstance(v21, v12, v14, v15);
  *(_QWORD *)&v109 = L"IsTouchpadTouchScrollingEnabled";
  *((_QWORD *)&v109 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"IsTouchpadTouchScrollingEnabled");
  if ( !(unsigned __int8)MPCConstantManager::GetConstant<bool>(
                           v34,
                           ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
                           &v109)
    || !*((_BYTE *)this + 3676)
    || *((_DWORD *)this + 918) == 2
    || (v20 = 2, v39 = 1,
                 *(_BYTE *)(*MPCSlateDeadzoneHelper::GetButtonHoldHelper(*((_QWORD *)this + 519), &v110) + 12LL)) )
  {
    v39 = 0;
  }
  if ( (v20 & 2) != 0 )
  {
    v36 = v111;
    if ( v111 )
      std::_Ref_count_base::_Decref(v111);
  }
  if ( v39 )
  {
    v40 = *((float *)this + 1056) + *((float *)this + 1071);
    MPCConstantManager::GetInstance((__int64)v36, v35, v37, v38);
    *(_QWORD *)&v109 = L"TouchpadScrollTouchSpeedFactor";
    *((_QWORD *)&v109 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"TouchpadScrollTouchSpeedFactor");
    *((float *)a2 + 215) = MPCConstantManager::GetConstant<float>(
                             v41,
                             ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
                             &v109)
                         * v40;
    v42 = *((float *)this + 1072) + *((float *)this + 1057);
    MPCConstantManager::GetInstance(v44, v43, v45, v46);
    *(_QWORD *)&v109 = L"TouchpadScrollTouchSpeedFactor";
    *((_QWORD *)&v109 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"TouchpadScrollTouchSpeedFactor");
    *((float *)a2 + 216) = MPCConstantManager::GetConstant<float>(
                             v47,
                             ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
                             &v109)
                         * v42;
    MPCConstantManager::GetInstance(v49, v48, v50, v51);
    *(_QWORD *)&v109 = L"TouchpadScrollInvert";
    *((_QWORD *)&v109 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"TouchpadScrollInvert");
    if ( (unsigned __int8)MPCConstantManager::GetConstant<bool>(
                            v52,
                            ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
                            &v109) )
      *((float *)a2 + 216) = *((float *)a2 + 216) * -1.0;
    v57 = *((float *)this + 1056) + *((float *)this + 1071);
    v58 = *((float *)this + 1057) + *((float *)this + 1072);
    v59 = MPCConstantManager::GetInstance(v54, v53, v55, v56);
    *(_QWORD *)&v109 = L"TouchpadScrollTouchVelocityMin";
    *((_QWORD *)&v109 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"TouchpadScrollTouchVelocityMin");
    v60 = o_sqrtf_0((float)(v58 * v58) + (float)(v57 * v57));
    if ( v60 <= MPCConstantManager::GetConstant<float>(
                  (__int64)v59,
                  ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
                  &v109) )
    {
      v63 = 0;
      v64 = *((float *)this + 1072) + *((float *)this + 1057);
      *((float *)this + 1071) = *((float *)this + 1056) + *((float *)this + 1071);
      *((float *)this + 1072) = v64;
    }
    else
    {
      v63 = 1;
    }
    if ( v63
      && *((_DWORD *)this + 918) != 3
      && (float)((float)(*((float *)this + 1059) * *((float *)this + 1057))
               + (float)(*((float *)this + 1058) * *((float *)this + 1056))) >= 0.0 )
    {
      v10 = 1;
    }
    v65 = MPCGestureHandlerManager::GetInstance(v62, v61);
    v66 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
            &v112,
            ((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
    v67 = MPCGestureHandlerManager::IsWorkspaceScrolling((__int64)v65, v66);
    v33 = 0LL;
    if ( !v67 || v63 )
    {
      if ( !v10 )
        goto LABEL_41;
      *(_QWORD *)((char *)this + 4284) = 0LL;
      *((_BYTE *)this + 3666) = 0;
    }
    else
    {
      *(_QWORD *)((char *)a2 + 860) = 0LL;
      *((_BYTE *)this + 3666) = 1;
    }
    v4 = 1;
LABEL_41:
    *((_DWORD *)a2 + 214) = 5;
    *((_DWORD *)this + 917) = 0;
    if ( !v4 )
      return;
    goto LABEL_55;
  }
  MPCConstantManager::GetInstance((__int64)v36, v35, v37, v38);
  *(_QWORD *)&v109 = L"IsTouchpadTouchScrollingEnabled";
  *((_QWORD *)&v109 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"IsTouchpadTouchScrollingEnabled");
  if ( (unsigned __int8)MPCConstantManager::GetConstant<bool>(
                          v68,
                          ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
                          &v109)
    && (MPCConstantManager::GetInstance(v70, v69, v71, v72),
        *(_QWORD *)&v109 = L"IsTouchpadTouchScrollingStopEnabled",
        *((_QWORD *)&v109 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"IsTouchpadTouchScrollingStopEnabled"),
        (unsigned __int8)MPCConstantManager::GetConstant<bool>(
                           v73,
                           ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
                           &v109))
    && !*((_BYTE *)this + 3666)
    && *((_BYTE *)this + 3676)
    && (v74 = *((_QWORD *)this + 515), *(_BYTE *)(v74 + 8))
    && !*(_BYTE *)(v74 + 9)
    && (v75 = MPCGestureHandlerManager::GetInstance(v70, v69),
        v76 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                &v112,
                ((unsigned __int64)this + 24) & -(__int64)(this != 0LL)),
        !MPCGestureHandlerManager::IsInjecting((__int64)v75, v76)) )
  {
    ++*((_DWORD *)this + 917);
    v79 = *((float *)this + 1048) - *((float *)this + 1054);
    v80 = *((float *)this + 1049) - *((float *)this + 1055);
    v81 = MPCConstantManager::GetInstance(v70, v69, v77, v78);
    *(_QWORD *)&v109 = L"TouchpadStopMaxDelta";
    *((_QWORD *)&v109 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"TouchpadStopMaxDelta");
    v82 = (float)(int)o_sqrtf_0((float)(v80 * v80) + (float)(v79 * v79));
    if ( v82 > MPCConstantManager::GetConstant<float>(
                 (__int64)v81,
                 ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
                 &v109) )
      *((_DWORD *)this + 917) = 0;
    v87 = *((_DWORD *)this + 917);
    MPCConstantManager::GetInstance(v84, v83, v85, v86);
    *(_QWORD *)&v109 = L"TouchpadNumFramesStopScroll";
    *((_QWORD *)&v109 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"TouchpadNumFramesStopScroll");
    if ( v87 >= (unsigned int)MPCConstantManager::GetConstant<unsigned long>(
                                v88,
                                ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
                                &v109) )
    {
      *((_DWORD *)a2 + 214) = 1;
      goto LABEL_54;
    }
  }
  else
  {
    v92 = MPCGestureHandlerManager::GetInstance(v70, v69);
    v93 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
            &v112,
            ((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
    if ( MPCGestureHandlerManager::IsInjecting((__int64)v92, v93) || *((_BYTE *)this + 3677) )
    {
      v96 = MPCGestureHandlerManager::GetInstance(v95, v94);
      v97 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
              &v112,
              (__int64)this + 24);
      LOBYTE(v96) = MPCGestureHandlerManager::IsWorkspaceScrolling((__int64)v96, v97);
      MPCSixDofProcessor::EndGesture(this);
      if ( (_BYTE)v96 )
      {
        v100 = MPCGestureHandlerManager::GetInstance(v99, v98);
        v101 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                 &v113,
                 (__int64)this + 24);
        LODWORD(v102) = MPCGestureHandlerManager::GetLastScrollVelocityAvg((__int64)v100, v101).m128_u32[0] & _xmm;
        MPCConstantManager::GetInstance(v104, v103, v105, v106);
        *(_QWORD *)&v109 = L"TouchpadNotScrollingMultiplier";
        *((_QWORD *)&v109 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"TouchpadNotScrollingMultiplier");
        *(float *)&v112 = MPCConstantManager::GetConstant<float>(
                            v107,
                            ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
                            &v109)
                        * v102;
        v108 = std::make_unique<MPCButtonHoldHelper,float,0>(&v114, (float *)&v112);
        std::unique_ptr<MPCButtonHoldHelper>::operator=<std::default_delete<MPCButtonHoldHelper>,0>(
          (__int64)this + 4120,
          v108);
        std::unique_ptr<MPCSpatialGestureRecognizerHandler>::~unique_ptr<MPCSpatialGestureRecognizerHandler>(&v114);
      }
    }
  }
}
