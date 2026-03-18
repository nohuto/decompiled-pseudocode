/*
 * XREFs of _PnpObjectRaiseDeleteEvent @ 0x14080C4DC
 * Callers:
 *     _PnpDeleteObjectDispatch @ 0x14080ADF8 (_PnpDeleteObjectDispatch.c)
 *     _CmRaiseDeleteEvent @ 0x14080C3C0 (_CmRaiseDeleteEvent.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PnpObjectRaiseDeleteEvent(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 496);
  if ( result )
    return guard_dispatch_icall_no_overrides(a1);
  return result;
}
