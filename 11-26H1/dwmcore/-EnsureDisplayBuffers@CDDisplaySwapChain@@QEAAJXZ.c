/*
 * XREFs of ?EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ @ 0x1801DD2EC
 * Callers:
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x1801FC7E4 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?ResizeBuffers@CDDisplaySwapChain@@UEAAJAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@I@Z @ 0x180254830 (-ResizeBuffers@CDDisplaySwapChain@@UEAAJAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@I@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateSwapChainBuffer@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBUD2D_SIZE_U@@IW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MAEBUDDisplayTargetResources@@PEAUIDisplayPrimaryDescription@Core@Display@Devices@Windows@@PEAPEAVCDDisplaySwapChainBuffer@@@Z @ 0x180134294 (-CreateSwapChainBuffer@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBUD2D_SIZE_U@@IW4DXGI_ALPHA_MODE.c)
 *     ?CreatePrimaryDescription@CDDisplayManager@@QEAAJAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAPEAUIDisplayPrimaryDescription@Core@Display@Devices@Windows@@@Z @ 0x180195CDC (-CreatePrimaryDescription@CDDisplayManager@@QEAAJAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAPEAUID.c)
 *     ??1?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801CBD44 (--1-$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsDriverWhitelisted@CComputeScribbleRenderer@@SA_NPEBVCD3DDevice@@@Z @ 0x1801E0C50 (-IsDriverWhitelisted@CComputeScribbleRenderer@@SA_NPEBVCD3DDevice@@@Z.c)
 *     ?GetSwapchainBufferUsage@CD3DDevice@@QEAAI_N0W4DXGI_FORMAT@@I@Z @ 0x18021ADA8 (-GetSwapchainBufferUsage@CD3DDevice@@QEAAI_N0W4DXGI_FORMAT@@I@Z.c)
 *     ?AddResourceNotify@CDDisplaySwapChainBuffer@@QEAAXPEAVIDeviceResourceNotify@@@Z @ 0x18021C438 (-AddResourceNotify@CDDisplaySwapChainBuffer@@QEAAXPEAVIDeviceResourceNotify@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?IsFrontBufferRenderingSupported@CD3DDevice@@QEBA_NW4DXGI_FORMAT@@@Z @ 0x180297B24 (-IsFrontBufferRenderingSupported@CD3DDevice@@QEBA_NW4DXGI_FORMAT@@@Z.c)
 *     ??$emplace_back@V?$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@$$QEAV23@@Z @ 0x18029A1C8 (--$emplace_back@V-$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@-$vec.c)
 *     ?TransitionAwayCurrentPrimaries@CDDisplaySwapChain@@IEAAXXZ @ 0x18029B0AC (-TransitionAwayCurrentPrimaries@CDDisplaySwapChain@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplaySwapChain::EnsureDisplayBuffers(CDDisplaySwapChain *this)
{
  const struct D2D_SIZE_U *v1; // r15
  unsigned int v3; // esi
  unsigned int SwapchainBufferUsage; // eax
  CDDisplayManager *v5; // rcx
  int v6; // r9d
  int v7; // eax
  struct Windows::Devices::Display::Core::IDisplayPrimaryDescription *v8; // rbx
  unsigned int i; // r14d
  __int64 v10; // rdx
  int SwapChainBuffer; // eax
  bool v12; // zf
  enum DXGI_FORMAT v13; // edx
  CD3DDevice *v14; // rcx
  __int64 v15; // rcx
  __int64 *v16; // rcx
  __int64 v17; // rdx
  UINT32 width; // ebx
  int v19; // r14d
  __int64 v20; // rax
  int v21; // eax
  __int64 *v22; // rdx
  __int64 v23; // r9
  __int64 (__fastcall *v24)(CDDisplaySwapChainBuffer *, __int64 *, _QWORD, __int64, _DWORD, __int64 *, __int64 *, _DWORD, int); // rax
  int v25; // eax
  unsigned int v27; // [rsp+28h] [rbp-59h]
  unsigned int v28; // [rsp+30h] [rbp-51h]
  int v29; // [rsp+38h] [rbp-49h]
  int v30; // [rsp+40h] [rbp-41h]
  CDDisplaySwapChainBuffer *v31; // [rsp+68h] [rbp-19h] BYREF
  struct Windows::Devices::Display::Core::IDisplayPrimaryDescription *v32; // [rsp+70h] [rbp-11h] BYREF
  int v33; // [rsp+78h] [rbp-9h] BYREF
  void (__fastcall ***v34)(_QWORD, GUID *, CDDisplaySwapChainBuffer **); // [rsp+80h] [rbp-1h] BYREF
  __int64 v35; // [rsp+88h] [rbp+7h] BYREF
  UINT32 v36; // [rsp+90h] [rbp+Fh]
  int v37; // [rsp+94h] [rbp+13h]
  __int64 v38; // [rsp+98h] [rbp+17h] BYREF
  UINT32 v39; // [rsp+A0h] [rbp+1Fh]
  int v40; // [rsp+A4h] [rbp+23h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v1 = (const struct D2D_SIZE_U *)((char *)this + 516);
  v3 = 0;
  if ( *((_DWORD *)this + 129) && *((_DWORD *)this + 130) && *((_DWORD *)this + 128) > 1u )
  {
    if ( !*((_BYTE *)this + 664) )
      return v3;
    CDDisplaySwapChain::TransitionAwayCurrentPrimaries(this);
    SwapchainBufferUsage = CD3DDevice::GetSwapchainBufferUsage(
                             *((CD3DDevice **)this + 8),
                             *((_BYTE *)this + 666),
                             0,
                             *((enum DXGI_FORMAT *)this + 23),
                             0);
    v32 = 0LL;
    v6 = SwapchainBufferUsage | 0x1000000;
    if ( !*((_BYTE *)this + 124) )
      v6 = SwapchainBufferUsage;
    v7 = CDDisplayManager::CreatePrimaryDescription(v5, (CDDisplaySwapChain *)((char *)this + 92), v1, v6, &v32);
    v3 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803A2748, 2u, v7, 0x352u, 0LL);
      goto LABEL_32;
    }
    v8 = v32;
    for ( i = 0; i < *((_DWORD *)this + 128); ++i )
    {
      v10 = *((_QWORD *)this + 8);
      v30 = *((_DWORD *)this + 30);
      v29 = *((_DWORD *)this + 28);
      v28 = *((_DWORD *)this + 25);
      v27 = *((_DWORD *)this + 24);
      v31 = 0LL;
      SwapChainBuffer = CDDisplayManager::CreateSwapChainBuffer(
                          (__int64)this + 368,
                          v10,
                          (int)v1,
                          i,
                          v27,
                          v28,
                          v29,
                          v30,
                          (__int64)this + 368,
                          (__int64)v8,
                          (__int64)&v31);
      v3 = SwapChainBuffer;
      if ( SwapChainBuffer < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803A2748, 2u, SwapChainBuffer, 0x364u, 0LL);
        wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>::~com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>(&v31);
        goto LABEL_32;
      }
      CDDisplaySwapChainBuffer::AddResourceNotify(
        v31,
        (struct IDeviceResourceNotify *)(((unsigned __int64)this + 280) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
      std::vector<wil::com_ptr_t<CDDisplaySwapChainBuffer,wil::err_returncode_policy>>::emplace_back<wil::com_ptr_t<CDDisplaySwapChainBuffer,wil::err_returncode_policy>>(
        (char *)this + 464,
        &v31);
      wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>::~com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>(&v31);
    }
    v12 = *((_DWORD *)this + 68) == -1;
    *((_DWORD *)this + 131) = 0;
    if ( !v12 )
      goto LABEL_17;
    v13 = *((_DWORD *)this + 23);
    v14 = (CD3DDevice *)*((_QWORD *)this + 8);
    *((_DWORD *)this + 68) = 0;
    if ( !CD3DDevice::IsFrontBufferRenderingSupported(v14, v13) )
      goto LABEL_17;
    if ( CComputeScribbleRenderer::IsDriverWhitelisted(*((const struct CD3DDevice **)this + 8)) )
    {
      *((_DWORD *)this + 68) = 2;
    }
    else if ( *(int *)(v15 + 628) >= 2600 )
    {
      v16 = (__int64 *)*((_QWORD *)this + 48);
      v17 = *((_QWORD *)this + 53);
      width = v1->width;
      v19 = *((_DWORD *)this + 130);
      v31 = 0LL;
      v20 = *v16;
      v34 = 0LL;
      v21 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v20 + 48))(v16, v17, &v34);
      v3 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803A2748, 2u, v21, 0x38Eu, 0LL);
      }
      else
      {
        if ( v31 )
          (*(void (__fastcall **)(CDDisplaySwapChainBuffer *))(*(_QWORD *)v31 + 16LL))(v31);
        (**v34)(v34, &GUID_2e5eba29_7eb8_5e77_a328_83a2ab9877d7, &v31);
        v22 = &v38;
        LOBYTE(v22) = 1;
        v23 = *(_QWORD *)(**((_QWORD **)this + 58) + 200LL);
        v24 = *(__int64 (__fastcall **)(CDDisplaySwapChainBuffer *, __int64 *, _QWORD, __int64, _DWORD, __int64 *, __int64 *, _DWORD, int))(*(_QWORD *)v31 + 48LL);
        v35 = 0LL;
        v36 = width;
        v37 = v19;
        v38 = 0LL;
        v39 = width;
        v40 = v19;
        v25 = v24(v31, v22, 0LL, v23, 0, &v38, &v35, 0, 1);
        v3 = v25;
        if ( v25 >= 0 )
        {
          if ( (*(int (__fastcall **)(CDDisplaySwapChainBuffer *))(*(_QWORD *)v31 + 72LL))(v31) >= 0 )
          {
            v33 = 0;
            if ( (*(int (__fastcall **)(CDDisplaySwapChainBuffer *, _QWORD, int *))(*(_QWORD *)v31 + 88LL))(
                   v31,
                   0LL,
                   &v33) >= 0
              && v33 == 2 )
            {
              *((_DWORD *)this + 68) = 1;
            }
          }
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v31);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v34);
          goto LABEL_17;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803A2748, 2u, v25, 0x399u, 0LL);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v31);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v34);
      goto LABEL_32;
    }
LABEL_17:
    *((_BYTE *)this + 277) = 0;
    *((_WORD *)this + 332) = 256;
LABEL_32:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v32);
    return v3;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x338,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\ddisplayswapchain.cpp",
    (const char *)0x80070057LL);
  return 2147942487LL;
}
