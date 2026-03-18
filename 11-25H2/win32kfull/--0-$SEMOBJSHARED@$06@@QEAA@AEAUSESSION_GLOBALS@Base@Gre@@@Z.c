/*
 * XREFs of ??0?$SEMOBJSHARED@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14019F830
 * Callers:
 *     GreDwmCreatedBitmapRemotingOutput @ 0x140322D10 (GreDwmCreatedBitmapRemotingOutput.c)
 *     GreGetHwndUpdateIds @ 0x140322ED8 (GreGetHwndUpdateIds.c)
 *     GreHLsurfSetPresentFlags @ 0x140323030 (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x140323134 (GreHLsurfSetUpdateId.c)
 *     GreSetHwndPresentFlags @ 0x1403232F8 (GreSetHwndPresentFlags.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x14001B08C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 */

HSEMAPHORE *__fastcall SEMOBJSHARED<7>::SEMOBJSHARED<7>(HSEMAPHORE *a1, _QWORD *a2)
{
  HSEMAPHORE v3; // rcx

  v3 = (HSEMAPHORE)(*a2 + 520LL);
  *a1 = v3;
  GreAcquireSemaphoreSharedInternal(v3);
  GrepAcquireLockValidate<7>();
  return a1;
}
