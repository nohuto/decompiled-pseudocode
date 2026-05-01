/*
 * XREFs of ?HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x18037C490
 * Callers:
 *     ?Hide@CToastCenterExperienceManager@@AEAAJXZ @ 0x18001A1A8 (-Hide@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnViewDestroyed@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801F3850 (-OnViewDestroyed@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?ChangeDisplayContext@CToastCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x18037BECC (-ChangeDisplayContext@CToastCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shell.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x1802396A4 (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VToastCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18037B454 (--0-$ActivityBase@VToastCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??1EM_HideInHolographic@ToastCenterTelemetry@@QEAA@XZ @ 0x18037BB18 (--1EM_HideInHolographic@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@EM_HideInHolographic@ToastCenterTelemetry@@QEAAXXZ @ 0x18037DE30 (-StartActivity@EM_HideInHolographic@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VToastCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18037E0F0 (-Stop@-$ActivityBase@VToastCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::HideInHolographic(CToastCenterExperienceManager *this)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  int v7[2]; // [rsp+20h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<ToastCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ToastCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v7,
    (__int64)"EM_HideInHolographic");
  *(_QWORD *)v7 = &ToastCenterTelemetry::EM_HideInHolographic::`vftable';
  ToastCenterTelemetry::EM_HideInHolographic::StartActivity((ToastCenterTelemetry::EM_HideInHolographic *)v7);
  v2 = *((_QWORD *)this + 92);
  if ( !v2 || !*((_QWORD *)this + 94) )
  {
LABEL_7:
    wil::ActivityBase<ToastCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v7);
    v4 = 0;
    goto LABEL_8;
  }
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v2 + 56LL))(
         v2,
         *((_QWORD *)this + 15),
         *((_QWORD *)this + 16));
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = CToastCenterExperienceManager::PositionView((__int64 **)this);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x6EF,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6EC,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
LABEL_8:
  ToastCenterTelemetry::EM_HideInHolographic::~EM_HideInHolographic((ToastCenterTelemetry::EM_HideInHolographic *)v7);
  return v4;
}
