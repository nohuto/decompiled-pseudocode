/*
 * XREFs of ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@QEBGPEA_N@Z @ 0x18046E4F4
 * Callers:
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x18046E760 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardView_ea_18046E760.c)
 *     ?OnShellViewCoordinatorShowRequested@TabTipAdapter@KeyboardHosting@@QEAA_NW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEBUShowShellViewRequestedEventArgs@Shell@7WindowsUdk@winrt@@@Z @ 0x18046E8A4 (-OnShellViewCoordinatorShowRequested@TabTipAdapter@KeyboardHosting@@QEAA_NW4CoreKeyboardViewType.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1800667F4 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?GetInputAppState@TabTipAdapter@KeyboardHosting@@AEAA?AW4PLM_APPLICATION_STATE@@XZ @ 0x1800948EC (-GetInputAppState@TabTipAdapter@KeyboardHosting@@AEAA-AW4PLM_APPLICATION_STATE@@XZ.c)
 *     ?NotifyCurrentVisibilityState@TabTipAdapter@KeyboardHosting@@QEAAJI_N0@Z @ 0x180098E6C (-NotifyCurrentVisibilityState@TabTipAdapter@KeyboardHosting@@QEAAJI_N0@Z.c)
 *     ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x180098EC4 (-SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z.c)
 *     ?SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z @ 0x1800A7148 (-SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18014E0EC (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgR.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18014E824 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRefl.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1802C5854 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ??$ShowRejected@IAEAY0BH@$$CBG@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAIAEAY0BH@$$CBG@Z @ 0x1802CA530 (--$ShowRejected@IAEAY0BH@$$CBG@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAIAEAY0BH@$$CBG@Z.c)
 *     ?IsXAMLExperienceDisabled@TabTipAdapter@KeyboardHosting@@AEAA_NXZ @ 0x1802CE3A8 (-IsXAMLExperienceDisabled@TabTipAdapter@KeyboardHosting@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$PreviousPendingRequestCanceled@IIAEAY08$$CBD@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI0AEAY08$$CBD@Z @ 0x18046A560 (--$PreviousPendingRequestCanceled@IIAEAY08$$CBD@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA.c)
 *     ??1OnShellRequestedStateChangeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18046B378 (--1OnShellRequestedStateChangeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?CreateDeferredShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@_N@Z @ 0x18046B734 (-CreateDeferredShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@.c)
 *     ?CreatePendingShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@_N@Z @ 0x18046B8B0 (-CreatePendingShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@I.c)
 *     ?ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@PEA_N@Z @ 0x18046EC30 (-ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Interna.c)
 *     ?StartActivity@OnShellRequestedStateChangeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@IPEBG_N22@Z @ 0x18047001C (-StartActivity@OnShellRequestedStateChangeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAX.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnShellRequestedStateChange(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        _BYTE *a5)
{
  __int64 v9; // rdx
  unsigned int InputAppState; // r12d
  char v11; // al
  char v12; // dl
  char v13; // r8
  int IsReady; // eax
  unsigned int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r8
  DWORD v19; // edx
  __int64 v20; // r8
  unsigned int v22; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+44h] [rbp-BCh] BYREF
  int v24; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v25[42]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  if ( KeyboardHosting::TabTipAdapter::IsXAMLExperienceDisabled((KeyboardHosting::TabTipAdapter *)a1) )
  {
    v22 = a2;
    TouchKeyboardExperienceTelemetryLogger::ShowRejected<unsigned int,unsigned short const (&)[23]>(&v22, v9);
    return 0LL;
  }
  InputAppState = KeyboardHosting::TabTipAdapter::GetInputAppState(a1);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v25,
    (__int64)"OnShellRequestedStateChangeActivity");
  v25[0] = &TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity::`vftable';
  v11 = std::_Atomic_storage<bool,1>::load(a1 + 390);
  TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity::StartActivity(
    v25,
    a2,
    InputAppState,
    a4,
    v11,
    v13,
    v12);
  IsReady = KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady((KeyboardHosting::TabTipAdapter *)a1);
  v15 = IsReady;
  if ( IsReady >= 0 )
  {
    if ( InputAppState == 1 && std::_Atomic_storage<bool,1>::load(a1 + 390) )
    {
      if ( *(_BYTE *)(a1 + 453) || !*(_BYTE *)(a1 + 449) )
      {
        v22 = 0;
        IsReady = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *))(**(_QWORD **)(a1 + 128) + 48LL))(
                    *(_QWORD *)(a1 + 128),
                    a2,
                    &v22);
        v15 = IsReady;
        if ( IsReady < 0 )
        {
          v16 = 2813LL;
          goto LABEL_26;
        }
        if ( v22 == 1 )
        {
          IsReady = KeyboardHosting::TabTipAdapter::ProcessShowRequest(a1, a2);
          v15 = IsReady;
          if ( IsReady < 0 )
          {
            v16 = 2824LL;
            goto LABEL_26;
          }
          *a5 = 1;
          if ( !a2 )
          {
            IsReady = KeyboardHosting::TabTipAdapter::NotifyCurrentVisibilityState(
                        (KeyboardHosting::TabTipAdapter *)a1,
                        *(_DWORD *)(a1 + 496),
                        1,
                        0);
            v15 = IsReady;
            if ( IsReady < 0 )
            {
              v16 = 2830LL;
              goto LABEL_26;
            }
          }
        }
        else
        {
          v23 = *(_DWORD *)(a1 + 396);
          v24 = *(_DWORD *)(a1 + 400);
          TouchKeyboardExperienceTelemetryLogger::PreviousPendingRequestCanceled<unsigned int,unsigned int,char const (&)[9]>(
            &v24,
            &v23,
            v20);
          IhmNotification::SendKeyboardSetVisible(0LL, 0);
        }
      }
      else
      {
        LOBYTE(v17) = 1;
        IsReady = KeyboardHosting::TabTipAdapter::SetTrackSelectionPosition(
                    (KeyboardHosting::TabTipAdapter *)a1,
                    v17,
                    v18);
        v15 = IsReady;
        if ( IsReady < 0 )
        {
          v16 = 2844LL;
          goto LABEL_26;
        }
        IsReady = KeyboardHosting::TabTipAdapter::CreateDeferredShowRequest(a1, a2, a3, 1);
        v15 = IsReady;
        if ( IsReady < 0 )
        {
          v16 = 2848LL;
          goto LABEL_26;
        }
      }
    }
    else
    {
      IsReady = KeyboardHosting::TabTipAdapter::CreatePendingShowRequest(a1, a2, a3, 1);
      v15 = IsReady;
      if ( IsReady < 0 )
      {
        v16 = 2854LL;
        goto LABEL_26;
      }
    }
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v25,
      v19);
    TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity::~OnShellRequestedStateChangeActivity((TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity *)v25);
    return 0LL;
  }
  v16 = 2803LL;
LABEL_26:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)IsReady);
  TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity::~OnShellRequestedStateChangeActivity((TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity *)v25);
  return v15;
}
