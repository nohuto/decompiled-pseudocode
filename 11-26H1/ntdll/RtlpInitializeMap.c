/*
 * XREFs of RtlpInitializeMap @ 0x1800C4FD4
 * Callers:
 *     RtlpInitializeLeakDetection @ 0x1800C45C8 (RtlpInitializeLeakDetection.c)
 *     RtlpSetBlockInfo @ 0x1800C4DEC (RtlpSetBlockInfo.c)
 * Callees:
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

void *__fastcall RtlpInitializeMap(_QWORD *a1, _QWORD *a2)
{
  void *result; // rax

  result = memset_thunk_772440563353939046(a1, 0, 0x838uLL);
  a1[263] = a2;
  if ( a2 )
  {
    result = (void *)(*a2 >> 8);
    *a1 = result;
  }
  return result;
}
