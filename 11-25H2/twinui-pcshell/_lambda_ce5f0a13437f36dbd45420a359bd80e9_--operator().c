/*
 * XREFs of _lambda_ce5f0a13437f36dbd45420a359bd80e9_::operator() @ 0x18045E9CC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ce5f0a13437f36dbd45420a359bd80e9___::Run @ 0x180464510 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ce5f0a13437f36dbd45420a359bd80e9___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@@_N@Z @ 0x1800971F4 (-SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@.c)
 *     ?NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@AEAAJI_N0@Z @ 0x180098E94 (-NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@AEAAJI_N0@Z.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800B90F0 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D48C8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1801419D8 (-ContinueOnCurrentThread@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAA.c)
 *     ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x18017B924 (-FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV-$ComPtr@UIApp.c)
 *     ?Stop@OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x18017BA70 (-Stop@OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     ?IsFrameReady@TouchKeyboardExperienceManager@@AEBA_NPEAUIApplicationFrame@@@Z @ 0x1801C5C58 (-IsFrameReady@TouchKeyboardExperienceManager@@AEBA_NPEAUIApplicationFrame@@@Z.c)
 *     ?TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x1802CE754 (-TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@AEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1804602DC (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@AEAV-$shared_pt.c)
 *     ?MoveFrameWithinScreenIfNecessary@TouchKeyboardExperienceManager@@CAJPEAUIApplicationFrame@@PEAUIApplicationFrameWrapper@@_N@Z @ 0x18046258C (-MoveFrameWithinScreenIfNecessary@TouchKeyboardExperienceManager@@CAJPEAUIApplicationFrame@@PEAU.c)
 *     ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x180462A74 (-NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame.c)
 *     ?UpdateViewMovingStateInShellPreference@TouchKeyboardExperienceManager@@AEAAXI_N@Z @ 0x180467F94 (-UpdateViewMovingStateInShellPreference@TouchKeyboardExperienceManager@@AEAAXI_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_ce5f0a13437f36dbd45420a359bd80e9_::operator()(__int64 a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand *v2; // r15
  unsigned int v3; // edi
  int v4; // eax
  TouchKeyboardExperienceManager *v5; // rcx
  int FrameWrapper; // ebx
  struct IApplicationFrameWrapper *v8; // rbx
  int ViewInfo; // eax
  int v10; // r14d
  __int64 v11; // rdx
  bool v12; // r8
  std::_Ref_count_base *v13; // r14
  std::_Ref_count_base *v14[2]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v15[80]; // [rsp+30h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  struct IApplicationFrameWrapper *v17; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v18; // [rsp+B8h] [rbp+38h] BYREF

  v2 = (TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand *)(a1 + 40);
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    a1 + 40,
    (__int64)v15);
  v3 = 0;
  v18 = 0LL;
  v4 = Microsoft::WRL::WeakRef::As<IInspectable>((_QWORD *)(a1 + 24), &v18);
  v5 = retaddr;
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xE05,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  if ( !v18 )
  {
    TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDestroyed();
    TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::Stop(
      v2,
      L"TouchKeyboardExperienceManagerDestroyed");
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
    wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v15);
    return 0LL;
  }
  if ( TouchKeyboardExperienceManager::IsFrameReady(v5, *(struct IApplicationFrame **)a1) )
  {
    v17 = 0LL;
    FrameWrapper = TouchKeyboardExperienceManager::FindFrameWrapper(
                     *(RTL_SRWLOCK **)(a1 + 32),
                     *(_QWORD *)a1,
                     (__int64 *)&v17);
    if ( FrameWrapper < 0 )
    {
LABEL_8:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
      v3 = FrameWrapper;
      goto LABEL_27;
    }
    *(_OWORD *)v14 = 0LL;
    v8 = v17;
    ViewInfo = TouchKeyboardExperienceManager::FindViewInfo(*(_QWORD *)(a1 + 32), v17, v14);
    v10 = ViewInfo;
    if ( ViewInfo < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE17,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)ViewInfo);
      if ( v14[1] )
        std::_Ref_count_base::_Decref(v14[1]);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
      v3 = v10;
      goto LABEL_27;
    }
    if ( *(_QWORD *)(a1 + 8) == ApplicationFrameCloseCommand && *(_QWORD *)(a1 + 16) == 0x575B26E93947F081LL )
    {
      FrameWrapper = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, __int64))(*(_QWORD *)v8 + 40LL))(
                       v8,
                       1LL);
      if ( FrameWrapper < 0 )
      {
        v11 = 3612LL;
        goto LABEL_17;
      }
      TouchKeyboardExperienceManager::SetViewInfoCloakAndReportVisibilityChanged(
        *(TouchKeyboardExperienceManager **)(a1 + 32),
        v14[0],
        1u);
      FrameWrapper = TouchKeyboardExperienceManager::NotifyCurrentVisibilityState(
                       *(TouchKeyboardExperienceManager **)(a1 + 32),
                       *(_DWORD *)(*(_QWORD *)(a1 + 32) + 612LL),
                       v12,
                       1);
      if ( FrameWrapper < 0 )
      {
        v11 = 3614LL;
        goto LABEL_17;
      }
    }
    else
    {
      if ( *(_QWORD *)(a1 + 8) != ApplicationFrameEnteredSizeMoveCommand
        || *(_QWORD *)(a1 + 16) != 0xE7CB35A4FECBF2AEuLL )
      {
        if ( *(_QWORD *)(a1 + 8) != ApplicationFrameExitedSizeMoveCommand
          || *(_QWORD *)(a1 + 16) != 0x789E03E893229A8ALL )
        {
          goto LABEL_24;
        }
        v13 = v14[0];
        FrameWrapper = TouchKeyboardExperienceManager::MoveFrameWithinScreenIfNecessary(
                         *(struct IApplicationFrame **)a1,
                         v8,
                         *((_BYTE *)v14[0] + 155));
        if ( FrameWrapper >= 0 )
        {
          TouchKeyboardExperienceManager::UpdateViewMovingStateInShellPreference(
            *(TouchKeyboardExperienceManager **)(a1 + 32),
            *((_DWORD *)v13 + 26),
            0);
          FrameWrapper = TouchKeyboardExperienceManager::NotifyPositionAndSizeUpdateCompleted(
                           *(TouchKeyboardExperienceManager **)(a1 + 32),
                           *(struct IApplicationFrame **)a1);
          if ( FrameWrapper >= 0 )
            goto LABEL_24;
          v11 = 3624LL;
        }
        else
        {
          v11 = 3622LL;
        }
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)FrameWrapper);
        if ( v14[1] )
          std::_Ref_count_base::_Decref(v14[1]);
        goto LABEL_8;
      }
      TouchKeyboardExperienceManager::UpdateViewMovingStateInShellPreference(
        *(TouchKeyboardExperienceManager **)(a1 + 32),
        *((_DWORD *)v14[0] + 26),
        1);
    }
LABEL_24:
    TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::Stop(v2, L"Success");
    if ( v14[1] )
      std::_Ref_count_base::_Decref(v14[1]);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
    goto LABEL_27;
  }
  TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::Stop(v2, L"FrameNotReady");
LABEL_27:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v15);
  return v3;
}
