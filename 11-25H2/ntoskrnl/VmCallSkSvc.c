/*
 * XREFs of VmCallSkSvc @ 0x14063E350
 * Callers:
 *     <none>
 * Callees:
 *     VslSvcEnterIumSecureMode @ 0x14058AFFC (VslSvcEnterIumSecureMode.c)
 */

__int64 __fastcall VmCallSkSvc(__int128 *a1)
{
  return VslSvcEnterIumSecureMode(a1);
}
