/*
 * XREFs of ??$_Emplace_reallocate@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@?$vector@UPlane@CDDisplayCachedScanout@@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@AEAAPEAUPlane@CDDisplayCachedScanout@@QEAU23@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1801C3964
 * Callers:
 *     ??$emplace_back@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@?$vector@UPlane@CDDisplayCachedScanout@@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@QEAAAEAUPlane@CDDisplayCachedScanout@@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1802AA550 (--$emplace_back@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@-$vector@UPlane@CDDisplayCachedScanout@@V-$.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAUPlane@CDDisplayCachedScanout@@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@YAPEAUPlane@CDDisplayCachedScanout@@QEAU12@0PEAU12@AEAV?$allocator@UPlane@CDDisplayCachedScanout@@@0@@Z @ 0x1800FAC58 (--$_Uninitialized_move@PEAUPlane@CDDisplayCachedScanout@@V-$allocator@UPlane@CDDisplayCachedScan.c)
 *     ?_Change_array@?$vector@UPlane@CDDisplayCachedScanout@@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@AEAAXQEAUPlane@CDDisplayCachedScanout@@_K1@Z @ 0x1800FAEA4 (-_Change_array@-$vector@UPlane@CDDisplayCachedScanout@@V-$allocator@UPlane@CDDisplayCachedScanou.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??0Plane@CDDisplayCachedScanout@@QEAA@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1801C3ABC (--0Plane@CDDisplayCachedScanout@@QEAA@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@Z.c)
 *     ??$_Get_size_of_n@$0FI@@std@@YA_K_K@Z @ 0x180209E0C (--$_Get_size_of_n@$0FI@@std@@YA_K_K@Z.c)
 *     ??1_Reallocation_guard@?$vector@UPlane@CDDisplayCachedScanout@@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@QEAA@XZ @ 0x1802AA598 (--1_Reallocation_guard@-$vector@UPlane@CDDisplayCachedScanout@@V-$allocator@UPlane@CDDisplayCach.c)
 */

CDDisplayCachedScanout::Plane *__fastcall std::vector<CDDisplayCachedScanout::Plane>::_Emplace_reallocate<DWM_PRESENT_MULTIPLANE_OVERLAY const &>(
        __int64 *a1,
        __int64 a2,
        const struct DWM_PRESENT_MULTIPLANE_OVERLAY *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v8; // r14
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rdx
  _DWORD *v14; // rax
  CDDisplayCachedScanout::Plane *v15; // r14
  _DWORD *v16; // rdi
  __int64 v17; // rdx
  _DWORD *v18; // r8
  __int64 v19; // rcx
  _QWORD v21[3]; // [rsp+20h] [rbp-58h] BYREF
  CDDisplayCachedScanout::Plane *v22; // [rsp+38h] [rbp-40h]
  char *v23; // [rsp+40h] [rbp-38h]

  v5 = 0x2E8BA2E8BA2E8BALL;
  v6 = 0x2E8BA2E8BA2E8BA3LL * ((a1[1] - *a1) >> 3);
  v8 = (a2 - *a1) / 88;
  if ( v6 == 0x2E8BA2E8BA2E8BALL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
  v9 = v6 + 1;
  v10 = 0x2E8BA2E8BA2E8BA3LL * ((a1[2] - *a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 <= 0x2E8BA2E8BA2E8BALL - (v10 >> 1) )
  {
    v5 = v11 + v10;
    if ( v11 + v10 < v9 )
      v5 = v9;
  }
  size_of = std::_Get_size_of_n<88>(v5);
  v14 = std::_Allocate<16,std::_Default_allocate_traits>(size_of, v13);
  v21[0] = a1;
  v15 = (CDDisplayCachedScanout::Plane *)&v14[22 * v8];
  v21[2] = v5;
  v16 = v14;
  v23 = (char *)v15 + 88;
  CDDisplayCachedScanout::Plane::Plane(v15, a3);
  v17 = a1[1];
  v18 = v16;
  v19 = *a1;
  v22 = v15;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<CDDisplayCachedScanout::Plane *>(v19, a2, v16);
    v17 = a1[1];
    v18 = (_DWORD *)((char *)v15 + 88);
    v19 = a2;
    v22 = (CDDisplayCachedScanout::Plane *)v16;
  }
  std::_Uninitialized_move<CDDisplayCachedScanout::Plane *>(v19, v17, v18);
  v21[1] = 0LL;
  std::vector<CDDisplayCachedScanout::Plane>::_Change_array((__int64)a1, (__int64)v16, v9, v5);
  std::vector<CDDisplayCachedScanout::Plane>::_Reallocation_guard::~_Reallocation_guard(v21);
  return v15;
}
