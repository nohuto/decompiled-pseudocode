/*
 * XREFs of ?ReportState@DXGCONTEXT@@QEAAXXZ @ 0x1403B3270
 * Callers:
 *     ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1403B2D1C (-ReportState@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0pppp_EtwWriteTransfer @ 0x140053148 (McTemplateK0pppp_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqqqqqppp_EtwWriteTransfer @ 0x140055128 (McTemplateK0pqqqqqqqqppp_EtwWriteTransfer.c)
 *     ?VidMmReportContextAllocList@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAU_LIST_ENTRY@@@Z @ 0x14005EC80 (-VidMmReportContextAllocList@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAU_LIST_ENTRY@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?ReportState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1402E65EC (-ReportState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?ReportState@DXGHWQUEUE@@IEAAXXZ @ 0x140416124 (-ReportState@DXGHWQUEUE@@IEAAXXZ.c)
 */

void __fastcall DXGCONTEXT::ReportState(DXGCONTEXT *this)
{
  __int128 v2; // xmm0
  __int64 v3; // rcx
  char *v4; // rbx
  struct DXGDEVICE **v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r8
  DXGHWQUEUE *v10; // rsi
  DXGHWQUEUE *i; // rbx
  DXGHWQUEUE *v12; // rax
  DXGDEVICESYNCOBJECT *v13; // rcx
  DXGHWQUEUE *v14; // rcx

  if ( bTracingEnabled )
  {
    v2 = *(_OWORD *)((char *)this + 200);
    v3 = *((unsigned int *)this + 6);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
      McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
        v3,
        &EventReportContext,
        *((unsigned int *)this + 95),
        *((_QWORD *)this + 2),
        *((_DWORD *)this + 95),
        *((_DWORD *)this + 96),
        (_DWORD)v2,
        DWORD1(v2),
        DWORD2(v2),
        HIDWORD(v2),
        (unsigned int)*(_OWORD *)((char *)this + 216),
        0,
        this,
        v3,
        0LL);
  }
  v4 = (char *)this + 16;
  if ( *((_QWORD *)this + 29) )
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 16LL) + 760LL) + 8LL) + 440LL))();
  if ( (*((_DWORD *)this + 98) & 0x10) != 0 )
  {
    if ( *((_QWORD *)this + 35) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 16LL) + 736LL) + 8LL) + 304LL))();
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
        McTemplateK0pppp_EtwWriteTransfer(
          v8,
          &EventAssociateContext,
          v9,
          this,
          *((_QWORD *)this + 35),
          *((_QWORD *)this + 23),
          *((_QWORD *)this + 24));
    }
    if ( *((_QWORD *)this + 36) )
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 16LL) + 736LL) + 8LL) + 312LL))();
    v10 = (DXGCONTEXT *)((char *)this + 400);
    for ( i = (DXGHWQUEUE *)*((_QWORD *)this + 50); ; i = *(DXGHWQUEUE **)i )
    {
      v12 = 0LL;
      if ( i != v10 )
        v12 = i;
      if ( !v12 )
        break;
      v14 = i;
      if ( i == v10 )
        v14 = 0LL;
      DXGHWQUEUE::ReportState(v14);
    }
    v13 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 30);
    if ( v13 )
      DXGDEVICESYNCOBJECT::ReportState(v13);
    v5 = (struct DXGDEVICE **)((char *)this + 16);
  }
  else
  {
    v5 = (struct DXGDEVICE **)((char *)this + 16);
    if ( *((_QWORD *)this + 32) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 16LL) + 736LL) + 8LL) + 296LL))();
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
        McTemplateK0pppp_EtwWriteTransfer(
          v6,
          &EventAssociateContext,
          v7,
          this,
          *((_QWORD *)this + 32),
          *((_QWORD *)this + 23),
          *((_QWORD *)this + 24));
    }
  }
  if ( !*((_BYTE *)this + 434) )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGCONTEXT *)((char *)this + 304));
    VIDMM_EXPORT::VidMmReportContextAllocList(
      *(VIDMM_EXPORT **)(*((_QWORD *)*v5 + 2) + 760LL),
      *v5,
      (struct _LIST_ENTRY *)this + 21);
    *((_QWORD *)this + 39) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 304, 0LL);
    KeLeaveCriticalRegion();
  }
}
