/*
 * XREFs of ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x1400C6A7C
 * Callers:
 *     GreRealizePalette @ 0x1401FD0C8 (GreRealizePalette.c)
 *     GreCancelDC @ 0x140326374 (GreCancelDC.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$0BE@@@YAXXZ @ 0x1400C6AC0 (--$GrepAcquireLockValidate@$0BE@@@YAXXZ.c)
 */

Gre::Base *__fastcall SEMOBJ<20>::SEMOBJ<20>(Gre::Base *a1)
{
  HSEMAPHORE v2; // rcx

  v2 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(a1) + 1512LL);
  *(_QWORD *)a1 = v2;
  GreAcquireSemaphoreInternal(v2);
  GrepAcquireLockValidate<20>();
  return a1;
}
