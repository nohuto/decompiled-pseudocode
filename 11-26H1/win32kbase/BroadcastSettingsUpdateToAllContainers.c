/*
 * XREFs of BroadcastSettingsUpdateToAllContainers @ 0x1401C5BB0
 * Callers:
 *     SetSwapMouseButton @ 0x14017DF70 (SetSwapMouseButton.c)
 *     UpdateMouseSensitivity @ 0x140188F00 (UpdateMouseSensitivity.c)
 *     xxxSystemParametersInfo @ 0x1401ACFA0 (xxxSystemParametersInfo.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1401BA808 (_SetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     isRootPartition @ 0x14009C868 (isRootPartition.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x1401C37F4 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 *     ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x14021C628 (-SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z.c)
 */

void __fastcall BroadcastSettingsUpdateToAllContainers(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // r8d
  const struct CONTAINER_ID *v5; // rdx
  int v6; // [rsp+30h] [rbp+8h] BYREF

  if ( isRootPartition(a1, a2, a3) )
  {
    if ( CIVChannel::ContainerConnected(3, v3, v4) )
    {
      v6 = 0;
      IVRootDeliver::Settings::SendSettingsUpdateToContainer((IVRootDeliver::Settings *)&v6, v5);
    }
  }
}
