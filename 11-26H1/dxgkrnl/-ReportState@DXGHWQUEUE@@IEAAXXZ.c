/*
 * XREFs of ?ReportState@DXGHWQUEUE@@IEAAXXZ @ 0x140416124
 * Callers:
 *     ?ReportState@DXGCONTEXT@@QEAAXXZ @ 0x1403B3270 (-ReportState@DXGCONTEXT@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x14003EC14 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?ReportState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1402E65EC (-ReportState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGHWQUEUE::ReportState(DXGHWQUEUE *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  DXGDEVICESYNCOBJECT *v5; // rcx

  if ( bTracingEnabled )
  {
    v4 = *((unsigned int *)this + 6);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
      McTemplateK0ppp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        &EventReportHwQueue,
        a3,
        *((_QWORD *)this + 2),
        v4,
        this);
  }
  v5 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 12);
  if ( v5 )
    DXGDEVICESYNCOBJECT::ReportState(v5);
  if ( *((_QWORD *)this + 6) )
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 736LL)
                                  + 8LL)
                      + 312LL))();
}
