/*
 * XREFs of ??$_Insert_counted_range@PEBUPositionShift@@@?$vector@UPositionShift@@V?$allocator@UPositionShift@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UPositionShift@@@std@@@std@@@1@PEBUPositionShift@@_K@Z @ 0x1801C460C
 * Callers:
 *     ??$insert@PEBUPositionShift@@$0A@@?$vector@UPositionShift@@V?$allocator@UPositionShift@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UPositionShift@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UPositionShift@@@std@@@std@@@1@PEBUPositionShift@@1@Z @ 0x1801C4590 (--$insert@PEBUPositionShift@@$0A@@-$vector@UPositionShift@@V-$allocator@UPositionShift@@@std@@@s.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?_Change_array@?$vector@UPositionShift@@V?$allocator@UPositionShift@@@std@@@std@@AEAAXQEAUPositionShift@@_K1@Z @ 0x1801C51F0 (-_Change_array@-$vector@UPositionShift@@V-$allocator@UPositionShift@@@std@@@std@@AEAAXQEAUPositi.c)
 *     ??$_Get_size_of_n@$0M@@std@@YA_K_K@Z @ 0x1801C8640 (--$_Get_size_of_n@$0M@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@YAPEAUKernelTap@@QEAU1@0PEAU1@AEAV?$allocator@UKernelTap@@@0@@Z @ 0x1801CE370 (--$_Uninitialized_move@PEAUKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@YAPEAUKernelTap@@QEAU.c)
 *     ??$_Uninitialized_copy_n@PEBUPositionShift@@V?$allocator@UPositionShift@@@std@@@std@@YAPEAUPositionShift@@PEBU1@_KPEAU1@AEAV?$allocator@UPositionShift@@@0@@Z @ 0x18021D050 (--$_Uninitialized_copy_n@PEBUPositionShift@@V-$allocator@UPositionShift@@@std@@@std@@YAPEAUPosit.c)
 *     ??1_Reallocation_guard@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@QEAA@XZ @ 0x1802461C8 (--1_Reallocation_guard@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@QEAA@XZ.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

void __fastcall std::vector<PositionShift>::_Insert_counted_range<PositionShift const *>(
        char **a1,
        char *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  char *v4; // rsi
  char *v6; // r13
  char *v8; // r9
  __int64 v11; // rbp
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rcx
  SIZE_T size_of; // rax
  __int64 v17; // rdx
  char *v18; // r12
  char *v19; // r8
  char *v20; // rcx
  __int64 v21; // rcx
  char *v22; // rdi
  _QWORD v23[3]; // [rsp+20h] [rbp-68h] BYREF
  char *v24; // [rsp+38h] [rbp-50h]
  char *v25; // [rsp+40h] [rbp-48h]
  unsigned __int64 v26; // [rsp+98h] [rbp+10h]

  if ( a4 )
  {
    v4 = a1[1];
    v6 = *a1;
    v8 = a1[2];
    if ( a4 <= (v8 - v4) / 12 )
    {
      v21 = 12 * a4;
      if ( a4 >= 0xAAAAAAAAAAAAAAABuLL * ((v4 - a2) >> 2) )
      {
        a1[1] = (char *)std::_Uninitialized_move<KernelTap *>(a2, v4, &a2[v21]);
      }
      else
      {
        v22 = &v4[-v21];
        a1[1] = (char *)std::_Uninitialized_move<KernelTap *>(&v4[-v21], v4, v4);
        memmove_0(&v4[-(v22 - a2)], a2, v22 - a2);
      }
      std::_Uninitialized_copy_n<PositionShift const *>(a3, a4, a2);
    }
    else
    {
      v11 = 0x1555555555555555LL;
      v12 = 0xAAAAAAAAAAAAAAABuLL * ((v4 - v6) >> 2);
      if ( a4 > 0x1555555555555555LL - v12 )
        std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
      v13 = v12 + a4;
      v14 = 0xAAAAAAAAAAAAAAABuLL * ((v8 - v6) >> 2);
      v26 = v12 + a4;
      v15 = v14 >> 1;
      if ( v14 <= 0x1555555555555555LL - (v14 >> 1) )
      {
        v11 = v15 + v14;
        if ( v15 + v14 < v13 )
          v11 = v13;
      }
      size_of = std::_Get_size_of_n<12>(v11);
      v18 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v17);
      v23[0] = a1;
      v23[2] = v11;
      v25 = &v18[12 * a4 + 4 * ((a2 - v6) >> 2)];
      std::_Uninitialized_copy_n<PositionShift const *>(a3, a4, &v18[4 * ((a2 - v6) >> 2)]);
      v24 = &v18[4 * ((a2 - v6) >> 2)];
      if ( a4 == 1 && a2 == v4 )
      {
        v19 = v18;
        v20 = v6;
      }
      else
      {
        std::_Uninitialized_move<KernelTap *>(v6, a2, v18);
        v19 = &v18[12 * a4 + 4 * ((a2 - v6) >> 2)];
        v20 = a2;
        v24 = v18;
      }
      std::_Uninitialized_move<KernelTap *>(v20, v4, v19);
      v23[1] = 0LL;
      std::vector<PositionShift>::_Change_array(a1, v18, v26, v11);
      std::vector<KernelTap>::_Reallocation_guard::~_Reallocation_guard(v23);
    }
  }
}
