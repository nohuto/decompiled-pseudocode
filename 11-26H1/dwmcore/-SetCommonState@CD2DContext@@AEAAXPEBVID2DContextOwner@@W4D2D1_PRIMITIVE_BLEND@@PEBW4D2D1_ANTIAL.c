/*
 * XREFs of ?SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180189180
 * Callers:
 *     ?DrawGenericInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUIDCompositionDirectInkWetStrokePartner@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@M_N@Z @ 0x180189050 (-DrawGenericInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUIDCompositionDirectInkWetStrokePartn.c)
 *     ?DrawInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180298680 (-DrawInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkS.c)
 *     ?DrawTextW@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@W4D2D1_DRAW_TEXT_OPTIONS@@W4DWRITE_MEASURING_MODE@@@Z @ 0x180298740 (-DrawTextW@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@A.c)
 * Callees:
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD2DContext::SetCommonState(
        CD2DContext *this,
        void (__fastcall ***a2)(const struct ID2DContextOwner *, __int128 *),
        unsigned int a3,
        const enum D2D1_ANTIALIAS_MODE *a4,
        struct D2D_MATRIX_3X2_F *a5)
{
  void (__fastcall *v8)(const struct ID2DContextOwner *, __int128 *); // rax
  unsigned int v9; // esi
  __int64 v10; // xmm1_8
  __int128 v11; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+30h] [rbp-38h]

  v12 = 0LL;
  v8 = **a2;
  v11 = 0LL;
  v8((const struct ID2DContextOwner *)a2, &v11);
  (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 25) + 240LL))(*((_QWORD *)this + 25), &v11);
  if ( a3 != *((_DWORD *)this + 97) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 25) + 624LL))(*((_QWORD *)this + 25), a3);
    *((_DWORD *)this + 97) = a3;
  }
  if ( a4 )
  {
    v9 = *a4;
    if ( v9 != *((_DWORD *)this + 96) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 25) + 256LL))(*((_QWORD *)this + 25), v9);
      *((_DWORD *)this + 96) = v9;
    }
  }
  if ( a5 )
  {
    v10 = v12;
    *(_OWORD *)&a5->m11 = v11;
    *(_QWORD *)&a5->m[2][0] = v10;
  }
}
