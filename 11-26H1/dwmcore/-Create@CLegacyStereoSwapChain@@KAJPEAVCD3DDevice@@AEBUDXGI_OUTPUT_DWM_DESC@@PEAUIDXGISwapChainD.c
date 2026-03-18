/*
 * XREFs of ?Create@CLegacyStereoSwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAV1@@Z @ 0x1802A68F8
 * Callers:
 *     ?CreateLegacyStereoSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVCLegacyStereoSwapChain@@@Z @ 0x180297270 (-CreateLegacyStereoSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatIn.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ??0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@IAEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefreshRateInfo@@IIU_LUID@@W4Enum@FrontBufferRender@@@Z @ 0x180199694 (--0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@IAEBUPixelFormatInfo@@AEBVRend.c)
 *     ?Initialize@CLegacySwapChain@@MEAAJXZ @ 0x1801D7E90 (-Initialize@CLegacySwapChain@@MEAAJXZ.c)
 *     ??1?$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18021ED74 (--1-$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyStereoSwapChain::Create(
        struct CD3DDevice *a1,
        const struct DXGI_OUTPUT_DWM_DESC *a2,
        struct IDXGISwapChainDWM1 *a3,
        const struct PixelFormatInfo *a4,
        const struct RenderTargetInfo *a5,
        struct CLegacyStereoSwapChain **a6)
{
  int v10; // eax
  unsigned int v11; // ebx
  _QWORD *v13; // rbx
  int v14; // eax
  unsigned int v15; // edi
  _QWORD *v16; // [rsp+60h] [rbp-89h] BYREF
  _QWORD v17[7]; // [rsp+68h] [rbp-81h] BYREF
  _BYTE v18[8]; // [rsp+A0h] [rbp-49h] BYREF
  __int64 v19; // [rsp+A8h] [rbp-41h]
  int v20; // [rsp+C8h] [rbp-21h]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+4Fh]

  *a6 = 0LL;
  memset_0(v18, 0, 0x48uLL);
  v10 = (*(__int64 (__fastcall **)(struct IDXGISwapChainDWM1 *, _BYTE *))(*(_QWORD *)a3 + 80LL))(a3, v18);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v17[0] = v19;
    v17[1] = 0LL;
    v17[2] = 0LL;
    v17[3] = 1LL;
    v17[4] = 0LL;
    v17[5] = 0LL;
    v13 = operator new(0x208uLL);
    if ( v13 )
    {
      CLegacySwapChain::CLegacySwapChain(
        (__int64)v13,
        (__int64)a1,
        (__int64)a3,
        v20,
        (__int64)a4,
        (__int64)a5,
        (__int64)v17,
        *((_DWORD *)a2 + 2),
        *((_DWORD *)a2 + 3),
        *(_QWORD *)a2,
        0);
      v16 = v13;
      *v13 = &CLegacyStereoSwapChain::`vftable'{for `COverlaySwapChain'};
      v13[3] = &CLegacyStereoSwapChain::`vftable'{for `IDeviceResource'};
      v13[4] = &CDDisplaySwapChain::`vftable'{for `IPixelFormat'};
      v13[32] = &CConversionSwapChain::`vftable'{for `IScribbleSwapChain'};
      v13[35] = &CLegacyStereoSwapChain::`vftable';
      v13[64] = 0LL;
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v13 + 1));
    }
    else
    {
      v13 = 0LL;
      v16 = 0LL;
    }
    v14 = CLegacySwapChain::Initialize((CLegacySwapChain *)v13);
    v15 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x27u, 0LL);
    }
    else
    {
      v16 = 0LL;
      *a6 = (struct CLegacyStereoSwapChain *)v13;
    }
    wil::com_ptr_t<CLegacyStereoSwapChain,wil::err_returncode_policy>::~com_ptr_t<CLegacyStereoSwapChain,wil::err_returncode_policy>((__int64 *)&v16);
    return v15;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\legacystereoswapchain.cpp",
      (const char *)(unsigned int)v10);
    return v11;
  }
}
