/*
 * XREFs of ?_RequestCancelled@FxIoTarget@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z @ 0x14009C100
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14000AD10 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?FailPendedRequest@FxIoTarget@@IEAAXPEAVFxRequestBase@@J@Z @ 0x14009BEEC (-FailPendedRequest@FxIoTarget@@IEAAXPEAVFxRequestBase@@J@Z.c)
 */

void __fastcall FxIoTarget::_RequestCancelled(
        FxIrpQueue *Queue,
        _IRP *Irp,
        _IRP *CsqContext,
        unsigned __int8 CallerIrql)
{
  FxIoTarget *p_m_RequestCount; // rbp
  _IO_CSQ_IRP_CONTEXT *p_Overlay; // rsi
  unsigned __int64 v8; // rcx
  _IO_CSQ_IRP_CONTEXT *_a1; // rax
  unsigned __int8 v10; // r8
  unsigned __int8 v11; // dl
  unsigned __int8 v12; // r8
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF

  p_m_RequestCount = (FxIoTarget *)&Queue[-7].m_RequestCount;
  irql = 0;
  FxNonPagedObject::Unlock((FxNonPagedObject *)&Queue[-7].m_RequestCount, CallerIrql, (unsigned __int8)CsqContext);
  p_Overlay = (_IO_CSQ_IRP_CONTEXT *)&CsqContext[-1].Overlay;
  v8 = (unsigned __int64)&CsqContext[-1].Overlay ^ 0xFFFFFFFFFFFFFFF8uLL;
  _a1 = (_IO_CSQ_IRP_CONTEXT *)&CsqContext[-1].Overlay;
  if ( !*((_WORD *)&CsqContext[-1].Overlay.AllocationSize + 5) )
    v8 = 0LL;
  if ( v8 )
    _a1 = (_IO_CSQ_IRP_CONTEXT *)v8;
  WPP_IFR_SF_q((_FX_DRIVER_GLOBALS *)p_Overlay->Csq, 4u, 0xEu, 0x37u, WPP_FxIoTarget_cpp_Traceguids, _a1);
  CsqContext->MdlAddress = (_MDL *)CsqContext;
  *(_QWORD *)&CsqContext->Type = CsqContext;
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  FxNonPagedObject::Lock(p_m_RequestCount, &irql, v10);
  v11 = irql;
  BYTE4(p_Overlay[8].Csq) &= ~2u;
  FxNonPagedObject::Unlock(p_m_RequestCount, v11, v12);
  FxIoTarget::FailPendedRequest(p_m_RequestCount, (FxRequestBase *)&CsqContext[-1].Overlay, -1073741536);
}
