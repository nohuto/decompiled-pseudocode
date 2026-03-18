/*
 * XREFs of ??0NEEDPDEVPOINTERLOCK@@QEAA@PEAUHDEV__@@@Z @ 0x1401E2734
 * Callers:
 *     GreRealizePalette @ 0x140268A30 (GreRealizePalette.c)
 *     ?GrepSetSystemPaletteUse@@YAIAEAVXDCOBJ@@I@Z @ 0x140310480 (-GrepSetSystemPaletteUse@@YAIAEAVXDCOBJ@@I@Z.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x14008D8A4 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 */

NEEDPDEVPOINTERLOCK *__fastcall NEEDPDEVPOINTERLOCK::NEEDPDEVPOINTERLOCK(NEEDPDEVPOINTERLOCK *this, _QWORD *a2)
{
  HSEMAPHORE v3; // rcx

  v3 = (HSEMAPHORE)a2[7];
  *(_QWORD *)this = v3;
  if ( v3 )
  {
    GreAcquireSemaphoreInternal(v3);
    GrepAcquireLockValidate<4>();
  }
  return this;
}
