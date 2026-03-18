/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UHandleTableEntry@CChannel@@V?$allocator@UHandleTableEntry@CChannel@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18014FF28
 * Callers:
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@UHandleTableEntry@CChannel@@V?$allocator@UHandleTableEntry@CChannel@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18014FD30 (--$_Resize@U_Value_init_tag@std@@@-$vector@UHandleTableEntry@CChannel@@V-$allocator@UHandleTable.c)
 *     ?CreateNewHandleTableEntry@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@PEAUIUnknown@@@Z @ 0x18014FDD0 (-CreateNewHandleTableEntry@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1800E8734 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UHandleTableEntry@CChannel@@V?$allocator@UHandleTableEntry@CChannel@@@std@@@std@@AEAAXQEAUHandleTableEntry@CChannel@@_K1@Z @ 0x18014F8C8 (-_Change_array@-$vector@UHandleTableEntry@CChannel@@V-$allocator@UHandleTableEntry@CChannel@@@st.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UHandleTableEntry@CChannel@@@std@@@std@@YAPEAUHandleTableEntry@CChannel@@PEAU12@_KAEAV?$allocator@UHandleTableEntry@CChannel@@@0@@Z @ 0x18014F944 (--$_Uninitialized_value_construct_n@V-$allocator@UHandleTableEntry@CChannel@@@std@@@std@@YAPEAUH.c)
 *     ??$_Destroy_range@V?$allocator@UHandleTableEntry@CChannel@@@std@@@std@@YAXPEAUHandleTableEntry@CChannel@@QEAU12@AEAV?$allocator@UHandleTableEntry@CChannel@@@0@@Z @ 0x18014FEEC (--$_Destroy_range@V-$allocator@UHandleTableEntry@CChannel@@@std@@@std@@YAXPEAUHandleTableEntry@C.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??1_Reallocation_guard@?$vector@UHandleTableEntry@CChannel@@V?$allocator@UHandleTableEntry@CChannel@@@std@@@std@@QEAA@XZ @ 0x180232368 (--1_Reallocation_guard@-$vector@UHandleTableEntry@CChannel@@V-$allocator@UHandleTableEntry@CChan.c)
 */

__int64 __fastcall std::vector<CChannel::HandleTableEntry>::_Resize_reallocate<std::_Value_init_tag>(
        __int64 *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v5; // rbp
  unsigned __int64 v6; // rcx
  __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  SIZE_T size_of; // rax
  __int64 v10; // rdx
  char *v11; // rax
  __int64 v12; // r14
  _QWORD *v13; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  _QWORD v19[3]; // [rsp+20h] [rbp-38h] BYREF
  char *v20; // [rsp+38h] [rbp-20h]
  _QWORD *v21; // [rsp+40h] [rbp-18h]

  v2 = 0xFFFFFFFFFFFFFFFLL;
  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
  v5 = a1[1] - *a1;
  v6 = (a1[2] - *a1) >> 4;
  v7 = v5 >> 4;
  v8 = v6 >> 1;
  if ( v6 <= 0xFFFFFFFFFFFFFFFLL - (v6 >> 1) )
  {
    v2 = v8 + v6;
    if ( v8 + v6 < a2 )
      v2 = a2;
  }
  size_of = std::_Get_size_of_n<16>(v2);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v10);
  v19[0] = a1;
  v19[2] = v2;
  v20 = &v11[16 * v7];
  v12 = (__int64)v11;
  v13 = std::_Uninitialized_value_construct_n<std::allocator<CChannel::HandleTableEntry>>(v20, a2 - v7);
  v14 = a1[1];
  v15 = v12;
  v16 = *a1;
  v21 = v13;
  while ( v16 != v14 )
  {
    *(_DWORD *)v15 = *(_DWORD *)v16;
    *(_DWORD *)(v15 + 4) = *(_DWORD *)(v16 + 4);
    v17 = *(_QWORD *)(v16 + 8);
    *(_QWORD *)(v16 + 8) = 0LL;
    *(_QWORD *)(v15 + 8) = v17;
    v15 += 16LL;
    v16 += 16LL;
  }
  std::_Destroy_range<std::allocator<CChannel::HandleTableEntry>>(v15, v15);
  v19[1] = 0LL;
  std::vector<CChannel::HandleTableEntry>::_Change_array((__int64)a1, v12, a2, v2);
  return std::vector<CChannel::HandleTableEntry>::_Reallocation_guard::~_Reallocation_guard(v19);
}
