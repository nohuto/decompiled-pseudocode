/*
 * XREFs of ?OpenIndirectSwapchain@CD3DDevice@@QEAAJPEAX0W4DXGI_INTERNAL_INDIRECT_SWAP_CHAIN_FLAG@@KPEAPEAUIDXGIIndirectSwapChain@@@Z @ 0x180297C54
 * Callers:
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x18014E468 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSW.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180069080 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::OpenIndirectSwapchain(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  _QWORD *v6; // rsi
  int v9; // ebx
  int v10; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, GUID *, __int64 *); // rbp
  unsigned int v13; // ebx
  unsigned int v15; // [rsp+20h] [rbp-38h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF

  v6 = a6;
  v16 = 0LL;
  v17 = 0LL;
  *a6 = 0LL;
  if ( !*(_DWORD *)(a1 + 1124) )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 528) + 56LL))(*(_QWORD *)(a1 + 528), &v16);
    v9 = v10;
    if ( v10 < 0 )
    {
      v15 = 884;
    }
    else
    {
      v11 = v16;
      v12 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v16 + 48LL);
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      v10 = v12(v11, &GUID_b14887d9_f537_4af5_b379_7d33031be773, &v17);
      v9 = v10;
      if ( v10 < 0 )
      {
        v15 = 885;
      }
      else
      {
        v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, int, int, _QWORD *))(*(_QWORD *)v17 + 32LL))(
                v17,
                *(_QWORD *)(a1 + 528),
                a2,
                0LL,
                5,
                0x10000000,
                v6);
        v9 = v10;
        if ( v10 >= 0 )
          goto LABEL_12;
        v15 = 892;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, v15, 0LL);
    goto LABEL_12;
  }
  v9 = -2003304307;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304307, 0x372u, 0LL);
LABEL_12:
  v13 = CD3DDevice::TranslateDXGIorD3DErrorInContext(a1, v9, 0);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v17);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v16);
  return v13;
}
