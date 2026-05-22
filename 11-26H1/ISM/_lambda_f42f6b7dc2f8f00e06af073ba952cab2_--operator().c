/*
 * XREFs of _lambda_f42f6b7dc2f8f00e06af073ba952cab2_::operator() @ 0x180023864
 * Callers:
 *     std::call_once__lambda_f42f6b7dc2f8f00e06af073ba952cab2___ @ 0x1800950A0 (std--call_once__lambda_f42f6b7dc2f8f00e06af073ba952cab2___.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x1800221D0 (-IsEdition@@YA_N_K@Z.c)
 *     ?AddAndPopulateInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@Z @ 0x180022860 (-AddAndPopulateInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV-$map@V-$basic_.c)
 *     ??$_Erase_tree_and_orphan@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@1@@Z @ 0x180022A84 (--$_Erase_tree_and_orphan@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_traits.c)
 *     ??0?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@1@@Z @ 0x180022ADC (--0-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$variant@K_NM@2@U-$less.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180023B44 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x180025DA0 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$?0M$0A@$0A@@?$variant@K_NM@std@@QEAA@$$QEAM@Z @ 0x180092BB4 (--$-0M$0A@$0A@@-$variant@K_NM@std@@QEAA@$$QEAM@Z.c)
 *     ??$?0K$0A@$0A@@?$variant@K_NM@std@@QEAA@$$QEAK@Z @ 0x18009815C (--$-0K$0A@$0A@@-$variant@K_NM@std@@QEAA@$$QEAK@Z.c)
 *     ??$?0_N$0A@$0A@@?$variant@K_NM@std@@QEAA@$$QEA_N@Z @ 0x180098170 (--$-0_N$0A@$0A@@-$variant@K_NM@std@@QEAA@$$QEA_N@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18009ACF0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=12
void __fastcall lambda_f42f6b7dc2f8f00e06af073ba952cab2_::operator()(_QWORD *a1)
{
  struct MPCConstantManager *Instance; // rbx
  int v3; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v4[4]; // [rsp+24h] [rbp-DCh] BYREF
  int v5; // [rsp+28h] [rbp-D8h] BYREF
  int v6; // [rsp+2Ch] [rbp-D4h] BYREF
  int v7; // [rsp+30h] [rbp-D0h] BYREF
  int v8; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v9[3]; // [rsp+38h] [rbp-C8h] BYREF
  __m128i v10; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v11[32]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v12[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v13[32]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v14[8]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v15[32]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v16[8]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v17[32]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v18[8]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v19[32]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v20[8]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v21[32]; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v22[8]; // [rsp+148h] [rbp+48h] BYREF
  _BYTE v23[32]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v24[8]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v25[32]; // [rsp+178h] [rbp+78h] BYREF
  _BYTE v26[8]; // [rsp+198h] [rbp+98h] BYREF
  _BYTE v27[32]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v28[8]; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v29[32]; // [rsp+1C8h] [rbp+C8h] BYREF
  _BYTE v30[8]; // [rsp+1E8h] [rbp+E8h] BYREF
  _BYTE v31[32]; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v32[8]; // [rsp+210h] [rbp+110h] BYREF
  char v33; // [rsp+218h] [rbp+118h] BYREF

  v3 = 0;
  v6 = 1056964608;
  v7 = 1056964608;
  v8 = 1053609165;
  v5 = 1043878380;
  if ( IsEdition(10LL) )
  {
    v3 = 2500;
    v6 = 1070134723;
    v7 = 1070134723;
    v8 = 1056964608;
    v5 = 1056964608;
  }
  Instance = MPCConstantManager::GetInstance();
  std::wstring::wstring(v11, L"ActivationDelta");
  std::variant<unsigned long,bool,float>::variant<unsigned long,bool,float>(v12, &v3);
  v3 = 1142292480;
  std::wstring::wstring(v13, L"MouseParams_DeltaToRadiansRatio");
  std::variant<unsigned long,bool,float>::variant<unsigned long,bool,float>(v14, &v3);
  v4[0] = 0;
  std::wstring::wstring(v15, L"MouseParams_UseHitTestMouseReference");
  std::variant<unsigned long,bool,float>::variant<unsigned long,bool,float>(v16, v4);
  v3 = 1053609165;
  std::wstring::wstring(v17, L"MouseParams_DeltaToRadiansRatio_NoHitTestSensitivityCompensationFactor");
  std::variant<unsigned long,bool,float>::variant<unsigned long,bool,float>(v18, &v3);
  v3 = 1056964608;
  std::wstring::wstring(v19, L"MouseParams_ResetCursorDirectionThresholdSeconds");
  std::variant<unsigned long,bool,float>::variant<unsigned long,bool,float>(v20, &v3);
  std::wstring::wstring(v21, L"MouseParams_ResetHorizontalAngleRadians");
  std::variant<unsigned long,bool,float>::variant<unsigned long,bool,float>(v22, &v6);
  std::wstring::wstring(v23, L"MouseParams_ResetVerticalAngleRadians");
  std::variant<unsigned long,bool,float>::variant<unsigned long,bool,float>(v24, &v7);
  std::wstring::wstring(v25, L"MouseParams_ClampHorizontalAngleRadians");
  std::variant<unsigned long,bool,float>::variant<unsigned long,bool,float>(v26, &v8);
  std::wstring::wstring(v27, L"MouseParams_ClampVerticalAngleRadians");
  std::variant<unsigned long,bool,float>::variant<unsigned long,bool,float>(v28, &v5);
  v5 = 982355657;
  std::wstring::wstring(v29, L"MouseParams_PointScaleFactorXY");
  std::variant<unsigned long,bool,float>::variant<unsigned long,bool,float>(v30, &v5);
  v5 = 977574822;
  std::wstring::wstring(v31, L"MouseParams_PointScaleFactorWheel");
  std::variant<unsigned long,bool,float>::variant<unsigned long,bool,float>(v32, &v5);
  v10.m128i_i64[0] = (__int64)v11;
  v10.m128i_i64[1] = (__int64)&v33;
  std::map<std::wstring,std::variant<unsigned long,bool,float>>::map<std::wstring,std::variant<unsigned long,bool,float>>(
    v9,
    &v10);
  MPCConstantManager::AddAndPopulateInputType(
    (__int64)Instance,
    (*a1 + 40LL) & ((unsigned __int128)-(__int128)(unsigned __int64)*a1 >> 64),
    (__int64)v9);
  std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>>::_Erase_tree_and_orphan<std::allocator<std::_Tree_node<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>,void *>>>(
    (__int64)v9,
    (__int64)v9,
    *(__int64 **)(v9[0] + 8));
  std::_Deallocate<16>(v9[0], 72LL);
  `eh vector destructor iterator'(
    v11,
    0x28uLL,
    0xBuLL,
    std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::~pair<std::wstring const,std::variant<unsigned long,bool,float>>);
}
