/*
 * XREFs of ?ProcessSetVisualsToExclude@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETVISUALSTOEXCLUDE@@@Z @ 0x180257940
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18014CFD0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??4?$com_ptr_t@VCDesktopTree@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDesktopTree@@@Z @ 0x1801D3F8C (--4-$com_ptr_t@VCDesktopTree@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDesktopTree@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_WindowExclusionBackport@@@details@wil@@QEAA_NXZ @ 0x18025819C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_WindowExclusionBackport@@.c)
 */

__int64 __fastcall CCaptureRenderTarget::ProcessSetVisualsToExclude(
        CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CAPTURERENDERTARGET_SETVISUALSTOEXCLUDE *a3)
{
  char IsEnabled; // al
  __int64 Resource; // rdx

  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_WindowExclusionBackport>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_WindowExclusionBackport>::GetImpl'::`2'::impl);
  Resource = 0LL;
  if ( !IsEnabled )
    return 2147500033LL;
  if ( *((_DWORD *)a3 + 2) )
    Resource = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x9Fu);
  wil::com_ptr_t<CDesktopTree,wil::err_returncode_policy>::operator=(this + 355, Resource);
  return 0LL;
}
