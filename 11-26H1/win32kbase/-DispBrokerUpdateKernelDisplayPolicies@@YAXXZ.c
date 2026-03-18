/*
 * XREFs of ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x14007CD30
 * Callers:
 *     ?DispBrokerAsyncSessionStateChanged@@YAJQEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14007CD00 (-DispBrokerAsyncSessionStateChanged@@YAJQEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     InitVideo @ 0x1401AAB00 (InitVideo.c)
 * Callees:
 *     DrvDxgkConfigureKernelDisplayPolicy @ 0x14007CDE0 (DrvDxgkConfigureKernelDisplayPolicy.c)
 *     DispBrokerGetCurrentMode @ 0x14007D610 (DispBrokerGetCurrentMode.c)
 *     ?LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ @ 0x14007D9B0 (-LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ.c)
 */

void __fastcall DispBrokerUpdateKernelDisplayPolicies(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  unsigned int CurrentMode; // ebx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // rax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  __int64 v12; // rax

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  DispBroker::DispBrokerClient::LoadRegistrySettings(*(DispBroker::DispBrokerClient **)(UserSessionState + 57008));
  CurrentMode = DispBrokerGetCurrentMode();
  DrvDxgkConfigureKernelDisplayPolicy(1LL, CurrentMode != 0);
  DrvDxgkConfigureKernelDisplayPolicy(2LL, CurrentMode == 0);
  DrvDxgkConfigureKernelDisplayPolicy(3LL, CurrentMode <= 1);
  v8 = W32GetUserSessionState(v6, v5, v7);
  DrvDxgkConfigureKernelDisplayPolicy(4LL, *(unsigned __int8 *)(*(_QWORD *)(v8 + 57008) + 8LL));
  v12 = W32GetUserSessionState(v10, v9, v11);
  DrvDxgkConfigureKernelDisplayPolicy(5LL, *(unsigned __int8 *)(*(_QWORD *)(v12 + 57008) + 9LL));
}
