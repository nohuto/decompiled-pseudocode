/*
 * XREFs of ??0?$SEMOBJSHARED@$0O@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140013DE8
 * Callers:
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x14026ABBC (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$0O@@@YAXXZ @ 0x140013E20 (--$GrepAcquireLockValidate@$0O@@@YAXXZ.c)
 */

HSEMAPHORE *__fastcall SEMOBJSHARED<14>::SEMOBJSHARED<14>(HSEMAPHORE *a1, _QWORD *a2)
{
  HSEMAPHORE v3; // rcx

  v3 = (HSEMAPHORE)(*a2 + 832LL);
  *a1 = v3;
  GreAcquireSemaphoreSharedInternal(v3);
  GrepAcquireLockValidate<14>();
  return a1;
}
