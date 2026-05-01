/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAAXAEA_K@Z @ 0x18033E494
 * Callers:
 *     ?reserve@?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@QEAAX_K@Z @ 0x180359F9C (-reserve@-$vector@U-$pair@KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@V.c)
 * Callees:
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1801EABB8 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAU?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@YAPEAU?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@0@@Z @ 0x18033EA0C (--$_Uninitialized_move@PEAU-$pair@KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     ??1_Simple_reallocation_guard@?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@QEAA@XZ @ 0x180342DE0 (--1_Simple_reallocation_guard@-$vector@U-$pair@KV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 *     ?_Change_array@?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAAXQEAU?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@_K1@Z @ 0x180357A78 (-_Change_array@-$vector@U-$pair@KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@.c)
 */

__int64 __fastcall std::vector<std::pair<unsigned long,std::wstring>>::_Reallocate<0>(_QWORD *a1, unsigned __int64 *a2)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 size_of; // rax
  void *v6; // rax
  __int64 v7; // rdx
  void *v8; // rbx
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v11; // [rsp+30h] [rbp-18h]
  __int64 v12; // [rsp+38h] [rbp-10h]
  __int64 v13; // [rsp+40h] [rbp-8h]

  v4 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(a1[1] - *a1) >> 3);
  size_of = std::_Get_size_of_n<40>(*a2);
  v6 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v7 = a1[1];
  v8 = v6;
  v11 = *a2;
  std::_Uninitialized_move<std::pair<unsigned long,std::wstring> *,std::allocator<std::pair<unsigned long,std::wstring>>>(
    *a1,
    v7,
    v6);
  std::vector<std::pair<unsigned long,std::wstring>>::_Change_array(a1, v8, v4, *a2, a1, 0LL, v11, v12, v13);
  return std::vector<std::pair<unsigned long,std::wstring>>::_Simple_reallocation_guard::~_Simple_reallocation_guard(&v10);
}
