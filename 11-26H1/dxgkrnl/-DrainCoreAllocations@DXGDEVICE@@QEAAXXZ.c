/*
 * XREFs of ?DrainCoreAllocations@DXGDEVICE@@QEAAXXZ @ 0x14038B7CC
 * Callers:
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1401C3A8C (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x14038B858 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::DrainCoreAllocations(struct _KTHREAD **this)
{
  struct DXGALLOCATION *v2; // rsi
  __int64 v3; // rbx
  struct DXGALLOCATION *v4; // rdi
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v5, this + 26);
  v2 = this[6];
  if ( v2 )
  {
    do
    {
      v3 = *((_QWORD *)v2 + 7);
      v4 = (struct DXGALLOCATION *)*((_QWORD *)v2 + 8);
      *((_QWORD *)v2 + 7) = 0LL;
      *((_QWORD *)v2 + 8) = 0LL;
      DXGDEVICE::DestroyCoreAllocations((DXGDEVICE *)this, 0LL, v2);
      *((_QWORD *)v2 + 7) = v3;
      *((_QWORD *)v2 + 8) = v4;
      v2 = v4;
    }
    while ( v4 );
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v5);
}
