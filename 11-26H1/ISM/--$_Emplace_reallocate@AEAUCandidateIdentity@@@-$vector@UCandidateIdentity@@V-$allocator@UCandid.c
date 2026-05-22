/*
 * XREFs of ??$_Emplace_reallocate@AEAUCandidateIdentity@@@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@AEAAPEAUCandidateIdentity@@QEAU2@AEAU2@@Z @ 0x1801AD74C
 * Callers:
 *     ??$emplace_back@AEAUCandidateIdentity@@@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@QEAAAEAUCandidateIdentity@@AEAU2@@Z @ 0x1801ADB94 (--$emplace_back@AEAUCandidateIdentity@@@-$vector@UCandidateIdentity@@V-$allocator@UCandidateIden.c)
 * Callees:
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x180069BE8 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAUCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@YAPEAUCandidateIdentity@@QEAU1@0PEAU1@AEAV?$allocator@UCandidateIdentity@@@0@@Z @ 0x1801ADA44 (--$_Uninitialized_move@PEAUCandidateIdentity@@V-$allocator@UCandidateIdentity@@@std@@@std@@YAPEA.c)
 *     ??0CandidateIdentity@@QEAA@AEBU0@@Z @ 0x1801ADBDC (--0CandidateIdentity@@QEAA@AEBU0@@Z.c)
 *     ??1_Reallocation_guard@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@QEAA@XZ @ 0x1801ADD74 (--1_Reallocation_guard@-$vector@UCandidateIdentity@@V-$allocator@UCandidateIdentity@@@std@@@std@.c)
 *     ?_Change_array@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@AEAAXQEAUCandidateIdentity@@_K1@Z @ 0x1801AF11C (-_Change_array@-$vector@UCandidateIdentity@@V-$allocator@UCandidateIdentity@@@std@@@std@@AEAAXQE.c)
 */

// Hidden C++ exception states: #wind=1
CandidateIdentity *__fastcall std::vector<CandidateIdentity>::_Emplace_reallocate<CandidateIdentity &>(
        __int64 *a1,
        __int64 a2,
        const struct CandidateIdentity *a3)
{
  __int64 v6; // r14
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  CandidateIdentity *v13; // rdi
  CandidateIdentity *v14; // r14
  __int64 v15; // rdx
  CandidateIdentity *v16; // r8
  __int64 v17; // rcx
  _QWORD v19[2]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+30h] [rbp-48h]
  CandidateIdentity *v21; // [rsp+38h] [rbp-40h]
  char *v22; // [rsp+40h] [rbp-38h]

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
  v13 = (CandidateIdentity *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = (CandidateIdentity *)((char *)v13 + 40 * v6);
  v19[0] = a1;
  v19[1] = v13;
  v20 = v8;
  v22 = (char *)v14 + 40;
  CandidateIdentity::CandidateIdentity(v14, a3);
  v21 = v14;
  v15 = a1[1];
  v16 = v13;
  v17 = *a1;
  if ( a2 != v15 )
  {
    std::_Uninitialized_move<CandidateIdentity *>(v17, a2, v13);
    v21 = v13;
    v16 = (CandidateIdentity *)((char *)v14 + 40);
    v15 = a1[1];
    v17 = a2;
  }
  std::_Uninitialized_move<CandidateIdentity *>(v17, v15, v16);
  std::vector<CandidateIdentity>::_Change_array(a1, v13, v9, v8, v19[0], 0LL, v20, v21, v22);
  std::vector<CandidateIdentity>::_Reallocation_guard::~_Reallocation_guard(v19);
  return v14;
}
