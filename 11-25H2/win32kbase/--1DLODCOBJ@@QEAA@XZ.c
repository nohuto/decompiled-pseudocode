/*
 * XREFs of ??1DLODCOBJ@@QEAA@XZ @ 0x14008E354
 * Callers:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008E1A8 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x14000E350 (PopThreadGuardedObject.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1401C3FC0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 */

void __fastcall DLODCOBJ::~DLODCOBJ(DLODCOBJ *this)
{
  if ( *(_QWORD *)this )
    DLODCOBJ::vUnlock(this);
  PopThreadGuardedObject((_QWORD *)this + 5);
}
