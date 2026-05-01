/*
 * XREFs of ?DrawTextW@ID2D1RenderTarget@@QEAAXPEBGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@PEAUID2D1Brush@@W4D2D1_DRAW_TEXT_OPTIONS@@W4DWRITE_MEASURING_MODE@@@Z @ 0x1804AE0DC
 * Callers:
 *     ?_RenderText@CSwitchItemElement@@IEAAJAEBUD2D_RECT_F@@PEAUID2D1DeviceContext@@@Z @ 0x1804AF33C (-_RenderText@CSwitchItemElement@@IEAAJAEBUD2D_RECT_F@@PEAUID2D1DeviceContext@@@Z.c)
 *     _lambda_6388d5cf85f46d09280dec8197538f8a_::operator() @ 0x1804BDA6C (_lambda_6388d5cf85f46d09280dec8197538f8a_--operator().c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ID2D1RenderTarget::DrawTextW(
        ID2D1RenderTarget *this,
        const unsigned __int16 *a2,
        __int64 a3,
        struct IDWriteTextFormat *a4,
        const struct D2D_RECT_F *a5,
        struct ID2D1Brush *a6)
{
  (*(void (__fastcall **)(ID2D1RenderTarget *, const unsigned __int16 *, __int64, struct IDWriteTextFormat *, const struct D2D_RECT_F *, struct ID2D1Brush *, _DWORD, _DWORD))(*(_QWORD *)this + 216LL))(
    this,
    a2,
    a3,
    a4,
    a5,
    a6,
    0,
    0);
}
