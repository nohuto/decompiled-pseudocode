/*
 * XREFs of ??0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z @ 0x1400A24C8
 * Callers:
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1400A211C (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ @ 0x1400A2538 (--0-$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ.c)
 */

SFMLOGICALSURFACEREF *__fastcall SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF(
        SFMLOGICALSURFACEREF *this,
        struct SFMLOGICALSURFACE *a2)
{
  Gre::Base *v4; // rcx
  __int64 v5; // rdi
  struct Gre::Base::SESSION_GLOBALS *v6; // rax
  __int64 v7; // r8

  UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>();
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 1;
  if ( a2 )
  {
    v5 = *(_QWORD *)a2;
    if ( v5 )
    {
      v6 = Gre::Base::Globals(v4);
      LOBYTE(v7) = 18;
      *((_QWORD *)this + 4) = HmgLock(v6, v5, v7, 0LL);
    }
  }
  return this;
}
