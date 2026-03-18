/*
 * XREFs of ??0?$SEMOBJSHARED@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001B768
 * Callers:
 *     GrePtInSprite @ 0x14008CE2C (GrePtInSprite.c)
 *     GreDwmGetRedirectionStyle @ 0x140344F94 (GreDwmGetRedirectionStyle.c)
 * Callees:
 *     ??$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C868 (--$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 *__fastcall SEMOBJSHARED<6>::SEMOBJSHARED<6>(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rdx

  v3 = *a2 + 1040LL;
  *a1 = v3;
  GreAcquireSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreSharedInternal, v3);
  return a1;
}
