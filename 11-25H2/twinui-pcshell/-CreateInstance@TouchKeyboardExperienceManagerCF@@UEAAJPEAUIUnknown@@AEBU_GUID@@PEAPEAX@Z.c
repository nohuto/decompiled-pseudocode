/*
 * XREFs of ?CreateInstance@TouchKeyboardExperienceManagerCF@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18023CE10
 * Callers:
 *     <none>
 * Callees:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIImmersiveWindowMessageNotification@@UITouchKeyboardExperienceManager@@UIApplicationStateChangeHandler@@UILightDismissNotification@@UIGlobalRudeWindowNotifications@@UIClipboardViewLauncher@DataTransfer@Internal@ApplicationModel@Windows@@UIDWMStoryboardListener@@UITextInputHostInfoProvider@@UIInputExperienceHost@Text@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIImmersiveWindowMessageNotification@@UITouchKeyboardExperienceManager@@UIApplicationStateChangeHandler@@UILightDismissNotification@@UIGlobalRudeWindowNotifications@@UIClipboardViewLauncher@DataTransfer@Internal@ApplicationModel@Windows@@UIDWMStoryboardListener@@UITextInputHostInfoProvider@@UIInputExperienceHost@Text@Shell@Internal@Windows@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18001F294 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellC.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VTouchKeyboardExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTouchKeyboardExperienceManager@@@Z @ 0x1801DC130 (--$MakeAndInitialize@VTouchKeyboardExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTo.c)
 *     ?InternalRelease@?$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1802CEAF4 (-InternalRelease@-$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManagerCF::CreateInstance(
        TouchKeyboardExperienceManagerCF *this,
        struct IUnknown *a2,
        struct _GUID *a3,
        void **a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  TouchKeyboardExperienceManager *v11; // [rsp+38h] [rbp+10h] BYREF

  *a4 = 0LL;
  if ( a2 )
    return 2147746064LL;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::InternalRelease(&v11);
  v7 = Microsoft::WRL::Details::MakeAndInitialize<TouchKeyboardExperienceManager,TouchKeyboardExperienceManager,>(&v11);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v7 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,IApplicationStateChangeHandler,ILightDismissNotification,IGlobalRudeWindowNotifications,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,ITextInputHostInfoProvider,Windows::Internal::Shell::Text::IInputExperienceHost,Microsoft::WRL::FtmBase>>(
           (__int64)v11,
           a3,
           a4);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v8 = 0;
      goto LABEL_9;
    }
    v9 = 5965LL;
  }
  else
  {
    v9 = 5964LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v7);
LABEL_9:
  Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::InternalRelease(&v11);
  return v8;
}
