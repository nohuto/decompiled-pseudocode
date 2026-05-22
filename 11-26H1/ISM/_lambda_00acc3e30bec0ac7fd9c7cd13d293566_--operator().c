/*
 * XREFs of _lambda_00acc3e30bec0ac7fd9c7cd13d293566_::operator() @ 0x1801BF240
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x180024E38 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?length@?$_WChar_traits@G@std@@SA_KPEBG@Z @ 0x180025A0C (-length@-$_WChar_traits@G@std@@SA_KPEBG@Z.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x180025DA0 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BF168 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 */

char __fastcall lambda_00acc3e30bec0ac7fd9c7cd13d293566_::operator()(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  float v4; // xmm1_4
  float v5; // xmm2_4
  __int64 v6; // rdi
  char v7; // bl
  unsigned __int32 v8; // xmm7_4
  int v10; // xmm6_4
  __int64 v11; // rdx
  __int64 v12; // r9
  int v13; // xmm6_4
  __int64 v14; // rdx
  __int64 v15; // r9
  int v16; // xmm6_4
  __int64 v17; // rdx
  __int64 v18; // r9
  int v19; // xmm6_4
  __int64 v20; // rdx
  __int64 v21; // r9
  int v22; // xmm6_4
  __int64 v23; // rdx
  __int64 v24; // r9
  int v25; // xmm6_4
  __int64 v26; // rdx
  __int64 v27; // r9
  char v28; // r13
  int v29; // xmm6_4
  __int64 v30; // rdx
  __int64 v31; // r9
  int v32; // xmm6_4
  __int64 v33; // rdx
  __int64 v34; // r9
  int v35; // xmm6_4
  __int64 v36; // rdx
  __int64 v37; // r9
  char v38; // r12
  __int64 v39; // r14
  int v40; // xmm6_4
  __int64 v41; // rdx
  __int64 v42; // r9
  int v43; // xmm6_4
  __int64 v44; // rdx
  __int64 v45; // r9
  int v46; // xmm6_4
  __int64 v47; // rdx
  __int64 v48; // r9
  char v49; // r15
  int v50; // xmm6_4
  __int64 v51; // rdx
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  const char *v56; // r9
  int v57; // xmm6_4
  __int64 v58; // rdx
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  const char *v63; // r9
  int v64; // xmm6_4
  __int64 v65; // rdx
  __int64 v66; // r9
  char v67; // al
  __int128 v69[3]; // [rsp+20h] [rbp-50h] BYREF
  char v70; // [rsp+A0h] [rbp+30h]

  v6 = a1 + 8;
  v7 = 0;
  v8 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  if ( !*(_BYTE *)(*(_QWORD *)a1 + 101LL) )
    goto LABEL_6;
  v10 = *(_DWORD *)(*(_QWORD *)a1 + 76LL) & v8;
  MPCConstantManager::GetInstance(a1, a2, a3, a4);
  *(_QWORD *)&v69[0] = L"HomeMaximumAngularVelocity_X";
  *((_QWORD *)&v69[0] + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"HomeMaximumAngularVelocity_X");
  if ( *(float *)&v10 > (float)(MPCConstantManager::GetConstant<float>(v12, (v11 + 24) & -(__int64)(v11 != 0), v69) * v5) )
    goto LABEL_5;
  v13 = *(_DWORD *)(*(_QWORD *)a1 + 80LL) & v8;
  MPCConstantManager::GetInstance(a1, a2, a3, a4);
  *(_QWORD *)&v69[0] = L"HomeMaximumAngularVelocity_Y";
  *((_QWORD *)&v69[0] + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"HomeMaximumAngularVelocity_Y");
  if ( *(float *)&v13 > (float)(MPCConstantManager::GetConstant<float>(v15, (v14 + 24) & -(__int64)(v14 != 0), v69) * v5)
    || (v16 = *(_DWORD *)(*(_QWORD *)a1 + 84LL) & v8,
        MPCConstantManager::GetInstance(a1, a2, a3, a4),
        *(_QWORD *)&v69[0] = L"HomeMaximumAngularVelocity_Z",
        *((_QWORD *)&v69[0] + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"HomeMaximumAngularVelocity_Z"),
        *(float *)&v16 > (float)(MPCConstantManager::GetConstant<float>(v18, (v17 + 24) & -(__int64)(v17 != 0), v69) * v5)) )
  {
LABEL_5:
    v70 = 1;
  }
  else
  {
LABEL_6:
    v70 = 0;
  }
  if ( !*(_BYTE *)(*(_QWORD *)a1 + 100LL) )
    goto LABEL_12;
  v19 = *(_DWORD *)(*(_QWORD *)a1 + 64LL) & v8;
  MPCConstantManager::GetInstance(a1, a2, a3, a4);
  *(_QWORD *)&v69[0] = L"HomeMaximumLinearVelocity_X";
  *((_QWORD *)&v69[0] + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"HomeMaximumLinearVelocity_X");
  if ( *(float *)&v19 <= (float)(MPCConstantManager::GetConstant<float>(v21, (v20 + 24) & -(__int64)(v20 != 0), v69) * v4) )
  {
    v22 = *(_DWORD *)(*(_QWORD *)a1 + 68LL) & v8;
    MPCConstantManager::GetInstance(a1, a2, a3, a4);
    *(_QWORD *)&v69[0] = L"HomeMaximumLinearVelocity_Y";
    *((_QWORD *)&v69[0] + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"HomeMaximumLinearVelocity_Y");
    if ( *(float *)&v22 <= (float)(MPCConstantManager::GetConstant<float>(v24, (v23 + 24) & -(__int64)(v23 != 0), v69)
                                 * v4) )
    {
      v25 = *(_DWORD *)(*(_QWORD *)a1 + 72LL) & v8;
      MPCConstantManager::GetInstance(a1, a2, a3, a4);
      *(_QWORD *)&v69[0] = L"HomeMaximumLinearVelocity_Z";
      *((_QWORD *)&v69[0] + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"HomeMaximumLinearVelocity_Z");
      if ( *(float *)&v25 <= (float)(MPCConstantManager::GetConstant<float>(v27, (v26 + 24) & -(__int64)(v26 != 0), v69)
                                   * v4) )
      {
        v6 = a1 + 8;
LABEL_12:
        v28 = 0;
        goto LABEL_13;
      }
    }
  }
  v28 = 1;
LABEL_13:
  if ( !*(_BYTE *)(*(_QWORD *)a1 + 101LL) )
  {
LABEL_18:
    v38 = 0;
    goto LABEL_19;
  }
  v29 = **(_DWORD **)(a1 + 16) & v8;
  MPCConstantManager::GetInstance(a1, a2, a3, a4);
  *(_QWORD *)&v69[0] = L"HomeMaximumAngularAcceleration_X";
  *((_QWORD *)&v69[0] + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"HomeMaximumAngularAcceleration_X");
  if ( *(float *)&v29 <= (float)(MPCConstantManager::GetConstant<float>(v31, (v30 + 24) & -(__int64)(v30 != 0), v69) * v5) )
  {
    v32 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4LL) & v8;
    MPCConstantManager::GetInstance(a1, a2, a3, a4);
    *(_QWORD *)&v69[0] = L"HomeMaximumAngularAcceleration_Y";
    *((_QWORD *)&v69[0] + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"HomeMaximumAngularAcceleration_Y");
    if ( *(float *)&v32 <= (float)(MPCConstantManager::GetConstant<float>(v34, (v33 + 24) & -(__int64)(v33 != 0), v69)
                                 * v5) )
    {
      v35 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 8LL) & v8;
      MPCConstantManager::GetInstance(a1, a2, a3, a4);
      *(_QWORD *)&v69[0] = L"HomeMaximumAngularAcceleration_Z";
      *((_QWORD *)&v69[0] + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"HomeMaximumAngularAcceleration_Z");
      if ( *(float *)&v35 <= (float)(MPCConstantManager::GetConstant<float>(v37, (v36 + 24) & -(__int64)(v36 != 0), v69)
                                   * v5) )
      {
        v6 = a1 + 8;
        goto LABEL_18;
      }
    }
  }
  v38 = 1;
LABEL_19:
  v39 = v6;
  if ( *(_BYTE *)(*(_QWORD *)a1 + 100LL) )
  {
    v40 = **(_DWORD **)(a1 + 24) & v8;
    MPCConstantManager::GetInstance(a1, a2, a3, a4);
    *(_QWORD *)&v69[0] = L"HomeMaximumLinearAcceleration_X";
    *((_QWORD *)&v69[0] + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"HomeMaximumLinearAcceleration_X");
    if ( *(float *)&v40 > (float)(MPCConstantManager::GetConstant<float>(v42, (v41 + 24) & -(__int64)(v41 != 0), v69)
                                * v4) )
      goto LABEL_32;
    v43 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL) & v8;
    MPCConstantManager::GetInstance(a1, a2, a3, a4);
    *(_QWORD *)&v69[0] = L"HomeMaximumLinearAcceleration_Y";
    *((_QWORD *)&v69[0] + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"HomeMaximumLinearAcceleration_Y");
    if ( *(float *)&v43 > (float)(MPCConstantManager::GetConstant<float>(v45, (v44 + 24) & -(__int64)(v44 != 0), v69)
                                * v4)
      || (v46 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) & v8,
          MPCConstantManager::GetInstance(a1, a2, a3, a4),
          *(_QWORD *)&v69[0] = L"HomeMaximumLinearAcceleration_Z",
          *((_QWORD *)&v69[0] + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"HomeMaximumLinearAcceleration_Z"),
          *(float *)&v46 > (float)(MPCConstantManager::GetConstant<float>(v48, (v47 + 24) & -(__int64)(v47 != 0), v69)
                                 * v4)) )
    {
LABEL_32:
      v49 = 1;
      v39 = a1 + 8;
      goto LABEL_25;
    }
    v39 = a1 + 8;
  }
  v49 = 0;
LABEL_25:
  if ( !*(_BYTE *)(*(_QWORD *)v6 + 10801LL) )
    goto LABEL_33;
  v50 = *(_DWORD *)(*(_QWORD *)v6 + 4356LL) & v8;
  MPCConstantManager::GetInstance(a1, a2, a3, a4);
  *(_QWORD *)&v69[0] = L"HomeMaximumWeightedDistance_X";
  *((_QWORD *)&v69[0] + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"HomeMaximumWeightedDistance_X");
  if ( *(float *)&v50 > MPCConstantManager::GetConstant<float>(v52, (v51 + 24) & -(__int64)(v51 != 0), v69) )
    goto LABEL_29;
  v57 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4360LL) & v8;
  MPCConstantManager::GetInstance(v54, v53, v55, v56);
  *(_QWORD *)&v69[0] = L"HomeMaximumWeightedDistance_Y";
  *((_QWORD *)&v69[0] + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"HomeMaximumWeightedDistance_Y");
  if ( *(float *)&v57 > MPCConstantManager::GetConstant<float>(v59, (v58 + 24) & -(__int64)(v58 != 0), v69)
    || (v64 = *(_DWORD *)(*(_QWORD *)v39 + 4364LL) & v8,
        MPCConstantManager::GetInstance(v61, v60, v62, v63),
        *(_QWORD *)&v69[0] = L"HomeMaximumWeightedDistance_Z",
        *((_QWORD *)&v69[0] + 1) = std::_WChar_traits<unsigned short>::length((__int64)L"HomeMaximumWeightedDistance_Z"),
        *(float *)&v64 > MPCConstantManager::GetConstant<float>(v66, (v65 + 24) & -(__int64)(v65 != 0), v69)) )
  {
LABEL_29:
    v67 = 1;
  }
  else
  {
LABEL_33:
    v67 = 0;
  }
  if ( v70 || v28 || v38 || v49 || v67 )
    return 1;
  return v7;
}
