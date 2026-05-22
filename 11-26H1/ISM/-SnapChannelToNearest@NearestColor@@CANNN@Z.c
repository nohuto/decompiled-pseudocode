/*
 * XREFs of ?SnapChannelToNearest@NearestColor@@CANNN@Z @ 0x180067FAC
 * Callers:
 *     ?GetNearestSupportedFixedColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AEBULampAttributes@@PEAU234@PEAULampColor@@@Z @ 0x18006256C (-GetNearestSupportedFixedColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AEBULampA.c)
 * Callees:
 *     <none>
 */

double __fastcall NearestColor::SnapChannelToNearest(double a1, double a2)
{
  double v2; // xmm0_8

  if ( a2 <= 0.0 )
    v2 = 0.0;
  else
    v2 = a1 / a2;
  return (double)(int)(v2 + 0.5) * a2;
}
