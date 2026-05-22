/*
 * XREFs of _lambda_9db3a47598234cc48958c5ce7f83f5e9_::operator() @ 0x1801BE2A4
 * Callers:
 *     std::call_once__lambda_9db3a47598234cc48958c5ce7f83f5e9___ @ 0x1801BE218 (std--call_once__lambda_9db3a47598234cc48958c5ce7f83f5e9___.c)
 * Callees:
 *     ?AddAndPopulateInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@Z @ 0x180022860 (-AddAndPopulateInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV-$map@V-$basic_.c)
 *     ??0?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@1@@Z @ 0x180022ADC (--0-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$variant@K_NM@2@U-$less.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180023B44 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x180025DA0 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@KU?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18008B4E8 (--1-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@KU-$les.c)
 *     ??$?0_N$0A@$0A@@?$variant@K_NM@std@@QEAA@$$QEA_N@Z @ 0x180098170 (--$-0_N$0A@$0A@@-$variant@K_NM@std@@QEAA@$$QEA_N@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18009ACF0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_9db3a47598234cc48958c5ce7f83f5e9_::operator()(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  struct MPCConstantManager *Instance; // rdi
  char v6[16]; // [rsp+20h] [rbp-60h] BYREF
  __m128i v7; // [rsp+30h] [rbp-50h] BYREF
  void *v8[2]; // [rsp+40h] [rbp-40h] BYREF
  char v9[32]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v10[8]; // [rsp+70h] [rbp-10h] BYREF
  __int64 v11; // [rsp+78h] [rbp-8h] BYREF

  Instance = MPCConstantManager::GetInstance((__int64)a1, a2, a3, a4);
  v6[0] = 1;
  std::wstring::wstring((__int64)v9, (__int64)L"AllowDownleveling");
  std::variant<unsigned long,bool,float>::variant<unsigned long,bool,float>(v10, v6);
  v7.m128i_i64[0] = (__int64)v9;
  v7.m128i_i64[1] = (__int64)&v11;
  std::map<std::wstring,std::variant<unsigned long,bool,float>>::map<std::wstring,std::variant<unsigned long,bool,float>>(
    (__int64 *)v8,
    &v7);
  MPCConstantManager::AddAndPopulateInputType(
    (__int64)Instance,
    (*a1 + 24LL) & ((unsigned __int128)-(__int128)(unsigned __int64)*a1 >> 64),
    (__int64)v8);
  std::_Tree<std::_Tmap_traits<std::wstring,unsigned long,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,unsigned long>>,0>>::~_Tree<std::_Tmap_traits<std::wstring,unsigned long,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,unsigned long>>,0>>(v8);
  `eh vector destructor iterator'(
    v9,
    40LL,
    1LL,
    (void (__fastcall *)(char *))std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::~pair<std::wstring const,std::variant<unsigned long,bool,float>>);
}
