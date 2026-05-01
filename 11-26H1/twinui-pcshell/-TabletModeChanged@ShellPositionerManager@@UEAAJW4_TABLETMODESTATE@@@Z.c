/*
 * XREFs of ?TabletModeChanged@ShellPositionerManager@@UEAAJW4_TABLETMODESTATE@@@Z @ 0x1804ECEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180077520 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflector_ea_180077520.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x1802E7978 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180324614 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ??1TMChangeHandler@ShellPositionerTelemetry@@QEAA@XZ @ 0x1804EA8C4 (--1TMChangeHandler@ShellPositionerTelemetry@@QEAA@XZ.c)
 *     ?MapTabletModeStateToShellPositionerType@ShellPositionerManager@@CA?AW4SHELL_POSITIONER_TYPE@@W4_TABLETMODESTATE@@H@Z @ 0x1804EB3D0 (-MapTabletModeStateToShellPositionerType@ShellPositionerManager@@CA-AW4SHELL_POSITIONER_TYPE@@W4.c)
 *     ?StartActivity@TMChangeHandler@ShellPositionerTelemetry@@QEAAXPEBG@Z @ 0x1804EC210 (-StartActivity@TMChangeHandler@ShellPositionerTelemetry@@QEAAXPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellPositionerManager::TabletModeChanged(__int64 a1, int a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // eax
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // rdx
  unsigned int v9; // ebx
  unsigned int v10; // eax
  int v12[2]; // [rsp+20h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v12,
    (__int64)"TMChangeHandler");
  *(_QWORD *)v12 = &ShellPositionerTelemetry::TMChangeHandler::`vftable';
  ShellPositionerTelemetry::TMChangeHandler::StartActivity(
    (ShellPositionerTelemetry::TMChangeHandler *)v12,
    L"ShellPositionerManager");
  if ( a2 != *(_DWORD *)(a1 + 40) )
  {
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl) )
    {
      if ( *(_DWORD *)(a1 + 44) )
        goto LABEL_9;
      v4 = ShellPositionerManager::MapTabletModeStateToShellPositionerType(*(_DWORD *)(a1 + 40), 0);
      v5 = ShellPositionerManager::MapTabletModeStateToShellPositionerType(a2, 0);
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a1 - 16) + 40LL))(a1 - 16, v4, v5);
      v7 = retaddr;
      if ( v6 >= 0 )
        goto LABEL_9;
      v8 = 535LL;
    }
    else
    {
      v9 = ShellPositionerManager::MapTabletModeStateToShellPositionerType(*(_DWORD *)(a1 + 40), 0);
      v10 = ShellPositionerManager::MapTabletModeStateToShellPositionerType(a2, 0);
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a1 - 16) + 40LL))(a1 - 16, v9, v10);
      v7 = retaddr;
      if ( v6 >= 0 )
      {
LABEL_9:
        *(_DWORD *)(a1 + 40) = a2;
        goto LABEL_10;
      }
      v8 = 543LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v7,
      (void *)v8,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_9;
  }
LABEL_10:
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64 *)v12);
  ShellPositionerTelemetry::TMChangeHandler::~TMChangeHandler((volatile signed __int32 **)v12);
  return 0LL;
}
