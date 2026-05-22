/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800E64A4
 * Callers:
 *     ?Initialize@LampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800E6D9C (-Initialize@LampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x180011858 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXQEAUColor@UI@Windows@@_K1@Z @ 0x180072E1C (-_Change_array@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXQEAU.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Uninitialized_move@PEAW4GameInputGamepadButtons@@V?$allocator@W4GameInputGamepadButtons@@@std@@@std@@YAPEAW4GameInputGamepadButtons@@QEAW41@0PEAW41@AEAV?$allocator@W4GameInputGamepadButtons@@@0@@Z @ 0x180076AB4 (--$_Uninitialized_move@PEAW4GameInputGamepadButtons@@V-$allocator@W4GameInputGamepadButtons@@@st.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEBA_K_K@Z @ 0x1800981C0 (-_Calculate_growth@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEBA_.c)
 *     ??1_Reallocation_guard@?$vector@KV?$allocator@K@std@@@std@@QEAA@XZ @ 0x1800A97A8 (--1_Reallocation_guard@-$vector@KV-$allocator@K@std@@@std@@QEAA@XZ.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UColor@UI@Windows@@@std@@@std@@YAPEAUColor@UI@Windows@@PEAU123@_KAEAV?$allocator@UColor@UI@Windows@@@0@@Z @ 0x1800E657C (--$_Uninitialized_value_construct_n@V-$allocator@UColor@UI@Windows@@@std@@@std@@YAPEAUColor@UI@W.c)
 */

void __fastcall std::vector<Windows::UI::Color>::_Resize_reallocate<std::_Value_init_tag>(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  unsigned __int64 size_of; // rax
  char *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  void *v10; // rcx
  _QWORD v11[3]; // [rsp+20h] [rbp-38h] BYREF
  char *v12; // [rsp+38h] [rbp-20h]
  __int64 v13; // [rsp+40h] [rbp-18h]

  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v4 = (a1[1] - *a1) >> 2;
  v5 = std::vector<Windows::UI::Color>::_Calculate_growth(a1, a2);
  size_of = std::_Get_size_of_n<4>(v5);
  v11[0] = a1;
  v11[2] = v5;
  v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v12 = &v7[4 * v4];
  v8 = std::_Uninitialized_value_construct_n<std::allocator<Windows::UI::Color>>(v12, a2 - v4);
  v9 = a1[1];
  v10 = (void *)*a1;
  v13 = v8;
  std::_Uninitialized_move<enum GameInputGamepadButtons *>(v10, v9, v7);
  v11[1] = 0LL;
  std::vector<Windows::UI::Color>::_Change_array(a1, (__int64)v7, a2, v5);
  std::vector<unsigned long>::_Reallocation_guard::~_Reallocation_guard((__int64)v11);
}
