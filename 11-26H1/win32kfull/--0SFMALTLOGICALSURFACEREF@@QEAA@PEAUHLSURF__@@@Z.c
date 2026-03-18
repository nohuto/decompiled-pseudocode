/*
 * XREFs of ??0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z @ 0x1400A4288
 * Callers:
 *     GreSetRedirectionSurfaceSignaling @ 0x14009FBB8 (GreSetRedirectionSurfaceSignaling.c)
 *     GreDwmGetSurfaceData @ 0x1400A54E0 (GreDwmGetSurfaceData.c)
 *     GreDwmGetRedirectionStyle @ 0x140344F94 (GreDwmGetRedirectionStyle.c)
 *     GreHLsurfSetPresentFlags @ 0x140345248 (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x14034534C (GreHLsurfSetUpdateId.c)
 * Callees:
 *     <none>
 */

SFMALTLOGICALSURFACEREF *__fastcall SFMALTLOGICALSURFACEREF::SFMALTLOGICALSURFACEREF(
        SFMALTLOGICALSURFACEREF *this,
        HLSURF a2)
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
  *((_QWORD *)this + 4) = 0LL;
  if ( a2 )
  {
    v5 = Gre::Base::Globals(v4);
    LOBYTE(v6) = 18;
    *((_QWORD *)this + 4) = HmgShareLock(v5, a2, v6, 0LL);
  }
  return this;
}
