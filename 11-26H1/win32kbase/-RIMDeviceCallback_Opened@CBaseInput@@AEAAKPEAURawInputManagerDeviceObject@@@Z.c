/*
 * XREFs of ?RIMDeviceCallback_Opened@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x14018D1D0
 * Callers:
 *     <none>
 * Callees:
 *     isRootPartition @ 0x14009C868 (isRootPartition.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x1401C37F4 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x140221B3C (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Opened(CBaseInput *this, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  IVRootDeliver::PnP *v6; // rdi
  const struct CONTAINER_ID *v8; // r9
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF

  ++*((_QWORD *)this + 157);
  v3 = a2 + 72;
  v4 = -a2;
  v6 = (IVRootDeliver::PnP *)(v3 & -(__int64)(v4 != 0));
  if ( isRootPartition((int)this, v4, a3) && CIVChannel::ContainerConnected(*((_DWORD *)this + 318)) )
  {
    v9 = 0;
    IVRootDeliver::PnP::SendRootPnp(v6, (struct DEVICEINFO *)2, (unsigned int)&v9, v8);
  }
  return (*(__int64 (__fastcall **)(CBaseInput *, IVRootDeliver::PnP *))(*(_QWORD *)this + 88LL))(this, v6);
}
