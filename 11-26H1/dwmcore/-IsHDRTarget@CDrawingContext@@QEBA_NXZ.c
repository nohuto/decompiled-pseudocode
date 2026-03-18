/*
 * XREFs of ?IsHDRTarget@CDrawingContext@@QEBA_NXZ @ 0x180013208
 * Callers:
 *     ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x180011040 (-IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ.c)
 *     ?CanUseWarpFastPath@CDrawListEntry@@IEBA_NPEAVCDrawingContext@@AEBVCMILMatrix@@W4Enum@BlendMode@@@Z @ 0x180012B60 (-CanUseWarpFastPath@CDrawListEntry@@IEBA_NPEAVCDrawingContext@@AEBVCMILMatrix@@W4Enum@BlendMode@.c)
 *     ?Draw@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180013130 (-Draw@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     TryFillRenderState @ 0x1800139C4 (TryFillRenderState.c)
 *     ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180124D00 (-Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800132C0 (-IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CDrawingContext::IsHDRTarget(CDrawingContext *this)
{
  enum DXGI_COLOR_SPACE_TYPE v1; // ecx
  bool v2; // al
  char v3; // cl
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL) + 24LL))(
                     *((_QWORD *)this + 3) + 8LL,
                     v5)
                 + 8);
  if ( v1 == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
    return 1;
  v2 = IsDXGIColorSpaceRec2020(v1);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
