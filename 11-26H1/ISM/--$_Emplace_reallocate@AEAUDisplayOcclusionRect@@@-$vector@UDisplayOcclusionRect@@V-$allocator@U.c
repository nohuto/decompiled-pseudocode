/*
 * XREFs of ??$_Emplace_reallocate@AEAUDisplayOcclusionRect@@@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAPEAUDisplayOcclusionRect@@QEAU2@AEAU2@@Z @ 0x18013C768
 * Callers:
 *     ??$emplace@AEBUDisplayOcclusionRect@@@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UDisplayOcclusionRect@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UDisplayOcclusionRect@@@std@@@std@@@1@AEBUDisplayOcclusionRect@@@Z @ 0x18013C990 (--$emplace@AEBUDisplayOcclusionRect@@@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclu.c)
 *     ??$emplace_back@AEAUDisplayOcclusionRect@@@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@QEAAAEAUDisplayOcclusionRect@@AEAU2@@Z @ 0x1801A6048 (--$emplace_back@AEAUDisplayOcclusionRect@@@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplay.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0LA@@std@@YA_K_K@Z @ 0x18013C908 (--$_Get_size_of_n@$0LA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@YAPEAUDisplayOcclusionRect@@QEAU1@0PEAU1@AEAV?$allocator@UDisplayOcclusionRect@@@0@@Z @ 0x18013C934 (--$_Uninitialized_move@PEAUDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std@.c)
 *     ??1_Reallocation_guard@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@QEAA@XZ @ 0x18013CBDC (--1_Reallocation_guard@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@.c)
 *     ?_Calculate_growth@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEBA_K_K@Z @ 0x18013D9D4 (-_Calculate_growth@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@st.c)
 *     ?_Change_array@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXQEAUDisplayOcclusionRect@@_K1@Z @ 0x18013DA1C (-_Change_array@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std@@A.c)
 */

char *__fastcall std::vector<DisplayOcclusionRect>::_Emplace_reallocate<DisplayOcclusionRect &>(
        _QWORD *a1,
        __int64 a2,
        __int128 *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // r15
  unsigned __int64 size_of; // rax
  char *v11; // rax
  __int128 v12; // xmm0
  char *v13; // rbx
  _OWORD *v14; // r8
  char *v15; // rsi
  __int128 v16; // xmm1
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v20; // [rsp+20h] [rbp-58h] BYREF
  __int64 v21; // [rsp+30h] [rbp-48h]
  char *v22; // [rsp+38h] [rbp-40h]
  _OWORD *v23; // [rsp+40h] [rbp-38h]

  v6 = (a2 - *a1) / 176;
  v7 = 0x2E8BA2E8BA2E8BA3LL * ((__int64)(a1[1] - *a1) >> 4);
  if ( v7 == 0x1745D1745D1745DLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v8 = v7 + 1;
  v9 = std::vector<DisplayOcclusionRect>::_Calculate_growth(a1, v7 + 1);
  size_of = std::_Get_size_of_n<176>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v12 = *a3;
  v13 = v11;
  v20 = a1;
  v21 = v9;
  v14 = v11;
  v15 = &v11[176 * v6];
  v22 = v15;
  *(_OWORD *)v15 = v12;
  v16 = a3[1];
  v23 = v15 + 176;
  *((_OWORD *)v15 + 1) = v16;
  *((_OWORD *)v15 + 2) = a3[2];
  *((_OWORD *)v15 + 3) = a3[3];
  *((_OWORD *)v15 + 4) = a3[4];
  *((_OWORD *)v15 + 5) = a3[5];
  *((_OWORD *)v15 + 6) = a3[6];
  *((_OWORD *)v15 + 7) = a3[7];
  *((_OWORD *)v15 + 8) = a3[8];
  *((_OWORD *)v15 + 9) = a3[9];
  *((_OWORD *)v15 + 10) = a3[10];
  v17 = a1[1];
  v18 = *a1;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<DisplayOcclusionRect *>(v18, a2, v11);
    v17 = a1[1];
    v14 = v15 + 176;
    v18 = a2;
    v22 = v13;
  }
  std::_Uninitialized_move<DisplayOcclusionRect *>(v18, v17, v14);
  std::vector<DisplayOcclusionRect>::_Change_array(a1, v13, v8, v9, v20, 0LL, v21, v22, v23);
  std::vector<DisplayOcclusionRect>::_Reallocation_guard::~_Reallocation_guard(&v20);
  return v15;
}
