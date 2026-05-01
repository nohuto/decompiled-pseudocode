/*
 * XREFs of ?RmReleaseResources@ResourceManagerProxy@@QEAAJ_K@Z @ 0x18000FD90
 * Callers:
 *     RmReleaseResources @ 0x18000FC20 (RmReleaseResources.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ResourceManagerProxy::RmReleaseResources(ResourceManagerProxy *this, __int64 a2)
{
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF
  __int64 v4; // [rsp+48h] [rbp+10h]

  v3 = a2;
  v4 = 0LL;
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001ECE0, 8u, 0LL, &v3);
}
