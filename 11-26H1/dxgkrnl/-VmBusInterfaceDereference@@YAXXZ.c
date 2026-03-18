/*
 * XREFs of ?VmBusInterfaceDereference@@YAXXZ @ 0x140227A94
 * Callers:
 *     ?Cleanup@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x14020D4BC (-Cleanup@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 *     ?Initialize@DXGVMBUSCHANNEL@@IEAAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@E@Z @ 0x1402126F0 (-Initialize@DXGVMBUSCHANNEL@@IEAAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@E@Z.c)
 *     ?CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZPEAPEAU5@@Z @ 0x1403BE578 (-CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHA.c)
 *     ?CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZIPEAPEAU5@@Z @ 0x14041C98C (-CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CH.c)
 *     ?DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z @ 0x14042A6F4 (-DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

void VmBusInterfaceDereference(void)
{
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v1; // rax

  Global = DXGGLOBAL::GetGlobal();
  DXGPUSHLOCK::AcquireExclusive((struct DXGGLOBAL *)((char *)Global + 936));
  if ( g_VgpuVmBusInterfaceRefCount )
  {
    --g_VgpuVmBusInterfaceRefCount;
    ((void (__fastcall *)(__int64))qword_1401683F8)(qword_1401683E8);
    if ( !g_VgpuVmBusInterfaceRefCount )
      memset(&g_VgpuVmBusInterface, 0, 0x318uLL);
  }
  v1 = DXGGLOBAL::GetGlobal();
  *((_QWORD *)v1 + 118) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v1 + 936, 0LL);
  KeLeaveCriticalRegion();
}
