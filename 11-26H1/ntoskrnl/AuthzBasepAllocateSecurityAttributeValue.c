/*
 * XREFs of AuthzBasepAllocateSecurityAttributeValue @ 0x1403CAE00
 * Callers:
 *     AuthzBasepAddSecurityAttributeValues @ 0x1403CA128 (AuthzBasepAddSecurityAttributeValues.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1403CA6D0 (AuthzBasepDuplicateSecurityAttributes.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
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
