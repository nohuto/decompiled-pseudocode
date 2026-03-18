/*
 * XREFs of _SysCtxInternalEnumSubkeyCallback @ 0x1404AC6E0
 * Callers:
 *     _RegRtlEnumKeyWithCallback @ 0x140919C00 (_RegRtlEnumKeyWithCallback.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SysCtxInternalEnumSubkeyCallback(__int64 a1, __int64 a2, _QWORD *a3)
{
  return guard_dispatch_icall_no_overrides(*a3, a1);
}
