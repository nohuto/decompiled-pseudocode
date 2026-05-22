/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAXAEA_K@Z @ 0x180196788
 * Callers:
 *     ??$construct@UInputSpacePayload@@AEAUINPUT_SPACE_PAYLOAD@@@?$_Default_allocator_traits@V?$allocator@UInputSpacePayload@@@std@@@std@@SAXAEAV?$allocator@UInputSpacePayload@@@1@QEAUInputSpacePayload@@AEAUINPUT_SPACE_PAYLOAD@@@Z @ 0x180091634 (--$construct@UInputSpacePayload@@AEAUINPUT_SPACE_PAYLOAD@@@-$_Default_allocator_traits@V-$alloca.c)
 * Callees:
 *     ?_Change_array@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAXQEAUINPUT_SPACE_REGION@@_K1@Z @ 0x180072600 (-_Change_array@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAX.c)
 *     ??$_Uninitialized_move@PEAUINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@YAPEAUINPUT_SPACE_REGION@@QEAU1@0PEAU1@AEAV?$allocator@UINPUT_SPACE_REGION@@@0@@Z @ 0x18007A730 (--$_Uninitialized_move@PEAUINPUT_SPACE_REGION@@V-$allocator@UINPUT_SPACE_REGION@@@std@@@std@@YAP.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009891C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??1_Reallocation_guard@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@QEAA@XZ @ 0x180144C40 (--1_Reallocation_guard@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPUT_SPACE_REGION@@@std@@@st.c)
 */

void __fastcall std::vector<INPUT_SPACE_REGION>::_Reallocate<0>(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rdi
  char *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbx
  void *v8; // rcx
  __int64 v9; // r9
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0x8F5C28F5C28F5C29uLL * ((a1[1] - *a1) >> 3);
  if ( (unsigned __int64)*a2 > 0x147AE147AE147AELL )
    std::_Throw_bad_array_new_length();
  v5 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(200 * *a2);
  v6 = a1[1];
  v7 = (__int64)v5;
  v10[2] = *a2;
  v8 = (void *)*a1;
  v10[0] = a1;
  std::_Uninitialized_move<INPUT_SPACE_REGION *>(v8, v6, v5);
  v9 = *a2;
  v10[1] = 0LL;
  std::vector<INPUT_SPACE_REGION>::_Change_array(a1, v7, v4, v9);
  std::vector<INPUT_SPACE_REGION>::_Reallocation_guard::~_Reallocation_guard((__int64)v10);
}
