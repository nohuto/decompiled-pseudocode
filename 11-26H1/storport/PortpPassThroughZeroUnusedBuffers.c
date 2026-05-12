/*
 * XREFs of PortpPassThroughZeroUnusedBuffers @ 0x140042190
 * Callers:
 *     PortPassThroughExValidate @ 0x14012FFC4 (PortPassThroughExValidate.c)
 *     PortPassThroughExSendAsync @ 0x1401B3488 (PortPassThroughExSendAsync.c)
 * Callees:
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

unsigned int *__fastcall PortpPassThroughZeroUnusedBuffers(__int64 a1)
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
