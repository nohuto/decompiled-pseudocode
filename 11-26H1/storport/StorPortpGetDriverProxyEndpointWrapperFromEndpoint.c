/*
 * XREFs of StorPortpGetDriverProxyEndpointWrapperFromEndpoint @ 0x140118FA8
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall StorPortpGetDriverProxyEndpointWrapperFromEndpoint(__int64 a1, __int64 a2, _QWORD *a3)
{
  if ( GetDrvrPxyWrapperFromEndpoint )
    GetDrvrPxyWrapperFromEndpoint();
  else
    *a3 = 0LL;
  return *a3 == 0LL ? 0xC1000001 : 0;
}
