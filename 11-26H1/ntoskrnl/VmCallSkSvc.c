/*
 * XREFs of VmCallSkSvc @ 0x1406C44A0
 * Callers:
 *     <none>
 * Callees:
 *     VslSvcEnterIumSecureMode @ 0x1405C692C (VslSvcEnterIumSecureMode.c)
 */

__int64 __fastcall VmCallSkSvc(__int128 *a1)
{
  return VslSvcEnterIumSecureMode(a1);
}
