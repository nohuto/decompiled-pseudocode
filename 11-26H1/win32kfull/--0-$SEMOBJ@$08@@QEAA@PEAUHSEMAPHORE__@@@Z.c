/*
 * XREFs of ??0?$SEMOBJ@$08@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x140312B1C
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400801CC (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x14023EB9C (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$08@@YAXXZ @ 0x14001DAC8 (--$GrepAcquireLockValidate@$08@@YAXXZ.c)
 */

HSEMAPHORE *__fastcall SEMOBJ<9>::SEMOBJ<9>(HSEMAPHORE *a1, HSEMAPHORE a2)
{
  *a1 = a2;
  GreAcquireSemaphoreInternal(a2);
  GrepAcquireLockValidate<9>();
  return a1;
}
