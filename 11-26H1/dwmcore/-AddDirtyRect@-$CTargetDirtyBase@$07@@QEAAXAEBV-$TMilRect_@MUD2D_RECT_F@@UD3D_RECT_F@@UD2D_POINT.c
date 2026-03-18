/*
 * XREFs of ?AddDirtyRect@?$CTargetDirtyBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B5D94
 * Callers:
 *     ?AddComputeScribbleDirtyRects@CDDisplayRenderTarget@@IEAAXXZ @ 0x180058938 (-AddComputeScribbleDirtyRects@CDDisplayRenderTarget@@IEAAXXZ.c)
 *     ?AddComputeScribbleDirtyRects@CLegacyRenderTarget@@AEAAXXZ @ 0x180059F10 (-AddComputeScribbleDirtyRects@CLegacyRenderTarget@@AEAAXXZ.c)
 *     ?AddDirtyRect@CDDisplayRenderTarget@@UEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B5D60 (-AddDirtyRect@CDDisplayRenderTarget@@UEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?AddDirtyRect@CLegacyRenderTarget@@UEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B5D80 (-AddDirtyRect@CLegacyRenderTarget@@UEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAND.c)
 *     _CCaptureRenderTarget::AddCursorInvalidRects_::_2_::_lambda_1_::operator() @ 0x180256B00 (_CCaptureRenderTarget--AddCursorInvalidRects_--_2_--_lambda_1_--operator().c)
 * Callees:
 *     ?Add@?$CMergedRectBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180057AB0 (-Add@-$CMergedRectBase@$07@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CTargetDirtyBase<8>::AddDirtyRect(__int64 a1, float *a2)
{
  const __m128i *v4; // rax
  __int64 v5; // r8
  const char *v6; // r9
  float v7; // xmm0_4
  __m128i v8; // xmm2
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm3_4
  float v13; // xmm4_4
  float v14; // xmm0_4
  __m128i v15; // [rsp+20h] [rbp-28h] BYREF

  if ( !*(_BYTE *)(a1 + 1872) )
  {
    v4 = (const __m128i *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 32LL))(*(_QWORD *)(a1 + 8));
    v7 = *a2;
    v8 = _mm_loadu_si128(v4);
    v15 = v8;
    if ( v7 > *(float *)v8.m128i_i32 )
    {
      *(float *)v15.m128i_i32 = v7;
      *(float *)v8.m128i_i32 = v7;
    }
    v9 = a2[1];
    v10 = *(float *)&v15.m128i_i32[1];
    if ( v9 > *(float *)&v15.m128i_i32[1] )
    {
      v15.m128i_i32[1] = (__int32)a2[1];
      v10 = v9;
    }
    v11 = a2[2];
    v12 = *(float *)&v15.m128i_i32[2];
    if ( *(float *)&v15.m128i_i32[2] > v11 )
    {
      v15.m128i_i32[2] = (__int32)a2[2];
      v12 = v11;
    }
    v13 = a2[3];
    v14 = *(float *)&v15.m128i_i32[3];
    if ( *(float *)&v15.m128i_i32[3] > v13 )
    {
      v15.m128i_i32[3] = (__int32)a2[3];
      v14 = v13;
    }
    if ( v12 > *(float *)v8.m128i_i32 && v14 > v10 )
    {
      CMergedRectBase<8>::Add((unsigned int *)(a1 + 16), (__int64)&v15, v5, v6);
      if ( *(_QWORD *)(a1 + 464) )
        (*(void (__fastcall **)(__int64, __m128i *))(*(_QWORD *)a1 + 8LL))(a1, &v15);
    }
    *(_BYTE *)(a1 + 1873) = 1;
  }
}
