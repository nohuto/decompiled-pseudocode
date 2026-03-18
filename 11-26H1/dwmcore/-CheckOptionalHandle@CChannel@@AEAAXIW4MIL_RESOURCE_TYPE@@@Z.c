/*
 * XREFs of ?CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180117068
 * Callers:
 *     ?RedirectVisualSetRedirectedVisual@CChannel@@UEAAJII@Z @ 0x180116FC0 (-RedirectVisualSetRedirectedVisual@CChannel@@UEAAJII@Z.c)
 *     ?CombinedGeometryUpdate@CChannel@@UEAAJIW4Enum@MilCombineMode@@II@Z @ 0x180119390 (-CombinedGeometryUpdate@CChannel@@UEAAJIW4Enum@MilCombineMode@@II@Z.c)
 *     ?MagnifierRenderTargetSetFilterList@CChannel@@UEAAJII@Z @ 0x180119630 (-MagnifierRenderTargetSetFilterList@CChannel@@UEAAJII@Z.c)
 *     ?VisualSetBlurredWallpaperSurface@CChannel@@UEAAJIIPEBUtagRECT@@@Z @ 0x1801196E0 (-VisualSetBlurredWallpaperSurface@CChannel@@UEAAJIIPEBUtagRECT@@@Z.c)
 *     ?CaptureControllerSetReferenceVisual@CChannel@@UEAAJII@Z @ 0x180232730 (-CaptureControllerSetReferenceVisual@CChannel@@UEAAJII@Z.c)
 *     ?CaptureControllerSetRootVisual@CChannel@@UEAAJII@Z @ 0x1802327D0 (-CaptureControllerSetRootVisual@CChannel@@UEAAJII@Z.c)
 *     ?CaptureControllerSetTransform@CChannel@@UEAAJII@Z @ 0x1802329A0 (-CaptureControllerSetTransform@CChannel@@UEAAJII@Z.c)
 *     ?MagnifierRenderTargetSetTransform@CChannel@@UEAAJII@Z @ 0x1802331C0 (-MagnifierRenderTargetSetTransform@CChannel@@UEAAJII@Z.c)
 *     ?RenderTargetSetRoot@CChannel@@UEAAJII@Z @ 0x1802336B0 (-RenderTargetSetRoot@CChannel@@UEAAJII@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall CChannel::CheckOptionalHandle(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // r9
  __int64 v4; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    v3 = *(_QWORD *)(a1 + 16) + 16LL * (a2 - 1);
    if ( a2 > (unsigned __int64)((__int64)(*(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16)) >> 4) )
      goto LABEL_9;
    if ( !*(_DWORD *)v3 )
      goto LABEL_9;
    v4 = *(unsigned int *)(v3 + 4);
    if ( !(_DWORD)v4 )
      goto LABEL_9;
    if ( a3 )
    {
      while ( (unsigned int)v4 < 0xA6 )
      {
        if ( (_DWORD)v4 == a3 )
          return;
        LODWORD(v4) = *((_DWORD *)&byte_180376D10 + v4);
      }
LABEL_9:
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x811,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
        (const char *)v3);
    }
  }
}
