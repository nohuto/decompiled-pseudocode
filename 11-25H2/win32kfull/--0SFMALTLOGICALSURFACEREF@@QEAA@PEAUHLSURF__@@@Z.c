/*
 * XREFs of ??0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z @ 0x14008D504
 * Callers:
 *     GreSfmGetDirtyRgn @ 0x14008D37C (GreSfmGetDirtyRgn.c)
 *     GreDwmGetSurfaceData @ 0x1400949E4 (GreDwmGetSurfaceData.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1401A675C (GreSetRedirectionSurfaceSignaling.c)
 *     GreDwmGetRedirectionStyle @ 0x140322D94 (GreDwmGetRedirectionStyle.c)
 *     GreHLsurfSetPresentFlags @ 0x140323030 (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x140323134 (GreHLsurfSetUpdateId.c)
 * Callees:
 *     <none>
 */

SFMALTLOGICALSURFACEREF *__fastcall SFMALTLOGICALSURFACEREF::SFMALTLOGICALSURFACEREF(
        SFMALTLOGICALSURFACEREF *this,
        HLSURF a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx

  *(_OWORD *)this = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  PushThreadGuardedObject(
    this,
    this,
    UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic,
    a4);
  *((_QWORD *)this + 4) = 0LL;
  if ( a2 )
  {
    LOBYTE(v6) = 18;
    *((_QWORD *)this + 4) = HmgShareLockCheck(a2, v6);
  }
  return this;
}
