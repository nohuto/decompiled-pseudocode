/*
 * XREFs of ??0XDCOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z @ 0x1401C7528
 * Callers:
 *     ??0DCMEMOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140178AA0 (--0DCMEMOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x140178DF0 (--1DCMEMOBJ@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

XDCOBJ *__fastcall XDCOBJ::XDCOBJ(XDCOBJ *this, struct Gre::Base::SESSION_GLOBALS *a2, char a3)
{
  XDCOBJ *result; // rax

  if ( !a3 )
    a2 = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(this) + 88);
  *((_QWORD *)this + 3) = 0LL;
  result = this;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 2) = a2;
  return result;
}
