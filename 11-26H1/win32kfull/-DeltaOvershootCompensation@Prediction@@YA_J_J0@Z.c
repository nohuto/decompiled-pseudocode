/*
 * XREFs of ?DeltaOvershootCompensation@Prediction@@YA_J_J0@Z @ 0x140196F14
 * Callers:
 *     ?UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_INFO@@PEAU2@3@Z @ 0x1401950B8 (-UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_I.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Prediction::DeltaOvershootCompensation(__int64 this, __int64 a2)
{
  __int64 v2; // r8
  __int64 v4; // rcx

  v2 = 0LL;
  if ( this > 0 )
  {
    if ( a2 < 0 )
    {
      v2 = -this;
      if ( a2 / 2 >= -this )
        return a2 / 2;
    }
  }
  else if ( this < 0 && a2 > 0 )
  {
    v4 = -this;
    v2 = (unsigned __int64)a2 >> 1;
    if ( (__int64)((unsigned __int64)a2 >> 1) > v4 )
      return v4;
  }
  return v2;
}
