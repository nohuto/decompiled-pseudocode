/*
 * XREFs of ??$_Emplace_reallocate@UInputProvider@@@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@AEAAPEAUInputProvider@@QEAU2@$$QEAU2@@Z @ 0x1800CE108
 * Callers:
 *     ??$emplace_back@UInputProvider@@@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@QEAAAEAUInputProvider@@$$QEAU2@@Z @ 0x1800CE2E0 (--$emplace_back@UInputProvider@@@-$vector@UInputProvider@@V-$allocator@UInputProvider@@@std@@@st.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x18004FA00 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAUInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@YAPEAUInputProvider@@QEAU1@0PEAU1@AEAV?$allocator@UInputProvider@@@0@@Z @ 0x1800CE268 (--$_Uninitialized_move@PEAUInputProvider@@V-$allocator@UInputProvider@@@std@@@std@@YAPEAUInputPr.c)
 *     ??$construct@UInputProvider@@U1@@?$_Default_allocator_traits@V?$allocator@UInputProvider@@@std@@@std@@SAXAEAV?$allocator@UInputProvider@@@1@QEAUInputProvider@@$$QEAU3@@Z @ 0x1800CE2AC (--$construct@UInputProvider@@U1@@-$_Default_allocator_traits@V-$allocator@UInputProvider@@@std@@.c)
 *     ??1_Reallocation_guard@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@QEAA@XZ @ 0x1800CE344 (--1_Reallocation_guard@-$vector@UInputProvider@@V-$allocator@UInputProvider@@@std@@@std@@QEAA@XZ.c)
 *     ?_Change_array@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@AEAAXQEAUInputProvider@@_K1@Z @ 0x1800CE384 (-_Change_array@-$vector@UInputProvider@@V-$allocator@UInputProvider@@@std@@@std@@AEAAXQEAUInputP.c)
 */

char *__fastcall std::vector<InputProvider>::_Emplace_reallocate<InputProvider>(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 v7; // r14
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  char *v13; // rax
  __int64 v14; // rcx
  char *v15; // rdi
  char *v16; // r14
  __int64 v17; // rdx
  char *v18; // r8
  __int64 v19; // rcx
  _QWORD v21[3]; // [rsp+20h] [rbp-58h] BYREF
  char *v22; // [rsp+38h] [rbp-40h]
  char *v23; // [rsp+40h] [rbp-38h]

  v4 = 0xAAAAAAAAAAAAAAALL;
  v7 = (a2 - *a1) / 24;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 3);
  if ( v8 == 0xAAAAAAAAAAAAAAALL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v9 = v8 + 1;
  v10 = 0xAAAAAAAAAAAAAAABuLL * ((a1[2] - *a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 <= 0xAAAAAAAAAAAAAAALL - (v10 >> 1) )
  {
    v4 = v11 + v10;
    if ( v11 + v10 < v9 )
      v4 = v9;
  }
  size_of = std::_Get_size_of_n<24>(v4);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = 3 * v7;
  v21[0] = a1;
  v21[2] = v4;
  v15 = v13;
  v16 = &v13[24 * v7];
  v23 = v16 + 24;
  std::_Default_allocator_traits<std::allocator<InputProvider>>::construct<InputProvider,InputProvider>(v14, v16, a3);
  v17 = a1[1];
  v18 = v15;
  v19 = *a1;
  v22 = v16;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<InputProvider *>(v19, a2, v15);
    v17 = a1[1];
    v18 = v16 + 24;
    v19 = a2;
    v22 = v15;
  }
  std::_Uninitialized_move<InputProvider *>(v19, v17, v18);
  v21[1] = 0LL;
  std::vector<InputProvider>::_Change_array(a1, v15, v9, v4);
  std::vector<InputProvider>::_Reallocation_guard::~_Reallocation_guard(v21);
  return v16;
}
