/*
 * XREFs of _anonymous_namespace_::CreateD3D12ResourcesInternal @ 0x180296BD0
 * Callers:
 *     std::_Func_impl_no_alloc__CD3DDevice::EnsureBeginCreateD3D12Resources_::_5_::_lambda_1__long_CD3DDevice::D3D12Resources___::_Do_call @ 0x180298370 (std--_Func_impl_no_alloc__CD3DDevice--EnsureBeginCreateD3D12Resources_--_5_--_lambd_ea_180298370.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsVailContainer@@YA_NXZ @ 0x1801261F8 (-IsVailContainer@@YA_NXZ.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x18016490C (McTemplateU0t_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall anonymous_namespace_::CreateD3D12ResourcesInternal(IUnknown **a1, __int64 *a2, __int64 *a3)
{
  unsigned int v3; // esi
  HRESULT v7; // ebx
  __int64 v8; // rdx
  bool v9; // al
  void *v10; // rbx
  __int64 (__fastcall *v11)(void *, __int128 *, GUID *, __int64 *); // rdi
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, void *, __int64, __int64 *); // rbx
  __int64 v14; // rcx
  void *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  void *ppDevice; // [rsp+30h] [rbp-40h] BYREF
  __int64 v22; // [rsp+38h] [rbp-38h] BYREF
  __int64 v23; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v24[2]; // [rsp+48h] [rbp-28h] BYREF
  int v25; // [rsp+50h] [rbp-20h]
  __int128 v26; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v3 = 0;
  ppDevice = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&ppDevice);
  v7 = D3D12CreateDevice(*a1, D3D_FEATURE_LEVEL_12_0, &GUID_189819f1_1db6_4b57_be54_1821339b85f7, &ppDevice);
  if ( v7 == -2005270524 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
      McTemplateU0t_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
        6LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(a3);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(a3 + 1);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(a3 + 2);
    goto LABEL_23;
  }
  if ( v7 < 0 )
  {
    v8 = 47LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globald3ddevice.cpp",
      (const char *)(unsigned int)v7);
    v3 = v7;
    goto LABEL_23;
  }
  v26 = 0LL;
  LODWORD(v26) = 2;
  v9 = IsVailContainer();
  v25 = 0;
  v24[0] = v26;
  DWORD1(v26) = v9 ? 100 : 10000;
  v24[1] = DWORD1(v26);
  v7 = (*(__int64 (__fastcall **)(void *, __int64, _DWORD *, __int64))(*(_QWORD *)ppDevice + 104LL))(
         ppDevice,
         20LL,
         v24,
         12LL);
  if ( v7 < 0 )
  {
    v8 = 83LL;
    goto LABEL_7;
  }
  if ( v25 )
  {
    v10 = ppDevice;
    v11 = *(__int64 (__fastcall **)(void *, __int128 *, GUID *, __int64 *))(*(_QWORD *)ppDevice + 64LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v22);
    v7 = v11(v10, &v26, &GUID_0ec870a6_5d7e_4c22_8cfc_5baae07616ed, &v22);
    if ( v7 < 0 )
    {
      v8 = 88LL;
      goto LABEL_7;
    }
    v12 = *a2;
    v13 = *(__int64 (__fastcall **)(__int64, void *, __int64, __int64 *))(*(_QWORD *)*a2 + 32LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v23);
    v7 = v13(v12, ppDevice, v22, &v23);
    if ( v7 < 0 )
    {
      v8 = 93LL;
      goto LABEL_7;
    }
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
  {
    McTemplateU0t_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
      2LL);
  }
  v14 = *a3;
  v15 = ppDevice;
  ppDevice = 0LL;
  *a3 = (__int64)v15;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v16 = a3[1];
  v17 = v22;
  v22 = 0LL;
  a3[1] = v17;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  v18 = a3[2];
  v19 = v23;
  v23 = 0LL;
  a3[2] = v19;
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
LABEL_23:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v23);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v22);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&ppDevice);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)a1);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(a2);
  return v3;
}
