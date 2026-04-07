/*
 * XREFs of ?GetCompSurface@CBitmapSource@@QEAAJPEAPEAUICompositionSurface@Composition@UI@Windows@@@Z @ 0x180089BD0
 * Callers:
 *     ?UpdateImage@CButtonGlyph@@AEAAJXZ @ 0x180009120 (-UpdateImage@CButtonGlyph@@AEAAJXZ.c)
 *     ?UpdateBitmap@CImage@@AEAAJXZ @ 0x180009530 (-UpdateBitmap@CImage@@AEAAJXZ.c)
 *     ?Reset@CBitmapBrush@@QEAAJPEAVCBitmapSource@@@Z @ 0x18009B69C (-Reset@CBitmapBrush@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?ForceAtlasInitialize@CContactManager@@QEAAXXZ @ 0x1800A8950 (-ForceAtlasInitialize@CContactManager@@QEAAXXZ.c)
 *     ?UpdateVisual@CTetherVisual@@IEAAJXZ @ 0x1800C8C84 (-UpdateVisual@CTetherVisual@@IEAAJXZ.c)
 *     ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x1800CCA88 (-UpdateVisual@CTouchDragVisual@@AEAAJXZ.c)
 * Callees:
 *     ?CreateCompSurfaceFromWICBitmap@CBitmapSource@@SAJPEAUIWICBitmapSource@@PEAPEAUICompositionSurface@Composition@UI@Windows@@@Z @ 0x18000DC70 (-CreateCompSurfaceFromWICBitmap@CBitmapSource@@SAJPEAUIWICBitmapSource@@PEAPEAUICompositionSurfa.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UICompositionSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800544EC (-reset@-$com_ptr_t@UICompositionSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CBitmapSource::GetCompSurface(
        CBitmapSource *this,
        struct Windows::UI::Composition::ICompositionSurface **a2)
{
  struct Windows::UI::Composition::ICompositionSurface *v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::UI::Composition::ICompositionSurface *v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = (struct Windows::UI::Composition::ICompositionSurface *)*((_QWORD *)this + 6);
  v10 = v4;
  if ( v4 )
  {
    (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositionSurface *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  else if ( *((_QWORD *)this + 5) )
  {
    wil::com_ptr_t<Windows::UI::Composition::ICompositionSurface,wil::err_returncode_policy>::reset((__int64 *)&v10);
    v5 = CBitmapSource::CreateCompSurfaceFromWICBitmap(*((struct IWICBitmapSource **)this + 5), &v10);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x157,
        (int)"clientcore\\windows\\dwm\\udwm\\bitmapsource.cpp",
        (const char *)(unsigned int)v5);
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v10);
      return v6;
    }
    v8 = *((_QWORD *)this + 6);
    v4 = v10;
    *((_QWORD *)this + 6) = v10;
    if ( v4 )
      (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositionSurface *))(*(_QWORD *)v4 + 8LL))(v4);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  *a2 = v4;
  return 0LL;
}
