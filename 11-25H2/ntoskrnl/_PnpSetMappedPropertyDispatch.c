/*
 * XREFs of _PnpSetMappedPropertyDispatch @ 0x140954310
 * Callers:
 *     _PnpSetObjectPropertyWorker @ 0x140954B4C (_PnpSetObjectPropertyWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PnpSetMappedPropertyDispatch(__int64 a1, __int64 a2, int a3)
{
  if ( (unsigned int)(a3 - 1) > 0xA )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 8LL * a3 + 296) )
    return guard_dispatch_icall_no_overrides(a1);
  return 3221225474LL;
}
