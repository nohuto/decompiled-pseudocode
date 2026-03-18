/*
 * XREFs of _PnpObjectRaiseCreateEvent @ 0x14094EFEC
 * Callers:
 *     _PnpCreateObjectDispatch @ 0x14080ABCC (_PnpCreateObjectDispatch.c)
 *     _CmRaiseCreateEvent @ 0x14094F02C (_CmRaiseCreateEvent.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PnpObjectRaiseCreateEvent(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 496);
  if ( result )
    return guard_dispatch_icall_no_overrides(a1);
  return result;
}
