/*
 * XREFs of PspCheckConditionalWakeCharge @ 0x140A9F2AC
 * Callers:
 *     PspChargeProcessWakeCounter @ 0x14098F2A0 (PspChargeProcessWakeCounter.c)
 * Callees:
 *     PspIsProcessInJob @ 0x140A9F450 (PspIsProcessInJob.c)
 */

char __fastcall PspCheckConditionalWakeCharge(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v4; // rdx
  int v5; // r9d
  _QWORD *v6; // r11

  v2 = a1;
  if ( !*(_QWORD *)(a1 + 672) || *(_QWORD *)(*(_QWORD *)(a1 + 672) + 1312LL) != *(_QWORD *)(a2 + 1312) )
    return 1;
  while ( (unsigned int)PspIsProcessInJob(v2, a2) != 292 || (v5 & *(_DWORD *)(v4 + 1184)) == 0 )
  {
    if ( v4 == *v6 )
      return 1;
    a2 = *(_QWORD *)(v4 + 1304);
  }
  return 0;
}
