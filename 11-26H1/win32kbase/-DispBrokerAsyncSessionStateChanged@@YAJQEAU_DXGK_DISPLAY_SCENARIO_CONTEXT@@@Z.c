/*
 * XREFs of ?DispBrokerAsyncSessionStateChanged@@YAJQEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14007CD00
 * Callers:
 *     xxxRemoteConnect @ 0x14007DC00 (xxxRemoteConnect.c)
 *     UserThreadCallout @ 0x140139A60 (UserThreadCallout.c)
 * Callees:
 *     ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x14007CD30 (-DispBrokerUpdateKernelDisplayPolicies@@YAXXZ.c)
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_1__lambda_0389f40e646f18740e1f12cb9d5b37a1___ @ 0x140195150 (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_1__lambda_0389f40e646f18740e1f12cb9d5b37a1___.c)
 */

__int64 __fastcall DispBrokerAsyncSessionStateChanged(struct _DXGK_DISPLAY_SCENARIO_CONTEXT *const a1)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  __int64 v5; // rcx

  DispBrokerUpdateKernelDisplayPolicies();
  W32GetUserSessionState(v3, v2, v4);
  return DispBroker::DispBrokerClient::AsyncMessageNoAlloc_1__lambda_0389f40e646f18740e1f12cb9d5b37a1___(v5, a1);
}
