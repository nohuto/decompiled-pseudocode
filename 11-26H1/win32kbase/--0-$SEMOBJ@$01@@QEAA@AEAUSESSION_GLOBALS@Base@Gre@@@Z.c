/*
 * XREFs of ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140186760
 * Callers:
 *     GreDrvConnect @ 0x1401FACD0 (GreDrvConnect.c)
 *     HDXDrvEscape @ 0x1401FB020 (HDXDrvEscape.c)
 * Callees:
 *     ??$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140057724 (--$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 *__fastcall SEMOBJ<2>::SEMOBJ<2>(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rdx

  v3 = *a2 + 1144LL;
  *a1 = v3;
  GreAcquireSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v3);
  return a1;
}
