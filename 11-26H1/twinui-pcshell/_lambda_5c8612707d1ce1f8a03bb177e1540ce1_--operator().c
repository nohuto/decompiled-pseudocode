/*
 * XREFs of _lambda_5c8612707d1ce1f8a03bb177e1540ce1_::operator() @ 0x180469EBC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5c8612707d1ce1f8a03bb177e1540ce1___::Run @ 0x180470180 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5c8612707d1ce1f8a03bb177e1540ce1___--Run.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800144F8 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800B32E8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B8FF8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x1800BAD08 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800C34B4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180133E4C (-ContinueOnCurrentThread@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAA.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1801451A4 (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801FA64C (-RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDi.c)
 *     _anonymous_namespace_::StringifyApplicationState @ 0x180200F08 (_anonymous_namespace_--StringifyApplicationState.c)
 *     ?GetInputAppState@TouchKeyboardExperienceManager@@AEAA?AW4PLM_APPLICATION_STATE@@XZ @ 0x1802879F4 (-GetInputAppState@TouchKeyboardExperienceManager@@AEAA-AW4PLM_APPLICATION_STATE@@XZ.c)
 *     ??$ShowRejected@AEAIPEBG@TouchKeyboardExperienceTelemetryLogger@@SAXAEAI$$QEAPEBG@Z @ 0x1802C0258 (--$ShowRejected@AEAIPEBG@TouchKeyboardExperienceTelemetryLogger@@SAXAEAI$$QEAPEBG@Z.c)
 *     ??$ShowRejected@AEAIAEAY0O@$$CBG@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEAY0O@$$CBG@Z @ 0x1802C1D90 (--$ShowRejected@AEAIAEAY0O@$$CBG@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEAY0O@$$CBG@Z.c)
 *     ?TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x1802C5D9C (-TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     ?UpdateInvocationMethodShellPreference@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180473DC4 (-UpdateInvocationMethodShellPreference@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_5c8612707d1ce1f8a03bb177e1540ce1_::operator()(__int64 a1)
{
  __int64 v2; // rsi
  unsigned int v3; // ebx
  int v4; // eax
  int InputAppState; // eax
  int ViewInfo; // eax
  __int64 v8; // rdx
  int v9; // r14d
  __int64 *v10; // r14
  int v11; // eax
  char v12; // r8
  int v13; // r15d
  TouchKeyboardExperienceManager *v14; // rcx
  int v15; // eax
  std::_Ref_count_base *v16[2]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v17[80]; // [rsp+30h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  __int64 v19; // [rsp+B0h] [rbp+30h] BYREF
  const wchar_t *v20; // [rsp+B8h] [rbp+38h] BYREF

  v2 = a1 + 96;
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    a1 + 96,
    (__int64)v17);
  v3 = 0;
  v19 = 0LL;
  v4 = Microsoft::WRL::WeakRef::As<IInspectable>((_QWORD *)(a1 + 80), &v19);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x509,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  if ( v19 )
  {
    InputAppState = TouchKeyboardExperienceManager::GetInputAppState(*(_QWORD *)(a1 + 88));
    if ( InputAppState == 1 )
    {
      *(_OWORD *)v16 = 0LL;
      ViewInfo = TouchKeyboardExperienceManager::FindViewInfo(*(RTL_SRWLOCK **)(a1 + 88), *(_DWORD *)a1, v16);
      v9 = ViewInfo;
      if ( ViewInfo >= 0 )
      {
        v10 = (__int64 *)v16[0];
        if ( *((_BYTE *)v16[0] + 32) )
        {
          TouchKeyboardExperienceTelemetryLogger::ShowRejected<unsigned int &,unsigned short const (&)[14]>(
            (_DWORD *)a1,
            v8);
          wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
            v2,
            0);
        }
        else
        {
          v11 = TouchKeyboardExperienceManager::ShowView(
                  *(TouchKeyboardExperienceManager **)(a1 + 88),
                  v16[0],
                  (struct tagRECT *)(a1 + 4),
                  (const struct ViewOptions *)(a1 + 24));
          v13 = v11;
          if ( v11 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x525,
              (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
              (const char *)(unsigned int)v11);
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_PATKTI>::ReportUsage(
            `wil::Feature<__WilFeatureTraits_Feature_PATKTI>::GetImpl'::`2'::impl,
            1u,
            v12);
          v14 = *(TouchKeyboardExperienceManager **)(a1 + 88);
          if ( *(_DWORD *)a1 == *((_DWORD *)v14 + 153) )
            TouchKeyboardExperienceManager::UpdateInvocationMethodShellPreference(v14);
          wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
            v2,
            v13);
          if ( *(_BYTE *)(a1 + 26) )
          {
            v15 = SingleViewLightDismissHelper::RegisterWithLightDismiss(
                    *(_QWORD *)(a1 + 88) + 592LL,
                    1026LL,
                    (*(_QWORD *)(a1 + 88) + 160LL) & -(__int64)(*(_QWORD *)(a1 + 88) != 0LL),
                    *v10);
            if ( v15 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x534,
                (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                (const char *)(unsigned int)v15);
            *(_DWORD *)(*(_QWORD *)(a1 + 88) + 608LL) = *(_DWORD *)a1;
          }
        }
        if ( v16[1] )
          std::_Ref_count_base::_Decref(v16[1]);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x51B,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)ViewInfo);
        if ( v16[1] )
          std::_Ref_count_base::_Decref(v16[1]);
        v3 = v9;
      }
    }
    else
    {
      v20 = anonymous_namespace_::StringifyApplicationState(InputAppState);
      TouchKeyboardExperienceTelemetryLogger::ShowRejected<unsigned int &,unsigned short const *>(
        (int *)a1,
        (__int64 *)&v20);
      wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
        v2,
        0);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
    wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v17);
    return v3;
  }
  else
  {
    TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDestroyed();
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v2,
      0);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
    wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v17);
    return 0LL;
  }
}
