/*
 * XREFs of ?EnsureCrossAdapterFence@CD3DDevice@@AEAAJXZ @ 0x18013209C
 * Callers:
 *     ?Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z @ 0x180133624 (-Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateSharedHandleFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAXW4D3D11_FENCE_FLAG@@@Z @ 0x1801331E4 (-CreateSharedHandleFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAXW4D3D11.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::EnsureCrossAdapterFence(CD3DDevice *this)
{
  struct ID3D11Fence **v2; // rsi
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, HANDLE, GUID *, struct ID3D11Fence **); // rbx
  int SharedHandleFence; // ebx
  unsigned __int64 v7; // r8
  __int64 v8; // rdx
  const char *v9; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *((int *)this + 157) >= 2000 )
  {
    v2 = (struct ID3D11Fence **)((char *)this + 608);
    if ( CD3DDevice::s_hCrossAdapterFence )
    {
      v3 = *((_QWORD *)this + 68);
      v4 = *(__int64 (__fastcall **)(__int64, HANDLE, GUID *, struct ID3D11Fence **))(*(_QWORD *)v3 + 536LL);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 76);
      SharedHandleFence = v4(v3, CD3DDevice::s_hCrossAdapterFence, &GUID_affde9d1_1df7_4bb7_8a34_0f46251dab80, v2);
      if ( SharedHandleFence >= 0 )
        return (unsigned int)SharedHandleFence;
      v8 = 490LL;
    }
    else
    {
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 76);
      v9 = "DWM SharedCrossAdapterFence";
      v10 = 27;
      SharedHandleFence = CD3DDevice::CreateSharedHandleFence(
                            this,
                            (const struct CResourceTag *)&v9,
                            v7,
                            v2,
                            &CD3DDevice::s_hCrossAdapterFence,
                            D3D11_FENCE_FLAG_SHARED_CROSS_ADAPTER);
      if ( SharedHandleFence >= 0 )
        return (unsigned int)SharedHandleFence;
      v8 = 484LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d3ddevice.cpp",
      (const char *)(unsigned int)SharedHandleFence);
    return (unsigned int)SharedHandleFence;
  }
  return 0LL;
}
