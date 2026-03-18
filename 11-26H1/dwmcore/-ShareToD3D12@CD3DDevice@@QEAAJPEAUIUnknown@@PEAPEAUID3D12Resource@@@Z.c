/*
 * XREFs of ?ShareToD3D12@CD3DDevice@@QEAAJPEAUIUnknown@@PEAPEAUID3D12Resource@@@Z @ 0x180298078
 * Callers:
 *     ?EnsureComputeScribbleResources@CSwapChainBuffer@@UEAAJPEAVCD3DDevice@@@Z @ 0x1801D34D0 (-EnsureComputeScribbleResources@CSwapChainBuffer@@UEAAJPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18013194C (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180132948 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?reset@?$com_ptr_t@UIDXGIResource1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801B1E84 (-reset@-$com_ptr_t@UIDXGIResource1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ @ 0x1801D13B8 (-EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ.c)
 *     ?WaitForResult@?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAAJPEAPEAUD3D12Resources@CD3DDevice@@@Z @ 0x1801DB624 (-WaitForResult@-$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAAJPEAPEAUD3D12Resources@CD3DDevice@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::ShareToD3D12(CD3DDevice *this, struct IUnknown *a2, struct ID3D12Resource **a3)
{
  int D3D12Resources; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  unsigned __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rsi
  struct IUnknownVtbl *lpVtbl; // rax
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  int v15; // eax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, _QWORD, __int64, _QWORD, void **); // rdi
  int v18; // eax
  __int64 v19; // rdx
  __int64 v21; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v22; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  void *v24; // [rsp+78h] [rbp+38h] BYREF

  D3D12Resources = CD3DDevice::EnsureBeginCreateD3D12Resources(this);
  v7 = D3D12Resources;
  if ( D3D12Resources >= 0 )
  {
    v10 = *((_QWORD *)this + 134);
    v22 = 0LL;
    v7 = CAsyncTask<CD3DDevice::D3D12Resources>::WaitForResult(v10, &v22);
    v9 = v7;
    if ( (v7 & 0x80000000) != 0 )
    {
      v8 = 1397LL;
      goto LABEL_5;
    }
    v12 = *v22;
    if ( !*v22 )
    {
      v7 = -2003292404;
      v11 = 1486LL;
      goto LABEL_6;
    }
    lpVtbl = a2->lpVtbl;
    v21 = 0LL;
    QueryInterface = lpVtbl->QueryInterface;
    wil::com_ptr_t<IDXGIResource1,wil::err_returncode_policy>::reset(&v21);
    v15 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))QueryInterface)(
            a2,
            &GUID_30961379_4609_4a41_998e_54fe567ee0c1,
            &v21);
    v7 = v15;
    if ( v15 >= 0 )
    {
      v16 = v21;
      v24 = 0LL;
      v17 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, void **))(*(_QWORD *)v21 + 104LL);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        &v24,
        0LL);
      v18 = v17(v16, 0LL, 0x10000000LL, 0LL, &v24);
      v7 = v18;
      if ( v18 >= 0 )
      {
        v18 = (*(__int64 (__fastcall **)(__int64, void *, GUID *, struct ID3D12Resource **))(*(_QWORD *)v12 + 256LL))(
                v12,
                v24,
                &GUID_696442be_a72e_4059_bc79_5b5c98040fad,
                a3);
        v7 = v18;
        if ( v18 >= 0 )
        {
          wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v24);
          v7 = 0;
          goto LABEL_17;
        }
        v19 = 1501LL;
      }
      else
      {
        v19 = 1497LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globald3ddevice.cpp",
        (const char *)(unsigned int)v18);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v24);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5D2,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globald3ddevice.cpp",
        (const char *)(unsigned int)v15);
    }
LABEL_17:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v21);
    return v7;
  }
  v8 = 1394LL;
  v9 = (unsigned int)D3D12Resources;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globald3ddevice.cpp",
    (const char *)v9);
  v11 = 1482LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globald3ddevice.cpp",
    (const char *)v7);
  return v7;
}
