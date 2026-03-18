/*
 * XREFs of ?PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180034920
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDesktopOverlayPlaneResource@@YA_NPEBVIOverlayPlaneResource@@@Z @ 0x180034104 (-IsDesktopOverlayPlaneResource@@YA_NPEBVIOverlayPlaneResource@@@Z.c)
 *     ?FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180034B8C (-FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAU.c)
 *     ?PostPresent@CDDisplaySwapChain@@IEAAX_N0@Z @ 0x180035018 (-PostPresent@CDDisplaySwapChain@@IEAAX_N0@Z.c)
 *     ?ExecutePresent@CDDisplaySwapChain@@IEAAJPEAUIDisplayScanout@Core@Display@Devices@Windows@@PEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1800350DC (-ExecutePresent@CDDisplaySwapChain@@IEAAJPEAUIDisplayScanout@Core@Display@Devices@Windows@@PEBUD.c)
 *     ?CopyFrontToBackBuffer@COverlaySwapChain@@UEAAJXZ @ 0x1800358F0 (-CopyFrontToBackBuffer@COverlaySwapChain@@UEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_UnpinForNoFlip@@@details@wil@@QEAA_NXZ @ 0x180035C1C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_UnpinForNoFlip@@@details@wil@@QEA.c)
 *     ?FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIW4ScanoutScaleMode@1@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180035C58 (-FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIW4Sc.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateScanout@CDDisplaySwapChain@@IEAAJIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x1801B6AC0 (-CreateScanout@CDDisplaySwapChain@@IEAAJIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAPEAUIDisplaySc.c)
 *     ?SetPerPresentDisplayScanoutOptions@CDDisplaySwapChain@@IEAAJPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IPEAUIDisplayScanout@Core@Display@Devices@Windows@@_NW4DXGI_HDR_METADATA_TYPE@@PEBX@Z @ 0x180209884 (-SetPerPresentDisplayScanoutOptions@CDDisplaySwapChain@@IEAAJPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@.c)
 *     ?NotifyNoSequencePresent@CD3DDevice@@QEAAXU_LUID@@I@Z @ 0x18021F19C (-NotifyNoSequencePresent@CD3DDevice@@QEAAXU_LUID@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplaySwapChain::PresentMPO(
        CDDisplaySwapChain *this,
        __int64 a2,
        char a3,
        enum DXGI_HDR_METADATA_TYPE a4,
        const void *a5,
        const struct DWM_PRESENT_MULTIPLANE_OVERLAY *a6,
        unsigned int a7)
{
  CDDisplaySwapChain *v7; // r14
  bool v10; // r15
  struct Windows::Devices::Display::Core::IDisplayScanout *v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  unsigned int v14; // r9d
  unsigned int v15; // edi
  const struct DWM_PRESENT_MULTIPLANE_OVERLAY *v16; // rsi
  unsigned int v17; // ebp
  int CachedDesktopScanout; // eax
  int v19; // eax
  int v21; // eax
  int CachedGeneralScanout; // eax
  unsigned int v23; // [rsp+20h] [rbp-48h]
  unsigned int v24; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct Windows::Devices::Display::Core::IDisplayScanout *v26; // [rsp+70h] [rbp+8h] BYREF

  v7 = (CDDisplaySwapChain *)((char *)this - 24);
  v10 = (a3 & 2) != 0;
  v11 = 0LL;
  if ( (a3 & 2) != 0 )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_UnpinForNoFlip>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_UnpinForNoFlip>::GetImpl'::`2'::impl) )
      CD3DDevice::NotifyNoSequencePresent(
        *((CD3DDevice **)this + 5),
        *(struct _LUID *)((char *)this + 52),
        *((_DWORD *)this + 12));
  }
  else
  {
    v12 = COverlaySwapChain::CopyFrontToBackBuffer(this);
    v15 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x177,
        (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\hw\\global\\DDisplaySwapchain.h",
        (const char *)(unsigned int)v12,
        v23);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x203u, 0LL);
      goto LABEL_12;
    }
  }
  v16 = a6;
  v17 = a7;
  if ( !CCommonRegistryData::EnableDDisplayScanoutCaching )
  {
    v26 = 0LL;
    v21 = CDDisplaySwapChain::CreateScanout(v7, a7, a6, v14, v23, &v26);
    v15 = v21;
    if ( v21 >= 0 )
      goto LABEL_9;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x229u, 0LL);
LABEL_18:
    v11 = v26;
    goto LABEL_12;
  }
  if ( a7 != 1
    || *(_DWORD *)a6
    || !*((_BYTE *)a6 + 4)
    || !IsDesktopOverlayPlaneResource(*((const struct IOverlayPlaneResource **)a6 + 1)) )
  {
    v26 = 0LL;
    CachedGeneralScanout = CDDisplaySwapChain::FindCachedGeneralScanout(v7, v13, v17, v16);
    v15 = CachedGeneralScanout;
    if ( CachedGeneralScanout >= 0 )
      goto LABEL_9;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CachedGeneralScanout, 0x21Du, 0LL);
    goto LABEL_18;
  }
  v26 = 0LL;
  CachedDesktopScanout = CDDisplaySwapChain::FindCachedDesktopScanout(v7, v10, v16, &v26);
  v15 = CachedDesktopScanout;
  if ( CachedDesktopScanout < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CachedDesktopScanout, 0x211u, 0LL);
    goto LABEL_18;
  }
LABEL_9:
  v11 = v26;
  v19 = CDDisplaySwapChain::SetPerPresentDisplayScanoutOptions(v7, v16, v17, v26, v10, a4, a5);
  v15 = v19;
  if ( v19 < 0 )
  {
    v24 = 563;
  }
  else
  {
    v19 = CDDisplaySwapChain::ExecutePresent(v7, v11, v16, v17);
    v15 = v19;
    if ( v19 >= 0 )
    {
      CDDisplaySwapChain::PostPresent(v7, v10, v19 == 142213121);
      goto LABEL_12;
    }
    v24 = 569;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, v24, 0LL);
LABEL_12:
  if ( v11 )
    (*(void (__fastcall **)(struct Windows::Devices::Display::Core::IDisplayScanout *))(*(_QWORD *)v11 + 16LL))(v11);
  return v15;
}
