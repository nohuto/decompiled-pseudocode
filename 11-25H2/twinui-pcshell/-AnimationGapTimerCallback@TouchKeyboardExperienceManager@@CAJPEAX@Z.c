/*
 * XREFs of ?AnimationGapTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x180099200
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x180097CA8 (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIImmersiveWindowMessageNotification@@UITouchKeyboardExperienceManager@@UIApplicationStateChangeHandler@@UILightDismissNotification@@UIGlobalRudeWindowNotifications@@UIClipboardViewLauncher@DataTransfer@Internal@ApplicationModel@Windows@@UIDWMStoryboardListener@@UITextInputHostInfoProvider@@UIInputExperienceHost@Text@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180099490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_180099490.c)
 *     ?AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z @ 0x180216DA8 (-AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1802C5854 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ?InternalAddRef@?$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEBAXXZ @ 0x1802C6254 (-InternalAddRef@-$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$AnimationGapTimerCallback@_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_N@Z @ 0x1802CB030 (--$AnimationGapTimerCallback@_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_N@Z.c)
 *     ?InternalRelease@?$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1802CEAF4 (-InternalRelease@-$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$PrimaryViewAnimationStarting@_NAEAU?$atomic@I@std@@@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_NAEAU?$atomic@I@std@@@Z @ 0x180458E48 (--$PrimaryViewAnimationStarting@_NAEAU-$atomic@I@std@@@TouchKeyboardExperienceTelemetryLogger@@S.c)
 *     ?SendPrimaryViewAnimationStartingEvent@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x180464610 (-SendPrimaryViewAnimationStartingEvent@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TouchKeyboardExperienceManager::AnimationGapTimerCallback(char *a1)
{
  int ViewInfo; // eax
  unsigned int v3; // ebx
  struct KBViewInfo *v4; // r14
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, __int64 *); // rbx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v13; // eax
  std::_Ref_count_base *v14[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  char v16; // [rsp+60h] [rbp+30h] BYREF
  __int64 v17; // [rsp+68h] [rbp+38h] BYREF
  HWND hwnd; // [rsp+70h] [rbp+40h] BYREF
  char *v19; // [rsp+78h] [rbp+48h] BYREF

  v19 = a1;
  Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::InternalAddRef(&v19);
  if ( a1 )
  {
    if ( (unsigned __int8)std::_Atomic_storage<bool,1>::load(a1 + 938) )
    {
      v16 = 0;
      TouchKeyboardExperienceTelemetryLogger::AnimationGapTimerCallback<bool>(&v16);
      a1[938] = 0;
      *(_OWORD *)v14 = 0LL;
      ViewInfo = TouchKeyboardExperienceManager::FindViewInfo((RTL_SRWLOCK *)a1, *((_DWORD *)a1 + 153), v14);
      v3 = ViewInfo;
      if ( ViewInfo < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x452,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)ViewInfo);
LABEL_20:
        if ( v14[1] )
          std::_Ref_count_base::_Decref(v14[1]);
        Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::InternalRelease(&v19);
        return v3;
      }
      v17 = 0LL;
      v4 = v14[0];
      v5 = *((_QWORD *)v14[0] + 1);
      v6 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 32LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
      v7 = v6(v5, &v17);
      v3 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x454,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v7);
        v8 = v17;
        if ( v17 )
        {
          v17 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        }
        if ( v14[1] )
          std::_Ref_count_base::_Decref(v14[1]);
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,IApplicationStateChangeHandler,ILightDismissNotification,IGlobalRudeWindowNotifications,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,ITextInputHostInfoProvider,Windows::Internal::Shell::Text::IInputExperienceHost,Microsoft::WRL::FtmBase>::Release(a1);
        return v3;
      }
      hwnd = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v17 + 24LL))(v17, &hwnd);
      v3 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x456,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v9);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
        goto LABEL_20;
      }
      v10 = TouchKeyboardExperienceManager::AnimateInputView((TouchKeyboardExperienceManager *)a1, v4, hwnd, 0);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x457,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v10);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
      goto LABEL_27;
    }
    if ( (unsigned __int8)std::_Atomic_storage<bool,1>::load(a1 + 936) && *((_QWORD *)a1 + 73) )
    {
      v16 = 1;
      TouchKeyboardExperienceTelemetryLogger::AnimationGapTimerCallback<bool>(&v16);
      *(_OWORD *)v14 = 0LL;
      v11 = TouchKeyboardExperienceManager::FindViewInfo((RTL_SRWLOCK *)a1, *((_DWORD *)a1 + 153), v14);
      v3 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x45E,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v11);
        goto LABEL_20;
      }
      LOBYTE(v17) = 1;
      TouchKeyboardExperienceTelemetryLogger::PrimaryViewAnimationStarting<bool,std::atomic<unsigned int> &>(
        &v17,
        a1 + 952);
      v13 = TouchKeyboardExperienceManager::SendPrimaryViewAnimationStartingEvent(
              (TouchKeyboardExperienceManager *)a1,
              v14[0]);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x460,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v13);
      _InterlockedExchange((volatile __int32 *)a1 + 238, 0);
LABEL_27:
      if ( v14[1] )
        std::_Ref_count_base::_Decref(v14[1]);
    }
  }
  if ( a1 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,IApplicationStateChangeHandler,ILightDismissNotification,IGlobalRudeWindowNotifications,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,ITextInputHostInfoProvider,Windows::Internal::Shell::Text::IInputExperienceHost,Microsoft::WRL::FtmBase>::Release(a1);
  return 0LL;
}
