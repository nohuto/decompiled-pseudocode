/*
 * XREFs of WritePortWithIndex16 @ 0x140727310
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall WritePortWithIndex16(__int64 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  return guard_dispatch_icall_no_overrides(*(_QWORD *)a1 + a2 * (unsigned int)*(unsigned __int8 *)(a1 + 14), a3);
}
