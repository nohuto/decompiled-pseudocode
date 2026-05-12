/*
 * XREFs of sub_14003910C @ 0x14003910C
 * Callers:
 *     sub_140134094 @ 0x140134094 (sub_140134094.c)
 *     sub_1401AAA18 @ 0x1401AAA18 (sub_1401AAA18.c)
 * Callees:
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

unsigned int *__fastcall sub_14003910C(__int64 a1)
{
  unsigned int *result; // rax
  __int64 v2; // r9
  unsigned int v3; // edx

  result = *(unsigned int **)(a1 + 184);
  v2 = result[4];
  v3 = result[2];
  if ( v3 > (unsigned int)v2 )
    return (unsigned int *)memset_0((void *)(*(_QWORD *)(a1 + 24) + v2), 0, v3 - (unsigned int)v2);
  return result;
}
