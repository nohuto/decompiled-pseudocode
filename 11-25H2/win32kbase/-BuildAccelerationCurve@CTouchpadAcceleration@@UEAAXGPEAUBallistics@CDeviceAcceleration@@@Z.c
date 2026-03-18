/*
 * XREFs of ?BuildAccelerationCurve@CTouchpadAcceleration@@UEAAXGPEAUBallistics@CDeviceAcceleration@@@Z @ 0x140148090
 * Callers:
 *     <none>
 * Callees:
 *     ?_BuildAccelerationCurve@CDeviceAcceleration@@IEAAXPEAUCurve@1@GI@Z @ 0x140223F50 (-_BuildAccelerationCurve@CDeviceAcceleration@@IEAAXPEAUCurve@1@GI@Z.c)
 */

void __fastcall CTouchpadAcceleration::BuildAccelerationCurve(
        CTouchpadAcceleration *this,
        __int64 a2,
        struct CDeviceAcceleration::Ballistics *a3)
{
  unsigned __int16 v4; // si
  __int64 UserSessionState; // rax
  unsigned int v7; // r9d

  v4 = a2;
  if ( *((_BYTE *)this + 8) )
  {
    UserSessionState = W32GetUserSessionState(this, a2);
    v7 = *(_DWORD *)(UserSessionState + 16792);
    if ( !v7 )
    {
      v7 = *((_DWORD *)this + 24);
      *(_DWORD *)(UserSessionState + 16792) = v7;
    }
    CDeviceAcceleration::_BuildAccelerationCurve(
      this,
      (struct CDeviceAcceleration::Ballistics *)((char *)a3 + 144),
      v4,
      v7);
  }
}
