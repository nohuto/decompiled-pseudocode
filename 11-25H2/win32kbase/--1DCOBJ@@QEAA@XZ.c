/*
 * XREFs of ??1DCOBJ@@QEAA@XZ @ 0x14001CE4C
 * Callers:
 *     GrepDeleteDC @ 0x14001CC30 (GrepDeleteDC.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x140041880 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140043E9C (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401245F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x140178DF0 (--1DCMEMOBJ@@QEAA@XZ.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x14000E350 (PopThreadGuardedObject.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1400C03DC (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall DCOBJ::~DCOBJ(DCOBJ *this)
{
  if ( *(_QWORD *)this )
    XDCOBJ::vUnlockFast(this);
  PopThreadGuardedObject((_QWORD *)this + 5);
}
