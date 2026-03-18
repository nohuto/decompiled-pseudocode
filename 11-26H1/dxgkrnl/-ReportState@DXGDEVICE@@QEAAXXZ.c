/*
 * XREFs of ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1403B2D1C
 * Callers:
 *     ?ReportState@ADAPTER_RENDER@@QEAAXXZ @ 0x1403B2BB0 (-ReportState@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0ppqpttqpqp_EtwWriteTransfer @ 0x140057CFC (McTemplateK0ppqpttqpqp_EtwWriteTransfer.c)
 *     ?VidMmReportContextAllocList@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAU_LIST_ENTRY@@@Z @ 0x14005EC80 (-VidMmReportContextAllocList@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAU_LIST_ENTRY@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?ReportDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x1403B2EDC (-ReportDeviceResources@DXGDEVICE@@QEAAXXZ.c)
 *     ?ReportDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1403B2FC0 (-ReportDeviceSyncObjects@DXGDEVICE@@QEAAXXZ.c)
 *     ?ReportDeviceAllocations@DXGDEVICE@@QEAAXXZ @ 0x1403B3078 (-ReportDeviceAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?ReportState@DXGCONTEXT@@QEAAXXZ @ 0x1403B3270 (-ReportState@DXGCONTEXT@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::ReportState(DXGDEVICE *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  int v4; // r10d
  int v5; // r11d
  __int64 v6; // rcx
  DXGCONTEXT *v7; // rsi
  DXGCONTEXT *i; // rbx
  DXGCONTEXT *v9; // rax
  DXGCONTEXT *v10; // rcx

  if ( bTracingEnabled )
  {
    v2 = *((_QWORD *)this + 5);
    v3 = *((_QWORD *)this + 14);
    v4 = *((_DWORD *)this + 118);
    v5 = *((_DWORD *)this + 117);
    v6 = *((unsigned __int8 *)this + 1914);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
      McTemplateK0ppqpttqpqp_EtwWriteTransfer(
        v6,
        &EventReportDevice,
        v3,
        *(_QWORD *)(*(_QWORD *)(v2 + 64) + 80LL),
        *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
        *((_DWORD *)this + 116),
        this,
        *((unsigned __int8 *)this + 1913),
        v6,
        v5,
        v2,
        v4,
        v3);
  }
  v7 = (DXGDEVICE *)((char *)this + 496);
  for ( i = (DXGCONTEXT *)*((_QWORD *)this + 62); ; i = *(DXGCONTEXT **)i )
  {
    v9 = 0LL;
    if ( i != v7 )
      v9 = i;
    if ( !v9 )
      break;
    v10 = i;
    if ( i == v7 )
      v10 = 0LL;
    DXGCONTEXT::ReportState(v10);
  }
  if ( *((_QWORD *)this + 99) )
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL) + 56LL))();
  if ( *((_QWORD *)this + 100) )
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 736LL) + 8LL) + 144LL))();
  DXGDEVICE::ReportDeviceAllocations(this);
  DXGDEVICE::ReportDeviceResources(this);
  DXGDEVICE::ReportDeviceSyncObjects(this);
  if ( (*((_BYTE *)this + 1917) & 1) == 0 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGDEVICE *)((char *)this + 808));
    VIDMM_EXPORT::VidMmReportContextAllocList(
      *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
      this,
      (struct _LIST_ENTRY *)((char *)this + 840));
    *((_QWORD *)this + 102) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 808, 0LL);
    KeLeaveCriticalRegion();
  }
}
