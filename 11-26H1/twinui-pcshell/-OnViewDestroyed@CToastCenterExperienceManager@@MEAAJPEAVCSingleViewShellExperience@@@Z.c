/*
 * XREFs of ?OnViewDestroyed@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801F3850
 * Callers:
 *     <none>
 * Callees:
 *     ?Destroy@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18001C32C (-Destroy@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??0?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18001C494 (--0-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$shared_object@V?$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180040D7C (-reset@-$shared_object@V-$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1?$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180040E74 (--1-$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180043774 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180068D48 (-Stop@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x1801085C4 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 *     ?StartActivity@EM_ViewDestroyedActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x1802B5A8C (-StartActivity@EM_ViewDestroyedActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?LookupToastQueue@CToastCenterExperienceManager@@AEAAJXZ @ 0x1802BE834 (-LookupToastQueue@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ??1EM_ViewDestroyedActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x1802C4A84 (--1EM_ViewDestroyedActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x18037C490 (-HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::OnViewDestroyed(
        CToastCenterExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  unsigned int v6; // r9d
  unsigned int v8; // eax
  int pvData; // [rsp+48h] [rbp-C0h] BYREF
  DWORD pdwType; // [rsp+4Ch] [rbp-BCh] BYREF
  DWORD pcbData[2]; // [rsp+50h] [rbp-B8h] BYREF
  void **v12; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v13[68]; // [rsp+60h] [rbp-A8h] BYREF
  volatile signed __int32 *v14; // [rsp+170h] [rbp+68h] BYREF
  _BYTE v15[48]; // [rsp+178h] [rbp+70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)&v12,
    (__int64)"EM_ViewDestroyedActivity");
  v12 = &ToastCenterTelemetry::EM_ViewDestroyedActivity::`vftable';
  ToastCenterTelemetry::EM_ViewDestroyedActivity::StartActivity((ToastCenterTelemetry::EM_ViewDestroyedActivity *)&v12);
  if ( !*((_QWORD *)this + 81)
    || (v3 = CToastCenterExperienceManager::HideInHolographic((CToastCenterExperienceManager *)((char *)this - 88)),
        v4 = v3,
        v3 >= 0) )
  {
    pdwType = 0;
    pcbData[0] = 4;
    if ( !RegGetValueW(
            HKEY_LOCAL_MACHINE,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell\\Launcher",
            L"AllowAutoAppRestartOnCrash",
            0x10000012u,
            &pdwType,
            &pvData,
            pcbData) )
    {
      if ( pdwType == 4 )
      {
        if ( !pvData )
          goto LABEL_7;
      }
      else if ( pcbData[0] == 4 && (_WORD)pvData == 48 )
      {
        goto LABEL_7;
      }
    }
    v8 = *((_DWORD *)this + 121);
    if ( v8 < 5 )
    {
      *((_DWORD *)this + 121) = v8 + 1;
      SHRegGetBOOLWithREGSAM(
        HKEY_LOCAL_MACHINE,
        L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell\\Launcher",
        L"AllowAutoAppRestartOnCrash",
        v6,
        &pvData);
      v3 = CToastCenterExperienceManager::LookupToastQueue((CToastCenterExperienceManager *)((char *)this - 88));
      v4 = v3;
      if ( v3 < 0 )
      {
        v5 = 1341LL;
        goto LABEL_13;
      }
    }
LABEL_7:
    wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)&v12, 0);
    v12 = &ToastCenterTelemetry::EM_ViewDestroyedActivity::`vftable';
    wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v12);
    wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v15);
    wil::details::shared_object<wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v14);
    wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>(v13);
    return 0LL;
  }
  v5 = 1328LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
  ToastCenterTelemetry::EM_ViewDestroyedActivity::~EM_ViewDestroyedActivity((ToastCenterTelemetry::EM_ViewDestroyedActivity *)&v12);
  return v4;
}
