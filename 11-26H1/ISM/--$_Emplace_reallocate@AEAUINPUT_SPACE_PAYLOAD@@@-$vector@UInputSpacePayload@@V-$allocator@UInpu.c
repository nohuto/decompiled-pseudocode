/*
 * XREFs of ??$_Emplace_reallocate@AEAUINPUT_SPACE_PAYLOAD@@@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@AEAAPEAUInputSpacePayload@@QEAU2@AEAUINPUT_SPACE_PAYLOAD@@@Z @ 0x1801963C0
 * Callers:
 *     ??$emplace_back@AEAUINPUT_SPACE_PAYLOAD@@@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@QEAAAEAUInputSpacePayload@@AEAUINPUT_SPACE_PAYLOAD@@@Z @ 0x180093F20 (--$emplace_back@AEAUINPUT_SPACE_PAYLOAD@@@-$vector@UInputSpacePayload@@V-$allocator@UInputSpaceP.c)
 * Callees:
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x180069BE8 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$construct@UInputSpacePayload@@AEAUINPUT_SPACE_PAYLOAD@@@?$_Default_allocator_traits@V?$allocator@UInputSpacePayload@@@std@@@std@@SAXAEAV?$allocator@UInputSpacePayload@@@1@QEAUInputSpacePayload@@AEAUINPUT_SPACE_PAYLOAD@@@Z @ 0x180091634 (--$construct@UInputSpacePayload@@AEAUINPUT_SPACE_PAYLOAD@@@-$_Default_allocator_traits@V-$alloca.c)
 *     ??$_Uninitialized_move@PEAUInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@YAPEAUInputSpacePayload@@QEAU1@0PEAU1@AEAV?$allocator@UInputSpacePayload@@@0@@Z @ 0x1801968E4 (--$_Uninitialized_move@PEAUInputSpacePayload@@V-$allocator@UInputSpacePayload@@@std@@@std@@YAPEA.c)
 *     ??1_Reallocation_guard@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@QEAA@XZ @ 0x180197550 (--1_Reallocation_guard@-$vector@UInputSpacePayload@@V-$allocator@UInputSpacePayload@@@std@@@std@.c)
 *     ?_Change_array@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@AEAAXQEAUInputSpacePayload@@_K1@Z @ 0x180198308 (-_Change_array@-$vector@UInputSpacePayload@@V-$allocator@UInputSpacePayload@@@std@@@std@@AEAAXQE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::vector<InputSpacePayload>::_Emplace_reallocate<INPUT_SPACE_PAYLOAD &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // r14
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  void *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rdx
  void *v17; // r8
  __int64 v18; // rcx
  _QWORD v20[2]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v21; // [rsp+30h] [rbp-48h]
  __int64 v22; // [rsp+38h] [rbp-40h]
  __int64 v23; // [rsp+40h] [rbp-38h]

  v6 = (a2 - *a1) / 40;
  v7 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - *a1) >> 3);
  v8 = 0x666666666666666LL;
  if ( v7 == 0x666666666666666LL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v9 = v7 + 1;
  v10 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[2] - *a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 <= 0x666666666666666LL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v9;
  }
  size_of = std::_Get_size_of_n<40>(v8);
  v13 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = 5 * v6;
  v15 = (__int64)v13 + 40 * v6;
  v20[0] = a1;
  v20[1] = v13;
  v21 = v8;
  v23 = v15 + 40;
  std::_Default_allocator_traits<std::allocator<InputSpacePayload>>::construct<InputSpacePayload,INPUT_SPACE_PAYLOAD &>(
    v14,
    v15,
    a3);
  v22 = v15;
  v16 = a1[1];
  v17 = v13;
  v18 = *a1;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<InputSpacePayload *>(v18, a2, v13);
    v22 = (__int64)v13;
    v17 = (void *)(v15 + 40);
    v16 = a1[1];
    v18 = a2;
  }
  std::_Uninitialized_move<InputSpacePayload *>(v18, v16, v17);
  std::vector<InputSpacePayload>::_Change_array(a1, v13, v9, v8, v20[0], 0LL, v21, v22, v23);
  std::vector<InputSpacePayload>::_Reallocation_guard::~_Reallocation_guard(v20);
  return v15;
}
