/*
 * XREFs of ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x14002B900
 * Callers:
 *     ?DispBrokerAsyncSessionStateChanged@@YAJQEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14002B8D0 (-DispBrokerAsyncSessionStateChanged@@YAJQEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     InitVideo @ 0x1401B6588 (InitVideo.c)
 * Callees:
 *     DispBrokerGetCurrentMode @ 0x14002C1E0 (DispBrokerGetCurrentMode.c)
 *     DrvDxgkConfigureKernelDisplayPolicy @ 0x14002C210 (DrvDxgkConfigureKernelDisplayPolicy.c)
 *     ?LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ @ 0x14002C24C (-LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ.c)
 */

void __fastcall DispBrokerUpdateKernelDisplayPolicies(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  unsigned int CurrentMode; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  DispBroker::DispBrokerClient::LoadRegistrySettings(*(DispBroker::DispBrokerClient **)(UserSessionState + 57016));
  CurrentMode = DispBrokerGetCurrentMode();
  DrvDxgkConfigureKernelDisplayPolicy(1LL, CurrentMode != 0);
  DrvDxgkConfigureKernelDisplayPolicy(2LL, CurrentMode == 0);
  DrvDxgkConfigureKernelDisplayPolicy(3LL, CurrentMode <= 1);
  v6 = W32GetUserSessionState(v5, v4);
  DrvDxgkConfigureKernelDisplayPolicy(4LL, *(unsigned __int8 *)(*(_QWORD *)(v6 + 57016) + 8LL));
  v9 = W32GetUserSessionState(v8, v7);
  DrvDxgkConfigureKernelDisplayPolicy(5LL, *(unsigned __int8 *)(*(_QWORD *)(v9 + 57016) + 9LL));
}
