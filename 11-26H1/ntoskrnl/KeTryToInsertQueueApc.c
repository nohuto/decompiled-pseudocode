/*
 * XREFs of KeTryToInsertQueueApc @ 0x1403F0DB8
 * Callers:
 *     EtwpQueueApc @ 0x14020AAF0 (EtwpQueueApc.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1406CC720 (EtwpCovSampCaptureQueueApc.c)
 * Callees:
 *     KiInsertQueueApc @ 0x14020B150 (KiInsertQueueApc.c)
 *     KiSignalThreadForApc @ 0x14020B2C0 (KiSignalThreadForApc.c)
 *     KeGetEffectiveIrql @ 0x140263820 (KeGetEffectiveIrql.c)
 *     KeIsThreadRunning @ 0x1403F0C80 (KeIsThreadRunning.c)
 */

char __fastcall KeTryToInsertQueueApc(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int8 EffectiveIrql; // al
  struct _KPRCB *CurrentPrcb; // r14
  char v9; // bp
  char v10; // si

  v3 = *(_QWORD *)(a1 + 8);
  if ( !KeIsThreadRunning(v3) )
    return 0;
  EffectiveIrql = KeGetEffectiveIrql();
  CurrentPrcb = KeGetCurrentPrcb();
  v9 = EffectiveIrql;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 64), 0LL) )
    return 0;
  if ( (*(_DWORD *)(v3 + 116) & 0x4000) == 0 || *(_BYTE *)(a1 + 82) )
  {
    v10 = 0;
  }
  else
  {
    v10 = 1;
    *(_QWORD *)(a1 + 64) = a2;
    *(_BYTE *)(a1 + 82) = 1;
    *(_QWORD *)(a1 + 72) = a3;
    KiInsertQueueApc(a1);
    KiSignalThreadForApc((__int64)CurrentPrcb, a1, v9, 0);
  }
  *(_QWORD *)(v3 + 64) = 0LL;
  return v10;
}
