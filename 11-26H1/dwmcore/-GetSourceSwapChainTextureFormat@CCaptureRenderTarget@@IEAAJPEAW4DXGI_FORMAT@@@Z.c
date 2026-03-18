/*
 * XREFs of ?GetSourceSwapChainTextureFormat@CCaptureRenderTarget@@IEAAJPEAW4DXGI_FORMAT@@@Z @ 0x18025768C
 * Callers:
 *     ?TryUpdateWindowedSwapChainMetadata@CCaptureRenderTarget@@IEAAJPEA_N@Z @ 0x180257F84 (-TryUpdateWindowedSwapChainMetadata@CCaptureRenderTarget@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@VIDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801851A0 (-reset@-$com_ptr_t@VIDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetSubjectCompositionSurfaceBitmap@CCaptureRenderTarget@@IEAAPEAVCCompositionSurfaceBitmap@@XZ @ 0x18021C314 (-GetSubjectCompositionSurfaceBitmap@CCaptureRenderTarget@@IEAAPEAVCCompositionSurfaceBitmap@@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCaptureRenderTarget::GetSourceSwapChainTextureFormat(
        CCaptureRenderTarget *this,
        enum DXGI_FORMAT *a2)
{
  struct CCompositionSurfaceBitmap *SubjectCompositionSurfaceBitmap; // rax
  char *v5; // rdi
  __int64 (__fastcall *v6)(char *, __int64 *); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, __int64 *, __int64 *); // rdi
  int v11; // eax
  __int64 v13; // rax
  __int64 v14; // [rsp+20h] [rbp-60h] BYREF
  __int64 v15; // [rsp+28h] [rbp-58h] BYREF
  __int64 v16; // [rsp+30h] [rbp-50h] BYREF
  int v17; // [rsp+38h] [rbp-48h]
  int v18; // [rsp+3Ch] [rbp-44h]
  __int64 v19; // [rsp+40h] [rbp-40h]
  __int128 v20; // [rsp+48h] [rbp-38h] BYREF
  __int128 v21; // [rsp+58h] [rbp-28h]
  __int64 v22; // [rsp+68h] [rbp-18h]
  int v23; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  *a2 = DXGI_FORMAT_UNKNOWN;
  SubjectCompositionSurfaceBitmap = CCaptureRenderTarget::GetSubjectCompositionSurfaceBitmap(this);
  if ( SubjectCompositionSurfaceBitmap )
  {
    v5 = (char *)SubjectCompositionSurfaceBitmap + 72;
    v15 = 0LL;
    v6 = *(__int64 (__fastcall **)(char *, __int64 *))(*((_QWORD *)SubjectCompositionSurfaceBitmap + 9) + 64LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v15);
    v7 = v6(v5, &v15);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3A5,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\capturerendertarget.cpp",
        (const char *)(unsigned int)v7);
LABEL_6:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v15);
      return v8;
    }
    v9 = v15;
    v17 = -1;
    v18 = 0;
    v19 = 0LL;
    v16 = *((_QWORD *)this + 300);
    v18 = 0;
    v14 = 0LL;
    v10 = *(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v15 + 104LL);
    wil::com_ptr_t<IDeviceTexture,wil::err_returncode_policy>::reset(&v14);
    v11 = v10(v9, &v16, &v14);
    v8 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3B1,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\capturerendertarget.cpp",
        (const char *)(unsigned int)v11);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v14);
      goto LABEL_6;
    }
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 120LL))(v14, 0LL);
    v22 = 0LL;
    v23 = 0;
    v20 = 0LL;
    v21 = 0LL;
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v13 + 80LL))(v13, &v20);
    *a2 = v21;
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v14);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v15);
  }
  return 0LL;
}
