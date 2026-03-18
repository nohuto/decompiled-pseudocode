/*
 * XREFs of ?DrainClientAllocations@DXGDEVICE@@QEAAXXZ @ 0x1401935A8
 * Callers:
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1403A1DAC (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x14037353C (-DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::DrainClientAllocations(struct _KTHREAD **this)
{
  struct DXGALLOCATION *v2; // rdx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v3, this + 26);
  while ( 1 )
  {
    v2 = this[6];
    if ( !v2 )
      break;
    this[6] = (struct _KTHREAD *)*((_QWORD *)v2 + 8);
    *((_QWORD *)v2 + 7) = 0LL;
    *((_QWORD *)v2 + 8) = 0LL;
    DXGDEVICE::DestroyClientAllocations((DXGDEVICE *)this, v2);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v3);
}
