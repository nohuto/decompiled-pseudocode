/*
 * XREFs of RtlpHpLfhOwnerInitialize @ 0x140348510
 * Callers:
 *     RtlpHpLfhBucketInitialize @ 0x140347FF0 (RtlpHpLfhBucketInitialize.c)
 *     RtlpHpLfhSlotInitialize @ 0x1403484B0 (RtlpHpLfhSlotInitialize.c)
 * Callees:
 *     RtlpHpInitializeLock @ 0x14034D510 (RtlpHpInitializeLock.c)
 */

_QWORD *__fastcall RtlpHpLfhOwnerInitialize(__int64 a1, char a2, char a3, __int64 a4)
{
  _QWORD *v4; // r10
  _QWORD *result; // rax

  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_BYTE *)a1 = (2 * a2) | a3 & 1;
  RtlpHpInitializeLock(a1 + 16, *(unsigned __int8 *)(a4 + 73));
  result = v4 + 5;
  v4[4] = v4 + 3;
  v4[3] = v4 + 3;
  v4[6] = v4 + 5;
  v4[5] = v4 + 5;
  return result;
}
