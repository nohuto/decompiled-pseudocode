/*
 * XREFs of ?RIMDeviceCallback_Opened@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x14018AA00
 * Callers:
 *     <none>
 * Callees:
 *     isRootPartition @ 0x14005E028 (isRootPartition.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x14021E3E8 (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x14021EA58 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Opened(CBaseInput *this, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  IVRootDeliver::PnP *v5; // rdi
  const struct CONTAINER_ID *v6; // r9
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  ++*((_QWORD *)this + 157);
  v2 = a2 + 72;
  v3 = -a2;
  v5 = (IVRootDeliver::PnP *)(v2 & -(__int64)(v3 != 0));
  if ( isRootPartition((__int64)this, v3) && CIVChannel::ContainerConnected(*((_DWORD *)this + 318)) )
  {
    v8 = 0;
    IVRootDeliver::PnP::SendRootPnp(v5, (struct DEVICEINFO *)2, (unsigned int)&v8, v6);
  }
  return (*(__int64 (__fastcall **)(CBaseInput *, IVRootDeliver::PnP *))(*(_QWORD *)this + 88LL))(this, v5);
}
