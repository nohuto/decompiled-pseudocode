/*
 * XREFs of ??$_Emplace_reallocate@AEBG@?$vector@GV?$allocator@G@std@@@std@@AEAAPEAGQEAGAEBG@Z @ 0x1800D901C
 * Callers:
 *     ?OnInvalidateInput@MobileButtonDeviceCollection@@UEAAJPEAX@Z @ 0x1800DA430 (-OnInvalidateInput@MobileButtonDeviceCollection@@UEAAJPEAX@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009891C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Uninitialized_move@PEAGV?$allocator@G@std@@@std@@YAPEAGQEAG0PEAGAEAV?$allocator@G@0@@Z @ 0x1800D9304 (--$_Uninitialized_move@PEAGV-$allocator@G@std@@@std@@YAPEAGQEAG0PEAGAEAV-$allocator@G@0@@Z.c)
 *     ??1_Reallocation_guard@?$vector@GV?$allocator@G@std@@@std@@QEAA@XZ @ 0x1800D96AC (--1_Reallocation_guard@-$vector@GV-$allocator@G@std@@@std@@QEAA@XZ.c)
 *     ?_Change_array@?$vector@GV?$allocator@G@std@@@std@@AEAAXQEAG_K1@Z @ 0x1800DA830 (-_Change_array@-$vector@GV-$allocator@G@std@@@std@@AEAAXQEAG_K1@Z.c)
 */

char *__fastcall std::vector<unsigned short>::_Emplace_reallocate<unsigned short const &>(
        _QWORD *a1,
        __int64 a2,
        __int16 *a3)
{
  __int64 v4; // r14
  __int64 v6; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  char *v12; // rax
  __int16 v13; // cx
  char *v14; // rdi
  _WORD *v15; // r8
  char *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v20; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v21; // [rsp+30h] [rbp-48h]
  char *v22; // [rsp+38h] [rbp-40h]
  _WORD *v23; // [rsp+40h] [rbp-38h]

  v4 = (a2 - *a1) >> 1;
  v6 = (__int64)(a1[1] - *a1) >> 1;
  if ( v6 == 0x7FFFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v8 = v6 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 1;
  v10 = v9 >> 1;
  if ( v9 <= 0x7FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v6 + 1;
    if ( v10 + v9 >= v8 )
      v11 = v10 + v9;
    if ( v11 > 0x7FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
  }
  else
  {
    v11 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(2 * v11);
  v13 = *a3;
  v14 = v12;
  v20 = a1;
  v15 = v12;
  v21 = v11;
  v16 = &v12[2 * v4];
  *(_WORD *)v16 = v13;
  v17 = a1[1];
  v18 = *a1;
  v23 = v16 + 2;
  v22 = v16;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<unsigned short *>(v18, a2, v12);
    v17 = a1[1];
    v15 = v16 + 2;
    v18 = a2;
    v22 = v14;
  }
  std::_Uninitialized_move<unsigned short *>(v18, v17, v15);
  std::vector<unsigned short>::_Change_array(a1, v14, v8, v11, v20, 0LL, v21, v22, v23);
  std::vector<unsigned short>::_Reallocation_guard::~_Reallocation_guard(&v20);
  return v16;
}
