/*
 * XREFs of ??1?$ComPtr@VViewPresentationMediator@@@WRL@Microsoft@@QEAA@XZ @ 0x1802C3F98
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_ViewPresentationMediator_IUnknown__::_1_::dtor$2 @ 0x1806DA73C (_Microsoft--WRL--Details--MakeAndInitialize_ViewPresentationMediator_IUnknown__--_1_--dtor$2.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIViewPresentationMediator@@UIPrivilegedOperationsConsumer@@UIWindowManagementShowMoveSizeEvents@@UIWindowManagementChannelSeverEvents@@UIWindowManagementWindowGroupingEvents@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180063E60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_180063E60.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ViewPresentationMediator>::~ComPtr<ViewPresentationMediator>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IViewPresentationMediator,IPrivilegedOperationsConsumer,IWindowManagementShowMoveSizeEvents,IWindowManagementChannelSeverEvents,IWindowManagementWindowGroupingEvents,Microsoft::WRL::FtmBase>::Release(
             result,
             a2);
  }
  return result;
}
