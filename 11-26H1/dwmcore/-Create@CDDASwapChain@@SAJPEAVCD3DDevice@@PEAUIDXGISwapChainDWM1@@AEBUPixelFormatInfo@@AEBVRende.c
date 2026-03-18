/*
 * XREFs of ?Create@CDDASwapChain@@SAJPEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAV1@@Z @ 0x1802A4178
 * Callers:
 *     ?CreateDDASwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVCDDASwapChain@@@Z @ 0x1801E09B4 (-CreateDDASwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVR.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VISwapChain@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800E120C (-InternalRelease@-$CMILRefCountBaseT@VISwapChain@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z @ 0x1800F80BC (--0-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z.c)
 *     ??$?0$$V@?$CDeviceResourceT@V?$CMILCOMBaseT@VISwapChain@@VIDeviceResource@@VCMilObjectDeleter@@@@@@IEAA@XZ @ 0x1802A2384 (--$-0$$V@-$CDeviceResourceT@V-$CMILCOMBaseT@VISwapChain@@VIDeviceResource@@VCMilObjectDeleter@@@.c)
 *     ?Initialize@CDDASwapChain@@IEAAJPEAVCD3DDevice@@@Z @ 0x1802A43C8 (-Initialize@CDDASwapChain@@IEAAJPEAVCD3DDevice@@@Z.c)
 */

__int64 __fastcall CDDASwapChain::Create(
        struct CD3DDevice *a1,
        struct IDXGISwapChainDWM1 *a2,
        const struct PixelFormatInfo *a3,
        const struct RenderTargetInfo *a4,
        struct CDDASwapChain **a5)
{
  LPVOID v9; // rax
  __int64 v10; // rbx
  int v11; // eax
  unsigned int v12; // edi

  *a5 = 0LL;
  v9 = operator new(0xB8uLL);
  v10 = (__int64)v9;
  if ( v9 )
  {
    CDeviceResourceT<CMILCOMBaseT<ISwapChain,IDeviceResource,CMilObjectDeleter>>::CDeviceResourceT<CMILCOMBaseT<ISwapChain,IDeviceResource,CMilObjectDeleter>>((__int64)v9);
    *(_QWORD *)(v10 + 8) = &CDDASwapChain::`vftable'{for `IPixelFormat'};
    *(_QWORD *)v10 = &CDDASwapChain::`vftable'{for `IDeviceResource'};
    *(_QWORD *)(v10 + 48) = &CDDASwapChain::`vftable';
    wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>::com_ptr_t<CCachedTexture,wil::err_returncode_policy>(
      (_QWORD *)(v10 + 56),
      (__int64)a2);
    *(_QWORD *)(v10 + 64) = 0LL;
    *(_QWORD *)(v10 + 72) = *(_QWORD *)a3;
    *(_DWORD *)(v10 + 80) = *((_DWORD *)a3 + 2);
    *(_OWORD *)(v10 + 84) = *(_OWORD *)a4;
    *(_QWORD *)(v10 + 100) = *((_QWORD *)a4 + 2);
    *(_QWORD *)(v10 + 112) = v10 + 120;
    *(_DWORD *)(v10 + 120) = 0;
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v10 + 16));
  }
  else
  {
    v10 = 0LL;
  }
  v11 = CDDASwapChain::Initialize((CDDASwapChain *)v10, a1);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x1Au, 0LL);
    if ( v10 )
      CMILRefCountBaseT<ISwapChain,CMilObjectDeleter>::InternalRelease(v10);
  }
  else
  {
    *a5 = (struct CDDASwapChain *)v10;
  }
  return v12;
}
