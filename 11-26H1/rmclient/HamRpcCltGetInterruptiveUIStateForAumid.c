/*
 * XREFs of HamRpcCltGetInterruptiveUIStateForAumid @ 0x180010E54
 * Callers:
 *     HamGetInterruptiveUIStateForAumid @ 0x180001E30 (HamGetInterruptiveUIStateForAumid.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall HamRpcCltGetInterruptiveUIStateForAumid(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 0x15u, 0LL, a1, a2, a3, a4, a5, a6);
}
