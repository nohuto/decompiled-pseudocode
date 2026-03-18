/*
 * XREFs of ??$_Emplace_reallocate@AEAMMAEAM@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@AEAAPEAUKernelTap@@QEAU2@AEAM$$QEAM1@Z @ 0x1802B6E4C
 * Callers:
 *     ??$emplace_back@AEAMMAEAM@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@QEAAAEAUKernelTap@@AEAM$$QEAM0@Z @ 0x1802B715C (--$emplace_back@AEAMMAEAM@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@QEAAAEAUKern.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@AEAAXQEAUKernelTap@@_K1@Z @ 0x1801C0FBC (-_Change_array@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@AEAAXQEAUKernelTap@@_K1.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??$_Get_size_of_n@$0M@@std@@YA_K_K@Z @ 0x1801C8640 (--$_Get_size_of_n@$0M@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@YAPEAUKernelTap@@QEAU1@0PEAU1@AEAV?$allocator@UKernelTap@@@0@@Z @ 0x1801CE370 (--$_Uninitialized_move@PEAUKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@YAPEAUKernelTap@@QEAU.c)
 *     ?_Calculate_growth@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@AEBA_K_K@Z @ 0x18021C54C (-_Calculate_growth@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@AEBA_K_K@Z.c)
 *     ??1_Reallocation_guard@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@QEAA@XZ @ 0x1802461C8 (--1_Reallocation_guard@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@QEAA@XZ.c)
 */

char *__fastcall std::vector<KernelTap>::_Emplace_reallocate<float &,float,float &>(
        void **a1,
        __int64 a2,
        _DWORD *a3,
        int *a4,
        _DWORD *a5)
{
  __int64 v8; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // r15
  unsigned __int64 v11; // r14
  SIZE_T size_of; // rax
  __int64 v13; // rdx
  char *v14; // rax
  int v15; // xmm0_4
  __int64 v16; // rbx
  char *v17; // r8
  char *v18; // rsi
  __int64 v19; // rdx
  void *v20; // rcx
  _QWORD v22[3]; // [rsp+20h] [rbp-58h] BYREF
  char *v23; // [rsp+38h] [rbp-40h]
  _DWORD *v24; // [rsp+40h] [rbp-38h]

  v8 = (a2 - (__int64)*a1) / 12;
  v9 = 0xAAAAAAAAAAAAAAABuLL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2);
  if ( v9 == 0x1555555555555555LL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
  v10 = v9 + 1;
  v11 = std::vector<KernelTap>::_Calculate_growth(a1, v9 + 1);
  size_of = std::_Get_size_of_n<12>(v11);
  v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v13);
  v15 = *a4;
  v16 = (__int64)v14;
  v22[0] = a1;
  v22[2] = v11;
  v17 = v14;
  v18 = &v14[12 * v8];
  *((_DWORD *)v18 + 1) = v15;
  v24 = v18 + 12;
  v23 = v18;
  *(_DWORD *)v18 = *a3;
  *((_DWORD *)v18 + 2) = *a5;
  v19 = (__int64)a1[1];
  v20 = *a1;
  if ( a2 != v19 )
  {
    std::_Uninitialized_move<KernelTap *>(v20, a2, v14);
    v19 = (__int64)a1[1];
    v17 = v18 + 12;
    v20 = (void *)a2;
    v23 = (char *)v16;
  }
  std::_Uninitialized_move<KernelTap *>(v20, v19, v17);
  v22[1] = 0LL;
  std::vector<KernelTap>::_Change_array((__int64)a1, v16, v10, v11);
  std::vector<KernelTap>::_Reallocation_guard::~_Reallocation_guard((__int64)v22);
  return v18;
}
