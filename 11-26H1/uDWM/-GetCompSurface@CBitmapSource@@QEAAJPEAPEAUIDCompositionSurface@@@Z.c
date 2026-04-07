/*
 * XREFs of ?GetCompSurface@CBitmapSource@@QEAAJPEAPEAUIDCompositionSurface@@@Z @ 0x18009AC84
 * Callers:
 *     ?Generate@CNineGridImagePrimitive@@UEAAJPEBUtagRECT@@@Z @ 0x1800BD100 (-Generate@CNineGridImagePrimitive@@UEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UICompositionSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800544EC (-reset@-$com_ptr_t@UICompositionSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil.c)
 *     ?CreateCompSurfaceFromWICBitmap@CBitmapSource@@SAJPEAUIWICBitmapSource@@PEAPEAUIDCompositionSurface@@@Z @ 0x180068490 (-CreateCompSurfaceFromWICBitmap@CBitmapSource@@SAJPEAUIWICBitmapSource@@PEAPEAUIDCompositionSurf.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CBitmapSource::GetCompSurface(CBitmapSource *this, struct IDCompositionSurface **a2)
{
  struct IDCompositionSurface *v4; // rbx
  __int64 v5; // r8
  const char *v6; // r9
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IDCompositionSurface *v12; // [rsp+30h] [rbp+8h] BYREF

  v4 = (struct IDCompositionSurface *)*((_QWORD *)this + 7);
  v12 = v4;
  if ( v4 )
  {
    (*(void (__fastcall **)(struct IDCompositionSurface *))(*(_QWORD *)v4 + 8LL))(v4);
LABEL_10:
    v12 = 0LL;
    *a2 = v4;
    v8 = 0;
    goto LABEL_11;
  }
  if ( !*((_QWORD *)this + 5) )
    goto LABEL_10;
  wil::com_ptr_t<Windows::UI::Composition::ICompositionSurface,wil::err_returncode_policy>::reset((__int64 *)&v12);
  v7 = CBitmapSource::CreateCompSurfaceFromWICBitmap(*((struct IWICBitmapSource **)this + 5), &v12, v5, v6);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = *((_QWORD *)this + 7);
    v4 = v12;
    *((_QWORD *)this + 7) = v12;
    if ( v4 )
      (*(void (__fastcall **)(struct IDCompositionSurface *))(*(_QWORD *)v4 + 8LL))(v4);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x16A,
    (int)"clientcore\\windows\\dwm\\udwm\\bitmapsource.cpp",
    (const char *)(unsigned int)v7);
LABEL_11:
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v12);
  return v8;
}
