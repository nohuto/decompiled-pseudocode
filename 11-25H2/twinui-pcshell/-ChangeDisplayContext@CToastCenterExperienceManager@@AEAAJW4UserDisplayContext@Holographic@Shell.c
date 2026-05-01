/*
 * XREFs of ?ChangeDisplayContext@CToastCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x18037428C
 * Callers:
 *     ?OnDisplayContextChanged@CToastCenterExperienceManager@@AEAAJXZ @ 0x180375468 (-OnDisplayContextChanged@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?UnregisterHolographicExecutor@CToastCenterExperienceManager@@UEAAJXZ @ 0x180377740 (-UnregisterHolographicExecutor@CToastCenterExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180030EF4 (-Stop@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??0?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800311B0 (--0-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$NoChangeToDisplayContext@AEAW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@EM_DisplayContextChanged@ToastCenterTelemetry@@QEAAXAEAW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x180373710 (--$NoChangeToDisplayContext@AEAW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@EM_Disp.c)
 *     ??1EM_DisplayContextChanged@ToastCenterTelemetry@@QEAA@XZ @ 0x180373EB4 (--1EM_DisplayContextChanged@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ?DisplayContextChangedToHeadMountedDisplay@EM_DisplayContextChanged@ToastCenterTelemetry@@QEAAXXZ @ 0x1803746CC (-DisplayContextChangedToHeadMountedDisplay@EM_DisplayContextChanged@ToastCenterTelemetry@@QEAAXX.c)
 *     ?DisplayContextChangedToMonitor@EM_DisplayContextChanged@ToastCenterTelemetry@@QEAAXXZ @ 0x180374708 (-DisplayContextChangedToMonitor@EM_DisplayContextChanged@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x180374830 (-HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?MoveToastCenterViewToDesktop@CToastCenterExperienceManager@@AEAAJXZ @ 0x180374BBC (-MoveToastCenterViewToDesktop@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?MoveToastCenterViewToHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x180374C48 (-MoveToastCenterViewToHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?ShowInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x180375DAC (-ShowInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?StartActivity@EM_DisplayContextChanged@ToastCenterTelemetry@@QEAAXXZ @ 0x180376014 (-StartActivity@EM_DisplayContextChanged@ToastCenterTelemetry@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::ChangeDisplayContext(__int64 a1, int a2)
{
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rdx
  int v8[4]; // [rsp+20h] [rbp-178h] BYREF
  volatile signed __int32 *v9[42]; // [rsp+30h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  v8[0] = a2;
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v9,
    (__int64)"EM_DisplayContextChanged");
  v9[0] = (volatile signed __int32 *)&ToastCenterTelemetry::EM_DisplayContextChanged::`vftable';
  ToastCenterTelemetry::EM_DisplayContextChanged::StartActivity((ToastCenterTelemetry::EM_DisplayContextChanged *)v9);
  if ( !*(_QWORD *)(a1 + 128) || !*(_QWORD *)(a1 + 752) || !*(_QWORD *)(a1 + 736) || *(_DWORD *)(a1 + 744) == a2 )
  {
    ToastCenterTelemetry::EM_DisplayContextChanged::NoChangeToDisplayContext<enum Windows::Internal::Shell::Holographic::UserDisplayContext &>(
      (__int64)v9,
      v8);
    goto LABEL_17;
  }
  *(_DWORD *)(a1 + 744) = a2;
  if ( a2 != 1 )
  {
    ToastCenterTelemetry::EM_DisplayContextChanged::DisplayContextChangedToMonitor((ToastCenterTelemetry::EM_DisplayContextChanged *)v9);
    v4 = CToastCenterExperienceManager::MoveToastCenterViewToDesktop((CToastCenterExperienceManager *)a1);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 1803LL;
      goto LABEL_11;
    }
    v4 = CToastCenterExperienceManager::HideInHolographic((CToastCenterExperienceManager *)a1);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 1805LL;
      goto LABEL_11;
    }
    goto LABEL_17;
  }
  ToastCenterTelemetry::EM_DisplayContextChanged::DisplayContextChangedToHeadMountedDisplay((ToastCenterTelemetry::EM_DisplayContextChanged *)v9);
  v4 = CToastCenterExperienceManager::MoveToastCenterViewToHolographic((CToastCenterExperienceManager *)a1);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( *(_DWORD *)(a1 + 144) == 2 )
    {
      v4 = CToastCenterExperienceManager::ShowInHolographic((CToastCenterExperienceManager *)a1);
      v5 = v4;
      if ( v4 < 0 )
      {
        v6 = 1796LL;
        goto LABEL_11;
      }
    }
LABEL_17:
    wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v9, 0);
    v5 = 0;
    goto LABEL_18;
  }
  v6 = 1791LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_18:
  ToastCenterTelemetry::EM_DisplayContextChanged::~EM_DisplayContextChanged(v9);
  return v5;
}
