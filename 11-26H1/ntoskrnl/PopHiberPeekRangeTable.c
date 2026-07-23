/*
 * XREFs of PopHiberPeekRangeTable @ 0x140C00D38
 * Callers:
 *     ConsumerPeekAndConsumeBuffer @ 0x140C0AB1C (ConsumerPeekAndConsumeBuffer.c)
 * Callees:
 *     PopReadProducerConsumerBuffer @ 0x140C0127C (PopReadProducerConsumerBuffer.c)
 */

__int64 __fastcall PopHiberPeekRangeTable(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rax
  char v5; // [rsp+28h] [rbp-10h]
  int v6; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0;
  v6 = 0;
  v3 = (_DWORD *)PopReadProducerConsumerBuffer(a1, a2, &v6, qword_140F10988, a3, v5);
  return ((*v3 >> 8) & 0x1FFFFF) + 8 * (unsigned int)(unsigned __int8)*v3 + 4;
}
