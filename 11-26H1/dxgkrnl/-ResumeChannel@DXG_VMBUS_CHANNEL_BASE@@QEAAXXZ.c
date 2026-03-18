/*
 * XREFs of ?ResumeChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAXXZ @ 0x14018BFB8
 * Callers:
 *     ?VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z @ 0x14018BA60 (-VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140009790 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall DXG_VMBUS_CHANNEL_BASE::ResumeChannel(DXG_VMBUS_CHANNEL_BASE *this)
{
  struct _KTHREAD *v1; // rdx
  _BYTE v3[8]; // [rsp+20h] [rbp-28h] BYREF
  char *v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+30h] [rbp-18h]

  v1 = (struct _KTHREAD *)*((_QWORD *)this + 3);
  v5 = 0;
  v4 = (char *)this + 16;
  if ( v1 != KeGetCurrentThread() )
    DXGAUTOPUSHLOCK::AcquireExclusive((DXGAUTOPUSHLOCK *)v3);
  if ( *(_QWORD *)this && *((_BYTE *)this + 70) )
  {
    if ( *((_BYTE *)this + 71) )
    {
      ((void (*)(void))qword_1401684E0)();
      *((_BYTE *)this + 71) = 0;
    }
    *((_BYTE *)this + 70) = 0;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v3);
}
