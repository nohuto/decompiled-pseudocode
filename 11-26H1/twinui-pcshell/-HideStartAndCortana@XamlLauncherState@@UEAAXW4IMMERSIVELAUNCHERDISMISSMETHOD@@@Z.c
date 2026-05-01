/*
 * XREFs of ?HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x180246630
 * Callers:
 *     ?DismissStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x180461220 (-DismissStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 * Callees:
 *     ?TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA?AV12@XZ @ 0x180076A7C (-TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA-AV12@XZ.c)
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x180076FE0 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 *     ??1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x180077628 (--1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ??$HideStartAndCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18009764C (--$HideStartAndCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXA.c)
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801EAC60 (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgRe_ea_1801EAC60.c)
 *     ??4LauncherInvokeActivity@CommonStartTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180214D4C (--4LauncherInvokeActivity@CommonStartTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?IsFindInStartVisible@XamlLauncherState@@UEAA_NXZ @ 0x180248470 (-IsFindInStartVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     ?data@?$tip_test@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@2@XZ @ 0x180281E90 (-data@-$tip_test@V-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$tes.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x18028BF74 (-complete@-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@ti.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1802A2788 (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180459588 (--1-$test_data_control@V-$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@1@XZ @ 0x18045965C (--C-$tip_test@V-$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@t.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180460AB0 (--1-$test_data_control@V-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA@X.c)
 *     ?LauncherCancelledDueToForeground@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ @ 0x180461A60 (-LauncherCancelledDueToForeground@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
int __fastcall XamlLauncherState::HideStartAndCortana(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v4; // r14
  int v5; // ecx
  __int64 v6; // rdx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  struct wil::details::IFailureCallback *v13; // rax
  _BYTE v15[4]; // [rsp+20h] [rbp-E0h] BYREF
  int v16; // [rsp+24h] [rbp-DCh]
  _DWORD v17[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+38h] [rbp-C8h]
  char v19; // [rsp+40h] [rbp-C0h]
  volatile signed __int32 *v20[42]; // [rsp+50h] [rbp-B0h] BYREF
  volatile signed __int32 *v21[42]; // [rsp+1A0h] [rbp+A0h] BYREF

  v2 = a2;
  v4 = a1 - 24;
  *(_DWORD *)(a1 - 24 + 304) = a2;
  v5 = *(_DWORD *)(a1 + 40);
  v17[0] = v5;
  v17[1] = v16;
  v18 = v4;
  v19 = 1;
  if ( v5 > 11 )
  {
    if ( v5 > 17 )
    {
      v10 = v5 - 18;
      if ( !v10 )
        goto LABEL_5;
      v11 = v10 - 1;
      if ( !v11 )
        goto LABEL_5;
      v12 = v11 - 1;
      if ( !v12 )
        goto LABEL_20;
      if ( v12 != 2 )
        goto LABEL_5;
    }
    else
    {
      if ( v5 == 17 )
        goto LABEL_5;
      v7 = v5 - 12;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            if ( v9 != 2 )
              goto LABEL_5;
            *(_DWORD *)(a1 + 40) = 17;
LABEL_19:
            (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 56) + 64LL))(*(_QWORD *)(a1 + 56), a2);
            goto LABEL_37;
          }
        }
      }
    }
LABEL_18:
    *(_DWORD *)(a1 + 40) = 9;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 96LL))(*(_QWORD *)(a1 + 64));
    a2 = v2;
    goto LABEL_19;
  }
  if ( v5 <= 5 )
  {
    if ( v5 != 5 )
    {
      if ( v5 != 3 )
        goto LABEL_5;
LABEL_20:
      wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v20);
      v20[0] = (volatile signed __int32 *)&CommonStartTelemetry::LauncherInvokeActivity::`vftable';
      if ( **(_DWORD **)(a1 + 560) == 1 && v2 == 7 )
      {
        v13 = CommonStartTelemetry::LauncherInvokeActivity::TransferToCurrentThread(
                a1 + 288,
                (struct wil::details::IFailureCallback *)v21);
        CommonStartTelemetry::LauncherInvokeActivity::operator=((__int64)v20, (__int64)v13);
        CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity(v21);
        CommonStartTelemetry::LauncherInvokeActivity::LauncherCancelledDueToForeground((CommonStartTelemetry::LauncherInvokeActivity *)v20);
      }
      if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool(a1 + 944)
        && v2 == 7 )
      {
        *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>::data(
                                a1 + 944,
                                v15)
                 + 274LL) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>::~test_data_control<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>(v15);
      }
      if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool(a1 + 952)
        && v2 == 7 )
      {
        *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>>::operator->(
                                a1 + 952,
                                v15)
                 + 290LL) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>>::~test_data_control<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>>(v15);
        tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete(a1 + 952);
      }
      *(_DWORD *)(a1 + 40) = 0;
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 96LL))(*(_QWORD *)(a1 + 64));
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 56) + 64LL))(*(_QWORD *)(a1 + 56), v2);
      if ( *v20[34] == 1 && v2 == 7 )
        XamlLauncherState::CompleteStartShowTelemetry(
          (FocusHoldingTank **)v4,
          0,
          (struct CommonStartTelemetry::LauncherInvokeActivity *)v20);
      CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity(v20);
      goto LABEL_37;
    }
    goto LABEL_18;
  }
LABEL_5:
  *(_BYTE *)(a1 + 1037) = (_DWORD)a2 == 7;
  if ( (_DWORD)a2 == 7 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 96LL))(*(_QWORD *)(a1 + 64));
    v6 = 7LL;
LABEL_36:
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 56) + 64LL))(*(_QWORD *)(a1 + 56), v6);
    *(_DWORD *)(a1 + 40) = 0;
    goto LABEL_37;
  }
  if ( (_DWORD)a2 == 6 && XamlLauncherState::IsFindInStartVisible((XamlLauncherState *)a1) )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 96LL))(*(_QWORD *)(a1 + 64));
    v6 = 6LL;
    goto LABEL_36;
  }
LABEL_37:
  v19 = 0;
  return StartWindowTelemetry::HideStartAndCortana<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
           v17,
           (int *)(v4 + 64));
}
