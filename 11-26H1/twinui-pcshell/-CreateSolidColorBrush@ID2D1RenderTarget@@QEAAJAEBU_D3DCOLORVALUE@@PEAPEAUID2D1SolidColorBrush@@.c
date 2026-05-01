/*
 * XREFs of ?CreateSolidColorBrush@ID2D1RenderTarget@@QEAAJAEBU_D3DCOLORVALUE@@PEAPEAUID2D1SolidColorBrush@@@Z @ 0x1804BFB68
 * Callers:
 *     ?_RenderText@CSwitchItemElement@@IEAAJAEBUD2D_RECT_F@@PEAUID2D1DeviceContext@@@Z @ 0x1804C0F44 (-_RenderText@CSwitchItemElement@@IEAAJAEBUD2D_RECT_F@@PEAUID2D1DeviceContext@@@Z.c)
 *     _lambda_5e9c18940e8e88d162ff7728dae26002_::operator() @ 0x1804C9704 (_lambda_5e9c18940e8e88d162ff7728dae26002_--operator().c)
 *     _lambda_6388d5cf85f46d09280dec8197538f8a_::operator() @ 0x1804CF914 (_lambda_6388d5cf85f46d09280dec8197538f8a_--operator().c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ID2D1RenderTarget::CreateSolidColorBrush(
        ID2D1RenderTarget *this,
        const struct _D3DCOLORVALUE *a2,
        struct ID2D1SolidColorBrush **a3)
{
  return (*(__int64 (__fastcall **)(ID2D1RenderTarget *, const struct _D3DCOLORVALUE *, _QWORD, struct ID2D1SolidColorBrush **))(*(_QWORD *)this + 64LL))(
           this,
           a2,
           0LL,
           a3);
}
