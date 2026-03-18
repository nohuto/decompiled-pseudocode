/*
 * XREFs of ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1400A2574
 * Callers:
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z @ 0x1400A2484 (--0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SFMLOGICALSURFACEREF::LockLogicalSurfaceObj(SFMLOGICALSURFACEREF *this, HLSURF a2)
{
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  __int64 v5; // r8

  if ( a2 )
  {
    v4 = Gre::Base::Globals(this);
    LOBYTE(v5) = 18;
    *((_QWORD *)this + 4) = HmgLock(v4, a2, v5, 0LL);
  }
}
