/*
 * XREFs of WriteRegisterWithIndex64 @ 0x140722830
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall WriteRegisterWithIndex64(__int64 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  return guard_dispatch_icall_no_overrides(*(_QWORD *)a1 + a2 * (unsigned int)*(unsigned __int8 *)(a1 + 14), a3);
}
