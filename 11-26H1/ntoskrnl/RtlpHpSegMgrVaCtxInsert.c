/*
 * XREFs of RtlpHpSegMgrVaCtxInsert @ 0x140351CB4
 * Callers:
 *     RtlpHpSegMgrAllocate @ 0x1403519C8 (RtlpHpSegMgrAllocate.c)
 * Callees:
 *     RtlpHpVaMgrCtxQuery @ 0x1403526A0 (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpSegMgrLock @ 0x1404BDE5C (RtlpHpSegMgrLock.c)
 *     RtlpHpSegMgrUnlock @ 0x1404C24DC (RtlpHpSegMgrUnlock.c)
 */

__int64 __fastcall RtlpHpSegMgrVaCtxInsert(__int64 a1, __int64 a2)
{
  unsigned __int16 *v3; // rsi
  __int16 v4; // ax
  unsigned __int64 v5; // rbx
  char v6; // al
  unsigned __int16 *v7; // rdx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+30h] [rbp-18h]

  v9 = 0LL;
  v10 = 0LL;
  RtlpHpVaMgrCtxQuery(&ExpUuidLock.TrapFrame, a2, &v9);
  v3 = (unsigned __int16 *)v10;
  v4 = *(_WORD *)v10;
  *(_WORD *)v10 ^= (*(_WORD *)v10 ^ (*(_WORD *)v10 + 1)) & 0x7FF;
  if ( (v4 ^ (v4 ^ (v4 + 1)) & 0x7FF) < 0 )
    _InterlockedIncrement64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1));
  v5 = (unsigned __int64)*v3 >> 15;
  v6 = RtlpHpSegMgrLock(a1);
  v7 = v3 + 4;
  *((_QWORD *)v3 + 1) = *(_QWORD *)(a1 + 8 * v5 + 128);
  *(_QWORD *)(a1 + 8 * v5 + 128) = v3 + 4;
  LOBYTE(v7) = v6;
  return RtlpHpSegMgrUnlock(a1, v7);
}
