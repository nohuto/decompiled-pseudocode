/*
 * XREFs of ??$MakeAndInitialize@VPrivilegedOperationsService@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180189018
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VPrivilegedOperationsService@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180188F50 (-CreateInstance@-$SimpleClassFactory@VPrivilegedOperationsService@@$0A@@WRL@Microsoft@@UEAAJPEAU.c)
 * Callees:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800202E0 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCIm_ea_1800202E0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?MakeAndRegisterOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedDesktopOperations@@VCPrivilegedPresentationOperations@@VCPrivilegedNotificationOperations@@VCPrivilegedArrangementOperations@@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAVPrivilegedOperationsService@@@Z @ 0x1801890F4 (-MakeAndRegisterOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedDesktopOperations@@VCPr.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180189700 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_180189700.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0PrivilegedOperationsService@@QEAA@XZ @ 0x1803E98D8 (--0PrivilegedOperationsService@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PrivilegedOperationsService,IUnknown,>(_QWORD *a1)
{
  void *v2; // rax
  unsigned int v3; // edi
  struct PrivilegedOperationsService *v4; // rbx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v8; // [rsp+30h] [rbp+8h] BYREF
  struct PrivilegedOperationsService *v9; // [rsp+38h] [rbp+10h]

  *a1 = 0LL;
  v2 = operator new(0x100uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v2;
  if ( !v2 )
  {
    v3 = -2147024882;
LABEL_6:
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v8);
    return v3;
  }
  v4 = PrivilegedOperationsService::PrivilegedOperationsService((PrivilegedOperationsService *)v2);
  v9 = v4;
  v8 = 0LL;
  PrivilegedOperationsService::s_this = v4;
  v5 = PrivilegedOperationsServiceBase<CPrivilegedDesktopOperations,CPrivilegedPresentationOperations,CPrivilegedNotificationOperations,CPrivilegedArrangementOperations,CPrivilegedForegroundOperations,CPrivilegedTabletModeOperations,CPrivilegedSizeConstraintsOperations,PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations,PrivilegedWindowingOperations>::MakeAndRegisterOperations(
         (char *)v4 + 168,
         v4);
  v3 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C8,
      (int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      (const char *)(unsigned int)v5);
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::FtmBase>::Release(v4);
    goto LABEL_6;
  }
  v3 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::FtmBase>>(
         (__int64)v4,
         &GUID_00000000_0000_0000_c000_000000000046,
         a1);
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::FtmBase>::Release(v4);
  return v3;
}
