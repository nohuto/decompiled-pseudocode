/*
 * XREFs of HamRpcCltRetrieveDynamicIdForHostId @ 0x18001A430
 * Callers:
 *     HamHostIdRetrieveDynamicId @ 0x180011610 (HamHostIdRetrieveDynamicId.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall HamRpcCltRetrieveDynamicIdForHostId(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001DC20, 3u, 0LL, a1, a2, a3, a4, a5, a6);
}
