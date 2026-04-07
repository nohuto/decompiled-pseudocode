/*
 * XREFs of ?CreateCompatibleRenderTarget@ID2D1RenderTarget@@QEAAJUD2D_SIZE_F@@PEAPEAUID2D1BitmapRenderTarget@@@Z @ 0x18000E320
 * Callers:
 *     ?CreateBorderSurface@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAPEAUICompositionSurface@Composition@UI@Windows@@@Z @ 0x18000E35C (-CreateBorderSurface@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ID2D1RenderTarget::CreateCompatibleRenderTarget(
        ID2D1RenderTarget *this,
        struct D2D_SIZE_F a2,
        struct ID2D1BitmapRenderTarget **a3)
{
  __int64 v3; // rax
  struct D2D_SIZE_F v5; // [rsp+40h] [rbp-18h] BYREF

  v3 = *(_QWORD *)this;
  v5 = a2;
  return (*(__int64 (__fastcall **)(ID2D1RenderTarget *, struct D2D_SIZE_F *, _QWORD, _QWORD, _DWORD, struct ID2D1BitmapRenderTarget **))(v3 + 96))(
           this,
           &v5,
           0LL,
           0LL,
           0,
           a3);
}
