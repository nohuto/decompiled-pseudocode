/*
 * XREFs of ??$_Emplace_reallocate@MAEAMAEAM@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@AEAAPEAUKernelTap@@QEAU2@$$QEAMAEAM2@Z @ 0x1802B6FAC
 * Callers:
 *     ??$emplace_back@MAEAMAEAM@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@QEAAAEAUKernelTap@@$$QEAMAEAM1@Z @ 0x1802B71B0 (--$emplace_back@MAEAMAEAM@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@QEAAAEAUKern.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@AEAAXQEAUKernelTap@@_K1@Z @ 0x1801C0FBC (-_Change_array@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@AEAAXQEAUKernelTap@@_K1.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??$_Get_size_of_n@$0M@@std@@YA_K_K@Z @ 0x1801C8640 (--$_Get_size_of_n@$0M@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@YAPEAUKernelTap@@QEAU1@0PEAU1@AEAV?$allocator@UKernelTap@@@0@@Z @ 0x1801CE370 (--$_Uninitialized_move@PEAUKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@YAPEAUKernelTap@@QEAU.c)
 *     ?_Calculate_growth@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@AEBA_K_K@Z @ 0x18021C54C (-_Calculate_growth@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@AEBA_K_K@Z.c)
 *     ??1_Reallocation_guard@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@QEAA@XZ @ 0x1802461C8 (--1_Reallocation_guard@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@QEAA@XZ.c)
 */

char *__fastcall std::vector<KernelTap>::_Emplace_reallocate<float,float &,float &>(
        void **a1,
        __int64 a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5)
{
  __int64 v8; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // r15
  unsigned __int64 v11; // r14
  SIZE_T size_of; // rax
  __int64 v13; // rdx
  char *v14; // rbx
  char *v15; // r8
  char *v16; // rsi
  __int64 v17; // rdx
  void *v18; // rcx
  _QWORD v20[3]; // [rsp+20h] [rbp-58h] BYREF
  char *v21; // [rsp+38h] [rbp-40h]
  _DWORD *v22; // [rsp+40h] [rbp-38h]

  v8 = (a2 - (__int64)*a1) / 12;
  v9 = 0xAAAAAAAAAAAAAAABuLL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2);
  if ( v9 == 0x1555555555555555LL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
  v10 = v9 + 1;
  v11 = std::vector<KernelTap>::_Calculate_growth(a1, v9 + 1);
  size_of = std::_Get_size_of_n<12>(v11);
  v20[0] = a1;
  v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v13);
  v20[2] = v11;
  v15 = v14;
  v16 = &v14[12 * v8];
  v21 = v16;
  v22 = v16 + 12;
  *(_DWORD *)v16 = *a3;
  *((_DWORD *)v16 + 1) = *a4;
  *((_DWORD *)v16 + 2) = *a5;
  v17 = (__int64)a1[1];
  v18 = *a1;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<KernelTap *>(v18, a2, v14);
    v17 = (__int64)a1[1];
    v15 = v16 + 12;
    v18 = (void *)a2;
    v21 = v14;
  }
  std::_Uninitialized_move<KernelTap *>(v18, v17, v15);
  v20[1] = 0LL;
  std::vector<KernelTap>::_Change_array((__int64)a1, (__int64)v14, v10, v11);
  std::vector<KernelTap>::_Reallocation_guard::~_Reallocation_guard((__int64)v20);
  return v16;
}
