/*
 * XREFs of _lambda_ac1ab69820883e1c7555fea4db797a8f_::operator() @ 0x1800BF780
 * Callers:
 *     std::call_once__lambda_ac1ab69820883e1c7555fea4db797a8f___ @ 0x1800BF2DC (std--call_once__lambda_ac1ab69820883e1c7555fea4db797a8f___.c)
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
 */

// Hidden C++ exception states: #wind=8
void __fastcall lambda_ac1ab69820883e1c7555fea4db797a8f_::operator()(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  struct MPCConstantManager *Instance; // rdi
  int v6; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v7[12]; // [rsp+24h] [rbp-DCh] BYREF
  __m128i v8; // [rsp+30h] [rbp-D0h] BYREF
  void *v9[2]; // [rsp+40h] [rbp-C0h] BYREF
  char v10[32]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v11[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v12[40]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v13[40]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v14[40]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v15[32]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v16[8]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v17[40]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v18[32]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v19[8]; // [rsp+160h] [rbp+60h] BYREF
  char v20; // [rsp+168h] [rbp+68h] BYREF

  Instance = MPCConstantManager::GetInstance((__int64)a1, a2, a3, a4);
  v7[0] = 0;
  std::wstring::wstring((__int64)v10, (__int64)L"DisableInputInjection");
  std::variant<unsigned long,bool,float>::variant<unsigned long,bool,float>(v11, v7);
  v6 = 1063675494;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v12,
    (__int64)L"HandGuidanceScoreForPrimary",
    (__int64)&v6);
  v6 = 1106247680;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v13,
    (__int64)L"RayInjectionXYDeadzone1M",
    (__int64)&v6);
  v6 = 1065353216;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v14,
    (__int64)L"RayInjectionTemporalDeadzoneSec",
    (__int64)&v6);
  v6 = 1120403456;
  std::wstring::wstring((__int64)v15, (__int64)L"TouchXYDeadzone1M");
  std::variant<unsigned long,bool,float>::variant<unsigned long,bool,float>((__int64)v16, &v6);
  v6 = 1092616192;
  std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
    (__int64)v17,
    (__int64)L"TouchTemporalDeadzoneSec",
    (__int64)&v6);
  v6 = 25;
  std::wstring::wstring((__int64)v18, (__int64)L"TouchInjectionContactAreaRadius");
  std::variant<unsigned long,bool,float>::variant<unsigned long,bool,float>((__int64)v19, &v6);
  v8.m128i_i64[0] = (__int64)v10;
  v8.m128i_i64[1] = (__int64)&v20;
  std::map<std::wstring,std::variant<unsigned long,bool,float>>::map<std::wstring,std::variant<unsigned long,bool,float>>(
    (__int64 *)v9,
    &v8);
  MPCConstantManager::AddAndPopulateInputType(
    (__int64)Instance,
    (*a1 + 24LL) & ((unsigned __int128)-(__int128)(unsigned __int64)*a1 >> 64),
    (__int64)v9);
  std::_Tree<std::_Tmap_traits<std::wstring,unsigned long,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,unsigned long>>,0>>::~_Tree<std::_Tmap_traits<std::wstring,unsigned long,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,unsigned long>>,0>>(v9);
  `eh vector destructor iterator'(
    v10,
    40LL,
    7LL,
    (void (__fastcall *)(char *))std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::~pair<std::wstring const,std::variant<unsigned long,bool,float>>);
}
