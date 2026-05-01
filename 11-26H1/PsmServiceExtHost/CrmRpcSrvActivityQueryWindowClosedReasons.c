/*
 * XREFs of CrmRpcSrvActivityQueryWindowClosedReasons @ 0x180031FE0
 * Callers:
 *     <none>
 * Callees:
 *     CrmSrvActivityQueryWindowClosedReasons @ 0x180032000 (CrmSrvActivityQueryWindowClosedReasons.c)
 */

__int64 CrmRpcSrvActivityQueryWindowClosedReasons()
{
  int WindowClosedReasons; // ecx
  __int64 result; // rax

  WindowClosedReasons = CrmSrvActivityQueryWindowClosedReasons();
  result = 0LL;
  if ( WindowClosedReasons < 0 )
    return (unsigned int)WindowClosedReasons;
  return result;
}
