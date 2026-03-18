/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UScribbleFrame@CComputeScribbleScheduler@@V?$allocator@UScribbleFrame@CComputeScribbleScheduler@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18025C53C
 * Callers:
 *     ?Initialize@CComputeScribbleScheduler@@AEAAJPEAVIOverlaySwapChain@@@Z @ 0x18025CCFC (-Initialize@CComputeScribbleScheduler@@AEAAJPEAVIOverlaySwapChain@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UFlipPropertyItem@@V?$allocator@UFlipPropertyItem@@@std@@@std@@AEAAXQEAUFlipPropertyItem@@_K1@Z @ 0x1801B3404 (-_Change_array@-$vector@UFlipPropertyItem@@V-$allocator@UFlipPropertyItem@@@std@@@std@@AEAAXQEAU.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x1801B41F4 (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??1_Reallocation_guard@?$vector@UScribbleFrame@CComputeScribbleScheduler@@V?$allocator@UScribbleFrame@CComputeScribbleScheduler@@@std@@@std@@QEAA@XZ @ 0x1802461F4 (--1_Reallocation_guard@-$vector@UScribbleFrame@CComputeScribbleScheduler@@V-$allocator@UScribble.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UScribbleFrame@CComputeScribbleScheduler@@@std@@@std@@YAPEAUScribbleFrame@CComputeScribbleScheduler@@PEAU12@_KAEAV?$allocator@UScribbleFrame@CComputeScribbleScheduler@@@0@@Z @ 0x18025C6BC (--$_Uninitialized_value_construct_n@V-$allocator@UScribbleFrame@CComputeScribbleScheduler@@@std@.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

void __fastcall std::vector<CComputeScribbleScheduler::ScribbleFrame>::_Resize_reallocate<std::_Value_init_tag>(
        const void **a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v5; // rbp
  unsigned __int64 v6; // rcx
  __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  SIZE_T size_of; // rax
  __int64 v10; // rdx
  char *v11; // rax
  void *v12; // rbx
  __int64 v13; // rax
  size_t v14; // r8
  const void *v15; // rdx
  _QWORD v16[3]; // [rsp+20h] [rbp-38h] BYREF
  char *v17; // [rsp+38h] [rbp-20h]
  __int64 v18; // [rsp+40h] [rbp-18h]

  v2 = 0x7FFFFFFFFFFFFFFLL;
  if ( a2 > 0x7FFFFFFFFFFFFFFLL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
  v5 = (_BYTE *)a1[1] - (_BYTE *)*a1;
  v6 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 5;
  v7 = v5 >> 5;
  v8 = v6 >> 1;
  if ( v6 <= 0x7FFFFFFFFFFFFFFLL - (v6 >> 1) )
  {
    v2 = v8 + v6;
    if ( v8 + v6 < a2 )
      v2 = a2;
  }
  size_of = std::_Get_size_of_n<32>(v2);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v10);
  v16[0] = a1;
  v16[2] = v2;
  v17 = &v11[32 * v7];
  v12 = v11;
  v13 = std::_Uninitialized_value_construct_n<std::allocator<CComputeScribbleScheduler::ScribbleFrame>>(v17, a2 - v7);
  v14 = (_BYTE *)a1[1] - (_BYTE *)*a1;
  v15 = *a1;
  v18 = v13;
  memmove_0(v12, v15, v14);
  v16[1] = 0LL;
  std::vector<FlipPropertyItem>::_Change_array((__int64)a1, (__int64)v12, a2, v2);
  std::vector<CComputeScribbleScheduler::ScribbleFrame>::_Reallocation_guard::~_Reallocation_guard((__int64)v16);
}
