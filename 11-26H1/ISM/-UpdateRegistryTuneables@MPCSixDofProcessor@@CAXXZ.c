/*
 * XREFs of ?UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ @ 0x1801C1A54
 * Callers:
 *     _lambda_2ab80ba63dcc212dafbb4e4695138308_::operator() @ 0x1801BFF6C (_lambda_2ab80ba63dcc212dafbb4e4695138308_--operator().c)
 *     wistd::__function::__func__lambda_8a62f5b69e88a23bdde8affb13e85828__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x1801C00D0 (wistd--__function--__func__lambda_8a62f5b69e88a23bdde8affb13e85828__void___cdecl(en_ea_1801C00D0.c)
 * Callees:
 *     ?length@?$_WChar_traits@G@std@@SA_KPEBG@Z @ 0x180025A0C (-length@-$_WChar_traits@G@std@@SA_KPEBG@Z.c)
 *     ??$GetStaticConstant@K@MPCConstantManager@@QEAAKW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180025A24 (--$GetStaticConstant@K@MPCConstantManager@@QEAAKW4InputType@@V-$basic_string_view@GU-$char_trait.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x180025DA0 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ??$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800775A0 (--$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@V-$basic_string_view@GU-$char_trait.c)
 *     ??$?0K$0A@$0A@@?$variant@K_NM@std@@QEAA@$$QEAK@Z @ 0x18009815C (--$-0K$0A@$0A@@-$variant@K_NM@std@@QEAA@$$QEAK@Z.c)
 *     ?ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@V?$variant@K_NM@4@@Z @ 0x1800B372C (-ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@V-$basic_string_view@GU-$char_traits@G@std.c)
 *     ??$MPCSixDofProcessor_HomeEventTuneablesChanged@MMMMMMMMMMMMMMMMMMMK@ISMTracing@@SAX$$QEAM000000000000000000$$QEAK@Z @ 0x1801BE934 (--$MPCSixDofProcessor_HomeEventTuneablesChanged@MMMMMMMMMMMMMMMMMMMK@ISMTracing@@SAX$$QEAM000000.c)
 *     _lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator() @ 0x1801C0010 (_lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_--operator().c)
 */

void MPCSixDofProcessor::UpdateRegistryTuneables(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  const char *v3; // r9
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  const char *v10; // r9
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  const char *v15; // r9
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  const char *v20; // r9
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  const char *v25; // r9
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  const char *v30; // r9
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  const char *v35; // r9
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  const char *v40; // r9
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  const char *v45; // r9
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  const char *v50; // r9
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  const char *v55; // r9
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  const char *v60; // r9
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  const char *v65; // r9
  __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  const char *v70; // r9
  __int64 v71; // r9
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  const char *v75; // r9
  __int64 v76; // r9
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  const char *v80; // r9
  __int64 v81; // r9
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  const char *v85; // r9
  __int64 v86; // r9
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  const char *v90; // r9
  __int64 v91; // r9
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  const char *v95; // r9
  __int64 v96; // r9
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  const char *v100; // r9
  __int64 v101; // r9
  __m128i v102; // [rsp+A0h] [rbp-80h] BYREF
  float v103; // [rsp+B0h] [rbp-70h] BYREF
  float v104; // [rsp+B4h] [rbp-6Ch] BYREF
  float v105; // [rsp+B8h] [rbp-68h] BYREF
  float v106; // [rsp+BCh] [rbp-64h] BYREF
  float v107; // [rsp+C0h] [rbp-60h] BYREF
  float v108; // [rsp+C4h] [rbp-5Ch] BYREF
  float v109; // [rsp+C8h] [rbp-58h] BYREF
  float v110; // [rsp+CCh] [rbp-54h] BYREF
  float v111; // [rsp+D0h] [rbp-50h] BYREF
  float v112; // [rsp+D4h] [rbp-4Ch] BYREF
  float v113; // [rsp+D8h] [rbp-48h] BYREF
  float v114; // [rsp+DCh] [rbp-44h] BYREF
  float v115; // [rsp+E0h] [rbp-40h] BYREF
  float v116; // [rsp+E4h] [rbp-3Ch] BYREF
  float v117; // [rsp+E8h] [rbp-38h] BYREF
  float v118; // [rsp+ECh] [rbp-34h] BYREF
  float v119; // [rsp+F0h] [rbp-30h] BYREF
  float v120[19]; // [rsp+F4h] [rbp-2Ch] BYREF
  int pvData; // [rsp+150h] [rbp+30h] BYREF
  DWORD pcbData; // [rsp+158h] [rbp+38h] BYREF
  unsigned int Static; // [rsp+160h] [rbp+40h] BYREF
  float v124; // [rsp+168h] [rbp+48h] BYREF

  pvData = 0;
  v102.m128i_i64[0] = (__int64)&pvData;
  pcbData = 4;
  v102.m128i_i64[1] = (__int64)&pcbData;
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v102,
    L"HomeMaxLinearVelocity_X",
    (__int64)L"HomeMaximumLinearVelocity_X");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v102,
    L"HomeMaxLinearVelocity_Y",
    (__int64)L"HomeMaximumLinearVelocity_Y");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v102,
    L"HomeMaxLinearVelocity_Z",
    (__int64)L"HomeMaximumLinearVelocity_Z");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v102,
    L"HomeMaxAngularVelocity_X",
    (__int64)L"HomeMaximumAngularVelocity_X");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v102,
    L"HomeMaxAngularVelocity_Y",
    (__int64)L"HomeMaximumAngularVelocity_Y");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v102,
    L"HomeMaxAngularVelocity_Z",
    (__int64)L"HomeMaximumAngularVelocity_Z");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v102,
    L"HomeMaxLinearAcceleration_X",
    (__int64)L"HomeMaximumLinearAcceleration_X");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v102,
    L"HomeMaxLinearAcceleration_Y",
    (__int64)L"HomeMaximumLinearAcceleration_Y");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v102,
    L"HomeMaxLinearAcceleration_Z",
    (__int64)L"HomeMaximumLinearAcceleration_Z");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v102,
    L"HomeMaxAngularAcceleration_X",
    (__int64)L"HomeMaximumAngularAcceleration_X");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v102,
    L"HomeMaxAngularAcceleration_Y",
    (__int64)L"HomeMaximumAngularAcceleration_Y");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v102,
    L"HomeMaxAngularAcceleration_Z",
    (__int64)L"HomeMaximumAngularAcceleration_Z");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v102,
    L"HomeMaxWeightedDistance_X",
    (__int64)L"HomeMaximumWeightedDistance_X");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v102,
    L"HomeMaxWeightedDistance_Y",
    (__int64)L"HomeMaximumWeightedDistance_Y");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v102,
    L"HomeMaxWeightedDistance_Z",
    (__int64)L"HomeMaximumWeightedDistance_Z");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v102,
    L"HomeDistanceWeight",
    (__int64)L"HomeDistanceWeight");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v102,
    L"HomeAllowTimeBetweenClicksInMS",
    (__int64)L"HomeAllowTimeBetweenClicksInSec");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v102,
    L"HomeSecondClickLinearMultiplier",
    (__int64)L"HomeSecondClickLinearMultiplier");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v102,
    L"HomeSecondClickAngularMultiplier",
    (__int64)L"HomeSecondClickAngularMultiplier");
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\ISM\\6dof",
          L"HomeCancelExceedThresholdMaxCount",
          0x10u,
          0LL,
          &pvData,
          &pcbData) )
  {
    MPCConstantManager::GetInstance(v1, v0, v2, v3);
    std::variant<unsigned long,bool,float>::variant<unsigned long,bool,float>((__int64)&Static, &pvData);
    v102.m128i_i64[0] = (__int64)L"HomeCancelExceedThresholdMaxCount";
    v102.m128i_i64[1] = std::_WChar_traits<unsigned short>::length((__int64)L"HomeCancelExceedThresholdMaxCount");
    MPCConstantManager::ChangeConstant(v5, 0x2000LL, &v102, v4);
  }
  MPCConstantManager::GetInstance(v1, v0, v2, v3);
  v102.m128i_i64[0] = (__int64)L"HomeCancelExceedThresholdMaxCount";
  v102.m128i_i64[1] = std::_WChar_traits<unsigned short>::length((__int64)L"HomeCancelExceedThresholdMaxCount");
  Static = MPCConstantManager::GetStaticConstant<unsigned long>(v6, 0x2000LL, (__int128 *)v102.m128i_i8);
  MPCConstantManager::GetInstance(v8, v7, v9, v10);
  v102.m128i_i64[0] = (__int64)L"HomeSecondClickAngularMultiplier";
  v102.m128i_i64[1] = std::_WChar_traits<unsigned short>::length((__int64)L"HomeSecondClickAngularMultiplier");
  v124 = MPCConstantManager::GetStaticConstant<float>(v11, 0x2000LL, (__int128 *)v102.m128i_i8);
  MPCConstantManager::GetInstance(v13, v12, v14, v15);
  v102.m128i_i64[0] = (__int64)L"HomeSecondClickLinearMultiplier";
  v102.m128i_i64[1] = std::_WChar_traits<unsigned short>::length((__int64)L"HomeSecondClickLinearMultiplier");
  v103 = MPCConstantManager::GetStaticConstant<float>(v16, 0x2000LL, (__int128 *)v102.m128i_i8);
  MPCConstantManager::GetInstance(v18, v17, v19, v20);
  v102.m128i_i64[0] = (__int64)L"HomeAllowTimeBetweenClicksInSec";
  v102.m128i_i64[1] = std::_WChar_traits<unsigned short>::length((__int64)L"HomeAllowTimeBetweenClicksInSec");
  v104 = MPCConstantManager::GetStaticConstant<float>(v21, 0x2000LL, (__int128 *)v102.m128i_i8);
  MPCConstantManager::GetInstance(v23, v22, v24, v25);
  v102.m128i_i64[0] = (__int64)L"HomeDistanceWeight";
  v102.m128i_i64[1] = std::_WChar_traits<unsigned short>::length((__int64)L"HomeDistanceWeight");
  v105 = MPCConstantManager::GetStaticConstant<float>(v26, 0x2000LL, (__int128 *)v102.m128i_i8);
  MPCConstantManager::GetInstance(v28, v27, v29, v30);
  v102.m128i_i64[0] = (__int64)L"HomeMaximumWeightedDistance_Z";
  v102.m128i_i64[1] = std::_WChar_traits<unsigned short>::length((__int64)L"HomeMaximumWeightedDistance_Z");
  v106 = MPCConstantManager::GetStaticConstant<float>(v31, 0x2000LL, (__int128 *)v102.m128i_i8);
  MPCConstantManager::GetInstance(v33, v32, v34, v35);
  v102.m128i_i64[0] = (__int64)L"HomeMaximumWeightedDistance_Y";
  v102.m128i_i64[1] = std::_WChar_traits<unsigned short>::length((__int64)L"HomeMaximumWeightedDistance_Y");
  v107 = MPCConstantManager::GetStaticConstant<float>(v36, 0x2000LL, (__int128 *)v102.m128i_i8);
  MPCConstantManager::GetInstance(v38, v37, v39, v40);
  v102.m128i_i64[0] = (__int64)L"HomeMaximumWeightedDistance_X";
  v102.m128i_i64[1] = std::_WChar_traits<unsigned short>::length((__int64)L"HomeMaximumWeightedDistance_X");
  v108 = MPCConstantManager::GetStaticConstant<float>(v41, 0x2000LL, (__int128 *)v102.m128i_i8);
  MPCConstantManager::GetInstance(v43, v42, v44, v45);
  v102.m128i_i64[0] = (__int64)L"HomeMaximumLinearAcceleration_Z";
  v102.m128i_i64[1] = std::_WChar_traits<unsigned short>::length((__int64)L"HomeMaximumLinearAcceleration_Z");
  v109 = MPCConstantManager::GetStaticConstant<float>(v46, 0x2000LL, (__int128 *)v102.m128i_i8);
  MPCConstantManager::GetInstance(v48, v47, v49, v50);
  v102.m128i_i64[0] = (__int64)L"HomeMaximumLinearAcceleration_Y";
  v102.m128i_i64[1] = std::_WChar_traits<unsigned short>::length((__int64)L"HomeMaximumLinearAcceleration_Y");
  v110 = MPCConstantManager::GetStaticConstant<float>(v51, 0x2000LL, (__int128 *)v102.m128i_i8);
  MPCConstantManager::GetInstance(v53, v52, v54, v55);
  v102.m128i_i64[0] = (__int64)L"HomeMaximumLinearAcceleration_X";
  v102.m128i_i64[1] = std::_WChar_traits<unsigned short>::length((__int64)L"HomeMaximumLinearAcceleration_X");
  v111 = MPCConstantManager::GetStaticConstant<float>(v56, 0x2000LL, (__int128 *)v102.m128i_i8);
  MPCConstantManager::GetInstance(v58, v57, v59, v60);
  v102.m128i_i64[0] = (__int64)L"HomeMaximumAngularAcceleration_Z";
  v102.m128i_i64[1] = std::_WChar_traits<unsigned short>::length((__int64)L"HomeMaximumAngularAcceleration_Z");
  v112 = MPCConstantManager::GetStaticConstant<float>(v61, 0x2000LL, (__int128 *)v102.m128i_i8);
  MPCConstantManager::GetInstance(v63, v62, v64, v65);
  v102.m128i_i64[0] = (__int64)L"HomeMaximumAngularAcceleration_Y";
  v102.m128i_i64[1] = std::_WChar_traits<unsigned short>::length((__int64)L"HomeMaximumAngularAcceleration_Y");
  v113 = MPCConstantManager::GetStaticConstant<float>(v66, 0x2000LL, (__int128 *)v102.m128i_i8);
  MPCConstantManager::GetInstance(v68, v67, v69, v70);
  v102.m128i_i64[0] = (__int64)L"HomeMaximumAngularAcceleration_X";
  v102.m128i_i64[1] = std::_WChar_traits<unsigned short>::length((__int64)L"HomeMaximumAngularAcceleration_X");
  v114 = MPCConstantManager::GetStaticConstant<float>(v71, 0x2000LL, (__int128 *)v102.m128i_i8);
  MPCConstantManager::GetInstance(v73, v72, v74, v75);
  v102.m128i_i64[0] = (__int64)L"HomeMaximumLinearVelocity_Z";
  v102.m128i_i64[1] = std::_WChar_traits<unsigned short>::length((__int64)L"HomeMaximumLinearVelocity_Z");
  v115 = MPCConstantManager::GetStaticConstant<float>(v76, 0x2000LL, (__int128 *)v102.m128i_i8);
  MPCConstantManager::GetInstance(v78, v77, v79, v80);
  v102.m128i_i64[0] = (__int64)L"HomeMaximumLinearVelocity_Y";
  v102.m128i_i64[1] = std::_WChar_traits<unsigned short>::length((__int64)L"HomeMaximumLinearVelocity_Y");
  v116 = MPCConstantManager::GetStaticConstant<float>(v81, 0x2000LL, (__int128 *)v102.m128i_i8);
  MPCConstantManager::GetInstance(v83, v82, v84, v85);
  v102.m128i_i64[0] = (__int64)L"HomeMaximumLinearVelocity_X";
  v102.m128i_i64[1] = std::_WChar_traits<unsigned short>::length((__int64)L"HomeMaximumLinearVelocity_X");
  v117 = MPCConstantManager::GetStaticConstant<float>(v86, 0x2000LL, (__int128 *)v102.m128i_i8);
  MPCConstantManager::GetInstance(v88, v87, v89, v90);
  v102.m128i_i64[0] = (__int64)L"HomeMaximumAngularVelocity_Z";
  v102.m128i_i64[1] = std::_WChar_traits<unsigned short>::length((__int64)L"HomeMaximumAngularVelocity_Z");
  v118 = MPCConstantManager::GetStaticConstant<float>(v91, 0x2000LL, (__int128 *)v102.m128i_i8);
  MPCConstantManager::GetInstance(v93, v92, v94, v95);
  v102.m128i_i64[0] = (__int64)L"HomeMaximumAngularVelocity_Y";
  v102.m128i_i64[1] = std::_WChar_traits<unsigned short>::length((__int64)L"HomeMaximumAngularVelocity_Y");
  v119 = MPCConstantManager::GetStaticConstant<float>(v96, 0x2000LL, (__int128 *)v102.m128i_i8);
  MPCConstantManager::GetInstance(v98, v97, v99, v100);
  v102.m128i_i64[0] = (__int64)L"HomeMaximumAngularVelocity_X";
  v102.m128i_i64[1] = std::_WChar_traits<unsigned short>::length((__int64)L"HomeMaximumAngularVelocity_X");
  v120[0] = MPCConstantManager::GetStaticConstant<float>(v101, 0x2000LL, (__int128 *)v102.m128i_i8);
  ISMTracing::MPCSixDofProcessor_HomeEventTuneablesChanged<float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,unsigned long>(
    v120,
    &v119,
    &v118,
    &v117,
    &v116,
    &v115,
    &v114,
    &v113,
    &v112,
    &v111,
    &v110,
    &v109,
    &v108,
    &v107,
    &v106,
    &v105,
    &v104,
    &v103,
    &v124,
    &Static);
}
