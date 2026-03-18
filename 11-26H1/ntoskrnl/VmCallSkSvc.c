/*
 * XREFs of VmCallSkSvc @ 0x1406C08C0
 * Callers:
 *     <none>
 * Callees:
 *     VslSvcEnterIumSecureMode @ 0x1405C40BC (VslSvcEnterIumSecureMode.c)
 */

__int64 __fastcall VmCallSkSvc(__int128 *a1)
{
  return VslSvcEnterIumSecureMode(a1);
}
