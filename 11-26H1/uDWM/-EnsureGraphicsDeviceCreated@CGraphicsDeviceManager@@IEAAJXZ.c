/*
 * XREFs of ?EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ @ 0x18000F6B8
 * Callers:
 *     ?UpdateText@CDWriteText@@AEAAJXZ @ 0x18000723C (-UpdateText@CDWriteText@@AEAAJXZ.c)
 *     ?CreateCompSurfaceFromWICBitmap@CBitmapSource@@SAJPEAUIWICBitmapSource@@PEAPEAUICompositionSurface@Composition@UI@Windows@@@Z @ 0x18000DC70 (-CreateCompSurfaceFromWICBitmap@CBitmapSource@@SAJPEAUIWICBitmapSource@@PEAPEAUICompositionSurfa.c)
 *     ?CreateBorderSurface@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAPEAUICompositionSurface@Composition@UI@Windows@@@Z @ 0x18000E35C (-CreateBorderSurface@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@.c)
 *     ?HandleGraphicsDeviceLost@CGraphicsDeviceManager@@IEAAXXZ @ 0x180054480 (-HandleGraphicsDeviceLost@CGraphicsDeviceManager@@IEAAXXZ.c)
 *     ?CreateCompSurfaceFromWICBitmap@CBitmapSource@@SAJPEAUIWICBitmapSource@@PEAPEAUIDCompositionSurface@@@Z @ 0x180068490 (-CreateCompSurfaceFromWICBitmap@CBitmapSource@@SAJPEAUIWICBitmapSource@@PEAPEAUIDCompositionSurf.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180088754 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x180089634 (-InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ.c)
 */

__int64 __fastcall CGraphicsDeviceManager::EnsureGraphicsDeviceCreated(
        CGraphicsDeviceManager *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 120) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xE0,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
      a4);
  if ( *((_QWORD *)this + 4) )
    return 0LL;
  v5 = CGraphicsDeviceManager::InitializeGraphicsDevice(this);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE4,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
    (const char *)(unsigned int)v5,
    v7);
  return v6;
}
