/*
 * XREFs of ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@PEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x18029DEBC
 * Callers:
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x1801FC7E4 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180069080 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F36F0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800F6FC0 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ??1DDisplayTaskPoolResources@@QEAA@XZ @ 0x1801319A8 (--1DDisplayTaskPoolResources@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180134858 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?EnsureDDisplayManager@CDDisplayManager@@QEAAJXZ @ 0x1801C7E18 (-EnsureDDisplayManager@CDDisplayManager@@QEAAJXZ.c)
 *     ?GetRateInfoForTarget@CDDisplayManager@@QEAAJPEAUIDisplayTarget@Core@Display@Devices@Windows@@PEAVRefreshRateInfo@@@Z @ 0x1801DFBAC (-GetRateInfoForTarget@CDDisplayManager@@QEAAJPEAUIDisplayTarget@Core@Display@Devices@Windows@@PE.c)
 *     ??1DDisplayTargetResources@@QEAA@XZ @ 0x1801FF524 (--1DDisplayTargetResources@@QEAA@XZ.c)
 *     ??0DDisplayTargetResources@@QEAA@XZ @ 0x1801FFEF8 (--0DDisplayTargetResources@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18021ED74 (--1-$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InitializeVBlankWaitEventHandle@CDDisplaySwapChain@@IEAAJXZ @ 0x18029AC3C (-InitializeVBlankWaitEventHandle@CDDisplaySwapChain@@IEAAJXZ.c)
 *     ?UpdateRefreshRate@CDDisplaySwapChain@@UEAAJXZ @ 0x18029B1B0 (-UpdateRefreshRate@CDDisplaySwapChain@@UEAAJXZ.c)
 *     ??0CDDisplaySwapChain@@IEAA@AEAV?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@AEAUDDisplayTaskPoolResources@@AEAUDDisplayTargetResources@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefreshRateInfo@@@Z @ 0x18029C75C (--0CDDisplaySwapChain@@IEAA@AEAV-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@AEAUD.c)
 *     ?CreateTaskPool@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUDDisplayTargetResources@@PEAUDDisplayTaskPoolResources@@@Z @ 0x18029E1AC (-CreateTaskPool@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUDDisplayTargetResources@@PEAUDDisplay.c)
 *     ?GetDisplayDeviceAndTarget@CDDisplayManager@@AEAAJU_LUID@@PEAXIPEAUDDisplayTargetResources@@@Z @ 0x18029EABC (-GetDisplayDeviceAndTarget@CDDisplayManager@@AEAAJU_LUID@@PEAXIPEAUDDisplayTargetResources@@@Z.c)
 */

__int64 __fastcall CDDisplayManager::CreateDDisplaySwapchainForSource(
        CDDisplayManager *this,
        struct CD3DDevice *a2,
        struct _LUID *a3,
        unsigned int a4,
        const struct PixelFormatInfo *a5,
        void *a6,
        struct CDDisplaySwapChain **a7)
{
  unsigned int v7; // ebx
  int Device; // edi
  CDDisplayManager *v12; // rcx
  CDDisplayManager *v13; // rcx
  int RateInfoForTarget; // eax
  unsigned int v15; // edi
  LPVOID v16; // rax
  __int64 v17; // rax
  __int64 v18; // rsi
  int updated; // eax
  unsigned int v20; // eax
  __int64 v22; // [rsp+48h] [rbp-91h] BYREF
  _QWORD v23[6]; // [rsp+50h] [rbp-89h] BYREF
  _OWORD v24[2]; // [rsp+80h] [rbp-59h] BYREF
  int v25[12]; // [rsp+A8h] [rbp-31h] BYREF
  struct Windows::Devices::Display::Core::IDisplayTarget *v26; // [rsp+D8h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+47h]
  struct CD3DDevice *v28; // [rsp+128h] [rbp+4Fh] BYREF

  v7 = 0;
  v28 = 0LL;
  memset(v24, 0, sizeof(v24));
  DDisplayTargetResources::DDisplayTargetResources((DDisplayTargetResources *)v25);
  v23[0] = 0x10000003CLL;
  v23[1] = 0LL;
  v23[2] = 0LL;
  v23[3] = 1LL;
  v23[4] = 0LL;
  v23[5] = 0LL;
  v22 = 0LL;
  Device = CDDisplayManager::EnsureDDisplayManager((CDDisplayManager *)0x10000003CLL);
  if ( Device < 0 )
  {
    v20 = 430;
    goto LABEL_18;
  }
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((__int64 *)&v28);
  Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, *a3, &v28);
  if ( Device < 0 )
  {
    v20 = 435;
    goto LABEL_18;
  }
  Device = CDDisplayManager::GetDisplayDeviceAndTarget(
             (CDDisplayManager *)&g_DDisplayManager,
             *a3,
             a6,
             a4,
             (struct DDisplayTargetResources *)v25);
  if ( Device < 0 )
  {
    v20 = 442;
    goto LABEL_18;
  }
  Device = CDDisplayManager::CreateTaskPool(
             v12,
             v28,
             (const struct DDisplayTargetResources *)v25,
             (struct DDisplayTaskPoolResources *)v24);
  if ( Device < 0 )
  {
    v20 = 448;
    goto LABEL_18;
  }
  RateInfoForTarget = CDDisplayManager::GetRateInfoForTarget(v13, v26, (struct RefreshRateInfo *)v23);
  v15 = RateInfoForTarget;
  if ( RateInfoForTarget >= 0 )
  {
    v16 = operator new(0x2A0uLL);
    if ( v16 )
    {
      v17 = CDDisplaySwapChain::CDDisplaySwapChain(
              (__int64)v16,
              &v28,
              (__int64 *)v24,
              (__int64)v25,
              a5,
              (const struct RenderTargetInfo *)a3,
              (struct RefreshRateInfo *)v23);
      v22 = v17;
      v18 = v17;
      if ( v17 )
        CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v17 + 8));
    }
    else
    {
      v18 = 0LL;
    }
    updated = CDDisplaySwapChain::UpdateRefreshRate((CDDisplaySwapChain *)(v18 + 24));
    Device = updated;
    if ( updated >= 0 )
    {
      CDDisplaySwapChain::InitializeVBlankWaitEventHandle((CDDisplaySwapChain *)v18);
      v22 = 0LL;
      *a7 = (struct CDDisplaySwapChain *)v18;
LABEL_19:
      v15 = v7;
      goto LABEL_20;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\ddisplayswapchain.cpp",
      (const char *)(unsigned int)updated);
    v20 = 464;
LABEL_18:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Device, v20, 0LL);
    v7 = CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)a2, Device, 2u);
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1C5,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globalddisplaymanager.cpp",
    (const char *)(unsigned int)RateInfoForTarget);
LABEL_20:
  wil::com_ptr_t<CLegacyStereoSwapChain,wil::err_returncode_policy>::~com_ptr_t<CLegacyStereoSwapChain,wil::err_returncode_policy>(&v22);
  DDisplayTargetResources::~DDisplayTargetResources((DDisplayTargetResources *)v25);
  DDisplayTaskPoolResources::~DDisplayTaskPoolResources((DDisplayTaskPoolResources *)v24);
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v28);
  return v15;
}
