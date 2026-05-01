/*
 * XREFs of ?Launch@CToastCenterExperienceManager@@AEAAJXZ @ 0x180015354
 * Callers:
 *     ?OnNewNotification@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801F5998 (-OnNewNotification@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnCriticalNotification@CToastCenterExperienceManager@@AEAAJXZ @ 0x180375370 (-OnCriticalNotification@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?StartActivity@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x180015624 (-StartActivity@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?LaunchedApplication@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x1800156B0 (-LaunchedApplication@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x1800156EC (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x180015980 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 *     ?Stop@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180030EF4 (-Stop@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??0?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800311B0 (--0-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ??1?$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18003271C (--1-$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ?reset@?$shared_object@V?$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180032A04 (-reset@-$shared_object@V-$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180032A5C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Destroy@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180032CF4 (-Destroy@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1EM_LaunchActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x18022D3CC (--1EM_LaunchActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ?NoOp_ShellNotReady@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x1802CC11C (-NoOp_ShellNotReady@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802CE330 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?NoOp_ActionCenterVisible@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x180374CD8 (-NoOp_ActionCenterVisible@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?NoOp_DeviceLockdown@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x180374D50 (-NoOp_DeviceLockdown@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?NoOp_ShutdownInProgress@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x180374D8C (-NoOp_ShutdownInProgress@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?TurnedScreenOn_SoundSentry@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x1803776F8 (-TurnedScreenOn_SoundSentry@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::Launch(PTP_TIMER *pv)
{
  HWND WindowW; // rax
  PTP_TIMER ThreadpoolTimer; // r14
  struct _TP_TIMER *v4; // rsi
  DWORD LastError; // ebx
  int v6; // eax
  unsigned int v7; // ebx
  NTSTATUS v9; // eax
  int v10; // [rsp+28h] [rbp-E0h]
  _BYTE pvParam[56]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+70h] [rbp-98h]
  void **v13; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v14[272]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v15[8]; // [rsp+190h] [rbp+88h] BYREF
  _BYTE v16[48]; // [rsp+198h] [rbp+90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    &v13,
    "EM_LaunchActivity");
  v13 = &ToastCenterTelemetry::EM_LaunchActivity::`vftable';
  ToastCenterTelemetry::EM_LaunchActivity::StartActivity((ToastCenterTelemetry::EM_LaunchActivity *)&v13);
  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  if ( *((_BYTE *)pv + 401) )
  {
    if ( GetPropW(WindowW, L"IsExplorerShuttingDown") )
    {
      ToastCenterTelemetry::EM_LaunchActivity::NoOp_ShutdownInProgress((ToastCenterTelemetry::EM_LaunchActivity *)&v13);
    }
    else if ( *((_BYTE *)pv + 402) )
    {
      ToastCenterTelemetry::EM_LaunchActivity::NoOp_ActionCenterVisible((ToastCenterTelemetry::EM_LaunchActivity *)&v13);
    }
    else if ( *((_BYTE *)pv + 404) )
    {
      ToastCenterTelemetry::EM_LaunchActivity::NoOp_DeviceLockdown((ToastCenterTelemetry::EM_LaunchActivity *)&v13);
    }
    else
    {
      ThreadpoolTimer = CreateThreadpoolTimer(lambda_e9aa1490fbc3065c6c84b3b607e7b4a2_::_lambda_invoker_cdecl_, pv, 0LL);
      v4 = pv[80];
      if ( v4 )
      {
        LastError = GetLastError();
        wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v4);
        SetLastError(LastError);
      }
      pv[80] = ThreadpoolTimer;
      memset(&pvParam[8], 0, 48);
      v12 = 0LL;
      *(_DWORD *)&pvParam[8] = 56;
      if ( SystemParametersInfoW(0x40u, 0x38u, &pvParam[8], 0) )
      {
        if ( (pvParam[12] & 1) != 0 )
        {
          ToastCenterTelemetry::EM_LaunchActivity::TurnedScreenOn_SoundSentry((ToastCenterTelemetry::EM_LaunchActivity *)&v13);
          v9 = NtPowerInformation(ProcessorStateHandler2|0x40, 0LL, 0, 0LL, 0);
          if ( v9 < 0 )
          {
            v7 = wil::details::in1diag3::Return_NtStatus(
                   retaddr,
                   (void *)0x38B,
                   (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
                   (const char *)(unsigned int)v9,
                   v10);
            ToastCenterTelemetry::EM_LaunchActivity::~EM_LaunchActivity((ToastCenterTelemetry::EM_LaunchActivity *)&v13);
            return v7;
          }
        }
      }
      ToastCenterTelemetry::EM_LaunchActivity::LaunchedApplication((ToastCenterTelemetry::EM_LaunchActivity *)&v13);
      v6 = CSingleViewShellExperience::Launch((CSingleViewShellExperience *)(pv + 13));
      v7 = v6;
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x390,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v6,
          v10);
        goto LABEL_12;
      }
      if ( *((_DWORD *)pv + 36) != 2 )
      {
        *(_QWORD *)pvParam = -600000000LL;
        SetThreadpoolTimer(pv[80], (PFILETIME)pvParam, 0, 0);
      }
    }
  }
  else
  {
    ToastCenterTelemetry::EM_LaunchActivity::NoOp_ShellNotReady((ToastCenterTelemetry::EM_LaunchActivity *)&v13);
  }
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v13, 0LL);
  v7 = 0;
LABEL_12:
  v13 = &ToastCenterTelemetry::EM_LaunchActivity::`vftable';
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v13);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v16);
  wil::details::shared_object<wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v15);
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>(v14);
  return v7;
}
