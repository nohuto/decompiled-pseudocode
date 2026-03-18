/*
 * XREFs of ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1401DE9F8
 * Callers:
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x14006DB98 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140114328 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     NtGdiGetPath @ 0x1401DE770 (NtGdiGetPath.c)
 * Callees:
 *     ?vLock@EPATHOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHPATH__@@@Z @ 0x1401DEB20 (-vLock@EPATHOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHPATH__@@@Z.c)
 */

XEPATHOBJ *__fastcall XEPATHOBJ::XEPATHOBJ(XEPATHOBJ *this, struct HPATH__ *a2)
{
  struct Gre::Base::SESSION_GLOBALS *v4; // rax

  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 1) = 0LL;
  if ( !*((_DWORD *)this + 28) )
  {
    PushThreadGuardedObject((char *)this + 80, this, XEPATHOBJ_vDestructWrap);
    *((_DWORD *)this + 28) = 1;
  }
  v4 = Gre::Base::Globals(this);
  EPATHOBJ::vLock(this, v4, a2);
  return this;
}
