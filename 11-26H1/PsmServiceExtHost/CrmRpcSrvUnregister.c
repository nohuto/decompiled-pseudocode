/*
 * XREFs of CrmRpcSrvUnregister @ 0x180030D50
 * Callers:
 *     <none>
 * Callees:
 *     CrmSrvUnregister @ 0x180032344 (CrmSrvUnregister.c)
 */

__int64 __fastcall CrmRpcSrvUnregister(void **a1)
{
  __int64 result; // rax

  CrmSrvUnregister(*a1);
  result = 0LL;
  *a1 = 0LL;
  return result;
}
