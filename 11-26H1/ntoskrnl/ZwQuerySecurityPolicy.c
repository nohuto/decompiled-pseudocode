/*
 * XREFs of ZwQuerySecurityPolicy @ 0x140726130
 * Callers:
 *     DifZwQuerySecurityPolicyWrapper @ 0x1406B3CB0 (DifZwQuerySecurityPolicyWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQuerySecurityPolicy(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
