/*
 * XREFs of ?BuildAccelerationCurve@CMouseAcceleration@@UEAAXGPEAUBallistics@CDeviceAcceleration@@@Z @ 0x14017D240
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ @ 0x140156210 (-GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ.c)
 *     ?_BuildAccelerationCurve@CDeviceAcceleration@@IEAAXPEAUCurve@1@GI@Z @ 0x140174AA0 (-_BuildAccelerationCurve@CDeviceAcceleration@@IEAAXPEAUCurve@1@GI@Z.c)
 */

void __fastcall CMouseAcceleration::BuildAccelerationCurve(
        CMouseAcceleration *this,
        unsigned __int16 a2,
        struct CDeviceAcceleration::Ballistics *a3)
{
  CMouseAcceleration::MOUSE_SENSITIVITY_INFO *v6; // rcx
  unsigned int MouseSensitivity; // eax

  if ( *((_BYTE *)this + 8) )
  {
    v6 = (CMouseAcceleration *)((char *)this + 104);
    if ( *(_DWORD *)v6 )
    {
      if ( *(_DWORD *)v6 <= 0x14u )
      {
        MouseSensitivity = CMouseAcceleration::MOUSE_SENSITIVITY_INFO::GetMouseSensitivity(v6);
        CDeviceAcceleration::_BuildAccelerationCurve(this, a3, a2, MouseSensitivity);
      }
    }
  }
}
