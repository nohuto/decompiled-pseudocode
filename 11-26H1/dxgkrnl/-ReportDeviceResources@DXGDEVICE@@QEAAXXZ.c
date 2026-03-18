/*
 * XREFs of ?ReportDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x1403B2EDC
 * Callers:
 *     ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1403B2D1C (-ReportState@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     Feature_3472570682__private_IsEnabledDeviceUsageNoInline @ 0x140074858 (Feature_3472570682__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1403B30D4 (-ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 */

void __fastcall DXGDEVICE::ReportDeviceResources(struct _KTHREAD **this)
{
  struct _KTHREAD *v2; // rbx
  int IsEnabledDeviceUsageNoInline; // r14d
  BOOL v4; // ebp
  struct DXGALLOCATION *v5; // rdi
  _BYTE v6[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v7[40]; // [rsp+30h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v7, this + 30);
  v2 = this[7];
  IsEnabledDeviceUsageNoInline = Feature_3472570682__private_IsEnabledDeviceUsageNoInline();
  while ( v2 )
  {
    v4 = (*((_DWORD *)v2 + 1) & 1) == 0 || (*(_DWORD *)(*((_QWORD *)v2 + 7) + 12LL) & 2) == 0;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, (struct _KTHREAD *)((char *)v2 + 80), 0);
    if ( IsEnabledDeviceUsageNoInline )
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
    v5 = (struct DXGALLOCATION *)*((_QWORD *)v2 + 3);
    while ( v5 )
    {
      DXGDEVICE::ReportAllocationState((DXGDEVICE *)this, v5, v4);
      v5 = (struct DXGALLOCATION *)*((_QWORD *)v5 + 8);
      if ( (*((_DWORD *)v2 + 1) & 1) != 0 )
        *(_DWORD *)(*((_QWORD *)v2 + 7) + 12LL) |= 2u;
    }
    v2 = (struct _KTHREAD *)*((_QWORD *)v2 + 5);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v6);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7);
}
