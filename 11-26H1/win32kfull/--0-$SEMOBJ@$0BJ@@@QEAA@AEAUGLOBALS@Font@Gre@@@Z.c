/*
 * XREFs of ??0?$SEMOBJ@$0BJ@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1401C62E4
 * Callers:
 *     ?vCleanUpFntCache@@YAXXZ @ 0x140296BF8 (-vCleanUpFntCache@@YAXXZ.c)
 *     ?FntCacheHDEVInProc@@YAXPEAUHDEV__@@K@Z @ 0x14031B1A4 (-FntCacheHDEVInProc@@YAXPEAUHDEV__@@K@Z.c)
 *     CloseFNTCache @ 0x14031BB10 (CloseFNTCache.c)
 *     ?vLoadFontFileView@@YAXPEAGKPEAPEAUFONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAUHDEV__@@PEAUFNTCHECKSUM@@HPEAH@Z @ 0x140327830 (-vLoadFontFileView@@YAXPEAGKPEAPEAUFONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAUH.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$0BJ@@@YAXXZ @ 0x1401C6318 (--$GrepAcquireLockValidate@$0BJ@@@YAXXZ.c)
 */

HSEMAPHORE *__fastcall SEMOBJ<25>::SEMOBJ<25>(HSEMAPHORE *a1, __int64 a2)
{
  HSEMAPHORE v3; // rcx

  v3 = *(HSEMAPHORE *)(a2 + 15448);
  *a1 = v3;
  GreAcquireSemaphoreInternal(v3);
  GrepAcquireLockValidate<25>();
  return a1;
}
