/*
 * XREFs of ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x140041880
 * Callers:
 *     GreCreateCompatibleDC @ 0x140041620 (GreCreateCompatibleDC.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x14000E350 (PopThreadGuardedObject.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x14001CE4C (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlock@XDCOBJ@@QEAAXXZ @ 0x1400C03B4 (-vUnlock@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall OPTAPIDCOBJ::~OPTAPIDCOBJ(OPTAPIDCOBJ *this)
{
  if ( *((_BYTE *)this + 112) )
    XDCOBJ::vUnlock(this);
  else
    *(_QWORD *)this = 0LL;
  PopThreadGuardedObject((_QWORD *)this + 9);
  DCOBJ::~DCOBJ(this);
}
