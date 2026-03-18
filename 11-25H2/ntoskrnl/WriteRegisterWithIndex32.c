/*
 * XREFs of WriteRegisterWithIndex32 @ 0x14069A550
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall WriteRegisterWithIndex32(__int64 a1, unsigned __int8 a2)
{
  return guard_dispatch_icall_no_overrides(*(_QWORD *)a1 + a2 * (unsigned int)*(unsigned __int8 *)(a1 + 14));
}
