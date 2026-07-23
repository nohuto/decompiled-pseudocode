/*
 * XREFs of RtlpHpLfhBlockBitmapInitialize @ 0x14034DBD8
 * Callers:
 *     RtlpHpLfhSubsegmentInitialize @ 0x14034D570 (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpHpLfhSubsegmentDelayFreeListProcess @ 0x14034DFB0 (RtlpHpLfhSubsegmentDelayFreeListProcess.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall RtlpHpLfhBlockBitmapInitialize(void *a1, unsigned int a2)
{
  char v2; // di
  unsigned int v4; // ebx
  __int64 result; // rax

  v2 = a2;
  v4 = ((unsigned __int64)a2 + 63) >> 6;
  memset_0(a1, 0, 8LL * v4);
  result = v4 - 1;
  *((_QWORD *)a1 + result) = ~(0xFFFFFFFFFFFFFFFFuLL >> (-v2 & 0x3F));
  return result;
}
