/*
 * XREFs of ??$MakeAndInitialize@VCPerMonitorDesktopVisibilityService@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180169740
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VCPerMonitorDesktopVisibilityService@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1801696A0 (-CreateInstance@-$SimpleClassFactory@VCPerMonitorDesktopVisibilityService@@$0A@@WRL@Microsoft@@U.c)
 * Callees:
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z @ 0x1800275B4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIDesktopVisibilityService@@UIFullScreenPositionerNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180169820 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_180169820.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIDesktopVisibilityService@@UIFullScreenPositionerNotification@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIDesktopVisibilityService@@UIFullScreenPositionerNotification@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180169898 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCI_ea_180169898.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CPerMonitorDesktopVisibilityService@@QEAA@XZ @ 0x1804D525C (--0CPerMonitorDesktopVisibilityService@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CPerMonitorDesktopVisibilityService,IUnknown,>(
        _QWORD *a1)
{
  void *v2; // rax
  CPerMonitorDesktopVisibilityService *v4; // rbx
  int v5; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v8; // [rsp+40h] [rbp+8h] BYREF
  CPerMonitorDesktopVisibilityService *v9; // [rsp+48h] [rbp+10h]
  void *v10; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v2 = operator new(0xF0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v2;
  v9 = (CPerMonitorDesktopVisibilityService *)v2;
  if ( !v2 )
    return 2147942414LL;
  v10 = v2;
  v4 = CPerMonitorDesktopVisibilityService::CPerMonitorDesktopVisibilityService((CPerMonitorDesktopVisibilityService *)v2);
  v9 = v4;
  v8 = 0LL;
  v5 = CImmersiveShellComponent::RegisterServiceInformation(
         (CPerMonitorDesktopVisibilityService *)((char *)v4 + 40),
         (const struct _GUID *)&SID_PerMonitorDesktopVisibilityService);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v6 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IDesktopVisibilityService,IFullScreenPositionerNotification,Microsoft::WRL::FtmBase>>(
           v4,
           &GUID_00000000_0000_0000_c000_000000000046,
           a1);
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IDesktopVisibilityService,IFullScreenPositionerNotification,Microsoft::WRL::FtmBase>::Release(v4);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44,
      (int)"pcshell\\twinui\\apppositioner\\lib\\desktopvisibility.cpp",
      (const char *)(unsigned int)v5);
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IDesktopVisibilityService,IFullScreenPositionerNotification,Microsoft::WRL::FtmBase>::Release(v4);
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v8);
  }
  return v6;
}
