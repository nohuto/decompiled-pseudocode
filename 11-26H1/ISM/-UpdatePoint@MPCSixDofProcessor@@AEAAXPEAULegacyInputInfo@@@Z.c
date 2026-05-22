/*
 * XREFs of ?UpdatePoint@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x180024590
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1800241E0 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputI.c)
 * Callees:
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x180024D74 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 *     ?length@?$_WChar_traits@G@std@@SA_KPEBG@Z @ 0x180025A0C (-length@-$_WChar_traits@G@std@@SA_KPEBG@Z.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x180025DA0 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BB00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x180096DD4 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 *     _o_sqrtf_0 @ 0x18009AB9C (_o_sqrtf_0.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BF168 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ?GetButtonHoldHelper@MPCSlateDeadzoneHelper@@QEAA?BV?$shared_ptr@VMPCButtonHoldHelper@@@std@@XZ @ 0x1800BFA70 (-GetButtonHoldHelper@MPCSlateDeadzoneHelper@@QEAA-BV-$shared_ptr@VMPCButtonHoldHelper@@@std@@XZ.c)
 *     ?IsPointInHorizontalQuadrant@@YA_NNUfloat2@Numerics@Foundation@Windows@@@Z @ 0x1801C0AEC (-IsPointInHorizontalQuadrant@@YA_NNUfloat2@Numerics@Foundation@Windows@@@Z.c)
 *     ?ResetRayLength@MPCSixDofProcessor@@AEAAXXZ @ 0x1801C162C (-ResetRayLength@MPCSixDofProcessor@@AEAAXXZ.c)
 */

void __fastcall MPCSixDofProcessor::UpdatePoint(MPCSixDofProcessor *this, struct LegacyInputInfo *a2)
{
  _BYTE *v2; // rsi
  char v5; // r14
  int v6; // eax
  bool v7; // r15
  __m128 v8; // xmm0
  float v9; // xmm6_4
  __int64 v10; // r8
  __int64 v11; // r9
  bool v12; // dl
  MPCButtonHoldHelper *v13; // rcx
  char v14; // si
  char v15; // r10
  char v16; // dl
  char v17; // r10
  int v18; // xmm1_4
  unsigned __int64 v19; // rsi
  std::_Ref_count_base *v20; // rax
  float v21; // xmm6_4
  __int64 v22; // r9
  std::_Ref_count_base *v23; // rax
  float v24; // xmm6_4
  __int64 v25; // r9
  float v26; // xmm1_4
  __m128 v27; // xmm9
  __m128 v28; // xmm11
  __m128 v29; // xmm0
  __m128 v30; // xmm10
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  double v34; // xmm1_8
  __int64 v35; // r9
  __int64 v36; // r9
  float v37; // xmm6_4
  float v38; // xmm7_4
  struct MPCConstantManager *Instance; // rbx
  float v40; // xmm0_4
  __m128 v41; // xmm6
  __m128 v42; // xmm7
  __int64 v43; // r9
  __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  __int64 v46; // r9
  int v47; // eax
  unsigned __int64 v48; // xmm0_8
  __m128 v49; // xmm2
  __m128 v50; // xmm1
  __m128 v51; // xmm2
  __m128 v52; // xmm1
  __int64 v53; // r8
  __int64 v54; // r9
  float v55; // xmm0_4
  __m128 v56; // xmm2
  __m128 v57; // xmm1
  float v58; // xmm1_4
  float v59; // xmm0_4
  float v60; // xmm2_4
  float v61; // xmm1_4
  const wchar_t *v62; // [rsp+38h] [rbp-39h] BYREF
  std::_Ref_count_base *v63[2]; // [rsp+40h] [rbp-31h]
  unsigned __int64 v64; // [rsp+D8h] [rbp+67h]
  unsigned __int64 v65; // [rsp+E0h] [rbp+6Fh]

  v2 = (char *)this + 10808;
  v5 = 0;
  *((_DWORD *)this + 1042) = *((_DWORD *)a2 + 567);
  v6 = *((_DWORD *)a2 + 574);
  *((_DWORD *)this + 1053) = *((_DWORD *)a2 + 575);
  *((_DWORD *)this + 1052) = v6;
  *((_DWORD *)this + 1043) = *((_DWORD *)a2 + 570) & *((_DWORD *)a2 + 569);
  if ( (*((_BYTE *)a2 + 2280) & 4) == 0 || (v7 = 1, *v2) )
    v7 = 0;
  v8 = (__m128)*((unsigned int *)a2 + 76);
  MPCSlateDeadzoneHelper::UpdateState(
    *((MPCSlateDeadzoneHelper **)this + 519),
    v7,
    *((_QWORD *)a2 + 2),
    *((float *)a2 + 61),
    *((float *)a2 + 62),
    v8.m128_f32[0]);
  if ( *((_BYTE *)a2 + 2323) )
  {
    v9 = *((float *)a2 + 578) - *((float *)this + 1044);
    MPCConstantManager::GetInstance();
    v62 = L"TriggerSmoothingFactor";
    v63[0] = (std::_Ref_count_base *)std::_WChar_traits<unsigned short>::length(L"TriggerSmoothingFactor");
    v8.m128_f32[0] = (float)(MPCConstantManager::GetConstant<float>(v11, v10 & -(__int64)(this != 0LL), &v62) * v9)
                   + *((float *)this + 1044);
  }
  else
  {
    v8 = 0LL;
  }
  *((_DWORD *)this + 1044) = v8.m128_i32[0];
  if ( (*((_BYTE *)this + 4172) & 8) == 0 || (v12 = 1, *v2) )
    v12 = 0;
  v13 = (MPCButtonHoldHelper *)*((_QWORD *)this + 514);
  *((_BYTE *)this + 10802) = v12;
  MPCButtonHoldHelper::UpdateState(v13, v12, *((_QWORD *)a2 + 2));
  if ( *(_BYTE *)(*((_QWORD *)this + 514) + 10LL)
    || (v5 = 1,
        v14 = 0,
        *(_BYTE *)(*(_QWORD *)MPCSlateDeadzoneHelper::GetButtonHoldHelper(*((_QWORD *)this + 519), &v62) + 10LL)) )
  {
    v14 = 1;
  }
  if ( (v5 & 1) != 0 && v63[0] )
    std::_Ref_count_base::_Decref(v63[0]);
  if ( v14 )
    MPCSixDofProcessor::ResetRayLength(this);
  MPCButtonHoldHelper::UpdateState(
    *((MPCButtonHoldHelper **)this + 517),
    (*((_DWORD *)a2 + 570) & 0x40) != 0,
    *((_QWORD *)a2 + 2));
  MPCButtonHoldHelper::UpdateState(*((MPCButtonHoldHelper **)this + 516), (v15 & 0x40) == 0, *((_QWORD *)a2 + 2));
  v16 = *((_BYTE *)this + 3676);
  if ( v16 )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 516) + 9LL) )
    {
      *((_BYTE *)this + 3676) = 0;
      v16 = 0;
    }
  }
  else if ( *(_BYTE *)(*((_QWORD *)this + 517) + 9LL) )
  {
    *((_BYTE *)this + 3676) = 1;
    v16 = 1;
  }
  MPCButtonHoldHelper::UpdateState(*((MPCButtonHoldHelper **)this + 518), v16, *((_QWORD *)a2 + 2));
  if ( v17 )
  {
    v8 = (__m128)*((unsigned int *)a2 + 574);
    v18 = *((_DWORD *)a2 + 575);
    *((_DWORD *)this + 1048) = v8.m128_i32[0];
    *((_DWORD *)this + 1049) = v18;
    *((_DWORD *)this + 1054) = v8.m128_i32[0];
    *((_DWORD *)this + 1055) = v18;
    *((_DWORD *)this + 918) = 2;
    *((_QWORD *)this + 528) = 0LL;
    *((_QWORD *)this + 529) = 0LL;
    *(_QWORD *)((char *)this + 4284) = 0LL;
  }
  if ( *((_BYTE *)this + 3676) )
  {
    MPCConstantManager::GetInstance();
    v62 = L"TouchpadAxesSmoothingFactor";
    v19 = (unsigned __int64)this + 24;
    v20 = (std::_Ref_count_base *)std::_WChar_traits<unsigned short>::length(L"TouchpadAxesSmoothingFactor");
    v21 = *((float *)this + 1048);
    v63[0] = v20;
    *((float *)this + 1048) = (float)((float)(*((float *)this + 1052) - v21)
                                    * MPCConstantManager::GetConstant<float>(
                                        v22,
                                        ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
                                        &v62))
                            + v21;
    MPCConstantManager::GetInstance();
    v62 = L"TouchpadAxesSmoothingFactor";
    v23 = (std::_Ref_count_base *)std::_WChar_traits<unsigned short>::length(L"TouchpadAxesSmoothingFactor");
    v24 = *((float *)this + 1053) - *((float *)this + 1049);
    v63[0] = v23;
    v8.m128_f32[0] = MPCConstantManager::GetConstant<float>(v25, (char *)this + 24, &v62);
    v28 = v8;
    v28.m128_f32[0] = (float)(v8.m128_f32[0] * v24) + *((float *)this + 1049);
    *((_DWORD *)this + 1049) = v28.m128_i32[0];
    v27 = (__m128)*((unsigned int *)this + 1048);
    v26 = *((float *)this + 1048) - *((float *)this + 1050);
    *((float *)this + 1057) = v28.m128_f32[0] - *((float *)this + 1051);
    *((float *)this + 1056) = v26;
    v27.m128_f32[0] = v27.m128_f32[0] - *((float *)this + 1054);
    v28.m128_f32[0] = v28.m128_f32[0] - *((float *)this + 1055);
    v29 = v28;
    v29.m128_f32[0] = o_sqrtf_0((float)(v28.m128_f32[0] * v28.m128_f32[0]) + (float)(v27.m128_f32[0] * v27.m128_f32[0]));
    v30 = v29;
    if ( v7 )
      *((_DWORD *)this + 918) = 3;
    v31 = *((_DWORD *)this + 918);
    if ( v31 )
    {
      v32 = v31 - 1;
      if ( v32 )
      {
        v33 = v32 - 1;
        if ( v33 )
        {
          if ( v33 == 1 && !*((_BYTE *)this + 3676) )
            *((_DWORD *)this + 918) = 2;
        }
        else
        {
          v34 = (double)(*(_DWORD *)(*((_QWORD *)this + 517) + 32LL) - *(_DWORD *)(*((_QWORD *)this + 517) + 16LL))
              / (double)(int)qword_180253EC8;
          MPCConstantManager::GetInstance();
          v62 = L"TouchpadRailsTimeoutSeconds";
          v63[0] = (std::_Ref_count_base *)std::_WChar_traits<unsigned short>::length(L"TouchpadRailsTimeoutSeconds");
          if ( (float)v34 > MPCConstantManager::GetConstant<float>(v35, v19 & -(__int64)(this != 0LL), &v62) )
          {
            MPCConstantManager::GetInstance();
            v62 = L"TouchpadRailsMinDistanceTraveled";
            v63[0] = (std::_Ref_count_base *)std::_WChar_traits<unsigned short>::length(L"TouchpadRailsMinDistanceTraveled");
            if ( v30.m128_f32[0] > MPCConstantManager::GetConstant<float>(v36, (char *)this + 24, &v62) )
            {
              v37 = *((float *)this + 1054);
              v38 = *((float *)this + 1055);
              Instance = MPCConstantManager::GetInstance();
              v62 = L"TouchpadRailsMinDistance";
              v63[0] = (std::_Ref_count_base *)std::_WChar_traits<unsigned short>::length(L"TouchpadRailsMinDistance");
              v40 = o_sqrtf_0((float)(v38 * v38) + (float)(v37 * v37));
              if ( v40 <= MPCConstantManager::GetConstant<float>(Instance, v19 & -(__int64)(this != 0LL), &v62) )
              {
                MPCConstantManager::GetInstance();
                v62 = L"TouchpadRailsDirectionDegrees";
                v63[0] = (std::_Ref_count_base *)std::_WChar_traits<unsigned short>::length(L"TouchpadRailsDirectionDegrees");
                MPCConstantManager::GetConstant<float>(v46, (char *)this + 24, &v62);
                v45 = _mm_unpacklo_ps(v27, v28).m128_u64[0];
              }
              else
              {
                v41 = (__m128)*((unsigned int *)this + 1054);
                v42 = (__m128)*((unsigned int *)this + 1055);
                MPCConstantManager::GetInstance();
                v62 = L"TouchpadRailsPressDegrees";
                v63[0] = (std::_Ref_count_base *)std::_WChar_traits<unsigned short>::length(L"TouchpadRailsPressDegrees");
                MPCConstantManager::GetConstant<float>(v43, (char *)this + 24, &v62);
                v45 = _mm_unpacklo_ps(v41, v42).m128_u64[0];
              }
              v47 = (unsigned __int8)IsPointInHorizontalQuadrant(v44, v45) ^ 1;
              *((_DWORD *)this + 918) = v47;
              if ( v47 )
                v48 = _mm_unpacklo_ps((__m128)0LL, v30).m128_u64[0];
              else
                v48 = _mm_unpacklo_ps(v30, (__m128)0LL).m128_u64[0];
              *((_QWORD *)this + 528) = v48;
              if ( v47 )
                v27.m128_i32[0] = v28.m128_i32[0];
              if ( v27.m128_f32[0] < 0.0 )
              {
                *((float *)this + 1056) = *(float *)&v48 * -1.0;
                *((float *)this + 1057) = *((float *)&v48 + 1) * -1.0;
              }
            }
          }
        }
      }
      else
      {
        *((_DWORD *)this + 1056) = 0;
      }
    }
    else
    {
      *((_DWORD *)this + 1057) = 0;
    }
  }
  else
  {
    *((_QWORD *)this + 528) = 0LL;
  }
  if ( o_sqrtf_0(
         (float)(*((float *)this + 1057) * *((float *)this + 1057))
       + (float)(*((float *)this + 1056) * *((float *)this + 1056))) > 0.0 )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 518) + 9LL) )
    {
      v49 = (__m128)*((unsigned __int64 *)this + 529);
      v50 = _mm_mul_ps(v49, v49);
      v50.m128_f32[0] = v50.m128_f32[0] + _mm_shuffle_ps(v50, v50, 85).m128_f32[0];
      v65 = _mm_div_ps(v49, _mm_sqrt_ps(_mm_shuffle_ps(v50, v50, 0))).m128_u64[0];
      v51 = (__m128)*((unsigned __int64 *)this + 528);
      v52 = _mm_mul_ps(v51, v51);
      v52.m128_f32[0] = v52.m128_f32[0] + _mm_shuffle_ps(v52, v52, 85).m128_f32[0];
      v64 = _mm_div_ps(v51, _mm_sqrt_ps(_mm_shuffle_ps(v52, v52, 0))).m128_u64[0];
      MPCConstantManager::GetInstance();
      v62 = L"TouchpadDeltaSmoothingFactor";
      v63[0] = (std::_Ref_count_base *)std::_WChar_traits<unsigned short>::length(L"TouchpadDeltaSmoothingFactor");
      v55 = MPCConstantManager::GetConstant<float>(v54, v53 & -(__int64)(this != 0LL), &v62);
      v51.m128_f32[0] = (float)((float)(*((float *)&v64 + 1) - *((float *)&v65 + 1)) * v55) + *((float *)this + 1059);
      *((float *)this + 1058) = (float)((float)(*(float *)&v64 - *(float *)&v65) * v55) + *((float *)this + 1058);
      *((_DWORD *)this + 1059) = v51.m128_i32[0];
    }
    else
    {
      v56 = (__m128)*((unsigned __int64 *)this + 528);
      v57 = _mm_mul_ps(v56, v56);
      v57.m128_f32[0] = v57.m128_f32[0] + _mm_shuffle_ps(v57, v57, 85).m128_f32[0];
      *((_QWORD *)this + 529) = _mm_div_ps(v56, _mm_sqrt_ps(_mm_shuffle_ps(v57, v57, 0))).m128_u64[0];
    }
  }
  v58 = *((float *)this + 1045);
  v59 = (float)(v58 * *((float *)this + 1067)) + *((float *)this + 1064);
  v60 = (float)(v58 * *((float *)this + 1065)) + *((float *)this + 1062);
  v61 = (float)(v58 * *((float *)this + 1066)) + *((float *)this + 1063);
  *((float *)this + 1068) = v60;
  *((float *)this + 1069) = v61;
  *((float *)this + 1070) = v59;
  *((_QWORD *)this + 525) = *((_QWORD *)this + 524);
}
