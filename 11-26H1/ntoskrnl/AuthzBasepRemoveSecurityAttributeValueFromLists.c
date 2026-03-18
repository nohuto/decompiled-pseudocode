/*
 * XREFs of AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x1402ACAA0
 * Callers:
 *     SepFreeResourceInfo @ 0x1402AE460 (SepFreeResourceInfo.c)
 *     SeAccessCheckWithHint @ 0x1402B63B0 (SeAccessCheckWithHint.c)
 *     SepFilterCheck @ 0x1402B7790 (SepFilterCheck.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1403CA6D0 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepFreeSecurityAttributeValues @ 0x1403CAF40 (AuthzBasepFreeSecurityAttributeValues.c)
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x1403CB3C0 (AuthzBasepFinaliseSecurityAttributesList.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1403CF030 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x14052C43C (AuthzBasepDeleteSecurityAttributeValues.c)
 *     AuthzBasepRollbackSecurityAttributeChanges @ 0x140715044 (AuthzBasepRollbackSecurityAttributeChanges.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall AuthzBasepRemoveSecurityAttributeValueFromLists(_DWORD *a1, __int64 *a2, char a3)
{
  __int64 **result; // rax
  __int64 *v4; // r8
  __int64 v5; // r10

  result = (__int64 **)*((unsigned int *)a2 + 8);
  if ( ((unsigned __int8)result & 2) != 0 )
  {
    v5 = a2[2];
    if ( *(__int64 **)(v5 + 8) != a2 + 2 )
      goto LABEL_14;
    result = (__int64 **)a2[3];
    if ( *result != a2 + 2 )
      goto LABEL_14;
    *result = (__int64 *)v5;
    *(_QWORD *)(v5 + 8) = result;
    *((_DWORD *)a2 + 8) &= ~2u;
    if ( a1 )
      --a1[22];
  }
  if ( !a3 )
    return result;
  result = (__int64 **)*((unsigned int *)a2 + 8);
  if ( ((unsigned __int8)result & 1) == 0 )
    return result;
  v4 = (__int64 *)*a2;
  if ( *(__int64 **)(*a2 + 8) != a2 || (result = (__int64 **)a2[1], *result != a2) )
LABEL_14:
    __fastfail(3u);
  *result = v4;
  v4[1] = (__int64)result;
  *((_DWORD *)a2 + 8) &= ~1u;
  if ( a1 )
  {
    --a1[15];
    result = (__int64 **)*((unsigned int *)a2 + 8);
    if ( ((unsigned __int8)result & 4) != 0 )
      --a1[16];
  }
  return result;
}
