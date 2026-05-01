/*
 * XREFs of ?GetMonitor@XamlLauncher@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x180096A80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180043774 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180096920 (-Stop@-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?StartActivity@GetImmersiveMonitor@StartWindowTelemetry@@QEAAXXZ @ 0x180096E38 (-StartActivity@GetImmersiveMonitor@StartWindowTelemetry@@QEAAXXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800973FC (-reset@-$shared_object@V-$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_ea_1800973FC.c)
 *     ??1?$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180097458 (--1-$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType_ea_180097458.c)
 *     ??1GetImmersiveMonitor@StartWindowTelemetry@@QEAA@XZ @ 0x1800974C8 (--1GetImmersiveMonitor@StartWindowTelemetry@@QEAA@XZ.c)
 *     ?Destroy@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800974F4 (-Destroy@-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncher::GetMonitor(XamlLauncher *this, struct IImmersiveMonitor **a2)
{
  __int64 v4; // rdi
  DWORD v6; // edx
  int v7[2]; // [rsp+20h] [rbp-E0h] BYREF
  int v8; // [rsp+28h] [rbp-D8h] BYREF
  char v9; // [rsp+2Ch] [rbp-D4h]
  int v10; // [rsp+50h] [rbp-B0h] BYREF
  const char *v11; // [rsp+58h] [rbp-A8h]
  __int64 v12; // [rsp+60h] [rbp-A0h]
  char v13; // [rsp+68h] [rbp-98h]
  int v14; // [rsp+70h] [rbp-90h]
  _BYTE v15[152]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v16; // [rsp+110h] [rbp+10h]
  int v17; // [rsp+120h] [rbp+20h]
  __int64 v18; // [rsp+128h] [rbp+28h]
  int *v19; // [rsp+130h] [rbp+30h]
  __int64 v20; // [rsp+138h] [rbp+38h] BYREF
  _QWORD v21[3]; // [rsp+140h] [rbp+40h] BYREF
  int v22; // [rsp+158h] [rbp+58h]
  int *v23; // [rsp+160h] [rbp+60h]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  *a2 = 0LL;
  if ( !*((_QWORD *)this + 44) )
    return 2147943568LL;
  v8 = 0;
  v9 = 0;
  v13 = 0;
  v10 = 0;
  v11 = "GetImmersiveMonitor";
  v12 = 0LL;
  v14 = 0;
  v16 = 0LL;
  memset_0(v15, 0, sizeof(v15));
  v17 = 1;
  v18 = 0LL;
  v19 = &v8;
  v20 = 0LL;
  v21[0] = 0LL;
  v21[1] = v7;
  v21[2] = 0LL;
  v22 = 0;
  v23 = &v10;
  *(_QWORD *)v7 = &StartWindowTelemetry::GetImmersiveMonitor::`vftable';
  StartWindowTelemetry::GetImmersiveMonitor::StartActivity((StartWindowTelemetry::GetImmersiveMonitor *)v7);
  v4 = *((_QWORD *)this + 22);
  *a2 = 0LL;
  if ( !*(_QWORD *)(v4 + 64) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D7,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)0x80070490LL);
    StartWindowTelemetry::GetImmersiveMonitor::~GetImmersiveMonitor((StartWindowTelemetry::GetImmersiveMonitor *)v7);
    return 2147943568LL;
  }
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(v4 + 64));
  *a2 = *(struct IImmersiveMonitor **)(v4 + 64);
  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v7, v6);
  *(_QWORD *)v7 = &StartWindowTelemetry::GetImmersiveMonitor::`vftable';
  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v7);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v21);
  wil::details::shared_object<wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LauncherTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v20);
  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LauncherTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<LauncherTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>(&v8);
  return 0LL;
}
