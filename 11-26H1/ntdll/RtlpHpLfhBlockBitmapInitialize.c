/*
 * XREFs of RtlpHpLfhBlockBitmapInitialize @ 0x1800BEDB0
 * Callers:
 *     RtlpHpLfhSubsegmentInitialize @ 0x1800BE93C (RtlpHpLfhSubsegmentInitialize.c)
 * Callees:
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpLfhBlockBitmapInitialize(void *a1, unsigned int a2)
{
  char v2; // di
  unsigned int v4; // ebx
  __int64 result; // rax

  v2 = a2;
  v4 = ((unsigned __int64)a2 + 31) >> 5;
  memset_thunk_772440563353939046(a1, 0, 8LL * v4);
  result = v4 - 1;
  *((_QWORD *)a1 + result) = (unsigned int)~(0xFFFFFFFFuLL >> (-v2 & 0x1F));
  return result;
}
