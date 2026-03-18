/*
 * XREFs of ?GreAcquireHmgrSemaphore@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C64C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreAcquireSemaphore@$0BE@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001A424 (--$GreAcquireSemaphore@$0BE@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __fastcall GreAcquireHmgrSemaphore(struct Gre::Base::SESSION_GLOBALS *a1)
{
  GreAcquireSemaphore<20,>((__int64 *)a1);
}
