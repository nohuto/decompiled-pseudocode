/*
 * XREFs of ?vLockAll@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x14020A28C
 * Callers:
 *     MulProcessChildRedirectionDfbSurfaces @ 0x140329530 (MulProcessChildRedirectionDfbSurfaces.c)
 * Callees:
 *     <none>
 */

void __fastcall SURFREF::vLockAll(SURFREF *this, HSURF a2)
{
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  __int64 v5; // r8

  v4 = Gre::Base::Globals(this);
  LOBYTE(v5) = 5;
  *((_QWORD *)this + 4) = HmgShareLock(v4, a2, v5, 1LL);
}
