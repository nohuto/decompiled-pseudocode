/*
 * XREFs of ZwQuerySecurityPolicy @ 0x14072AD00
 * Callers:
 *     DifZwQuerySecurityPolicyWrapper @ 0x1406B7890 (DifZwQuerySecurityPolicyWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQuerySecurityPolicy(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
