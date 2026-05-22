/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@IV?$allocator@I@std@@@std@@AEAAXAEA_K@Z @ 0x1800F49D8
 * Callers:
 *     ?Initialize@PointerFrame@PointerInputMediator@@QEAAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x180010598 (-Initialize@PointerFrame@PointerInputMediator@@QEAAXPEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x180011858 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@IV?$allocator@I@std@@@std@@AEAAXQEAI_K1@Z @ 0x180073594 (-_Change_array@-$vector@IV-$allocator@I@std@@@std@@AEAAXQEAI_K1@Z.c)
 *     ??$_Uninitialized_move@PEAW4GameInputGamepadButtons@@V?$allocator@W4GameInputGamepadButtons@@@std@@@std@@YAPEAW4GameInputGamepadButtons@@QEAW41@0PEAW41@AEAV?$allocator@W4GameInputGamepadButtons@@@0@@Z @ 0x180076AB4 (--$_Uninitialized_move@PEAW4GameInputGamepadButtons@@V-$allocator@W4GameInputGamepadButtons@@@st.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1_Reallocation_guard@?$vector@KV?$allocator@K@std@@@std@@QEAA@XZ @ 0x1800A97A8 (--1_Reallocation_guard@-$vector@KV-$allocator@K@std@@@std@@QEAA@XZ.c)
 */

void __fastcall std::vector<unsigned int>::_Reallocate<0>(__int64 *a1, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  unsigned __int64 size_of; // rax
  char *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  void *v9; // rcx
  __int64 v10; // r9
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = (a1[1] - *a1) >> 2;
  size_of = std::_Get_size_of_n<4>(*a2);
  v6 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v7 = a1[1];
  v8 = (__int64)v6;
  v11[2] = *a2;
  v9 = (void *)*a1;
  v11[0] = a1;
  std::_Uninitialized_move<enum GameInputGamepadButtons *>(v9, v7, v6);
  v10 = *a2;
  v11[1] = 0LL;
  std::vector<unsigned int>::_Change_array(a1, v8, v4, v10);
  std::vector<unsigned long>::_Reallocation_guard::~_Reallocation_guard((__int64)v11);
}
