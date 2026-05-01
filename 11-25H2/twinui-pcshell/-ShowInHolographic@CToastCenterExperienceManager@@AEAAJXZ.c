/*
 * XREFs of ?ShowInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x180375DAC
 * Callers:
 *     ?Show@CToastCenterExperienceManager@@AEAAJ_N@Z @ 0x1801F137C (-Show@CToastCenterExperienceManager@@AEAAJ_N@Z.c)
 *     ?ChangeDisplayContext@CToastCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x18037428C (-ChangeDisplayContext@CToastCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shell.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x1801E24E0 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VToastCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180373830 (--0-$ActivityBase@VToastCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??1EM_ShowInHolographic@ToastCenterTelemetry@@QEAA@XZ @ 0x180373F38 (--1EM_ShowInHolographic@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@EM_ShowInHolographic@ToastCenterTelemetry@@QEAAXXZ @ 0x1803761E0 (-StartActivity@EM_ShowInHolographic@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VToastCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180376320 (-Stop@-$ActivityBase@VToastCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::ShowInHolographic(CToastCenterExperienceManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v6; // [rsp+30h] [rbp-D0h] BYREF
  float v7; // [rsp+38h] [rbp-C8h]
  float v8; // [rsp+3Ch] [rbp-C4h]
  struct tagRECT v9; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v10[42]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  wil::ActivityBase<ToastCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ToastCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v10,
    (__int64)"EM_ShowInHolographic");
  v10[0] = &ToastCenterTelemetry::EM_ShowInHolographic::`vftable';
  ToastCenterTelemetry::EM_ShowInHolographic::StartActivity((ToastCenterTelemetry::EM_ShowInHolographic *)v10);
  if ( !*((_QWORD *)this + 94) || !*((_QWORD *)this + 92) )
    goto LABEL_8;
  v9.left = 0;
  v9.top = 0;
  v9.right = MulDiv((int)*((float *)this + 37), 150, 100);
  v9.bottom = MulDiv((int)*((float *)this + 38), 150, 100);
  v2 = CSingleViewShellExperience::SetPosition((CToastCenterExperienceManager *)((char *)this + 104), &v9);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v6 = 0LL;
    v7 = (float)(v9.right - v9.left);
    v8 = (float)(v9.bottom - v9.top);
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(**((_QWORD **)this + 92) + 48LL))(
           *((_QWORD *)this + 92),
           *((_QWORD *)this + 15),
           *((_QWORD *)this + 16),
           &v6);
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 1753LL;
      goto LABEL_7;
    }
LABEL_8:
    wil::ActivityBase<ToastCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v10);
    v3 = 0;
    goto LABEL_9;
  }
  v4 = 1749LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v2);
LABEL_9:
  ToastCenterTelemetry::EM_ShowInHolographic::~EM_ShowInHolographic((ToastCenterTelemetry::EM_ShowInHolographic *)v10);
  return v3;
}
