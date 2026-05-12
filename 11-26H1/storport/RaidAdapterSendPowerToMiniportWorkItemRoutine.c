/*
 * XREFs of RaidAdapterSendPowerToMiniportWorkItemRoutine @ 0x14007F680
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterSendPowerToMiniport @ 0x14000FFA4 (RaidAdapterSendPowerToMiniport.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x140010118 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     WPP_SF_qqD @ 0x14005BAF8 (WPP_SF_qqD.c)
 */

void __fastcall RaidAdapterSendPowerToMiniportWorkItemRoutine(
        PDEVICE_OBJECT DeviceObject,
        struct _IO_WORKITEM **Context)
{
  void *DeviceExtension; // rdi
  IRP *v4; // rsi
  struct _IO_WORKITEM *v5; // rbx
  int v6; // eax
  int v7; // r8d

  DeviceExtension = DeviceObject->DeviceExtension;
  v4 = (IRP *)Context[1];
  v5 = *Context;
  v6 = RaidAdapterSendPowerToMiniport((__int64)DeviceExtension, (__int64)v4);
  v7 = v6;
  if ( v6 == -2147483631 )
  {
    v7 = -1073741823;
  }
  else if ( v6 >= 0 )
  {
    goto LABEL_8;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x1Du,
      (__int64)&WPP_1c5ab61e0b3334897529fa80e10aa52d_Traceguids,
      DeviceExtension,
      v4,
      v7);
  }
LABEL_8:
  RaidAdapterPowerUpDeviceCompletionLastStep(v4, (__int64)DeviceExtension);
  if ( v5 )
    IoFreeWorkItem(v5);
  ExFreePoolWithTag(Context, 0x49576152u);
}
