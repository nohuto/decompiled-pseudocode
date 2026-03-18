/*
 * XREFs of ?DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x14018F670
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140197C9C (-Destroy@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1403BE250 (-CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140009790 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z @ 0x14042A6F4 (-DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z.c)
 */

void __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::DestroyVmBusChannel(DXG_GUEST_VIRTUALGPU_VMBUS *this)
{
  bool v2; // zf
  struct VMBCHANNEL__ *v3; // rdi
  _BYTE v4[8]; // [rsp+20h] [rbp-28h] BYREF
  char *v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+30h] [rbp-18h]

  v2 = *((_QWORD *)this + 3) == (_QWORD)KeGetCurrentThread();
  v6 = 0;
  v5 = (char *)this + 16;
  if ( !v2 )
    DXGAUTOPUSHLOCK::AcquireExclusive((DXGAUTOPUSHLOCK *)v4);
  v3 = *(struct VMBCHANNEL__ **)this;
  *(_QWORD *)this = 0LL;
  *((_BYTE *)this + 68) = 0;
  *((_QWORD *)this + 1) = 0LL;
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v4);
  if ( v3 )
    DestroyVmBusChannel(v3);
}
