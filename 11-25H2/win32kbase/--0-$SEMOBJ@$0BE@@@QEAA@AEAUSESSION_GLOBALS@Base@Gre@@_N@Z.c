/*
 * XREFs of ??0?$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z @ 0x1401C4B40
 * Callers:
 *     HmgAllocFast @ 0x1401C5500 (HmgAllocFast.c)
 *     HmgDecProcessHandleCountFastOpt @ 0x1401C8258 (HmgDecProcessHandleCountFastOpt.c)
 *     HmgFreeDcAttrFastOpt @ 0x1401C82DC (HmgFreeDcAttrFastOpt.c)
 *     HmgIncProcessHandleCountExFast @ 0x1401C83D4 (HmgIncProcessHandleCountExFast.c)
 *     ?GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x1401C8C80 (-GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 * Callees:
 *     ??$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001A6D0 (--$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GrepGetGlobalLock@$0BE@@@YAPEAUHSEMAPHORE__@@XZ @ 0x1400C8248 (--$GrepGetGlobalLock@$0BE@@@YAPEAUHSEMAPHORE__@@XZ.c)
 */

HSEMAPHORE *__fastcall SEMOBJ<20>::SEMOBJ<20>(HSEMAPHORE *a1, _QWORD *a2, char a3)
{
  HSEMAPHORE Global; // rax

  if ( a3 )
    Global = (HSEMAPHORE)(*a2 + 1512LL);
  else
    Global = (HSEMAPHORE)GrepGetGlobalLock<20>((__int64)a1);
  *a1 = Global;
  GreAcquireSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>((__int64)a1, Global);
  return a1;
}
