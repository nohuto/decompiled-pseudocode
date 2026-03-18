/*
 * XREFs of ??0?$SEMOBJSHARED@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140074A08
 * Callers:
 *     GreDwmCreatedBitmapRemotingOutput @ 0x140344F10 (GreDwmCreatedBitmapRemotingOutput.c)
 *     GreGetHwndUpdateIds @ 0x1403450D8 (GreGetHwndUpdateIds.c)
 *     GreHLsurfSetPresentFlags @ 0x140345248 (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x14034534C (GreHLsurfSetUpdateId.c)
 *     GreSetHwndPresentFlags @ 0x140345514 (GreSetHwndPresentFlags.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x14007347C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
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
