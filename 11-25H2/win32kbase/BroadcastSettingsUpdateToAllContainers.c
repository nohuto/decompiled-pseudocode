/*
 * XREFs of BroadcastSettingsUpdateToAllContainers @ 0x1400A8400
 * Callers:
 *     SetSwapMouseButton @ 0x1400A6FF0 (SetSwapMouseButton.c)
 *     UpdateMouseSensitivity @ 0x1400A7080 (UpdateMouseSensitivity.c)
 *     xxxSystemParametersInfo @ 0x1400A70D0 (xxxSystemParametersInfo.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1401B4FC0 (_SetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     isRootPartition @ 0x14005E028 (isRootPartition.c)
 *     ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x140217458 (-SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x14021EA58 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 */

void __fastcall BroadcastSettingsUpdateToAllContainers(__int64 a1, __int64 a2)
{
  const struct CONTAINER_ID *v2; // rdx
  int v3; // [rsp+30h] [rbp+8h] BYREF

  if ( isRootPartition(a1, a2) && CIVChannel::ContainerConnected(3u) )
  {
    v3 = 0;
    IVRootDeliver::Settings::SendSettingsUpdateToContainer((IVRootDeliver::Settings *)&v3, v2);
  }
}
