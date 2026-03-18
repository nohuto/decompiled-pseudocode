/*
 * XREFs of _PnpCtxInternalEnumKeyCallback @ 0x1404B4B80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PnpCtxInternalEnumKeyCallback(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  return guard_dispatch_icall_no_overrides(*a4, a2);
}
