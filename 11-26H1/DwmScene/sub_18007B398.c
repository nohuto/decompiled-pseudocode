/*
 * XREFs of sub_18007B398 @ 0x18007B398
 * Callers:
 *     sub_18007CB2C @ 0x18007CB2C (sub_18007CB2C.c)
 * Callees:
 *     sub_18007AFEC @ 0x18007AFEC (sub_18007AFEC.c)
 */

char *__fastcall sub_18007B398(__int64 a1, __int64 *a2)
{
  __int64 *v3; // rdx
  __int64 v4; // rdx

  v3 = *(__int64 **)(a1 + 8);
  if ( v3 == *(__int64 **)(a1 + 16) )
    return sub_18007AFEC((void **)a1, (__int64)v3, a2);
  *v3 = *a2;
  v4 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v4 + 8;
  return (char *)v4;
}
