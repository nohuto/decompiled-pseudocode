/*
 * XREFs of ?ExecutePendingRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4PendingShowRequestExecutionReason@2@@Z @ 0x18014E8E0
 * Callers:
 *     ?OnInputAppResumed@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x18014D6B8 (-OnInputAppResumed@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 *     ?OnInputAppActivated@TabTipAdapter@KeyboardHosting@@QEAAXK@Z @ 0x180293D60 (-OnInputAppActivated@TabTipAdapter@KeyboardHosting@@QEAAXK@Z.c)
 *     ?OnCoreKeyboardClientRegistered@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerCoreKeyboardClientRegisteredEventArgs@45678@@Z @ 0x1802C0210 (-OnCoreKeyboardClientRegistered@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Cor.c)
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180032A5C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800D4F0C (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_P.c)
 *     ??1PendingRequestExecuted@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18014ED1C (--1PendingRequestExecuted@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18014ED48 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18014F278 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para.c)
 *     ?reset@?$shared_object@V?$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18014F3D4 (-reset@-$shared_object@V-$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgR_ea_18014F3D4.c)
 *     ??1?$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18014F42C (--1-$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsP_ea_18014F42C.c)
 *     ?StartActivity@PendingRequestExecuted@TouchKeyboardExperienceTelemetryLogger@@QEAAX_NW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@0II@Z @ 0x18014F460 (-StartActivity@PendingRequestExecuted@TouchKeyboardExperienceTelemetryLogger@@QEAAX_NW4CoreKeybo.c)
 *     ?value@?$optional@I@std@@QEGAAAEAIXZ @ 0x1802249E0 (-value@-$optional@I@std@@QEGAAAEAIXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x18046E760 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardView_ea_18046E760.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapter::ExecutePendingRequest(__int64 a1, int a2)
{
  RTL_SRWLOCK *v4; // rbx
  unsigned int v5; // r15d
  __int64 v6; // rax
  int v7; // ebx
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // edi
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64, _QWORD); // rbx
  unsigned int *v18; // rax
  int v19; // eax
  __int64 v20; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C8h]
  void **v22; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v23[272]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v24[8]; // [rsp+170h] [rbp+68h] BYREF
  _BYTE v25[48]; // [rsp+178h] [rbp+70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v4 = (RTL_SRWLOCK *)(a1 + 416);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 416));
  v21 = *(_QWORD *)(a1 + 392);
  v5 = *(_DWORD *)(a1 + 400);
  *(_WORD *)(a1 + 392) = 0;
  *(_DWORD *)(a1 + 396) = 0;
  *(_DWORD *)(a1 + 400) = 11;
  v6 = *(_QWORD *)(a1 + 488);
  v20 = v6;
  if ( v4 )
  {
    ReleaseSRWLockExclusive(v4);
    LODWORD(v6) = v20;
  }
  v7 = -1;
  if ( BYTE4(v20) )
    v7 = v6;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)&v22,
    (__int64)"PendingRequestExecuted");
  v22 = &TouchKeyboardExperienceTelemetryLogger::PendingRequestExecuted::`vftable';
  LOBYTE(v8) = BYTE1(v21);
  LOBYTE(v9) = v21;
  TouchKeyboardExperienceTelemetryLogger::PendingRequestExecuted::StartActivity(&v22, v9, v5, v8, a2, v7);
  if ( (_BYTE)v21 )
  {
    if ( BYTE1(v21) )
    {
      v10 = 10LL;
      if ( a2 )
      {
        v11 = a2 - 1;
        if ( v11 )
        {
          if ( v11 == 1 )
            v10 = 4LL;
        }
        else
        {
          v10 = 3LL;
        }
      }
      else
      {
        v10 = 2LL;
      }
      v12 = KeyboardHosting::TabTipAdapter::OnShellRequestedStateChange(a1, v5, HIDWORD(v21), v10);
      v13 = v12;
      if ( v12 < 0 )
      {
        v14 = 1655LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v12);
        TouchKeyboardExperienceTelemetryLogger::PendingRequestExecuted::~PendingRequestExecuted((TouchKeyboardExperienceTelemetryLogger::PendingRequestExecuted *)&v22);
        return v13;
      }
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a1 + 8) + 24LL))(a1 + 8, HIDWORD(v21), v5);
      v13 = v12;
      if ( v12 < 0 )
      {
        v14 = 1659LL;
        goto LABEL_17;
      }
    }
  }
  if ( BYTE4(v20) )
  {
    v16 = *(_QWORD *)(a1 + 32);
    v17 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 656LL);
    v18 = (unsigned int *)std::optional<unsigned int>::value(&v20);
    v19 = v17(v16, *v18);
    if ( v19 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x681,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v19);
  }
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v22);
  v22 = &TouchKeyboardExperienceTelemetryLogger::PendingRequestExecuted::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v22);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v25);
  wil::details::shared_object<wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v24);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>(v23);
  return 0LL;
}
