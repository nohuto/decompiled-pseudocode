/*
 * XREFs of _PnpObjectRaiseCreateEvent @ 0x140AF56CC
 * Callers:
 *     _PnpCreateObjectDispatch @ 0x14089E704 (_PnpCreateObjectDispatch.c)
 *     _CmRaiseCreateEvent @ 0x140AF5644 (_CmRaiseCreateEvent.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PnpObjectRaiseCreateEvent(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 496);
  if ( result )
    return guard_dispatch_icall_no_overrides(a1, a2);
  return result;
}
