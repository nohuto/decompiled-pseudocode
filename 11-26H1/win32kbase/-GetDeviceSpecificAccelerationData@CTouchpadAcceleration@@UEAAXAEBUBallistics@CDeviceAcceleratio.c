/*
 * XREFs of ?GetDeviceSpecificAccelerationData@CTouchpadAcceleration@@UEAAXAEBUBallistics@CDeviceAcceleration@@PEAKPEAPEB_J22@Z @ 0x1401499C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CTouchpadAcceleration::GetDeviceSpecificAccelerationData(
        CTouchpadAcceleration *this,
        const struct CDeviceAcceleration::Ballistics *a2,
        unsigned int *a3,
        const __int64 **a4,
        const __int64 **a5,
        const __int64 **a6)
{
  const __int64 *v6; // rdx

  v6 = (const __int64 *)((char *)a2 + 144);
  *a3 = 5;
  *a4 = v6;
  *a5 = v6 + 10;
  *a6 = v6 + 14;
}
