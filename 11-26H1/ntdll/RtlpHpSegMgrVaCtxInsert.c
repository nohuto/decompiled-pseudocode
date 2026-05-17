/*
 * XREFs of RtlpHpSegMgrVaCtxInsert @ 0x180158580
 * Callers:
 *     RtlpHpSegMgrAllocate @ 0x18008B594 (RtlpHpSegMgrAllocate.c)
 * Callees:
 *     RtlpHpQueryVA @ 0x180089D98 (RtlpHpQueryVA.c)
 *     RtlpHpSegMgrLock @ 0x18010FAC8 (RtlpHpSegMgrLock.c)
 */

struct _TEB *__fastcall RtlpHpSegMgrVaCtxInsert(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned __int16 *v4; // rsi
  __int16 v5; // ax
  bool v6; // sf
  unsigned __int64 v7; // rbx
  unsigned __int16 *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  RtlpHpQueryVA(a2, a2, &v9, 0LL);
  v4 = v9;
  v5 = (*v9 ^ (*v9 + 1)) & 0x7FF;
  v6 = ((v5 ^ *v9) & 0x8000u) != 0;
  *v9 ^= v5;
  if ( v6 )
    _InterlockedIncrement64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1));
  v7 = (unsigned __int64)*v4 >> 15;
  RtlpHpSegMgrLock(a1, v3);
  *((_QWORD *)v4 + 1) = *(_QWORD *)(a1 + 8 * v7 + 128);
  *(_QWORD *)(a1 + 8 * v7 + 128) = v4 + 4;
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 120));
}
