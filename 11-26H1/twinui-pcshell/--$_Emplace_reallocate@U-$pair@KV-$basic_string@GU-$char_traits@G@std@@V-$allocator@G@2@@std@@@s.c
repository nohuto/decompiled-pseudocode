/*
 * XREFs of ??$_Emplace_reallocate@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAAPEAU?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@QEAU21@$$QEAU21@@Z @ 0x18033D83C
 * Callers:
 *     ?GetNonServiceProcessListAndIds@GamingOverlayExperienceManager@@AEAAXAEAV?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@K@Z @ 0x1803497CC (-GetNonServiceProcessListAndIds@GamingOverlayExperienceManager@@AEAAXAEAV-$vector@U-$pair@KV-$ba.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x180033808 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1801EABB8 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAU?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@YAPEAU?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@0@@Z @ 0x18033EA0C (--$_Uninitialized_move@PEAU-$pair@KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     ??1_Reallocation_guard@?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@QEAA@XZ @ 0x180342CFC (--1_Reallocation_guard@-$vector@U-$pair@KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2.c)
 *     ?_Change_array@?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAAXQEAU?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@_K1@Z @ 0x180357A78 (-_Change_array@-$vector@U-$pair@KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@.c)
 */

char *__fastcall std::vector<std::pair<unsigned long,std::wstring>>::_Emplace_reallocate<std::pair<unsigned long,std::wstring>>(
        _QWORD *a1,
        __int64 a2,
        _DWORD *a3)
{
  unsigned __int64 v5; // rbx
  __int64 v7; // r14
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  char *v13; // rdi
  char *v14; // r14
  __int64 v15; // rdx
  _DWORD *v16; // r8
  __int64 v17; // rcx
  _QWORD *v19; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v20; // [rsp+30h] [rbp-58h]
  char *v21; // [rsp+38h] [rbp-50h]
  _DWORD *v22; // [rsp+40h] [rbp-48h]

  v5 = 0x666666666666666LL;
  v7 = (a2 - *a1) / 40;
  v8 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(a1[1] - *a1) >> 3);
  if ( v8 == 0x666666666666666LL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v9 = v8 + 1;
  v10 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(a1[2] - *a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 <= 0x666666666666666LL - (v10 >> 1) )
  {
    v5 = v11 + v10;
    if ( v11 + v10 < v9 )
      v5 = v9;
  }
  size_of = std::_Get_size_of_n<40>(v5);
  v19 = a1;
  v20 = v5;
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = &v13[40 * v7];
  *(_DWORD *)v14 = *a3;
  v22 = v14 + 40;
  std::wstring::wstring((__int64)(v14 + 8), (__int64)(a3 + 2));
  v15 = a1[1];
  v16 = v13;
  v17 = *a1;
  v21 = v14;
  if ( a2 != v15 )
  {
    std::_Uninitialized_move<std::pair<unsigned long,std::wstring> *,std::allocator<std::pair<unsigned long,std::wstring>>>(
      v17,
      a2,
      v13);
    v15 = a1[1];
    v16 = v14 + 40;
    v17 = a2;
    v21 = v13;
  }
  std::_Uninitialized_move<std::pair<unsigned long,std::wstring> *,std::allocator<std::pair<unsigned long,std::wstring>>>(
    v17,
    v15,
    v16);
  std::vector<std::pair<unsigned long,std::wstring>>::_Change_array(a1, v13, v9, v5, v19, 0LL, v20, v21, v22);
  std::vector<std::pair<unsigned long,std::wstring>>::_Reallocation_guard::~_Reallocation_guard(&v19);
  return v14;
}
