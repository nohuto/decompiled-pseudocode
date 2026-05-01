/*
 * XREFs of HamRpcSrvFindHostId @ 0x180059D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall HamRpcSrvFindHostId(__int64 a1, struct _HAM_HOSTID_STORE_KEY *a2, unsigned __int64 *a3)
{
  return HamSrvFindHostId((struct _RM_SERVICE_GLOBALS *)((char *)RmSvcGlobals + 2360), a2, a3);
}
