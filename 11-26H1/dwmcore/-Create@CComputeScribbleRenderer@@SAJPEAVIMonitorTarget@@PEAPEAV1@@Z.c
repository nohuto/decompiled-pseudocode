/*
 * XREFs of ?Create@CComputeScribbleRenderer@@SAJPEAVIMonitorTarget@@PEAPEAV1@@Z @ 0x180259ADC
 * Callers:
 *     ?EnableComputeScribble@CScribbleSwapChain@@UEAAJPEAVIMonitorTarget@@@Z @ 0x1801CEC90 (-EnableComputeScribble@CScribbleSwapChain@@UEAAJPEAVIMonitorTarget@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@VCDxHandleStereoBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800F586C (--1-$com_ptr_t@VCDxHandleStereoBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Initialize@CComputeScribbleRenderer@@AEAAJPEAVIOverlayMonitorTarget@@@Z @ 0x180259BEC (-Initialize@CComputeScribbleRenderer@@AEAAJPEAVIOverlayMonitorTarget@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComputeScribbleRenderer::Create(
        __int64 (__fastcall ***a1)(struct IMonitorTarget *, GUID *, struct IOverlayMonitorTarget **),
        struct CComputeScribbleRenderer **a2)
{
  __int64 (__fastcall **v2)(struct IMonitorTarget *, GUID *, struct IOverlayMonitorTarget **); // rax
  int v4; // eax
  unsigned int v5; // ebx
  char *v6; // rax
  CComputeScribbleRenderer *v7; // rbx
  int v8; // eax
  int v9; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  volatile signed __int32 *v12; // [rsp+40h] [rbp+8h] BYREF
  struct IOverlayMonitorTarget *v13; // [rsp+50h] [rbp+18h] BYREF

  v2 = *a1;
  v13 = 0LL;
  v4 = (*v2)((struct IMonitorTarget *)a1, &GUID_8ddf9ce7_e3f9_4bcf_983c_9c1b1b407c97, &v13);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = (char *)operator new(0x38uLL);
    v7 = (CComputeScribbleRenderer *)v6;
    if ( v6 )
    {
      *((_QWORD *)v6 + 1) = 0LL;
      *(_DWORD *)(v6 + 50) = 0;
      *((_WORD *)v6 + 27) = 0;
      *(_QWORD *)v6 = &CComputeScribbleRenderer::`vftable';
      *((_QWORD *)v6 + 2) = 0LL;
      *((_QWORD *)v6 + 3) = 0LL;
      *((_QWORD *)v6 + 4) = 0LL;
      *((_QWORD *)v6 + 5) = 0LL;
      *((_WORD *)v6 + 24) = 0;
      v12 = (volatile signed __int32 *)v6;
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v6 + 8));
    }
    else
    {
      v7 = 0LL;
      v12 = 0LL;
    }
    v8 = CComputeScribbleRenderer::Initialize(v7, v13);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v12 = 0LL;
      *a2 = v7;
      wil::com_ptr_t<CDxHandleStereoBitmapRealization,wil::err_returncode_policy>::~com_ptr_t<CDxHandleStereoBitmapRealization,wil::err_returncode_policy>(&v12);
      v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x41,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblerenderer.cpp",
        (const char *)(unsigned int)v8);
      wil::com_ptr_t<CDxHandleStereoBitmapRealization,wil::err_returncode_policy>::~com_ptr_t<CDxHandleStereoBitmapRealization,wil::err_returncode_policy>(&v12);
      v5 = v9;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblerenderer.cpp",
      (const char *)(unsigned int)v4);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v13);
  return v5;
}
