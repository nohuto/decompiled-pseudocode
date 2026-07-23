/*
 * XREFs of HalGetVectorInput @ 0x14057DCE0
 * Callers:
 *     IopConnectInterruptFullySpecified @ 0x1407A2248 (IopConnectInterruptFullySpecified.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalGetVectorInput(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(a1, a2);
}
