/*
 * XREFs of ??$MakeAndInitialize@VViewPresentationMediator@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801E6E6C
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VViewPresentationMediator@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1801E6DC0 (-CreateInstance@-$SimpleClassFactory@VViewPresentationMediator@@$0A@@WRL@Microsoft@@UEAAJPEAUIUn.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIViewPresentationMediator@@UIPrivilegedOperationsConsumer@@UIWindowManagementShowMoveSizeEvents@@UIWindowManagementChannelSeverEvents@@UIWindowManagementWindowGroupingEvents@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIViewPresentationMediator@@UIPrivilegedOperationsConsumer@@UIWindowManagementShowMoveSizeEvents@@UIWindowManagementChannelSeverEvents@@UIWindowManagementWindowGroupingEvents@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801B2360 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCI_ea_1801B2360.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIViewPresentationMediator@@UIPrivilegedOperationsConsumer@@UIWindowManagementShowMoveSizeEvents@@UIWindowManagementChannelSeverEvents@@UIWindowManagementWindowGroupingEvents@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801CA310 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_1801CA310.c)
 *     ?RuntimeClassInitialize@ViewPresentationMediator@@QEAAJXZ @ 0x1801E6F1C (-RuntimeClassInitialize@ViewPresentationMediator@@QEAAJXZ.c)
 *     ??0ViewPresentationMediator@@QEAA@XZ @ 0x1801E6F64 (--0ViewPresentationMediator@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewPresentationMediator,IUnknown,>(_QWORD *a1)
{
  void *v2; // rax
  ViewPresentationMediator *v3; // rbx
  int v4; // edi
  void *v6; // [rsp+40h] [rbp+8h] BYREF
  ViewPresentationMediator *v7; // [rsp+48h] [rbp+10h]
  void *v8; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v2 = operator new(0x138uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  v7 = (ViewPresentationMediator *)v2;
  if ( !v2 )
    return 2147942414LL;
  v8 = v2;
  v3 = ViewPresentationMediator::ViewPresentationMediator((ViewPresentationMediator *)v2);
  v7 = v3;
  v6 = 0LL;
  v4 = ViewPresentationMediator::RuntimeClassInitialize(v3);
  if ( v4 >= 0 )
  {
    v4 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IViewPresentationMediator,IPrivilegedOperationsConsumer,IWindowManagementShowMoveSizeEvents,IWindowManagementChannelSeverEvents,IWindowManagementWindowGroupingEvents,Microsoft::WRL::FtmBase>>(
           (__int64)v3,
           &GUID_00000000_0000_0000_c000_000000000046,
           a1);
    if ( v3 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IViewPresentationMediator,IPrivilegedOperationsConsumer,IWindowManagementShowMoveSizeEvents,IWindowManagementChannelSeverEvents,IWindowManagementWindowGroupingEvents,Microsoft::WRL::FtmBase>::Release((__int64)v3);
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v6);
  }
  else if ( v3 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IViewPresentationMediator,IPrivilegedOperationsConsumer,IWindowManagementShowMoveSizeEvents,IWindowManagementChannelSeverEvents,IWindowManagementWindowGroupingEvents,Microsoft::WRL::FtmBase>::Release((__int64)v3);
  }
  return (unsigned int)v4;
}
