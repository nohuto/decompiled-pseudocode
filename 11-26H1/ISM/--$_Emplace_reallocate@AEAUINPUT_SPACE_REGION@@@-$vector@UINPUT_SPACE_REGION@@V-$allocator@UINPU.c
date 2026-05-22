/*
 * XREFs of ??$_Emplace_reallocate@AEAUINPUT_SPACE_REGION@@@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAPEAUINPUT_SPACE_REGION@@QEAU2@AEAU2@@Z @ 0x18019652C
 * Callers:
 *     ??$_Emplace_one_at_back@AEAUINPUT_SPACE_REGION@@@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAAEAUINPUT_SPACE_REGION@@AEAU2@@Z @ 0x180196314 (--$_Emplace_one_at_back@AEAUINPUT_SPACE_REGION@@@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINP.c)
 * Callees:
 *     ?_Change_array@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAXQEAUINPUT_SPACE_REGION@@_K1@Z @ 0x180072600 (-_Change_array@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAX.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Uninitialized_move@PEAUINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@YAPEAUINPUT_SPACE_REGION@@QEAU1@0PEAU1@AEAV?$allocator@UINPUT_SPACE_REGION@@@0@@Z @ 0x18007A730 (--$_Uninitialized_move@PEAUINPUT_SPACE_REGION@@V-$allocator@UINPUT_SPACE_REGION@@@std@@@std@@YAP.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEBA_K_K@Z @ 0x180094DD8 (-_Calculate_growth@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPUT_SPACE_REGION@@@std@@@std@@A.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009891C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??1_Reallocation_guard@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@QEAA@XZ @ 0x180144C40 (--1_Reallocation_guard@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPUT_SPACE_REGION@@@std@@@st.c)
 */

char *__fastcall std::vector<INPUT_SPACE_REGION>::_Emplace_reallocate<INPUT_SPACE_REGION &>(
        __int64 *a1,
        __int64 a2,
        __int128 *a3)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // r12
  unsigned __int64 v9; // rax
  __int64 v10; // rbp
  unsigned __int64 v11; // r10
  char *v12; // rax
  __int128 v13; // xmm0
  __int64 v14; // rdi
  char *v15; // r8
  char *v16; // rsi
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  _OWORD *v19; // r15
  __int64 v20; // rdx
  void *v21; // rcx
  _QWORD v23[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v24; // [rsp+38h] [rbp-40h]
  char *v25; // [rsp+40h] [rbp-38h]

  v6 = (a2 - *a1) / 200;
  v7 = 0x8F5C28F5C28F5C29uLL * ((a1[1] - *a1) >> 3);
  if ( v7 == 0x147AE147AE147AELL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v8 = v7 + 1;
  v9 = std::vector<INPUT_SPACE_REGION>::_Calculate_growth(a1, v7 + 1);
  v10 = v9;
  if ( v9 > v11 )
    std::_Throw_bad_array_new_length();
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(200 * v9);
  v13 = *a3;
  v14 = (__int64)v12;
  v23[0] = a1;
  v23[2] = v10;
  v15 = v12;
  v16 = &v12[200 * v6];
  v24 = (__int64)v16;
  *(_OWORD *)v16 = v13;
  v17 = a3[1];
  v25 = v16 + 200;
  *((_OWORD *)v16 + 1) = v17;
  *((_OWORD *)v16 + 2) = a3[2];
  *((_OWORD *)v16 + 3) = a3[3];
  *((_OWORD *)v16 + 4) = a3[4];
  *((_OWORD *)v16 + 5) = a3[5];
  *((_OWORD *)v16 + 6) = a3[6];
  v18 = a3[7];
  v19 = a3 + 8;
  *((_OWORD *)v16 + 7) = v18;
  *((_OWORD *)v16 + 8) = *v19;
  *((_OWORD *)v16 + 9) = v19[1];
  *((_OWORD *)v16 + 10) = v19[2];
  *((_OWORD *)v16 + 11) = v19[3];
  *((_QWORD *)v16 + 24) = *((_QWORD *)v19 + 8);
  v20 = a1[1];
  v21 = (void *)*a1;
  if ( a2 != v20 )
  {
    std::_Uninitialized_move<INPUT_SPACE_REGION *>(v21, a2, v12);
    v20 = a1[1];
    v15 = v16 + 200;
    v21 = (void *)a2;
    v24 = v14;
  }
  std::_Uninitialized_move<INPUT_SPACE_REGION *>(v21, v20, v15);
  v23[1] = 0LL;
  std::vector<INPUT_SPACE_REGION>::_Change_array(a1, v14, v8, v10);
  std::vector<INPUT_SPACE_REGION>::_Reallocation_guard::~_Reallocation_guard((__int64)v23);
  return v16;
}
