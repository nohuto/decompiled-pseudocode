/*
 * XREFs of CrmRpcSrvActivityWindowClosedReasonSubscribe @ 0x18002E5C0
 * Callers:
 *     <none>
 * Callees:
 *     CrmSrvActivityWindowClosedReasonSubscribe @ 0x18002E5E0 (CrmSrvActivityWindowClosedReasonSubscribe.c)
 */

__int64 CrmRpcSrvActivityWindowClosedReasonSubscribe()
{
  int v0; // ecx
  __int64 result; // rax

  v0 = CrmSrvActivityWindowClosedReasonSubscribe();
  result = 0LL;
  if ( v0 < 0 )
    return (unsigned int)v0;
  return result;
}
