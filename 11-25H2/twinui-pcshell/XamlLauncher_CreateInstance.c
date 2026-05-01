/*
 * XREFs of XamlLauncher_CreateInstance @ 0x1804513E0
 * Callers:
 *     ?CreateInstance@XamlLauncherFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180228FF0 (-CreateInstance@XamlLauncherFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UIXamlLauncherState@@UIImmersiveLauncherCortana@@UIImmersiveWindowMessageNotification@@UIImmersiveSessionIdleNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006A450 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWR_ea_18006A450.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveLauncher@@UIImmersiveLauncherTrayNotify@@UIImmersiveShellHookNotification@@UIServiceProvider@@UIImmersiveShellComponent@@UIImmersiveLauncherCortana@@UIXamlLauncherStateCallback@@UIPrivilegedOperationsConsumer@@UIImmersiveLauncherInternal@@@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveLauncher@@UIImmersiveLauncherTrayNotify@@UIImmersiveShellHookNotification@@UIServiceProvider@@UIImmersiveShellComponent@@UIImmersiveLauncherCortana@@UIXamlLauncherStateCallback@@UIPrivilegedOperationsConsumer@@UIImmersiveLauncherInternal@@@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18007383C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithS.c)
 *     ??$MakeAndInitialize@VXamlLauncher@@V1@PEAVXamlLauncherState@@@Details@WRL@Microsoft@@YAJPEAPEAVXamlLauncher@@$$QEAPEAVXamlLauncherState@@@Z @ 0x18022A790 (--$MakeAndInitialize@VXamlLauncher@@V1@PEAVXamlLauncherState@@@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 *     ?InternalRelease@?$ComPtr@VXamlLauncher@@@WRL@Microsoft@@IEAAKXZ @ 0x18023DD08 (-InternalRelease@-$ComPtr@VXamlLauncher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0XamlLauncherState@@QEAA@XZ @ 0x1802B7C6C (--0XamlLauncherState@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 */

__int64 __fastcall XamlLauncher_CreateInstance(_QWORD *a1)
{
  XamlLauncherState *v2; // rbx
  XamlLauncherState *v3; // rax
  XamlLauncherState *v4; // rdi
  XamlLauncherState *v5; // rax
  int v7; // edi
  __int64 v8; // rdx
  volatile int *v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  XamlLauncher *v11; // [rsp+30h] [rbp+8h] BYREF
  XamlLauncherState *v12; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = 0LL;
  v3 = (XamlLauncherState *)operator new(0x480uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v3;
  v4 = v3;
  if ( v3 )
  {
    memset_0(v3, 0, 0x480uLL);
    v5 = XamlLauncherState::XamlLauncherState(v4);
    v12 = 0LL;
    v2 = v5;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>((void **)&v12);
  if ( !v2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDC,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  v11 = 0LL;
  v12 = v2;
  Microsoft::WRL::ComPtr<XamlLauncher>::InternalRelease((volatile signed __int32 **)&v11);
  v7 = Microsoft::WRL::Details::MakeAndInitialize<XamlLauncher,XamlLauncher,XamlLauncherState *>(&v11, &v12);
  if ( v7 < 0 )
  {
    v8 = 222LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_10;
  }
  v7 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveLauncher,IImmersiveLauncherTrayNotify,IImmersiveShellHookNotification,IServiceProvider,IImmersiveShellComponent,IImmersiveLauncherCortana,IXamlLauncherStateCallback,IPrivilegedOperationsConsumer,IImmersiveLauncherInternal>>>(
         (__int64)v11,
         &GUID_d8d60399_a0f1_f987_5551_321fd1b49864,
         a1);
  if ( v7 < 0 )
  {
    v8 = 223LL;
    goto LABEL_9;
  }
LABEL_10:
  Microsoft::WRL::ComPtr<XamlLauncher>::InternalRelease((volatile signed __int32 **)&v11);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,IXamlLauncherState,IImmersiveLauncherCortana,IImmersiveWindowMessageNotification,IImmersiveSessionIdleNotification>::Release(
    (__int64)v2,
    v9);
  return (unsigned int)v7;
}
