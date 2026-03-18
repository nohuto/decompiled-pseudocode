/*
 * XREFs of ??$_Emplace_reallocate@AEBUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@?$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@AEAAPEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAU23@AEBU23@@Z @ 0x18025684C
 * Callers:
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x180123EB4 (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1801AE9F8 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??0DXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAA@AEBU01@@Z @ 0x1801D9508 (--0DXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAA@AEBU01@@Z.c)
 *     ?_Change_array@?$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@AEAAXQEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@_K1@Z @ 0x1801DEC5C (-_Change_array@-$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V-$allocator@U.c)
 *     ??$_Uninitialized_move@PEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@YAPEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAU12@0PEAU12@AEAV?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@0@@Z @ 0x1802569AC (--$_Uninitialized_move@PEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V-$allocator.c)
 *     ??1_Reallocation_guard@?$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@QEAA@XZ @ 0x180256A84 (--1_Reallocation_guard@-$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V-$all.c)
 */

CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *__fastcall std::vector<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair>::_Emplace_reallocate<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair const &>(
        __int64 *a1,
        __int64 a2,
        const struct CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *a3)
{
  unsigned __int64 v4; // rbx
  __int64 v7; // r14
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rdx
  CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *v14; // rdi
  CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *v15; // r14
  __int64 v16; // rdx
  CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *v17; // r8
  __int64 v18; // rcx
  _QWORD v20[3]; // [rsp+20h] [rbp-58h] BYREF
  CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *v21; // [rsp+38h] [rbp-40h]
  char *v22; // [rsp+40h] [rbp-38h]

  v4 = 0xAAAAAAAAAAAAAAALL;
  v7 = (a2 - *a1) / 24;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 3);
  if ( v8 == 0xAAAAAAAAAAAAAAALL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
  v9 = v8 + 1;
  v10 = 0xAAAAAAAAAAAAAAABuLL * ((a1[2] - *a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 <= 0xAAAAAAAAAAAAAAALL - (v10 >> 1) )
  {
    v4 = v11 + v10;
    if ( v11 + v10 < v9 )
      v4 = v9;
  }
  size_of = std::_Get_size_of_n<24>(v4);
  v20[0] = a1;
  v20[2] = v4;
  v14 = (CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *)std::_Allocate<16,std::_Default_allocate_traits>(
                                                                      size_of,
                                                                      v13);
  v15 = (CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *)((char *)v14 + 24 * v7);
  v22 = (char *)v15 + 24;
  CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair::DXGIResourceRenderTargetBitmapPair(v15, a3);
  v16 = a1[1];
  v17 = v14;
  v18 = *a1;
  v21 = v15;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *>(v18, a2, v14);
    v16 = a1[1];
    v17 = (CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *)((char *)v15 + 24);
    v18 = a2;
    v21 = v14;
  }
  std::_Uninitialized_move<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *>(v18, v16, v17);
  v20[1] = 0LL;
  std::vector<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair>::_Change_array(
    (__int64)a1,
    (__int64)v14,
    v9,
    v4);
  std::vector<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair>::_Reallocation_guard::~_Reallocation_guard(v20);
  return v15;
}
