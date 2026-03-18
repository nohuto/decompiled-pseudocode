/*
 * XREFs of ?RIMDeviceCallback_Closed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x140210910
 * Callers:
 *     <none>
 * Callees:
 *     isRootPartition @ 0x14005E028 (isRootPartition.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x14021E3E8 (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x14021EA58 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Closed(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  IVRootDeliver::PnP *v4; // rdi
  const struct CONTAINER_ID *v5; // r9
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 157) )
  {
    v7 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1790);
  }
  --*((_QWORD *)this + 157);
  v4 = (IVRootDeliver::PnP *)(((unsigned __int64)a2 + 72) & -(__int64)(a2 != 0LL));
  if ( isRootPartition((__int64)this, (__int64)a2) && CIVChannel::ContainerConnected(*((_DWORD *)this + 318)) )
  {
    v7 = 0;
    IVRootDeliver::PnP::SendRootPnp(v4, (struct DEVICEINFO *)3, (unsigned int)&v7, v5);
  }
  return (*(__int64 (__fastcall **)(CBaseInput *, IVRootDeliver::PnP *))(*(_QWORD *)this + 96LL))(this, v4);
}
