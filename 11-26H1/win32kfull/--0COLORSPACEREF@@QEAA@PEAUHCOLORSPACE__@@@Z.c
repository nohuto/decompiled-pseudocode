/*
 * XREFs of ??0COLORSPACEREF@@QEAA@PEAUHCOLORSPACE__@@@Z @ 0x140244044
 * Callers:
 *     ?cjGetLogicalColorSpace@@YAHPEAXH0@Z @ 0x140243F08 (-cjGetLogicalColorSpace@@YAHPEAXH0@Z.c)
 *     NtGdiSetColorSpace @ 0x140331020 (NtGdiSetColorSpace.c)
 * Callees:
 *     <none>
 */

COLORSPACEREF *__fastcall COLORSPACEREF::COLORSPACEREF(COLORSPACEREF *this, HCOLORSPACE a2)
{
  Gre::Base *v4; // rcx
  struct Gre::Base::SESSION_GLOBALS *v5; // rax
  __int64 v6; // r8

  *(_OWORD *)this = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  PushThreadGuardedObject(
    this,
    this,
    UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic);
  v5 = Gre::Base::Globals(v4);
  LOBYTE(v6) = 9;
  *((_QWORD *)this + 4) = HmgShareLock(v5, a2, v6, 0LL);
  return this;
}
