/*
 * XREFs of ?EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ @ 0x1801D13B8
 * Callers:
 *     ?GetDirectInkSuperWetRendererNoRef@CD3DDevice@@QEAAJPEAPEAUIDCompositionDirectInkSuperWetRenderer@@@Z @ 0x1801D131C (-GetDirectInkSuperWetRendererNoRef@CD3DDevice@@QEAAJPEAPEAUIDCompositionDirectInkSuperWetRendere.c)
 *     ?GetHighPriorityComputeCommandQueueNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12CommandQueue@@@Z @ 0x1802185CC (-GetHighPriorityComputeCommandQueueNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12CommandQueue@@@Z.c)
 *     ?ShareToD3D12@CD3DDevice@@QEAAJPEAUIUnknown@@PEAPEAUID3D12Resource@@@Z @ 0x180298078 (-ShareToD3D12@CD3DDevice@@QEAAJPEAUIUnknown@@PEAPEAUID3D12Resource@@@Z.c)
 *     ?TryGetInkDevice@CD3DDevice@@QEAAPEAUID3D12Device@@XZ @ 0x1802982AC (-TryGetInkDevice@CD3DDevice@@QEAAPEAUID3D12Device@@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x1801251D0 (-GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z.c)
 *     ??0?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180154A34 (--0-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     CAsyncTask_CD3DDevice::D3D12Resources_::Start__CD3DDevice::EnsureBeginCreateD3D12Resources_::_5_::_lambda_1___ @ 0x180295C04 (CAsyncTask_CD3DDevice--D3D12Resources_--Start__CD3DDevice--EnsureBeginCreateD3D12Resources_--_5_.c)
 *     _CD3DDevice::EnsureBeginCreateD3D12Resources_::_5_::_lambda_1_::__lambda_1_ @ 0x1802963E4 (_CD3DDevice--EnsureBeginCreateD3D12Resources_--_5_--_lambda_1_--__lambda_1_.c)
 *     ??1?$out_param_t@V?$unique_ptr@V?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@U?$default_delete@V?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180296468 (--1-$out_param_t@V-$unique_ptr@V-$CAsyncTask@UD3D12Resources@CD3DDevice@@@@U-$default_delete@V-$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::EnsureBeginCreateD3D12Resources(CD3DDevice *this)
{
  char *v1; // rsi
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  int v7; // ebx
  int DirectInkFactory; // eax
  __int64 v9; // [rsp+20h] [rbp-30h] BYREF
  __int64 v10; // [rsp+28h] [rbp-28h] BYREF
  char *v11; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12; // [rsp+38h] [rbp-18h] BYREF
  char v13; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct IDCompositionDirectInkFactoryPartner *v15; // [rsp+70h] [rbp+20h] BYREF
  __int64 v16; // [rsp+78h] [rbp+28h] BYREF

  v1 = (char *)this + 1072;
  if ( *((_QWORD *)this + 134) )
    return 0LL;
  v4 = (__int64 *)*((_QWORD *)this + 66);
  v5 = *v4;
  v16 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v5 + 56))(v4, &v16);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v15 = 0LL;
    DirectInkFactory = CD2DContext::GetDirectInkFactory((CD3DDevice *)((char *)this + 16), &v15);
    v7 = DirectInkFactory;
    if ( DirectInkFactory >= 0 )
    {
      wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>(
        &v9,
        &v16);
      wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>(
        &v10,
        (__int64 *)&v15);
      v11 = v1;
      v12 = 0LL;
      v13 = 1;
      v7 = CAsyncTask_CD3DDevice::D3D12Resources_::Start__CD3DDevice::EnsureBeginCreateD3D12Resources_::_5_::_lambda_1___(
             &v9,
             &v12);
      wil::details::out_param_t<std::unique_ptr<CAsyncTask<CD3DDevice::D3D12Resources>>>::~out_param_t<std::unique_ptr<CAsyncTask<CD3DDevice::D3D12Resources>>>(&v11);
      if ( v7 >= 0 )
      {
        CD3DDevice::EnsureBeginCreateD3D12Resources_::_5_::_lambda_1_::__lambda_1_(&v9);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v15);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v16);
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5BE,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globald3ddevice.cpp",
        (const char *)(unsigned int)v7);
      CD3DDevice::EnsureBeginCreateD3D12Resources_::_5_::_lambda_1_::__lambda_1_(&v9);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5B3,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globald3ddevice.cpp",
        (const char *)(unsigned int)DirectInkFactory);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v15);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5B0,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globald3ddevice.cpp",
      (const char *)(unsigned int)v6);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v16);
  return (unsigned int)v7;
}
