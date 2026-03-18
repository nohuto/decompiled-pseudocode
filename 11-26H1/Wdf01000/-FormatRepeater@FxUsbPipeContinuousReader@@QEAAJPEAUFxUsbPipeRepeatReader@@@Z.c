/*
 * XREFs of ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x14002E510
 * Callers:
 *     ?GotoStartState@FxUsbPipe@@UEAAJPEAU_LIST_ENTRY@@E@Z @ 0x140020FF0 (-GotoStartState@FxUsbPipe@@UEAAJPEAU_LIST_ENTRY@@E@Z.c)
 *     ?Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1400235B0 (-Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 *     ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x14002EA78 (-ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z.c)
 * Callees:
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1400137E8 (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140026990 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z @ 0x14002DA50 (-Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 */

__int64 __fastcall FxUsbPipeContinuousReader::FormatRepeater(
        FxUsbPipeContinuousReader *this,
        FxUsbPipeRepeatReader *Repeater)
{
  FxRequest *Request; // r14
  FxRequestContext *m_RequestContext; // rcx
  IFxMemory *m_RequestMemory; // rcx
  IFxMemory *v7; // rsi
  unsigned __int64 (__fastcall *GetBufferSize)(IFxMemory *); // rdi
  void *v9; // rbx
  size_t v10; // rax
  IFxMemory *v11; // rbx
  _MDL *v12; // rax
  int v13; // ebx
  FxRequestContext *v14; // rcx
  unsigned __int64 v15; // rax
  FxRequestContext *v17; // rax
  _WDF_REQUEST_REUSE_PARAMS params; // [rsp+20h] [rbp-40h] BYREF
  FxRequestBuffer buf; // [rsp+38h] [rbp-28h] BYREF
  FxMemoryObject *pMemory; // [rsp+90h] [rbp+30h] BYREF

  Request = Repeater->Request;
  pMemory = 0LL;
  memset(&buf.u, 0, sizeof(buf.u));
  m_RequestContext = Request->m_RequestContext;
  if ( m_RequestContext )
  {
    m_RequestMemory = m_RequestContext->m_RequestMemory;
    if ( m_RequestMemory )
      m_RequestMemory->Delete(m_RequestMemory);
  }
  *(_QWORD *)(&params.Status + 1) = 0LL;
  HIDWORD(params.NewIrp) = 0;
  *(_QWORD *)&params.Size = 24LL;
  params.Status = -1073741637;
  FxRequest::Reuse(Request, &params);
  if ( this->m_Lookaside->Allocate(this->m_Lookaside, &pMemory) < 0 )
  {
    v17 = Request->m_RequestContext;
    if ( v17 )
      v17->m_RequestMemory = 0LL;
    return 3221225626LL;
  }
  else
  {
    v7 = &pMemory->IFxMemory;
    GetBufferSize = pMemory->GetBufferSize;
    v9 = (void *)pMemory->GetBuffer(&pMemory->IFxMemory);
    v10 = GetBufferSize(v7);
    memset(v9, 0, v10);
    if ( pMemory )
      v11 = &pMemory->IFxMemory;
    else
      v11 = 0LL;
    v12 = v11->GetMdl(v11);
    buf.u.Memory.Memory = v11;
    buf.u.Memory.Offsets = &this->m_Offsets;
    if ( v12 )
    {
      buf.DataType = FxRequestBufferReferencedMdl;
      buf.u.RefMdl.Mdl = v12;
    }
    else
    {
      buf.DataType = FxRequestBufferMemory;
    }
    v13 = FxUsbPipe::FormatTransferRequest(this->m_Pipe, Request, &buf, 3u);
    if ( v13 < 0 )
    {
      if ( !Request->m_RequestContext )
        FxObject::DeleteFromFailedCreate(pMemory);
    }
    else
    {
      v14 = Request->m_RequestContext;
      v14->m_CompletionParams.Type = WdfRequestTypeUsb;
      v14->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)&v14[1];
      HIDWORD(v14[1].__vftable) = 6;
      if ( pMemory->m_ObjectSize )
        v15 = (unsigned __int64)pMemory ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v15 = 0LL;
      *(_QWORD *)&v14[1].m_CompletionParams.Size = v15;
      Request->m_CompletionRoutine.m_Completion = FxUsbPipeContinuousReader::_FxUsbPipeRequestComplete;
      Request->m_TargetCompletionContext = Repeater;
    }
    return (unsigned int)v13;
  }
}
