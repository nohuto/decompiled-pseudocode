/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@U_PDH_RAW_COUNTER_ITEM_W@@V?$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18033E5D0
 * Callers:
 *     ?GetRawData@GamingOverlayExperienceManager@@AEAAJQEAXQEAKPEAV?$vector@U_PDH_RAW_COUNTER_ITEM_W@@V?$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@std@@@std@@@Z @ 0x180349F38 (-GetRawData@GamingOverlayExperienceManager@@AEAAJQEAXQEAKPEAV-$vector@U_PDH_RAW_COUNTER_ITEM_W@@.c)
 * Callees:
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x1800CDD58 (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@std@@@std@@YAPEAU_PDH_RAW_COUNTER_ITEM_W@@PEAU1@_KAEAV?$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@0@@Z @ 0x18033EB4C (--$_Uninitialized_value_construct_n@V-$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@std@@@std@@YAPEAU_PD.c)
 *     ??1_Reallocation_guard@?$vector@U_PDH_RAW_COUNTER_ITEM_W@@V?$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@std@@@std@@QEAA@XZ @ 0x180342D78 (--1_Reallocation_guard@-$vector@U_PDH_RAW_COUNTER_ITEM_W@@V-$allocator@U_PDH_RAW_COUNTER_ITEM_W@.c)
 *     ?_Change_array@?$vector@U_PDH_RAW_COUNTER_ITEM_W@@V?$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@std@@@std@@AEAAXQEAU_PDH_RAW_COUNTER_ITEM_W@@_K1@Z @ 0x180357B88 (-_Change_array@-$vector@U_PDH_RAW_COUNTER_ITEM_W@@V-$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@std@@@.c)
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 */

__int64 __fastcall std::vector<_PDH_RAW_COUNTER_ITEM_W>::_Resize_reallocate<std::_Value_init_tag>(
        const void **a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v5; // r14
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdx
  unsigned __int64 size_of; // rax
  char *v10; // rax
  void *v11; // rbx
  __int64 v12; // rax
  size_t v13; // r8
  const void *v14; // rdx
  _QWORD v16[3]; // [rsp+20h] [rbp-48h] BYREF
  char *v17; // [rsp+38h] [rbp-30h]
  __int64 v18; // [rsp+40h] [rbp-28h]

  v2 = 0x555555555555555LL;
  if ( a2 > 0x555555555555555LL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v5 = (_BYTE *)a1[1] - (_BYTE *)*a1;
  v6 = 0xAAAAAAAAAAAAAAABuLL * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 4);
  v7 = 0xAAAAAAAAAAAAAAABuLL * (v5 >> 4);
  v8 = v6 >> 1;
  if ( v6 <= 0x555555555555555LL - (v6 >> 1) )
  {
    v2 = v8 + v6;
    if ( v8 + v6 < a2 )
      v2 = a2;
  }
  size_of = std::_Get_size_of_n<48>(v2);
  v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v16[0] = a1;
  v16[2] = v2;
  v17 = &v10[48 * v7];
  v11 = v10;
  v12 = std::_Uninitialized_value_construct_n<std::allocator<_PDH_RAW_COUNTER_ITEM_W>>(v17, a2 - v7);
  v13 = (_BYTE *)a1[1] - (_BYTE *)*a1;
  v14 = *a1;
  v18 = v12;
  memmove_0(v11, v14, v13);
  v16[1] = 0LL;
  std::vector<_PDH_RAW_COUNTER_ITEM_W>::_Change_array(a1, v11, a2, v2);
  return std::vector<_PDH_RAW_COUNTER_ITEM_W>::_Reallocation_guard::~_Reallocation_guard(v16);
}
