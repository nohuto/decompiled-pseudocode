/*
 * XREFs of _lambda_223b683404cbbc2b78f554bf36c4ab0d_::operator() @ 0x1801BF808
 * Callers:
 *     std::call_once__lambda_223b683404cbbc2b78f554bf36c4ab0d___ @ 0x1801BEE10 (std--call_once__lambda_223b683404cbbc2b78f554bf36c4ab0d___.c)
 * Callees:
 *     ?AddAndPopulateInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@Z @ 0x180022860 (-AddAndPopulateInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV-$map@V-$basic_.c)
 *     ??0?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@1@@Z @ 0x180022ADC (--0-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$variant@K_NM@2@U-$less.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180023B44 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x180025DA0 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@KU?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18008B4E8 (--1-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@KU-$les.c)
 *     ??$?0AEAY0BD@$$CBGM$0A@@?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@QEAA@AEAY0BD@$$CBG$$QEAM@Z @ 0x180092B7C (--$-0AEAY0BD@$$CBGM$0A@@-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     ??$?0M$0A@$0A@@?$variant@K_NM@std@@QEAA@$$QEAM@Z @ 0x180092BB4 (--$-0M$0A@$0A@@-$variant@K_NM@std@@QEAA@$$QEAM@Z.c)
 *     ??$?0K$0A@$0A@@?$variant@K_NM@std@@QEAA@$$QEAK@Z @ 0x18009815C (--$-0K$0A@$0A@@-$variant@K_NM@std@@QEAA@$$QEAK@Z.c)
 *     ??$?0_N$0A@$0A@@?$variant@K_NM@std@@QEAA@$$QEA_N@Z @ 0x180098170 (--$-0_N$0A@$0A@@-$variant@K_NM@std@@QEAA@$$QEA_N@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18009ACF0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??$?0AEAY0BA@$$CBGM$0A@@?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@QEAA@AEAY0BA@$$CBG$$QEAM@Z @ 0x1801BE848 (--$-0AEAY0BA@$$CBGM$0A@@-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 */

// Hidden C++ exception states: #wind=50
void __fastcall lambda_223b683404cbbc2b78f554bf36c4ab0d_::operator()(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  struct MPCConstantManager *Instance; // rdi
  __int64 v6; // rdx
  int v7; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v8[12]; // [rsp+24h] [rbp-DCh] BYREF
  __m128i v9; // [rsp+30h] [rbp-D0h] BYREF
  void *v10[2]; // [rsp+40h] [rbp-C0h] BYREF
  char v11[40]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v12[40]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v13[32]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v14[8]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v15[32]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v16[8]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v17[40]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v18[40]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v19[40]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v20[40]; // [rsp+168h] [rbp+68h] BYREF
  _BYTE v21[40]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v22[40]; // [rsp+1B8h] [rbp+B8h] BYREF
  _BYTE v23[40]; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE v24[32]; // [rsp+208h] [rbp+108h] BYREF
  _BYTE v25[8]; // [rsp+228h] [rbp+128h] BYREF
  _BYTE v26[40]; // [rsp+230h] [rbp+130h] BYREF
  _BYTE v27[40]; // [rsp+258h] [rbp+158h] BYREF
  _BYTE v28[32]; // [rsp+280h] [rbp+180h] BYREF
  _BYTE v29[8]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v30[40]; // [rsp+2A8h] [rbp+1A8h] BYREF
  _BYTE v31[40]; // [rsp+2D0h] [rbp+1D0h] BYREF
  _BYTE v32[40]; // [rsp+2F8h] [rbp+1F8h] BYREF
  _BYTE v33[32]; // [rsp+320h] [rbp+220h] BYREF
  _BYTE v34[8]; // [rsp+340h] [rbp+240h] BYREF
  _BYTE v35[40]; // [rsp+348h] [rbp+248h] BYREF
  _BYTE v36[40]; // [rsp+370h] [rbp+270h] BYREF
  _BYTE v37[40]; // [rsp+398h] [rbp+298h] BYREF
  _BYTE v38[40]; // [rsp+3C0h] [rbp+2C0h] BYREF
  _BYTE v39[32]; // [rsp+3E8h] [rbp+2E8h] BYREF
  _BYTE v40[8]; // [rsp+408h] [rbp+308h] BYREF
  _BYTE v41[40]; // [rsp+410h] [rbp+310h] BYREF
  _BYTE v42[40]; // [rsp+438h] [rbp+338h] BYREF
  _BYTE v43[32]; // [rsp+460h] [rbp+360h] BYREF
  _BYTE v44[8]; // [rsp+480h] [rbp+380h] BYREF
  _BYTE v45[32]; // [rsp+488h] [rbp+388h] BYREF
  _BYTE v46[8]; // [rsp+4A8h] [rbp+3A8h] BYREF
  _BYTE v47[32]; // [rsp+4B0h] [rbp+3B0h] BYREF
  _BYTE v48[8]; // [rsp+4D0h] [rbp+3D0h] BYREF
  _BYTE v49[40]; // [rsp+4D8h] [rbp+3D8h] BYREF
  _BYTE v50[40]; // [rsp+500h] [rbp+400h] BYREF
  _BYTE v51[40]; // [rsp+528h] [rbp+428h] BYREF
  _BYTE v52[40]; // [rsp+550h] [rbp+450h] BYREF
  _BYTE v53[40]; // [rsp+578h] [rbp+478h] BYREF
  _BYTE v54[40]; // [rsp+5A0h] [rbp+4A0h] BYREF
  _BYTE v55[40]; // [rsp+5C8h] [rbp+4C8h] BYREF
  _BYTE v56[40]; // [rsp+5F0h] [rbp+4F0h] BYREF
  _BYTE v57[40]; // [rsp+618h] [rbp+518h] BYREF
  _BYTE v58[40]; // [rsp+640h] [rbp+540h] BYREF
  _BYTE v59[40]; // [rsp+668h] [rbp+568h] BYREF
  _BYTE v60[40]; // [rsp+690h] [rbp+590h] BYREF
  _BYTE v61[40]; // [rsp+6B8h] [rbp+5B8h] BYREF
  _BYTE v62[40]; // [rsp+6E0h] [rbp+5E0h] BYREF
  _BYTE v63[40]; // [rsp+708h] [rbp+608h] BYREF
  _BYTE v64[40]; // [rsp+730h] [rbp+630h] BYREF
  _BYTE v65[40]; // [rsp+758h] [rbp+658h] BYREF
  _BYTE v66[40]; // [rsp+780h] [rbp+680h] BYREF
  _BYTE v67[40]; // [rsp+7A8h] [rbp+6A8h] BYREF
  _BYTE v68[32]; // [rsp+7D0h] [rbp+6D0h] BYREF
  _BYTE v69[8]; // [rsp+7F0h] [rbp+6F0h] BYREF
  char v70; // [rsp+7F8h] [rbp+6F8h] BYREF

  Instance = MPCConstantManager::GetInstance((__int64)a1, a2, a3, a4);
  v7 = 1056964608;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v11,
    (__int64)L"ThumbstickDeadzone",
    (__int64)&v7);
  v7 = 1036831949;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v12,
    v6,
    &v7);
  v7 = 1106247680;
  std::wstring::wstring((__int64)v13, (__int64)L"TriggerXYDeadzone1M");
  std::variant<unsigned long,bool,float>::variant<unsigned long,bool,float>((__int64)v14, &v7);
  v7 = 1065353216;
  std::wstring::wstring((__int64)v15, (__int64)L"TriggerTemporalDeadzoneSec");
  std::variant<unsigned long,bool,float>::variant<unsigned long,bool,float>((__int64)v16, &v7);
  v7 = 1015222895;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v17,
    (__int64)L"TouchpadReleasedTimeoutSeconds",
    (__int64)&v7);
  v7 = 1015222895;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v18,
    (__int64)L"TouchpadTouchedTimeoutSeconds",
    (__int64)&v7);
  v7 = 0;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v19,
    (__int64)L"TouchpadRailsTimeoutSeconds",
    (__int64)&v7);
  v7 = 1104936960;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v20,
    (__int64)L"TouchpadRailsDirectionDegrees",
    (__int64)&v7);
  v7 = 1110704128;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v21,
    (__int64)L"TouchpadRailsPressDegrees",
    (__int64)&v7);
  v7 = 1061997773;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v22,
    (__int64)L"TouchpadRailsMinDistance",
    (__int64)&v7);
  v7 = 1022739087;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v23,
    (__int64)L"TouchpadRailsMinDistanceTraveled",
    (__int64)&v7);
  v8[0] = 1;
  std::wstring::wstring((__int64)v24, (__int64)L"TouchpadScrollInvert");
  std::variant<unsigned long,bool,float>::variant<unsigned long,bool,float>(v25, v8);
  v7 = 1097859072;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v26,
    (__int64)L"TouchpadXYDeadzone1M",
    (__int64)&v7);
  v7 = 1065353216;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v27,
    (__int64)L"TouchpadTemporalDeadzoneSec",
    (__int64)&v7);
  v7 = 1133903872;
  std::wstring::wstring((__int64)v28, (__int64)L"TouchpadDragSpeedFactor");
  std::variant<unsigned long,bool,float>::variant<unsigned long,bool,float>((__int64)v29, &v7);
  v7 = 1148846080;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v30,
    (__int64)L"TouchpadScrollTouchSpeedFactor",
    (__int64)&v7);
  v7 = 981668463;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v31,
    (__int64)L"TouchpadScrollTouchVelocityMin",
    (__int64)&v7);
  v7 = 1028443341;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v32,
    (__int64)L"TouchpadNotScrollingMultiplier",
    (__int64)&v7);
  v7 = 10;
  std::wstring::wstring((__int64)v33, (__int64)L"TouchpadNumFramesStopScroll");
  std::variant<unsigned long,bool,float>::variant<unsigned long,bool,float>((__int64)v34, &v7);
  v7 = 1016296636;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v35,
    (__int64)L"TouchpadStopMaxDelta",
    (__int64)&v7);
  v7 = 1028443341;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v36,
    (__int64)L"TouchpadAxesSmoothingFactor",
    (__int64)&v7);
  v7 = 1028443341;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v37,
    (__int64)L"TouchpadDeltaSmoothingFactor",
    (__int64)&v7);
  v7 = 1036831949;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v38,
    (__int64)L"TouchpadDeltaSmoothingTimeoutSec",
    (__int64)&v7);
  v7 = 1056964608;
  std::wstring::wstring((__int64)v39, (__int64)L"TriggerSmoothingFactor");
  std::variant<unsigned long,bool,float>::variant<unsigned long,bool,float>((__int64)v40, &v7);
  v7 = 1050253722;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v41,
    (__int64)L"HardTriggerPullDelta",
    (__int64)&v7);
  v7 = 1048576000;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v42,
    (__int64)L"DragModeTriggerTimeInSec",
    (__int64)&v7);
  v8[0] = 1;
  std::wstring::wstring((__int64)v43, (__int64)L"IsTouchpadTouchScrollingEnabled");
  std::variant<unsigned long,bool,float>::variant<unsigned long,bool,float>(v44, v8);
  v8[0] = 1;
  std::wstring::wstring((__int64)v45, (__int64)L"IsTouchpadClickingEnabled");
  std::variant<unsigned long,bool,float>::variant<unsigned long,bool,float>(v46, v8);
  v8[0] = 0;
  std::wstring::wstring((__int64)v47, (__int64)L"IsTouchpadTouchScrollingStopEnabled");
  std::variant<unsigned long,bool,float>::variant<unsigned long,bool,float>(v48, v8);
  v7 = 1060320051;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v49,
    (__int64)L"HomeMaximumLinearVelocity_X",
    (__int64)&v7);
  v7 = 1060320051;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v50,
    (__int64)L"HomeMaximumLinearVelocity_Y",
    (__int64)&v7);
  v7 = 1050253722;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v51,
    (__int64)L"HomeMaximumLinearVelocity_Z",
    (__int64)&v7);
  v7 = 1176256512;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v52,
    (__int64)L"HomeMaximumAngularVelocity_X",
    (__int64)&v7);
  v7 = 1176256512;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v53,
    (__int64)L"HomeMaximumAngularVelocity_Y",
    (__int64)&v7);
  v7 = 1176256512;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v54,
    (__int64)L"HomeMaximumAngularVelocity_Z",
    (__int64)&v7);
  v7 = 1176256512;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v55,
    (__int64)L"HomeMaximumLinearAcceleration_X",
    (__int64)&v7);
  v7 = 1176256512;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v56,
    (__int64)L"HomeMaximumLinearAcceleration_Y",
    (__int64)&v7);
  v7 = 1176256512;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v57,
    (__int64)L"HomeMaximumLinearAcceleration_Z",
    (__int64)&v7);
  v7 = 1176256512;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v58,
    (__int64)L"HomeMaximumAngularAcceleration_X",
    (__int64)&v7);
  v7 = 1176256512;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v59,
    (__int64)L"HomeMaximumAngularAcceleration_Y",
    (__int64)&v7);
  v7 = 1176256512;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v60,
    (__int64)L"HomeMaximumAngularAcceleration_Z",
    (__int64)&v7);
  v7 = 1176256512;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v61,
    (__int64)L"HomeMaximumWeightedDistance_X",
    (__int64)&v7);
  v7 = 1176256512;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v62,
    (__int64)L"HomeMaximumWeightedDistance_Y",
    (__int64)&v7);
  v7 = 1176256512;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v63,
    (__int64)L"HomeMaximumWeightedDistance_Z",
    (__int64)&v7);
  v7 = 1056964608;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v64,
    (__int64)L"HomeDistanceWeight",
    (__int64)&v7);
  v7 = 0;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v65,
    (__int64)L"HomeAllowTimeBetweenClicksInSec",
    (__int64)&v7);
  v7 = 1120403456;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v66,
    (__int64)L"HomeSecondClickLinearMultiplier",
    (__int64)&v7);
  v7 = 1120403456;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v67,
    (__int64)L"HomeSecondClickAngularMultiplier",
    (__int64)&v7);
  v7 = 1;
  std::wstring::wstring((__int64)v68, (__int64)L"HomeCancelExceedThresholdMaxCount");
  std::variant<unsigned long,bool,float>::variant<unsigned long,bool,float>((__int64)v69, &v7);
  v9.m128i_i64[0] = (__int64)v11;
  v9.m128i_i64[1] = (__int64)&v70;
  std::map<std::wstring,std::variant<unsigned long,bool,float>>::map<std::wstring,std::variant<unsigned long,bool,float>>(
    (__int64 *)v10,
    &v9);
  MPCConstantManager::AddAndPopulateInputType(
    (__int64)Instance,
    (*a1 + 24LL) & ((unsigned __int128)-(__int128)(unsigned __int64)*a1 >> 64),
    (__int64)v10);
  std::_Tree<std::_Tmap_traits<std::wstring,unsigned long,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,unsigned long>>,0>>::~_Tree<std::_Tmap_traits<std::wstring,unsigned long,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,unsigned long>>,0>>(v10);
  `eh vector destructor iterator'(
    v11,
    40LL,
    49LL,
    (void (__fastcall *)(char *))std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::~pair<std::wstring const,std::variant<unsigned long,bool,float>>);
}
