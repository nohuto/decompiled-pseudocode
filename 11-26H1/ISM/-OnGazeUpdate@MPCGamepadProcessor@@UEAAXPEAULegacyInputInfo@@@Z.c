/*
 * XREFs of ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1801C3AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x18000BF50 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18000DD50 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180024128 (-OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?IsHovering@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180024414 (-IsHovering@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800244EC (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x180024524 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x180024560 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?length@?$_WChar_traits@G@std@@SA_KPEBG@Z @ 0x180025A0C (-length@-$_WChar_traits@G@std@@SA_KPEBG@Z.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x180025DA0 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x180096DD4 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18009CC62 (memcpy_0.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B1CCC (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B2008 (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?ShouldHandleMPCInput@MPCGamepadInputHelper@@QEAA_NXZ @ 0x1800B2850 (-ShouldHandleMPCInput@MPCGamepadInputHelper@@QEAA_NXZ.c)
 *     ?ShouldUseGazeAndCommit@MPCGamepadInputHelper@@QEAA_NPEAULegacyInputInfo@@@Z @ 0x1800B28A0 (-ShouldUseGazeAndCommit@MPCGamepadInputHelper@@QEAA_NPEAULegacyInputInfo@@@Z.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BF168 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x1800C5BFC (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDow.c)
 *     ?ComputeTimeScale@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1801C3580 (-ComputeTimeScale@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?EndGesture@MPCGamepadProcessor@@AEAAXXZ @ 0x1801C361C (-EndGesture@MPCGamepadProcessor@@AEAAXXZ.c)
 *     ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x1801C44BC (-OrientToGravity@MPCMath@@YA-AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z.c)
 *     ?UpdateScroll@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C52A0 (-UpdateScroll@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?UpdateZoom@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C54F4 (-UpdateZoom@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 */

void __fastcall MPCGamepadProcessor::OnGazeUpdate(unsigned __int64 this, struct LegacyInputInfo *a2)
{
  MPCGamepadProcessor *v2; // r14
  MPCGamepadInputHelper *Instance; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct MPCGestureHandlerManager *v8; // rbx
  _QWORD *v9; // rax
  MPCGamepadInputHelper *v10; // rax
  char ShouldUseGazeAndCommit; // al
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r15
  _OWORD *v15; // rax
  _OWORD *v16; // rcx
  __int64 v17; // rdx
  __int128 v18; // xmm1
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct MPCGestureHandlerManager *v21; // rbx
  __int64 *v22; // rax
  char IsInjecting; // bl
  _OWORD *v24; // rcx
  char *v25; // rdx
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm1
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  MPCGestureHandlerManager *v37; // rbx
  __int64 *v38; // rax
  const char *v39; // r9
  struct MPCGestureHandlerManager *v40; // rbx
  unsigned __int64 v41; // r14
  __int64 *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  struct MPCGestureHandlerManager *v45; // rbx
  _QWORD *v46; // rax
  float v47; // xmm2_4
  float v48; // xmm3_4
  float v49; // xmm5_4
  float v50; // xmm4_4
  float v51; // xmm1_4
  struct MPCHolographicInputManager *v52; // rax
  __int32 v53; // xmm9_4
  float v54; // xmm7_4
  int v55; // xmm6_4
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  const char *v59; // r9
  __int64 v60; // r9
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  const char *v64; // r9
  float v65; // xmm6_4
  __int64 v66; // r9
  float v67; // xmm0_4
  float v68; // xmm1_4
  float v69; // xmm2_4
  float v70; // xmm0_4
  float v71; // xmm6_4
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  const char *v75; // r9
  __int64 v76; // r9
  int v77; // xmm6_4
  __int64 v78; // r9
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  const char *v82; // r9
  float v83; // xmm6_4
  __int64 v84; // r9
  float v85; // xmm0_4
  float v86; // xmm1_4
  float v87; // xmm2_4
  float v88; // xmm0_4
  float v89; // xmm6_4
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  const char *v93; // r9
  __int64 v94; // r9
  float v95; // xmm6_4
  __int64 v96; // r9
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  const char *v100; // r9
  float v101; // xmm6_4
  __int64 v102; // r9
  float v103; // xmm2_4
  float v104; // xmm1_4
  float v105; // xmm0_4
  float v106; // xmm2_4
  float v107; // xmm6_4
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  const char *v111; // r9
  __int64 v112; // r9
  float v113; // xmm6_4
  __int64 v114; // r9
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  const char *v118; // r9
  float v119; // xmm6_4
  __int64 v120; // r9
  int v121; // eax
  __int64 v122; // xmm1_8
  struct MPCGestureHandlerManager *v123; // rbx
  _QWORD *v124; // rax
  __int128 v125; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v126[2]; // [rsp+48h] [rbp-C0h] BYREF
  float v127[16]; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD v128[4]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v129[16]; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v130; // [rsp+E8h] [rbp-20h]
  __int128 v131; // [rsp+F8h] [rbp-10h]
  __int128 v132; // [rsp+108h] [rbp+0h]
  __int128 v133; // [rsp+118h] [rbp+10h]
  char v134; // [rsp+1C8h] [rbp+C0h] BYREF
  int v135; // [rsp+430h] [rbp+328h]
  int v136; // [rsp+440h] [rbp+338h]
  int v137; // [rsp+444h] [rbp+33Ch]

  v2 = (MPCGamepadProcessor *)(this - 32);
  *(_DWORD *)(*(_QWORD *)(this - 32 + 3696) + 8LL) = *((_DWORD *)a2 + 2);
  *(_QWORD *)(*(_QWORD *)(this + 3664) + 16LL) = *((_QWORD *)a2 + 2);
  MPCSlateDeadzoneHelper::UpdateState(
    *(MPCButtonHoldHelper ***)(this + 4256),
    (*(_DWORD *)(this + 3676) & 4) != 0,
    *((_QWORD *)a2 + 2),
    *((float *)a2 + 61),
    *((float *)a2 + 62),
    *((float *)a2 + 76));
  Instance = MPCGamepadInputHelper::GetInstance();
  if ( MPCGamepadInputHelper::ShouldHandleMPCInput(Instance) )
  {
    v10 = MPCGamepadInputHelper::GetInstance();
    ShouldUseGazeAndCommit = MPCGamepadInputHelper::ShouldUseGazeAndCommit(v10, a2);
    *(_BYTE *)(this + 4156) = ShouldUseGazeAndCommit;
    if ( ShouldUseGazeAndCommit && *((_BYTE *)a2 + 240) && MPCInputProviderBase::IsPrimary(this)
      || *(_DWORD *)(this + 4152) )
    {
      v14 = 3LL;
      if ( *((_BYTE *)a2 + 240) )
      {
        v15 = (_OWORD *)(this + 3736);
        v16 = (_OWORD *)((char *)a2 + 240);
        v17 = 3LL;
        do
        {
          *v15 = *v16;
          v15[1] = v16[1];
          v15[2] = v16[2];
          v15[3] = v16[3];
          v15[4] = v16[4];
          v15[5] = v16[5];
          v15[6] = v16[6];
          v15 += 8;
          v18 = v16[7];
          v16 += 8;
          *(v15 - 1) = v18;
          --v17;
        }
        while ( v17 );
        *v15 = *v16;
        v15[1] = v16[1];
      }
      if ( *((_BYTE *)a2 + 242) || *(_DWORD *)(this + 4152) )
      {
        MPCGamepadProcessor::UpdateScroll((MPCGamepadProcessor *)(this - 32), a2);
        MPCGamepadProcessor::UpdateZoom((MPCGamepadProcessor *)(this - 32), a2);
        if ( !*(_DWORD *)(this + 4152) )
        {
          if ( *((_BYTE *)a2 + 240) )
          {
            v21 = MPCGestureHandlerManager::GetInstance(v20, v19);
            v22 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                    v126,
                    this & -(__int64)(this != 32));
            IsInjecting = MPCGestureHandlerManager::IsInjecting((__int64)v21, v22);
            memset_0(v129, 0, 0xBC0uLL);
            v24 = (_OWORD *)((char *)a2 + 240);
            DWORD2(v130) = 3008;
            v25 = &v134;
            do
            {
              v26 = v24[1];
              *(_OWORD *)v25 = *v24;
              v27 = v24[2];
              *((_OWORD *)v25 + 1) = v26;
              v28 = v24[3];
              *((_OWORD *)v25 + 2) = v27;
              v29 = v24[4];
              *((_OWORD *)v25 + 3) = v28;
              v30 = v24[5];
              *((_OWORD *)v25 + 4) = v29;
              v31 = v24[6];
              *((_OWORD *)v25 + 5) = v30;
              v32 = v24[7];
              v24 += 8;
              *((_OWORD *)v25 + 6) = v31;
              v25 += 128;
              *((_OWORD *)v25 - 1) = v32;
              --v14;
            }
            while ( v14 );
            v33 = v24[1];
            *(_OWORD *)v25 = *v24;
            *((_OWORD *)v25 + 1) = v33;
            MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult((__int64)v24, (__int64)v129, 4);
            if ( IsInjecting )
            {
              v36 = *(_QWORD *)(this + 4256);
              v135 = 7;
              if ( !*(_BYTE *)(v36 + 13) )
              {
                v136 = *(_DWORD *)(v36 + 4);
                v137 = *(_DWORD *)(v36 + 8);
              }
            }
            v37 = MPCGestureHandlerManager::GetInstance(v35, v34);
            v38 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                    v126,
                    this & -(__int64)(this != 32));
            MPCGestureHandlerManager::DownLevelTo2D(v37, (struct LegacyInputInfo *)v129, v38, v39);
          }
        }
      }
    }
    else
    {
      v40 = MPCGestureHandlerManager::GetInstance(v13, v12);
      v41 = this & -(__int64)(v2 != 0LL);
      v42 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
              v126,
              v41);
      if ( MPCGestureHandlerManager::IsInjecting((__int64)v40, v42) && (*(_BYTE *)(this + 3676) & 4) == 0
        || (v45 = MPCGestureHandlerManager::GetInstance(v44, v43),
            v46 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                    v126,
                    v41),
            MPCGestureHandlerManager::IsHovering((__int64)v45, v46)) )
      {
        MPCGamepadProcessor::EndGesture((MPCGamepadProcessor *)(this - 32));
      }
    }
    v47 = 0.0;
    if ( (*(_DWORD *)(this + 3676) & 0x400) != 0 )
      v48 = FLOAT_N1_0;
    else
      v48 = 0.0;
    if ( (*(_DWORD *)(this + 3676) & 0x800) != 0 )
      v47 = FLOAT_1_0;
    v49 = (float)(*(float *)(this + 3688) + *(float *)(this + 4184)) * 0.5;
    v50 = (float)(*(float *)(this + 3692) + *(float *)(this + 4188)) * 0.5;
    v51 = (float)((float)(COERCE_FLOAT(*(_DWORD *)(this + 3684) ^ _xmm) + *(float *)(this + 3680))
                + *(float *)(this + 4192))
        * 0.5;
    *(float *)(this + 4196) = (float)((float)(v47 + v48) + *(float *)(this + 4196)) * 0.5;
    *(float *)(this + 4184) = v49;
    *(float *)(this + 4188) = v50;
    *(float *)(this + 4192) = v51;
    v52 = MPCHolographicInputManager::GetInstance();
    memcpy_0(v129, v52, 0xCD0uLL);
    v128[0] = v130;
    v128[1] = v131;
    v128[2] = v132;
    v128[3] = v133;
    MPCMath::OrientToGravity(v127, v128);
    MPCGamepadProcessor::ComputeTimeScale((MPCGamepadProcessor *)(this - 32), a2);
    COERCE_FLOAT(v53 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
    v54 = *(float *)(this + 4232);
    v55 = *(_DWORD *)(this + 4184) & v53;
    MPCConstantManager::GetInstance(v57, v56, v58, v59);
    *(_QWORD *)&v125 = L"ThumbstickDeadzone";
    *((_QWORD *)&v125 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"ThumbstickDeadzone");
    if ( *(float *)&v55 >= MPCConstantManager::GetConstant<float>(v60, this & -(__int64)(this != 32), &v125) )
    {
      v65 = *(float *)(this + 4184);
      MPCConstantManager::GetInstance(v62, v61, v63, v64);
      *(_QWORD *)&v125 = L"PointScaleFactor";
      *((_QWORD *)&v125 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"PointScaleFactor");
      v67 = MPCConstantManager::GetConstant<float>(v66, this & -(__int64)(this != 32), &v125) * v65;
      v68 = (float)((float)(v67 * v127[0]) * v54) + *(float *)(this + 4172);
      v69 = (float)((float)(v67 * v127[1]) * v54) + *(float *)(this + 4176);
      v70 = (float)((float)(v67 * v127[2]) * v54) + *(float *)(this + 4180);
      *(float *)(this + 4172) = v68;
      *(float *)(this + 4176) = v69;
      *(float *)(this + 4180) = v70;
      v71 = *(float *)(this + 4184);
      MPCConstantManager::GetInstance(v73, v72, v74, v75);
      *(_QWORD *)&v125 = L"PointScaleFactor";
      *((_QWORD *)&v125 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"PointScaleFactor");
      *(float *)(this + 4200) = (float)((float)(MPCConstantManager::GetConstant<float>(
                                                  v76,
                                                  this & -(__int64)(this != 32),
                                                  &v125)
                                              * v71)
                                      * v54)
                              + *(float *)(this + 4200);
    }
    v77 = *(_DWORD *)(this + 4188) & v53;
    MPCConstantManager::GetInstance(v62, v61, v63, v64);
    *(_QWORD *)&v125 = L"ThumbstickDeadzone";
    *((_QWORD *)&v125 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"ThumbstickDeadzone");
    if ( *(float *)&v77 >= MPCConstantManager::GetConstant<float>(v78, this & -(__int64)(this != 32), &v125) )
    {
      v83 = *(float *)(this + 4188);
      MPCConstantManager::GetInstance(v80, v79, v81, v82);
      *(_QWORD *)&v125 = L"PointScaleFactor";
      *((_QWORD *)&v125 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"PointScaleFactor");
      v85 = MPCConstantManager::GetConstant<float>(v84, this & -(__int64)(this != 32), &v125) * v83;
      v86 = (float)((float)(v85 * v127[4]) * v54) + *(float *)(this + 4172);
      v87 = (float)((float)(v85 * v127[5]) * v54) + *(float *)(this + 4176);
      v88 = (float)((float)(v85 * v127[6]) * v54) + *(float *)(this + 4180);
      *(float *)(this + 4172) = v86;
      *(float *)(this + 4176) = v87;
      *(float *)(this + 4180) = v88;
      v89 = *(float *)(this + 4188);
      MPCConstantManager::GetInstance(v91, v90, v92, v93);
      *(_QWORD *)&v125 = L"PointScaleFactor";
      *((_QWORD *)&v125 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"PointScaleFactor");
      *(float *)(this + 4204) = (float)((float)(MPCConstantManager::GetConstant<float>(
                                                  v94,
                                                  this & -(__int64)(this != 32),
                                                  &v125)
                                              * v89)
                                      * v54)
                              + *(float *)(this + 4204);
    }
    LODWORD(v95) = *(_DWORD *)(this + 4192) & _xmm;
    MPCConstantManager::GetInstance(v80, v79, v81, v82);
    *(_QWORD *)&v125 = L"ThumbstickDeadzone";
    *((_QWORD *)&v125 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"ThumbstickDeadzone");
    if ( v95 >= MPCConstantManager::GetConstant<float>(v96, this & -(__int64)(this != 32), &v125) )
    {
      v101 = *(float *)(this + 4192);
      MPCConstantManager::GetInstance(v98, v97, v99, v100);
      *(_QWORD *)&v125 = L"PointScaleFactor";
      *((_QWORD *)&v125 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"PointScaleFactor");
      v103 = COERCE_FLOAT(COERCE_UNSIGNED_INT(MPCConstantManager::GetConstant<float>(v102, this & -(__int64)(this != 32), &v125)) ^ _xmm)
           * v101;
      v104 = (float)((float)(v103 * v127[8]) * v54) + *(float *)(this + 4172);
      v105 = (float)((float)(v103 * v127[9]) * v54) + *(float *)(this + 4176);
      v106 = (float)((float)(v103 * v127[10]) * v54) + *(float *)(this + 4180);
      *(float *)(this + 4172) = v104;
      *(float *)(this + 4176) = v105;
      *(float *)(this + 4180) = v106;
      v107 = *(float *)(this + 4192);
      MPCConstantManager::GetInstance(v109, v108, v110, v111);
      *(_QWORD *)&v125 = L"PointScaleFactor";
      *((_QWORD *)&v125 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"PointScaleFactor");
      *(float *)(this + 4208) = (float)((float)(MPCConstantManager::GetConstant<float>(
                                                  v112,
                                                  this & -(__int64)(this != 32),
                                                  &v125)
                                              * v107)
                                      * v54)
                              + *(float *)(this + 4208);
    }
    LODWORD(v113) = *(_DWORD *)(this + 4196) & _xmm;
    MPCConstantManager::GetInstance(v98, v97, v99, v100);
    *(_QWORD *)&v125 = L"ThumbstickDeadzone";
    *((_QWORD *)&v125 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"ThumbstickDeadzone");
    if ( v113 >= MPCConstantManager::GetConstant<float>(v114, this & -(__int64)(this != 32), &v125) )
    {
      v119 = *(float *)(this + 4196);
      MPCConstantManager::GetInstance(v116, v115, v117, v118);
      *(_QWORD *)&v125 = L"PointScaleFactor";
      *((_QWORD *)&v125 + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"PointScaleFactor");
      *(float *)(this + 4212) = (float)((float)(MPCConstantManager::GetConstant<float>(
                                                  v120,
                                                  this & -(__int64)(this != 32),
                                                  &v125)
                                              * v119)
                                      * v54)
                              + *(float *)(this + 4212);
    }
    v121 = *(_DWORD *)(this + 3700);
    v122 = *(_QWORD *)(this + 3692);
    *(_OWORD *)(this + 3704) = *(_OWORD *)(this + 3676);
    *(_QWORD *)(this + 3720) = v122;
    *(_DWORD *)(this + 3728) = v121;
    v123 = MPCGestureHandlerManager::GetInstance(v116, v115);
    v124 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
             v126,
             this & -(__int64)(this != 32));
    MPCGestureHandlerManager::OnGazeUpdate((__int64)v123, v124);
  }
  else if ( *(_DWORD *)(this + 4152)
         || (v8 = MPCGestureHandlerManager::GetInstance(v7, v6),
             v9 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                    v126,
                    this & -(__int64)(v2 != 0LL)),
             MPCGestureHandlerManager::IsHovering((__int64)v8, v9)) )
  {
    MPCGamepadProcessor::EndGesture(v2);
  }
}
