/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@W4GameInputGamepadButtons@@GV?$_Uhash_compare@W4GameInputGamepadButtons@@U?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@@std@@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x180181130
 * Callers:
 *     ??$_Insert_or_assign@AEBW4GameInputGamepadButtons@@AEAG@?$unordered_map@W4GameInputGamepadButtons@@GU?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@std@@@std@@@std@@_N@1@AEBW4GameInputGamepadButtons@@AEAG@Z @ 0x18006694C (--$_Insert_or_assign@AEBW4GameInputGamepadButtons@@AEAG@-$unordered_map@W4GameInputGamepadButton.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x180011A60 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??R?$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageType@@@Z @ 0x18008A0A8 (--R-$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageT.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@W4GameInputGamepadButtons@@GV?$_Uhash_compare@W4GameInputGamepadButtons@@U?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@@std@@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x18017CAD0 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@W4GameInputGamepadButtons@@GV-$_Uhash_compare@W4GameInpu.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Umap_traits<enum GameInputGamepadButtons,unsigned short,std::_Uhash_compare<enum GameInputGamepadButtons,std::hash<enum GameInputGamepadButtons>,std::equal_to<enum GameInputGamepadButtons>>,std::allocator<std::pair<enum GameInputGamepadButtons const,unsigned short>>,0>>::_Forced_rehash(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rsi
  unsigned __int8 *v7; // r11
  unsigned __int8 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r11
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 *v13; // rax
  int v14; // ecx
  __int64 v15; // r10
  unsigned __int8 **v16; // rdx
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  __int64 **v19; // r10
  __int64 v20; // r8
  unsigned __int8 **v21; // rdx
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  unsigned __int8 **v24; // rdx
  __int64 **v25; // rcx
  __int64 *v26; // rax
  __int64 v28; // [rsp+30h] [rbp+8h] BYREF

  HIDWORD(v28) = HIDWORD(a1);
  LODWORD(v28) = 0;
  _BitScanReverse64(&v2, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v2 )
    std::_Xlength_error("invalid hash bucket count");
  v3 = qword_180254018;
  LODWORD(v28) = 0;
  _BitScanReverse64(&v4, (a2 - 1) | 1);
  v5 = 1LL << ((unsigned __int8)v4 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    (unsigned __int64 **)&qword_180254028,
    2 * v5,
    qword_180254018);
  v6 = v5 - 1;
  qword_180254048 = v5;
  qword_180254040 = v5 - 1;
  v7 = *(unsigned __int8 **)qword_180254018;
  v8 = *(unsigned __int8 **)qword_180254018;
  while ( v7 != (unsigned __int8 *)v3 )
  {
    v8 = *(unsigned __int8 **)v8;
    v9 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()(v7 + 16);
    v11 = qword_180254028;
    v12 = 2 * (v6 & v9);
    if ( *(_QWORD *)(qword_180254028 + 16 * (v6 & v9)) == v3 )
    {
      *(_QWORD *)(qword_180254028 + 16 * (v6 & v9)) = v10;
LABEL_7:
      *(_QWORD *)(v11 + 8 * v12 + 8) = v10;
      goto LABEL_15;
    }
    v13 = *(__int64 **)(qword_180254028 + 16 * (v6 & v9) + 8);
    v14 = *(_DWORD *)(v10 + 16);
    if ( v14 == *((_DWORD *)v13 + 4) )
    {
      v15 = *v13;
      if ( *v13 != v10 )
      {
        v16 = *(unsigned __int8 ***)(v10 + 8);
        *v16 = v8;
        v17 = (_QWORD *)*((_QWORD *)v8 + 1);
        *v17 = v15;
        v18 = *(_QWORD **)(v15 + 8);
        *v18 = v10;
        *(_QWORD *)(v15 + 8) = v17;
        *((_QWORD *)v8 + 1) = v16;
        *(_QWORD *)(v10 + 8) = v18;
      }
      goto LABEL_7;
    }
    while ( 1 )
    {
      v19 = (__int64 **)(v13 + 1);
      if ( *(__int64 **)(qword_180254028 + 8 * v12) == v13 )
        break;
      v13 = *v19;
      if ( v14 == *((_DWORD *)*v19 + 4) )
      {
        v20 = *v13;
        v21 = *(unsigned __int8 ***)(v10 + 8);
        *v21 = v8;
        v22 = (_QWORD *)*((_QWORD *)v8 + 1);
        *v22 = v20;
        v23 = *(_QWORD **)(v20 + 8);
        *v23 = v10;
        *(_QWORD *)(v20 + 8) = v22;
        *((_QWORD *)v8 + 1) = v21;
        *(_QWORD *)(v10 + 8) = v23;
        goto LABEL_15;
      }
    }
    v24 = *(unsigned __int8 ***)(v10 + 8);
    *v24 = v8;
    v25 = (__int64 **)*((_QWORD *)v8 + 1);
    *v25 = v13;
    v26 = *v19;
    *v26 = v10;
    *v19 = (__int64 *)v25;
    *((_QWORD *)v8 + 1) = v24;
    *(_QWORD *)(v10 + 8) = v26;
    *(_QWORD *)(v11 + 8 * v12) = v10;
LABEL_15:
    v6 = qword_180254040;
    v7 = v8;
  }
  v28 = 0LL;
  return std::_Hash<std::_Umap_traits<enum GameInputGamepadButtons,unsigned short,std::_Uhash_compare<enum GameInputGamepadButtons,std::hash<enum GameInputGamepadButtons>,std::equal_to<enum GameInputGamepadButtons>>,std::allocator<std::pair<enum GameInputGamepadButtons const,unsigned short>>,0>>::_Clear_guard::~_Clear_guard(&v28);
}
