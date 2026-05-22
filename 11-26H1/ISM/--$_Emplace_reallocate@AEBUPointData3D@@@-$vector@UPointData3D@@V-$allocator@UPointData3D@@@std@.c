/*
 * XREFs of ??$_Emplace_reallocate@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@AEAAPEAUPointData3D@@QEAU2@AEBU2@@Z @ 0x1800B9684
 * Callers:
 *     ??$_Emplace_one_at_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@AEAAAEAUPointData3D@@AEBU2@@Z @ 0x1800B95E0 (--$_Emplace_one_at_back@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009891C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Uninitialized_move@PEAUPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@YAPEAUPointData3D@@QEAU1@0PEAU1@AEAV?$allocator@UPointData3D@@@0@@Z @ 0x1800B9870 (--$_Uninitialized_move@PEAUPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@YAPEAUPointData3D.c)
 *     ??1_Reallocation_guard@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAA@XZ @ 0x1800B9AB4 (--1_Reallocation_guard@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@QEAA@XZ.c)
 *     ?_Change_array@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@AEAAXQEAUPointData3D@@_K1@Z @ 0x1800BBB38 (-_Change_array@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@AEAAXQEAUPointData3.c)
 */

char *__fastcall std::vector<PointData3D>::_Emplace_reallocate<PointData3D const &>(
        _QWORD *a1,
        __int64 a2,
        __int128 *a3)
{
  __int64 v6; // r14
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  char *v12; // rax
  __int128 v13; // xmm0
  char *v14; // rdi
  char *v15; // r8
  char *v16; // r14
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  _OWORD *v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v23; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v24; // [rsp+30h] [rbp-48h]
  char *v25; // [rsp+38h] [rbp-40h]
  char *v26; // [rsp+40h] [rbp-38h]

  v6 = (a2 - *a1) / 184;
  v7 = 0xD37A6F4DE9BD37A7uLL * ((__int64)(a1[1] - *a1) >> 3);
  if ( v7 == 0x1642C8590B21642LL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v8 = v7 + 1;
  v9 = 0xD37A6F4DE9BD37A7uLL * ((__int64)(a1[2] - *a1) >> 3);
  v10 = v9 >> 1;
  if ( v9 <= 0x1642C8590B21642LL - (v9 >> 1) )
  {
    v11 = v7 + 1;
    if ( v10 + v9 >= v8 )
      v11 = v10 + v9;
    if ( v11 > 0x1642C8590B21642LL )
      std::_Throw_bad_array_new_length();
  }
  else
  {
    v11 = 0x1642C8590B21642LL;
  }
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(184 * v11);
  v13 = *a3;
  v14 = v12;
  v23 = a1;
  v24 = v11;
  v15 = v12;
  v16 = &v12[184 * v6];
  v25 = v16;
  *(_OWORD *)v16 = v13;
  v17 = a3[1];
  v26 = v16 + 184;
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
  *((_QWORD *)v16 + 22) = *((_QWORD *)v19 + 6);
  v20 = a1[1];
  v21 = *a1;
  if ( a2 != v20 )
  {
    std::_Uninitialized_move<PointData3D *>(v21, a2, v12);
    v20 = a1[1];
    v15 = v16 + 184;
    v21 = a2;
    v25 = v14;
  }
  std::_Uninitialized_move<PointData3D *>(v21, v20, v15);
  std::vector<PointData3D>::_Change_array(a1, v14, v8, v11, v23, 0LL, v24, v25, v26);
  std::vector<PointData3D>::_Reallocation_guard::~_Reallocation_guard(&v23);
  return v16;
}
