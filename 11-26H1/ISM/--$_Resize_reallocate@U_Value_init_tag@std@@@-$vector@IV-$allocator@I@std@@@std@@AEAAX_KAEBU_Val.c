/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@IV?$allocator@I@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801636DC
 * Callers:
 *     ?InitializeFromBamoBlob@CursorBitmapData@SystemCursors@@QEAAJPEBUCursorBitmapDataHeader@@PEBEI@Z @ 0x1801637C4 (-InitializeFromBamoBlob@CursorBitmapData@SystemCursors@@QEAAJPEBUCursorBitmapDataHeader@@PEBEI@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x180011858 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@IV?$allocator@I@std@@@std@@AEAAXQEAI_K1@Z @ 0x180073594 (-_Change_array@-$vector@IV-$allocator@I@std@@@std@@AEAAXQEAI_K1@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Uninitialized_move@PEAW4GameInputGamepadButtons@@V?$allocator@W4GameInputGamepadButtons@@@std@@@std@@YAPEAW4GameInputGamepadButtons@@QEAW41@0PEAW41@AEAV?$allocator@W4GameInputGamepadButtons@@@0@@Z @ 0x180076AB4 (--$_Uninitialized_move@PEAW4GameInputGamepadButtons@@V-$allocator@W4GameInputGamepadButtons@@@st.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEBA_K_K@Z @ 0x1800981C0 (-_Calculate_growth@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEBA_.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ??1_Reallocation_guard@?$vector@KV?$allocator@K@std@@@std@@QEAA@XZ @ 0x1800A97A8 (--1_Reallocation_guard@-$vector@KV-$allocator@K@std@@@std@@QEAA@XZ.c)
 */

void __fastcall std::vector<unsigned int>::_Resize_reallocate<std::_Value_init_tag>(__int64 *a1, unsigned __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rbp
  unsigned __int64 size_of; // rax
  char *v7; // rsi
  size_t v8; // rbx
  __int64 v9; // rdx
  _QWORD v10[3]; // [rsp+20h] [rbp-48h] BYREF
  char *v11; // [rsp+38h] [rbp-30h]
  char *v12; // [rsp+40h] [rbp-28h]

  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v4 = (a1[1] - *a1) >> 2;
  v5 = std::vector<Windows::UI::Color>::_Calculate_growth(a1, a2);
  size_of = std::_Get_size_of_n<4>(v5);
  v10[0] = a1;
  v10[2] = v5;
  v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v11 = &v7[4 * v4];
  v8 = 4 * (a2 - v4);
  memset_0(v11, 0, v8);
  v9 = a1[1];
  v12 = &v11[v8];
  std::_Uninitialized_move<enum GameInputGamepadButtons *>((void *)*a1, v9, v7);
  v10[1] = 0LL;
  std::vector<unsigned int>::_Change_array(a1, (__int64)v7, a2, v5);
  std::vector<unsigned long>::_Reallocation_guard::~_Reallocation_guard((__int64)v10);
}
