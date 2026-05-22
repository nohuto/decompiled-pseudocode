/*
 * XREFs of ??$_Emplace_reallocate@AEAULegacyInputInfo@@@?$vector@ULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@AEAAPEAULegacyInputInfo@@QEAU2@AEAU2@@Z @ 0x1800CE664
 * Callers:
 *     ??$emplace_back@AEAULegacyInputInfo@@@?$vector@ULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@QEAAAEAULegacyInputInfo@@AEAU2@@Z @ 0x1800CEA18 (--$emplace_back@AEAULegacyInputInfo@@@-$vector@ULegacyInputInfo@@V-$allocator@ULegacyInputInfo@@.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009891C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     memcpy_0 @ 0x18009CC62 (memcpy_0.c)
 *     ??$_Uninitialized_move@PEAULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@YAPEAULegacyInputInfo@@QEAU1@0PEAU1@AEAV?$allocator@ULegacyInputInfo@@@0@@Z @ 0x1800CE95C (--$_Uninitialized_move@PEAULegacyInputInfo@@V-$allocator@ULegacyInputInfo@@@std@@@std@@YAPEAULeg.c)
 *     ??1_Reallocation_guard@?$vector@ULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@QEAA@XZ @ 0x1800CEE8C (--1_Reallocation_guard@-$vector@ULegacyInputInfo@@V-$allocator@ULegacyInputInfo@@@std@@@std@@QEA.c)
 *     ?_Change_array@?$vector@ULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@AEAAXQEAULegacyInputInfo@@_K1@Z @ 0x1800CFB74 (-_Change_array@-$vector@ULegacyInputInfo@@V-$allocator@ULegacyInputInfo@@@std@@@std@@AEAAXQEAULe.c)
 */

char *__fastcall std::vector<LegacyInputInfo>::_Emplace_reallocate<LegacyInputInfo &>(
        _QWORD *a1,
        __int64 a2,
        const void *a3)
{
  __int64 v6; // rbp
  __int64 v7; // r14
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  char *v12; // rax
  char *v13; // rbp
  char *v14; // rdi
  __int64 v15; // rdx
  char *v16; // r8
  __int64 v17; // rcx
  _QWORD *v19; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+30h] [rbp-48h]
  char *v21; // [rsp+38h] [rbp-40h]
  char *v22; // [rsp+40h] [rbp-38h]

  v6 = (a2 - *a1) / 3008;
  v7 = 0x51B3BEA3677D46CFLL * ((__int64)(a1[1] - *a1) >> 6);
  if ( v7 == 0x15C9882B931057LL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v8 = v7 + 1;
  v9 = 0x51B3BEA3677D46CFLL * ((__int64)(a1[2] - *a1) >> 6);
  v10 = v9 >> 1;
  if ( v9 <= 0x15C9882B931057LL - (v9 >> 1) )
  {
    v11 = v8;
    if ( v10 + v9 >= v8 )
      v11 = v10 + v9;
    if ( v11 > 0x15C9882B931057LL )
      std::_Throw_bad_array_new_length();
  }
  else
  {
    v11 = 0x15C9882B931057LL;
  }
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(3008 * v11);
  v19 = a1;
  v13 = &v12[3008 * v6];
  v20 = v11;
  v14 = v12;
  v22 = v13 + 3008;
  memcpy_0(v13, a3, 0xBC0uLL);
  v15 = a1[1];
  v16 = v14;
  v17 = *a1;
  v21 = v13;
  if ( a2 != v15 )
  {
    std::_Uninitialized_move<LegacyInputInfo *>(v17, a2, v14);
    v15 = a1[1];
    v16 = v13 + 3008;
    v17 = a2;
    v21 = v14;
  }
  std::_Uninitialized_move<LegacyInputInfo *>(v17, v15, v16);
  std::vector<LegacyInputInfo>::_Change_array(a1, v14, v8, v11, v19, 0LL, v20, v21, v22);
  std::vector<LegacyInputInfo>::_Reallocation_guard::~_Reallocation_guard(&v19);
  return v13;
}
