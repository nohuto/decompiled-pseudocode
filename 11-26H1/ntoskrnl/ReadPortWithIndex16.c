/*
 * XREFs of ReadPortWithIndex16 @ 0x1407270C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ReadPortWithIndex16(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(
           *(_QWORD *)a1 + (unsigned __int8)a2 * (unsigned int)*(unsigned __int8 *)(a1 + 14),
           a2);
}
