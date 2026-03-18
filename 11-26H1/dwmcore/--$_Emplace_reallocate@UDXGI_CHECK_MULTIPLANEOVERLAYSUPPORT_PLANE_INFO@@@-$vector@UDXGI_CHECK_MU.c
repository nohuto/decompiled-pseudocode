/*
 * XREFs of ??$_Emplace_reallocate@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@?$vector@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V?$allocator@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@std@@@std@@AEAAPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@QEAU2@$$QEAU2@@Z @ 0x1802A513C
 * Callers:
 *     ??$emplace_back@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@?$vector@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V?$allocator@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@std@@@std@@QEAAAEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@$$QEAU2@@Z @ 0x1802A56F4 (--$emplace_back@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@-$vector@UDXGI_CHECK_MULTIPLAN.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0JA@@std@@YA_K_K@Z @ 0x18019E588 (--$_Get_size_of_n@$0JA@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V?$allocator@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@std@@@std@@AEAAXQEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@_K1@Z @ 0x1801B2180 (-_Change_array@-$vector@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V-$allocator@UDXGI_CHEC.c)
 *     ??$_Uninitialized_move@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V?$allocator@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@std@@@std@@YAPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@QEAU1@0PEAU1@AEAV?$allocator@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@0@@Z @ 0x1801BD39C (--$_Uninitialized_move@PEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V-$allocator@UDXGI_CH.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??1_Reallocation_guard@?$vector@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V?$allocator@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@std@@@std@@QEAA@XZ @ 0x1802A5A18 (--1_Reallocation_guard@-$vector@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V-$allocator@UD.c)
 */

char *__fastcall std::vector<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO>::_Emplace_reallocate<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO>(
        void **a1,
        __int64 a2,
        __int128 *a3)
{
  unsigned __int64 v4; // rbx
  __int64 v7; // r15
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rdx
  char *v14; // rax
  __int128 v15; // xmm0
  __int64 v16; // rdi
  char *v17; // r15
  char *v18; // r8
  __int128 v19; // xmm1
  __int64 v20; // rdx
  void *v21; // rcx
  _QWORD v23[3]; // [rsp+20h] [rbp-58h] BYREF
  char *v24; // [rsp+38h] [rbp-40h]
  _OWORD *v25; // [rsp+40h] [rbp-38h]

  v4 = 0x1C71C71C71C71C7LL;
  v7 = (a2 - (__int64)*a1) / 144;
  v8 = 0x8E38E38E38E38E39uLL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 4);
  if ( v8 == 0x1C71C71C71C71C7LL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
  v9 = v8 + 1;
  v10 = 0x8E38E38E38E38E39uLL * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 4);
  v11 = v10 >> 1;
  if ( v10 <= 0x1C71C71C71C71C7LL - (v10 >> 1) )
  {
    v4 = v11 + v10;
    if ( v11 + v10 < v9 )
      v4 = v8 + 1;
  }
  size_of = std::_Get_size_of_n<144>(v4);
  v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v13);
  v15 = *a3;
  v23[0] = a1;
  v16 = (__int64)v14;
  v17 = &v14[144 * v7];
  v23[2] = v4;
  v24 = v17;
  v18 = v14;
  *(_OWORD *)v17 = v15;
  v19 = a3[1];
  v25 = v17 + 144;
  *((_OWORD *)v17 + 1) = v19;
  *((_OWORD *)v17 + 2) = a3[2];
  *((_OWORD *)v17 + 3) = a3[3];
  *((_OWORD *)v17 + 4) = a3[4];
  *((_OWORD *)v17 + 5) = a3[5];
  *((_OWORD *)v17 + 6) = a3[6];
  *((_OWORD *)v17 + 7) = a3[7];
  *((_OWORD *)v17 + 8) = a3[8];
  v20 = (__int64)a1[1];
  v21 = *a1;
  if ( a2 != v20 )
  {
    std::_Uninitialized_move<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *>(v21, a2, v14);
    v20 = (__int64)a1[1];
    v18 = v17 + 144;
    v21 = (void *)a2;
    v24 = (char *)v16;
  }
  std::_Uninitialized_move<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *>(v21, v20, v18);
  v23[1] = 0LL;
  std::vector<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO>::_Change_array((__int64)a1, v16, v9, v4);
  std::vector<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO>::_Reallocation_guard::~_Reallocation_guard(v23);
  return v17;
}
