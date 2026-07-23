/*
 * XREFs of _PnpSetMappedPropertyDispatch @ 0x140AF09B0
 * Callers:
 *     _PnpSetObjectPropertyWorker @ 0x140A193D0 (_PnpSetObjectPropertyWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PnpSetMappedPropertyDispatch(__int64 a1, __int64 a2, int a3)
{
  if ( (unsigned int)(a3 - 1) > 0xA )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 8LL * a3 + 296) )
    return guard_dispatch_icall_no_overrides(a1, a2);
  return 3221225474LL;
}
