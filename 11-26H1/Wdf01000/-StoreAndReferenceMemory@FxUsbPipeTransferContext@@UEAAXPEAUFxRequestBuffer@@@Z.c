/*
 * XREFs of ?StoreAndReferenceMemory@FxUsbPipeTransferContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x14005FB40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 */

void __fastcall FxUsbPipeTransferContext::StoreAndReferenceMemory(
        FxUsbPipeTransferContext *this,
        FxRequestBuffer *Buffer)
{
  IFxMemory *Memory; // rax
  char *p_TransferBuffer; // rsi
  _URB_BULK_OR_INTERRUPT_TRANSFER *m_Urb; // r15
  char *p_TransferBufferMDL; // r14
  unsigned int Length; // eax
  _MDL *m_PartialMdl; // rcx
  __int64 v10; // r8
  char *v11; // rbp
  _WDFMEMORY_OFFSET *Offsets; // rdx
  _WDFMEMORY_OFFSET *v13; // rax
  unsigned __int64 BufferLength; // rcx
  char v15; // [rsp+50h] [rbp+8h] BYREF

  memset(this->m_Urb, 0, sizeof(_URB_BULK_OR_INTERRUPT_TRANSFER));
  this->m_Urb->Hdr.Function = 9;
  this->m_Urb->Hdr.Length = 128;
  if ( Buffer->DataType == FxRequestBufferMemory )
  {
    v10 = 130LL;
  }
  else
  {
    if ( Buffer->DataType != FxRequestBufferReferencedMdl )
    {
      Memory = 0LL;
      goto LABEL_4;
    }
    v10 = 135LL;
  }
  Buffer->u.Memory.Memory->AddRef(
    Buffer->u.Memory.Memory,
    this,
    v10,
    "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
  Memory = Buffer->u.Memory.Memory;
LABEL_4:
  this->m_RequestMemory = Memory;
  p_TransferBuffer = &v15;
  m_Urb = this->m_Urb;
  p_TransferBufferMDL = &v15;
  if ( m_Urb != (_URB_BULK_OR_INTERRUPT_TRANSFER *)-40LL )
    p_TransferBuffer = (char *)&m_Urb->TransferBuffer;
  if ( m_Urb != (_URB_BULK_OR_INTERRUPT_TRANSFER *)-48LL )
    p_TransferBufferMDL = (char *)&m_Urb->TransferBufferMDL;
  switch ( Buffer->DataType )
  {
    case FxRequestBufferMemory:
      v11 = (char *)Buffer->u.Memory.Memory->GetBuffer(Buffer->u.Memory.Memory);
      Length = Buffer->u.Memory.Memory->GetBufferSize(Buffer->u.Memory.Memory);
      Offsets = Buffer->u.Memory.Offsets;
      if ( Offsets )
      {
        BufferLength = Offsets->BufferLength;
        if ( !BufferLength )
          LODWORD(BufferLength) = Length;
        Length = BufferLength;
        if ( Offsets->BufferOffset )
          v11 += Offsets->BufferOffset;
      }
      *(_QWORD *)p_TransferBufferMDL = 0LL;
      *(_QWORD *)p_TransferBuffer = v11;
      break;
    case FxRequestBufferMdl:
      *(_QWORD *)p_TransferBufferMDL = Buffer->u.Memory.Memory;
      *(_QWORD *)p_TransferBuffer = 0LL;
      goto LABEL_12;
    case FxRequestBufferBuffer:
      *(_QWORD *)p_TransferBufferMDL = 0LL;
      *(_QWORD *)p_TransferBuffer = Buffer->u.Memory.Memory;
LABEL_12:
      Length = Buffer->u.Mdl.Length;
      break;
    case FxRequestBufferReferencedMdl:
      *(_QWORD *)p_TransferBufferMDL = Buffer->u.RefMdl.Mdl;
      *(_QWORD *)p_TransferBuffer = 0LL;
      v13 = Buffer->u.Memory.Offsets;
      if ( v13 && v13->BufferLength )
        Length = v13->BufferLength;
      else
        Length = Buffer->u.Memory.Memory->GetBufferSize(Buffer->u.Memory.Memory);
      break;
    default:
      *(_QWORD *)p_TransferBufferMDL = 0LL;
      Length = 0;
      *(_QWORD *)p_TransferBuffer = 0LL;
      break;
  }
  m_Urb->TransferBufferLength = Length;
  m_PartialMdl = this->m_PartialMdl;
  if ( m_PartialMdl )
    this->m_Urb->TransferBufferMDL = m_PartialMdl;
}
