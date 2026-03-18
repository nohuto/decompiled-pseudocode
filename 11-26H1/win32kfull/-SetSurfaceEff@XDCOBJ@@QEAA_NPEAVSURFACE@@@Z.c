/*
 * XREFs of ?SetSurfaceEff@XDCOBJ@@QEAA_NPEAVSURFACE@@@Z @ 0x1401C3278
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x1400BA570 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAVSURFACE@@@Z @ 0x1401C3510 (--0SURFREF@@QEAA@PEAVSURFACE@@@Z.c)
 */

char __fastcall XDCOBJ::SetSurfaceEff(XDCOBJ *this, struct SURFACE *a2)
{
  Gre::Base *v4; // rcx
  struct Gre::Base::SESSION_GLOBALS *v5; // rax
  _BYTE v7[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]

  if ( *((_QWORD *)this + 3) )
    return 0;
  SURFREF::SURFREF((SURFREF *)v7, a2);
  *((_QWORD *)this + 3) = a2;
  v5 = Gre::Base::Globals(v4);
  INC_SHARE_REF_CNT(v5, v8);
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v7);
  return 1;
}
