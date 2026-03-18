/*
 * XREFs of ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x1800700A0
 * Callers:
 *     ?PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z @ 0x1800698E0 (-PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180069EE0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?PopTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z @ 0x18006A6F0 (-PopTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z.c)
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18006FCD0 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180070D10 (-RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?PopLayer@CD2DContext@@UEAAXPEBVID2DContextOwner@@@Z @ 0x180070F40 (-PopLayer@CD2DContext@@UEAAXPEBVID2DContextOwner@@@Z.c)
 *     ?PushLayer@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180070FB0 (-PushLayer@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MA.c)
 *     ?SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@PEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x1800C48D0 (-SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete@VCBa.c)
 * Callees:
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD2DTarget::ApplyCurrentClip(CD2DTarget *this)
{
  unsigned int v2; // ebp
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int128 v5; // xmm0
  __int64 v6; // rax
  __int64 v7; // rcx
  __m128i si128; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  if ( *((_BYTE *)this + 77) )
  {
    v2 = *((_DWORD *)this + 17);
    if ( *((_BYTE *)this + 78) )
    {
      v3 = *((_QWORD *)this + 2);
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      v9 = 0LL;
      (*(void (__fastcall **)(_QWORD, __m128i *))(**(_QWORD **)(v3 + 200) + 240LL))(*(_QWORD *)(v3 + 200), &si128);
      v4 = *(_QWORD *)(v3 + 208);
      *(_BYTE *)(v3 + 431) = 0;
      v5 = *(_OWORD *)((char *)this + 52);
      *(_DWORD *)(v3 + 408) = v2;
      *(_OWORD *)(v3 + 392) = v5;
      (*(void (__fastcall **)(__int64, char *, _QWORD))(*(_QWORD *)v4 + 80LL))(v4, (char *)this + 52, v2);
    }
    *((_BYTE *)this + 77) = 1;
  }
  else
  {
    v6 = *((_QWORD *)this + 2);
    v7 = *(_QWORD *)(v6 + 208);
    *(_BYTE *)(v6 + 431) = 1;
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v7 + 80LL))(v7, 0LL, 1LL);
  }
}
