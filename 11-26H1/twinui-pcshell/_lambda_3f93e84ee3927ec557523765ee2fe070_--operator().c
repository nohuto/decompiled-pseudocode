/*
 * XREFs of _lambda_3f93e84ee3927ec557523765ee2fe070_::operator() @ 0x180469CEC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3f93e84ee3927ec557523765ee2fe070___::Run @ 0x180470170 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3f93e84ee3927ec557523765ee2fe070___--Run.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800144F8 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800B32E8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicationFrame@@PEBUtagRECT@@@Z @ 0x1800BF00C (-SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicatio.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800C34B4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180133E4C (-ContinueOnCurrentThread@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAA.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1801451A4 (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x1802C5D9C (-TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     ?MoveFrameWithinScreenIfNecessary@TouchKeyboardExperienceManager@@CAJPEAUIApplicationFrame@@PEAUIApplicationFrameWrapper@@_N@Z @ 0x18046E464 (-MoveFrameWithinScreenIfNecessary@TouchKeyboardExperienceManager@@CAJPEAUIApplicationFrame@@PEAU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_3f93e84ee3927ec557523765ee2fe070_::operator()(__int64 a1)
{
  __int64 v2; // r15
  unsigned int v3; // esi
  int v4; // eax
  TouchKeyboardExperienceManager *v5; // rcx
  int ViewInfo; // ebx
  __int64 v7; // rdx
  std::_Ref_count_base *v8; // r14
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, struct IApplicationFrame **); // rbx
  __int64 v11; // rdx
  std::_Ref_count_base *v13[2]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v14[80]; // [rsp+30h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  struct IApplicationFrame *v16; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v17; // [rsp+B8h] [rbp+38h] BYREF

  v2 = a1 + 40;
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    a1 + 40,
    (__int64)v14);
  v3 = 0;
  v17 = 0LL;
  v4 = Microsoft::WRL::WeakRef::As<IInspectable>((_QWORD *)(a1 + 24), &v17);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5F6,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  if ( !v17 )
  {
    TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDestroyed();
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v2,
      0);
    goto LABEL_22;
  }
  *(_OWORD *)v13 = 0LL;
  ViewInfo = TouchKeyboardExperienceManager::FindViewInfo(*(RTL_SRWLOCK **)(a1 + 32), *(_DWORD *)a1, v13);
  if ( ViewInfo < 0 )
  {
    v7 = 1536LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)ViewInfo);
LABEL_8:
    if ( v13[1] )
      std::_Ref_count_base::_Decref(v13[1]);
    v3 = ViewInfo;
    goto LABEL_22;
  }
  v8 = v13[0];
  ViewInfo = TouchKeyboardExperienceManager::SetHostedPos(
               v5,
               *((struct IApplicationFrameWrapper **)v13[0] + 1),
               0LL,
               (const struct tagRECT *)(a1 + 4));
  if ( ViewInfo < 0 )
  {
    v7 = 1543LL;
    goto LABEL_7;
  }
  ViewInfo = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v8 + 1) + 96LL))(*((_QWORD *)v8 + 1));
  if ( ViewInfo < 0 )
  {
    v7 = 1545LL;
    goto LABEL_7;
  }
  v16 = 0LL;
  v9 = *((_QWORD *)v8 + 1);
  v10 = *(__int64 (__fastcall **)(__int64, struct IApplicationFrame **))(*(_QWORD *)v9 + 32LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
  ViewInfo = v10(v9, &v16);
  if ( ViewInfo < 0 )
  {
    v11 = 1548LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)ViewInfo);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
    goto LABEL_8;
  }
  ViewInfo = TouchKeyboardExperienceManager::MoveFrameWithinScreenIfNecessary(
               v16,
               *((struct IApplicationFrameWrapper **)v8 + 1),
               *((_BYTE *)v8 + 155));
  if ( ViewInfo < 0 )
  {
    v11 = 1549LL;
    goto LABEL_17;
  }
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v2,
    0);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
  if ( v13[1] )
    std::_Ref_count_base::_Decref(v13[1]);
LABEL_22:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v14);
  return v3;
}
