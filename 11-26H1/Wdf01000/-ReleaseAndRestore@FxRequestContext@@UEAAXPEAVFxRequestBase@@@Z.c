/*
 * XREFs of ?ReleaseAndRestore@FxRequestContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1400572A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxRequestContext::ReleaseAndRestore(FxRequestContext *this, FxRequestBase *Request)
{
  _MDL *MdlAddress; // rsi
  IFxMemory *m_RequestMemory; // rcx
  _MDL *Next; // rbp

  if ( Request->m_IrpAllocation && !Request->m_CanComplete )
  {
    MdlAddress = Request->m_Irp.m_Irp->MdlAddress;
    if ( MdlAddress )
    {
      do
      {
        Next = MdlAddress->Next;
        if ( (MdlAddress->MdlFlags & 2) != 0 )
        {
          MmUnlockPages(MdlAddress);
        }
        else if ( Request->m_Globals->FxVerifierOn )
        {
          DbgPrint(
            "pMdl %p, Flags 0x%x in PIRP %p should be locked",
            MdlAddress,
            MdlAddress->MdlFlags,
            Request->m_Irp.m_Irp);
          FxVerifierDbgBreakPoint(Request->m_Globals);
        }
        IoFreeMdl(MdlAddress);
        MdlAddress = Next;
      }
      while ( Next );
    }
    Request->m_Irp.m_Irp->MdlAddress = 0LL;
  }
  m_RequestMemory = this->m_RequestMemory;
  if ( m_RequestMemory )
  {
    m_RequestMemory->Release(
      m_RequestMemory,
      this,
      112,
      "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
    this->m_RequestMemory = 0LL;
  }
  this->m_CompletionParams.IoStatus.Pointer = 0LL;
  this->m_CompletionParams.IoStatus.Information = 0LL;
  this->m_CompletionParams.Parameters.Others.Argument1.Value = 0LL;
  this->m_CompletionParams.Parameters.Write.Length = 0LL;
  this->m_CompletionParams.Parameters.Write.Offset = 0LL;
  this->m_CompletionParams.Parameters.Others.Argument4.Value = 0LL;
  this->m_CompletionParams.Parameters.Ioctl.Output.Offset = 0LL;
  this->m_CompletionParams.Parameters.Ioctl.Output.Length = 0LL;
  this->m_CompletionParams.Size = 72;
  this->m_CompletionParams.Type = WdfRequestTypeNoFormat;
}
