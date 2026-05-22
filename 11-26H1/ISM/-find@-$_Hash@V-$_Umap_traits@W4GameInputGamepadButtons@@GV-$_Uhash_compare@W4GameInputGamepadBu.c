/*
 * XREFs of ?find@?$_Hash@V?$_Umap_traits@W4GameInputGamepadButtons@@GV?$_Uhash_compare@W4GameInputGamepadButtons@@U?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@@std@@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@std@@@std@@@2@AEBW4GameInputGamepadButtons@@@Z @ 0x1801816DC
 * Callers:
 *     ?GetControllerVirtualKeyMappingFor@ControllerProcessor@@SAGW4GameInputGamepadButtons@@@Z @ 0x18017E0E8 (-GetControllerVirtualKeyMappingFor@ControllerProcessor@@SAGW4GameInputGamepadButtons@@@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180031330 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@W4GameInputGamepadButtons@@@?$_Hash@V?$_Umap_traits@W4GameInputGamepadButtons@@GV?$_Uhash_compare@W4GameInputGamepadButtons@@U?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@@std@@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@PEAX@std@@@1@AEBW4GameInputGamepadButtons@@_K@Z @ 0x18006C498 (--$_Find_last@W4GameInputGamepadButtons@@@-$_Hash@V-$_Umap_traits@W4GameInputGamepadButtons@@GV-.c)
 */

__int64 *__fastcall std::_Hash<std::_Umap_traits<enum GameInputGamepadButtons,unsigned short,std::_Uhash_compare<enum GameInputGamepadButtons,std::hash<enum GameInputGamepadButtons>,std::equal_to<enum GameInputGamepadButtons>>,std::allocator<std::pair<enum GameInputGamepadButtons const,unsigned short>>,0>>::find(
        __int64 a1,
        __int64 *a2,
        const unsigned __int8 *a3)
{
  __int64 appended; // rax
  __int64 v5; // rcx
  _DWORD *v6; // r11
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 *result; // rax
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  appended = std::_Fnv1a_append_bytes(a1, a3, 4uLL);
  v7 = std::_Hash<std::_Umap_traits<enum GameInputGamepadButtons,unsigned short,std::_Uhash_compare<enum GameInputGamepadButtons,std::hash<enum GameInputGamepadButtons>,std::equal_to<enum GameInputGamepadButtons>>,std::allocator<std::pair<enum GameInputGamepadButtons const,unsigned short>>,0>>::_Find_last<enum GameInputGamepadButtons>(
         v5,
         v10,
         v6,
         appended);
  v8 = qword_180254018;
  if ( v7[1] )
    v8 = v7[1];
  result = a2;
  *a2 = v8;
  return result;
}
