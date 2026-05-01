/*
 * XREFs of ??1?$ComPtr@VCPerMonitorDesktopVisibilityService@@@WRL@Microsoft@@QEAA@XZ @ 0x1802CCDF4
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CPerMonitorDesktopVisibilityService_IUnknown__::_1_::dtor$2 @ 0x1806B03A9 (_Microsoft--WRL--Details--MakeAndInitialize_CPerMonitorDesktopVisibilityService_IUn_ea_1806B03A9.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIDesktopVisibilityService@@UIFullScreenPositionerNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180169820 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_180169820.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CPerMonitorDesktopVisibilityService>::~ComPtr<CPerMonitorDesktopVisibilityService>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IDesktopVisibilityService,IFullScreenPositionerNotification,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
