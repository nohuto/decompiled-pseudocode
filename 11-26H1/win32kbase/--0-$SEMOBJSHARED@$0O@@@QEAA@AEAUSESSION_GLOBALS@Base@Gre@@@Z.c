/*
 * XREFs of ??0?$SEMOBJSHARED@$0O@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140129788
 * Callers:
 *     EngUpdateDeviceSurface @ 0x1401F1910 (EngUpdateDeviceSurface.c)
 * Callees:
 *     EngAcquireSemaphoreShared @ 0x14001C5E0 (EngAcquireSemaphoreShared.c)
 *     ??$GrepAcquireLockValidate@$0O@@@YAXXZ @ 0x14001D2CC (--$GrepAcquireLockValidate@$0O@@@YAXXZ.c)
 */

HSEMAPHORE *__fastcall SEMOBJSHARED<14>::SEMOBJSHARED<14>(HSEMAPHORE *a1, _QWORD *a2)
{
  HSEMAPHORE v3; // rcx

  v3 = (HSEMAPHORE)(*a2 + 832LL);
  *a1 = v3;
  EngAcquireSemaphoreShared(v3);
  GrepAcquireLockValidate<14>();
  return a1;
}
