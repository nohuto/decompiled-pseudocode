/*
 * XREFs of ??0SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x140097EE8
 * Callers:
 *     GreHintSpriteShape @ 0x1400922F0 (GreHintSpriteShape.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x140097B7C (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ @ 0x1403219B4 (--0-$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ.c)
 */

SFMLOGICALSURFACEREF *__fastcall SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF(SFMLOGICALSURFACEREF *this)
{
  SFMLOGICALSURFACEREF *result; // rax

  UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>();
  *((_QWORD *)this + 4) = 0LL;
  result = this;
  *((_DWORD *)this + 10) = 0;
  return result;
}
