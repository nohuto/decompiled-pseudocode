/*
 * XREFs of ?EnsureCompositionResources@CCursorState@@QEAAXXZ @ 0x180291690
 * Callers:
 *     ?RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180078480 (-RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?ProcessStateChanges@CCursorState@@QEAA_N_K@Z @ 0x18018A118 (-ProcessStateChanges@CCursorState@@QEAA_N_K@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$?4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@?$com_ptr_t@VIBitmapSource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV?$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@1@@Z @ 0x180017298 (--$-4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@-$com_ptr_t@VIBitmapSource@@Uerr_return.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@CWICBitmapRealization@@SAJPEAUIWICBitmapSource@@PEAPEAVIBitmapRealization@@@Z @ 0x1800E1314 (-Create@CWICBitmapRealization@@SAJPEAUIWICBitmapSource@@PEAPEAVIBitmapRealization@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180126C50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?EnsureDestRectAndTransform@CCursorState@@AEAAX_N@Z @ 0x18015DE78 (-EnsureDestRectAndTransform@CCursorState@@AEAAX_N@Z.c)
 *     ?attach@?$com_ptr_t@UIDisplayTarget@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIDisplayTarget@Core@Display@Devices@Windows@@@Z @ 0x1801B56D8 (-attach@-$com_ptr_t@UIDisplayTarget@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ColorConvertBitmap@CCursorState@@CA?AV?$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@wil@@PEAVCSystemMemoryBitmap@@@Z @ 0x180291388 (-ColorConvertBitmap@CCursorState@@CA-AV-$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@.c)
 *     ?TryGetShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@IW4DXGI_MODE_ROTATION@@_N@Z @ 0x1802923D8 (-TryGetShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@IW4DXGI_MODE_ROTAT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCursorState::EnsureCompositionResources(CCursorState *this)
{
  __int64 v1; // rdx
  __int64 *v3; // rdi
  bool v4; // zf
  void ***v5; // rax
  __int64 v6; // rdx
  __int64 *v7; // rdx
  int v8; // eax
  int v9; // eax
  int v10; // [rsp+20h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-10h] BYREF
  std::_Ref_count_base *v12; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 (__fastcall ***v14)(_QWORD, GUID *, struct IWICBitmapSource **); // [rsp+60h] [rbp+20h] BYREF
  struct IWICBitmapSource *v15; // [rsp+68h] [rbp+28h] BYREF
  void **v16; // [rsp+70h] [rbp+30h] BYREF

  v1 = *((_QWORD *)this + 22);
  if ( v1 )
  {
    v3 = (__int64 *)((char *)this + 120);
    if ( !*((_QWORD *)this + 15) )
    {
      v4 = *((_BYTE *)this + 81) == 0;
      v14 = 0LL;
      if ( v4 )
      {
        if ( *((_BYTE *)this + 114) )
        {
          CCursorState::TryGetShape((_DWORD)this, (unsigned int)&v11, *(_DWORD *)(v1 + 12) + 6, 1, 1);
          if ( v11 )
          {
            wil::com_ptr_t<IBitmapSource,wil::err_returncode_policy>::operator=<CSystemMemoryBitmap,wil::err_returncode_policy,void>(
              (__int64 *)&v14,
              (__int64 *)(v11 + 24));
          }
          else
          {
            v7 = (__int64 *)(*((_QWORD *)this + 22) + 24LL);
            *((_BYTE *)this + 115) = 0;
            wil::com_ptr_t<IBitmapSource,wil::err_returncode_policy>::operator=<CSystemMemoryBitmap,wil::err_returncode_policy,void>(
              (__int64 *)&v14,
              v7);
            *((_BYTE *)this + 114) = 0;
          }
          if ( v12 )
            std::_Ref_count_base::_Decref(v12);
        }
        else
        {
          wil::com_ptr_t<IBitmapSource,wil::err_returncode_policy>::operator=<CSystemMemoryBitmap,wil::err_returncode_policy,void>(
            (__int64 *)&v14,
            (__int64 *)(v1 + 24));
        }
      }
      else
      {
        v5 = CCursorState::ColorConvertBitmap(&v16, *(_QWORD *)(v1 + 24));
        v6 = (__int64)*v5;
        *v5 = 0LL;
        wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayTarget,wil::err_returncode_policy>::attach(
          (__int64 *)&v14,
          v6);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
      }
      v15 = 0LL;
      v8 = (**v14)(v14, &GUID_00000121_a8f2_4877_ba0a_fd2b6645fb94, &v15);
      if ( v8 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x163,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
          (const char *)(unsigned int)v8,
          v10);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v3);
      v9 = CWICBitmapRealization::Create(v15, (struct IBitmapRealization **)v3);
      if ( v9 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x167,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
          (const char *)(unsigned int)v9,
          v10);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v15);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
    }
    CCursorState::EnsureDestRectAndTransform(this, 0);
  }
}
