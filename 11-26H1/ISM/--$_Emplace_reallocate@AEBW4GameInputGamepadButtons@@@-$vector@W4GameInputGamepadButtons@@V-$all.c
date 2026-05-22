/*
 * XREFs of ??$_Emplace_reallocate@AEBW4GameInputGamepadButtons@@@?$vector@W4GameInputGamepadButtons@@V?$allocator@W4GameInputGamepadButtons@@@std@@@std@@AEAAPEAW4GameInputGamepadButtons@@QEAW42@AEBW42@@Z @ 0x1801818A8
 * Callers:
 *     ?ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GameInputGamepadButtons@@PEA_N@Z @ 0x180181B60 (-ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GameInputGamepadButtons@@PEA_N@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x180011858 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXQEAUColor@UI@Windows@@_K1@Z @ 0x180072E1C (-_Change_array@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXQEAU.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Uninitialized_move@PEAW4GameInputGamepadButtons@@V?$allocator@W4GameInputGamepadButtons@@@std@@@std@@YAPEAW4GameInputGamepadButtons@@QEAW41@0PEAW41@AEAV?$allocator@W4GameInputGamepadButtons@@@0@@Z @ 0x180076AB4 (--$_Uninitialized_move@PEAW4GameInputGamepadButtons@@V-$allocator@W4GameInputGamepadButtons@@@st.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1_Reallocation_guard@?$vector@KV?$allocator@K@std@@@std@@QEAA@XZ @ 0x1800A97A8 (--1_Reallocation_guard@-$vector@KV-$allocator@K@std@@@std@@QEAA@XZ.c)
 */

char *__fastcall std::vector<enum GameInputGamepadButtons>::_Emplace_reallocate<enum GameInputGamepadButtons const &>(
        __int64 *a1,
        __int64 a2,
        int *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // r15
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  char *v13; // rax
  int v14; // ecx
  __int64 v15; // rdi
  char *v16; // r8
  char *v17; // r15
  __int64 v18; // rdx
  void *v19; // rcx
  _QWORD v21[3]; // [rsp+20h] [rbp-58h] BYREF
  char *v22; // [rsp+38h] [rbp-40h]
  _DWORD *v23; // [rsp+40h] [rbp-38h]

  v3 = 0x3FFFFFFFFFFFFFFFLL;
  v5 = (a2 - *a1) >> 2;
  v7 = (a1[1] - *a1) >> 2;
  if ( v7 == 0x3FFFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v9 = v7 + 1;
  v10 = (a1[2] - *a1) >> 2;
  v11 = v10 >> 1;
  if ( v10 <= 0x3FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<4>(v3);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = *a3;
  v15 = (__int64)v13;
  v21[0] = a1;
  v16 = v13;
  v21[2] = v3;
  v17 = &v13[4 * v5];
  *(_DWORD *)v17 = v14;
  v18 = a1[1];
  v19 = (void *)*a1;
  v23 = v17 + 4;
  v22 = v17;
  if ( a2 != v18 )
  {
    std::_Uninitialized_move<enum GameInputGamepadButtons *>(v19, a2, v13);
    v18 = a1[1];
    v16 = v17 + 4;
    v19 = (void *)a2;
    v22 = (char *)v15;
  }
  std::_Uninitialized_move<enum GameInputGamepadButtons *>(v19, v18, v16);
  v21[1] = 0LL;
  std::vector<Windows::UI::Color>::_Change_array(a1, v15, v9, v3);
  std::vector<unsigned long>::_Reallocation_guard::~_Reallocation_guard((__int64)v21);
  return v17;
}
