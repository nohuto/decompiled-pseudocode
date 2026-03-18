/*
 * XREFs of ?DrawTextW@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@W4D2D1_DRAW_TEXT_OPTIONS@@W4DWRITE_MEASURING_MODE@@@Z @ 0x180298740
 * Callers:
 *     ?DrawTextW@CDrawingContext@@QEAAJPEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@@Z @ 0x180235D6C (-DrawTextW@CDrawingContext@@QEAAJPEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@.c)
 * Callees:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180069EE0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x18006ED40 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180189180 (-SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIAL.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DContext::DrawTextW(
        CD2DContext *this,
        void (__fastcall ***a2)(const struct ID2DContextOwner *, __int128 *),
        unsigned __int16 *a3,
        unsigned int a4,
        struct IDWriteTextFormat *a5,
        const struct D2D_RECT_F *a6,
        const struct _D3DCOLORVALUE *a7,
        enum D2D1_ANTIALIAS_MODE a8,
        enum D2D1_PRIMITIVE_BLEND a9,
        enum D2D1_DRAW_TEXT_OPTIONS a10,
        enum DWRITE_MEASURING_MODE a11)
{
  __int64 v15; // rdx
  __int64 v16; // r8

  CD2DContext::FlushDrawList(this, (__int64)a2, (__int64)a3);
  CD2DContext::EnsureBeginDraw(this, v15, v16);
  CD2DContext::SetCommonState(this, a2, a9, &a8, 0LL);
  (*(void (__fastcall **)(_QWORD, const struct _D3DCOLORVALUE *))(**((_QWORD **)this + 38) + 64LL))(
    *((_QWORD *)this + 38),
    a7);
  (*(void (__fastcall **)(_QWORD, unsigned __int16 *, _QWORD, struct IDWriteTextFormat *, const struct D2D_RECT_F *, _QWORD, enum D2D1_DRAW_TEXT_OPTIONS, enum DWRITE_MEASURING_MODE))(**((_QWORD **)this + 25) + 216LL))(
    *((_QWORD *)this + 25),
    a3,
    a4,
    a5,
    a6,
    *((_QWORD *)this + 38),
    a10,
    a11);
  return 0LL;
}
