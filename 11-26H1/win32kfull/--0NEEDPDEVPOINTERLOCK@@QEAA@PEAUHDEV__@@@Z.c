/*
 * XREFs of ??0NEEDPDEVPOINTERLOCK@@QEAA@PEAUHDEV__@@@Z @ 0x14020DB64
 * Callers:
 *     ?GrepSetSystemPaletteUse@@YAIAEAVXDCOBJ@@I@Z @ 0x140331348 (-GrepSetSystemPaletteUse@@YAIAEAVXDCOBJ@@I@Z.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x14006B768 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
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
