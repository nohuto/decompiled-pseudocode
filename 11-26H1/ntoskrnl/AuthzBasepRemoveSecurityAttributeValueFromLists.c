/*
 * XREFs of AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x1403AF8F0
 * Callers:
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402FBB30 (AuthzBasepFreeSecurityAttributesList.c)
 *     SeAccessCheckWithHint @ 0x140301070 (SeAccessCheckWithHint.c)
 *     SepFilterCheck @ 0x140302450 (SepFilterCheck.c)
 *     SepFreeResourceInfo @ 0x1403AE8A0 (SepFreeResourceInfo.c)
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x1403AFE60 (AuthzBasepFinaliseSecurityAttributesList.c)
 *     AuthzBasepFreeSecurityAttributeValues @ 0x1403B2380 (AuthzBasepFreeSecurityAttributeValues.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1403B2AA0 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x14052E95C (AuthzBasepDeleteSecurityAttributeValues.c)
 *     AuthzBasepRollbackSecurityAttributeChanges @ 0x140719D34 (AuthzBasepRollbackSecurityAttributeChanges.c)
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
