/*
 * XREFs of ??0RGNMEMOBJ@@QEAA@K@Z @ 0x1401950E0
 * Callers:
 *     <none>
 * Callees:
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x140015950 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 */

RGNMEMOBJ *__fastcall RGNMEMOBJ::RGNMEMOBJ(RGNMEMOBJ *this, unsigned int a2)
{
  *(_QWORD *)this = 0LL;
  RGNMEMOBJ::vInitialize(this, a2);
  return this;
}
