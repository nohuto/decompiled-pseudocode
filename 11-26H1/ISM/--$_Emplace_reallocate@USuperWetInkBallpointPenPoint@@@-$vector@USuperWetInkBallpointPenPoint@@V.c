/*
 * XREFs of ??$_Emplace_reallocate@USuperWetInkBallpointPenPoint@@@?$vector@USuperWetInkBallpointPenPoint@@V?$allocator@USuperWetInkBallpointPenPoint@@@std@@@std@@AEAAPEAUSuperWetInkBallpointPenPoint@@QEAU2@$$QEAU2@@Z @ 0x1800AAC94
 * Callers:
 *     ??$emplace_back@USuperWetInkBallpointPenPoint@@@?$vector@USuperWetInkBallpointPenPoint@@V?$allocator@USuperWetInkBallpointPenPoint@@@std@@@std@@QEAAAEAUSuperWetInkBallpointPenPoint@@$$QEAU2@@Z @ 0x1800AAE4C (--$emplace_back@USuperWetInkBallpointPenPoint@@@-$vector@USuperWetInkBallpointPenPoint@@V-$alloc.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0DI@@std@@YA_K_K@Z @ 0x180088100 (--$_Get_size_of_n@$0DI@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUSuperWetInkBallpointPenPoint@@V?$allocator@USuperWetInkBallpointPenPoint@@@std@@@std@@YAPEAUSuperWetInkBallpointPenPoint@@QEAU1@0PEAU1@AEAV?$allocator@USuperWetInkBallpointPenPoint@@@0@@Z @ 0x1800AADF0 (--$_Uninitialized_move@PEAUSuperWetInkBallpointPenPoint@@V-$allocator@USuperWetInkBallpointPenPo.c)
 *     ??1_Reallocation_guard@?$vector@USuperWetInkBallpointPenPoint@@V?$allocator@USuperWetInkBallpointPenPoint@@@std@@@std@@QEAA@XZ @ 0x1800AAF00 (--1_Reallocation_guard@-$vector@USuperWetInkBallpointPenPoint@@V-$allocator@USuperWetInkBallpoin.c)
 *     ?_Calculate_growth@?$vector@USuperWetInkBallpointPenPoint@@V?$allocator@USuperWetInkBallpointPenPoint@@@std@@@std@@AEBA_K_K@Z @ 0x1800AB0D4 (-_Calculate_growth@-$vector@USuperWetInkBallpointPenPoint@@V-$allocator@USuperWetInkBallpointPen.c)
 *     ?_Change_array@?$vector@USuperWetInkBallpointPenPoint@@V?$allocator@USuperWetInkBallpointPenPoint@@@std@@@std@@AEAAXQEAUSuperWetInkBallpointPenPoint@@_K1@Z @ 0x1800AB11C (-_Change_array@-$vector@USuperWetInkBallpointPenPoint@@V-$allocator@USuperWetInkBallpointPenPoin.c)
 */

char *__fastcall std::vector<SuperWetInkBallpointPenPoint>::_Emplace_reallocate<SuperWetInkBallpointPenPoint>(
        _QWORD *a1,
        __int64 a2,
        __int128 *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // r14
  unsigned __int64 size_of; // rax
  char *v11; // rax
  __int128 v12; // xmm0
  char *v13; // rbx
  char *v14; // r8
  char *v15; // rsi
  __int128 v16; // xmm1
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v20; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v21; // [rsp+30h] [rbp-48h]
  char *v22; // [rsp+38h] [rbp-40h]
  char *v23; // [rsp+40h] [rbp-38h]

  v6 = (a2 - *a1) / 56;
  v7 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(a1[1] - *a1) >> 3);
  if ( v7 == 0x492492492492492LL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v8 = v7 + 1;
  v9 = std::vector<SuperWetInkBallpointPenPoint>::_Calculate_growth(a1, v7 + 1);
  size_of = std::_Get_size_of_n<56>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v12 = *a3;
  v13 = v11;
  v20 = a1;
  v21 = v9;
  v14 = v11;
  v15 = &v11[56 * v6];
  v22 = v15;
  *(_OWORD *)v15 = v12;
  v16 = a3[1];
  v23 = v15 + 56;
  *((_OWORD *)v15 + 1) = v16;
  *((_OWORD *)v15 + 2) = a3[2];
  *((_QWORD *)v15 + 6) = *((_QWORD *)a3 + 6);
  v17 = a1[1];
  v18 = *a1;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<SuperWetInkBallpointPenPoint *>(v18, a2, v11);
    v17 = a1[1];
    v14 = v15 + 56;
    v18 = a2;
    v22 = v13;
  }
  std::_Uninitialized_move<SuperWetInkBallpointPenPoint *>(v18, v17, v14);
  std::vector<SuperWetInkBallpointPenPoint>::_Change_array(a1, v13, v8, v9, v20, 0LL, v21, v22, v23);
  std::vector<SuperWetInkBallpointPenPoint>::_Reallocation_guard::~_Reallocation_guard(&v20);
  return v15;
}
