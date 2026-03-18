/*
 * XREFs of ?Create@CLegacySwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@FrontBufferRender@@PEAPEAV1@@Z @ 0x180198B0C
 * Callers:
 *     ?CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I_NPEAPEAVCLegacySwapChain@@@Z @ 0x1801FED6C (-CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AE.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@@@Z @ 0x1800452B4 (--4-$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ??0RefreshRateInfo@@QEAA@AEBUDXGI_OUTPUT_DWM_DESC@@@Z @ 0x180198CB0 (--0RefreshRateInfo@@QEAA@AEBUDXGI_OUTPUT_DWM_DESC@@@Z.c)
 *     ??0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@IAEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefreshRateInfo@@IIU_LUID@@W4Enum@FrontBufferRender@@@Z @ 0x180199694 (--0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@IAEBUPixelFormatInfo@@AEBVRend.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacySwapChain::Create(
        __int64 a1,
        const struct DXGI_OUTPUT_DWM_DESC *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 *a7)
{
  int v11; // eax
  unsigned int v12; // ebx
  LPVOID v13; // rax
  __int64 v14; // rbx
  int v15; // eax
  unsigned int v16; // edi
  __int64 v18; // [rsp+60h] [rbp-A0h] BYREF
  int v19; // [rsp+68h] [rbp-98h]
  _BYTE v20[48]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v21[40]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v22; // [rsp+C8h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v19 = a6;
  *a7 = 0LL;
  memset_0(v21, 0, 0x48uLL);
  v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a3 + 80LL))(a3, v21);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\legacyswapchain.cpp",
      (const char *)(unsigned int)v11);
    return v12;
  }
  else
  {
    RefreshRateInfo::RefreshRateInfo((RefreshRateInfo *)v20, a2);
    v18 = 0LL;
    v13 = operator new(0x200uLL);
    if ( v13 )
      v13 = (LPVOID)CLegacySwapChain::CLegacySwapChain(
                      v13,
                      a1,
                      a3,
                      v22,
                      a4,
                      a5,
                      v20,
                      *((_DWORD *)a2 + 2),
                      *((_DWORD *)a2 + 3),
                      *(_QWORD *)a2,
                      v19);
    wil::com_ptr_t<CDeviceTexture,wil::err_returncode_policy>::operator=(&v18, (__int64)v13);
    v14 = v18;
    v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 56LL))(v18);
    v16 = v15;
    if ( v15 >= 0 )
    {
      v18 = 0LL;
      *a7 = v14;
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v18);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x28,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\legacyswapchain.cpp",
        (const char *)(unsigned int)v15);
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      return v16;
    }
  }
}
