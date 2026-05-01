/*
 * XREFs of ?CreateInstance@AccessibilityExperienceManagerCF@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180175540
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VAccessibilityExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAccessibilityExperienceManager@@@Z @ 0x1801755EC (--$MakeAndInitialize@VAccessibilityExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAc.c)
 *     ?InternalRelease@?$ComPtr@VAccessibilityExperienceManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1801756A0 (-InternalRelease@-$ComPtr@VAccessibilityExperienceManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIWnfCallback@@UIEyeControlManager@Input@Internal@UI@Windows@@UIInputDeviceWatcherOwner@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIWnfCallback@@UIEyeControlManager@Input@Internal@UI@Windows@@UIInputDeviceWatcherOwner@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180175C2C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCIm_ea_180175C2C.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIWnfCallback@@UIEyeControlManager@Input@Internal@UI@Windows@@UIInputDeviceWatcherOwner@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801C21B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_1801C21B0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AccessibilityExperienceManagerCF::CreateInstance(
        AccessibilityExperienceManagerCF *this,
        struct IUnknown *a2,
        const struct _GUID *a3,
        void **a4)
{
  int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  *a4 = 0LL;
  if ( a2 )
    return 2147746064LL;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<AccessibilityExperienceManager>::InternalRelease(&v10);
  v7 = Microsoft::WRL::Details::MakeAndInitialize<AccessibilityExperienceManager,AccessibilityExperienceManager,>(&v10);
  if ( v7 < 0 )
  {
    v8 = 1090LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_8;
  }
  v7 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IWnfCallback,Windows::UI::Internal::Input::IEyeControlManager,IInputDeviceWatcherOwner,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>>(
         v10,
         a3,
         a4);
  if ( v7 < 0 )
  {
    v8 = 1091LL;
    goto LABEL_7;
  }
LABEL_8:
  if ( v10 )
  {
    v10 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IWnfCallback,Windows::UI::Internal::Input::IEyeControlManager,IInputDeviceWatcherOwner,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>::Release();
  }
  return (unsigned int)v7;
}
