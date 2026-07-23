/*
 * XREFs of AuthzBasepAllocateSecurityAttributeValue @ 0x1403B31D0
 * Callers:
 *     AuthzBasepAddSecurityAttributeValues @ 0x1403B24FC (AuthzBasepAddSecurityAttributeValues.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1403B2AA0 (AuthzBasepDuplicateSecurityAttributes.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

_OWORD *AuthzBasepAllocateSecurityAttributeValue()
{
  ULONG_PTR v0; // rcx
  _OWORD *result; // rax

  v0 = 256LL;
  if ( KeGetCurrentIrql() >= 2u )
    v0 = 64LL;
  result = (_OWORD *)ExAllocatePool2(v0);
  if ( result )
  {
    *result = 0LL;
    result[1] = 0LL;
    result[2] = 0LL;
    result[3] = 0LL;
  }
  return result;
}
