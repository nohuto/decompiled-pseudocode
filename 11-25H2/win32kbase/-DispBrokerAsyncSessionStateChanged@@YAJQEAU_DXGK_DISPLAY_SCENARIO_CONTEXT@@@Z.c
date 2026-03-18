/*
 * XREFs of ?DispBrokerAsyncSessionStateChanged@@YAJQEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14002B8D0
 * Callers:
 *     UserThreadCallout @ 0x14016AE90 (UserThreadCallout.c)
 *     xxxRemoteConnect @ 0x14016C380 (xxxRemoteConnect.c)
 * Callees:
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_1__lambda_0389f40e646f18740e1f12cb9d5b37a1___ @ 0x14002B834 (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_1__lambda_0389f40e646f18740e1f12cb9d5b37a1___.c)
 *     ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x14002B900 (-DispBrokerUpdateKernelDisplayPolicies@@YAXXZ.c)
 */

__int64 __fastcall DispBrokerAsyncSessionStateChanged(struct _DXGK_DISPLAY_SCENARIO_CONTEXT *const a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx

  DispBrokerUpdateKernelDisplayPolicies();
  W32GetUserSessionState(v3, v2);
  return DispBroker::DispBrokerClient::AsyncMessageNoAlloc_1__lambda_0389f40e646f18740e1f12cb9d5b37a1___(v4, a1);
}
