/*
 * XREFs of _PnpObjectRaiseDeleteEvent @ 0x140774C4C
 * Callers:
 *     _CmRaiseDeleteEvent @ 0x140774BCC (_CmRaiseDeleteEvent.c)
 *     _PnpDeleteObjectDispatch @ 0x140898534 (_PnpDeleteObjectDispatch.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PnpObjectRaiseDeleteEvent(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 496);
  if ( result )
    return guard_dispatch_icall_no_overrides(a1, a2);
  return result;
}
