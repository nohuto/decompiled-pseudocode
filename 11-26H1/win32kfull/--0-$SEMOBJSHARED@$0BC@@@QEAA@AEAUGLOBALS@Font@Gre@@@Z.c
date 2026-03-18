/*
 * XREFs of ??0?$SEMOBJSHARED@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400F6088
 * Callers:
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x14033A374 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ??$GreAcquireSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400F651C (--$GreAcquireSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

_QWORD *__fastcall SEMOBJSHARED<18>::SEMOBJSHARED<18>(_QWORD *a1, __int64 a2)
{
  *a1 = *(_QWORD *)(a2 + 15464);
  GreAcquireSemaphoreCommon<18,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreSharedInternal);
  return a1;
}
