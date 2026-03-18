/*
 * XREFs of ?RIMDeviceCallback_Closed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x140218680
 * Callers:
 *     <none>
 * Callees:
 *     isRootPartition @ 0x14009C868 (isRootPartition.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x1401C37F4 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x140221B3C (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Closed(
        CBaseInput *this,
        struct RawInputManagerDeviceObject *a2,
        int a3)
{
  IVRootDeliver::PnP *v5; // rdi
  int v6; // edx
  int v7; // r8d
  const struct CONTAINER_ID *v8; // r9
  unsigned int v10; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 157) )
  {
    v10 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1768);
  }
  --*((_QWORD *)this + 157);
  v5 = (IVRootDeliver::PnP *)(((unsigned __int64)a2 + 72) & -(__int64)(a2 != 0LL));
  if ( isRootPartition((int)this, (int)a2, a3) && CIVChannel::ContainerConnected(*((_DWORD *)this + 318), v6, v7) )
  {
    v10 = 0;
    IVRootDeliver::PnP::SendRootPnp(v5, (struct DEVICEINFO *)3, (unsigned int)&v10, v8);
  }
  return (*(__int64 (__fastcall **)(CBaseInput *, IVRootDeliver::PnP *))(*(_QWORD *)this + 96LL))(this, v5);
}
