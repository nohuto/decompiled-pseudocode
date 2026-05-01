/*
 * XREFs of RmAccessCheckOnSelf @ 0x180018830
 * Callers:
 *     <none>
 * Callees:
 *     ?GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z @ 0x18000F090 (-GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z.c)
 *     ?RmAccessCheck@ResourceManagerProxy@@QEAAJW4RmResourceType@@@Z @ 0x180018700 (-RmAccessCheck@ResourceManagerProxy@@QEAAJW4RmResourceType@@@Z.c)
 */

CLIENT_CALL_RETURN __fastcall RmAccessCheckOnSelf(int a1)
{
  CLIENT_CALL_RETURN result; // rax
  struct ResourceManagerProxy *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  result.Simple = GetResourceManagerProxy(&v3);
  if ( SLODWORD(result.Simple) >= 0 )
    return ResourceManagerProxy::RmAccessCheck((__int64)v3, a1);
  return result;
}
