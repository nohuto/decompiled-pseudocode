/*
 * XREFs of HamRpcCltIsHostBeingDebugged @ 0x18001A3C4
 * Callers:
 *     HamIsHostBeingDebugged @ 0x1800113B0 (HamIsHostBeingDebugged.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall HamRpcCltIsHostBeingDebugged(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 0x10u, 0LL, a1, a2, a3, a4, a5, a6, a7, a8);
}
