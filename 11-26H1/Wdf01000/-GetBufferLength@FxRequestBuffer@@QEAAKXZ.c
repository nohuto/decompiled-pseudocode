/*
 * XREFs of ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x140013D00
 * Callers:
 *     imp_WdfUsbTargetPipeFormatRequestForRead @ 0x140012C00 (imp_WdfUsbTargetPipeFormatRequestForRead.c)
 *     ?_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUWDFMEMORY__@@PEAU_WDFMEMORY_OFFSET@@K@Z @ 0x140012FF4 (-_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUW.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x14001339C (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1400137E8 (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForString @ 0x14009D850 (imp_WdfUsbTargetDeviceFormatRequestForString.c)
 *     ?FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z @ 0x1400A04FC (-FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

unsigned __int64 __fastcall FxRequestBuffer::GetBufferLength(FxRequestBuffer *this)
{
  _WDFMEMORY_OFFSET *Offsets; // rax
  unsigned __int64 result; // rax
  unsigned __int64 BufferOffset; // rbx

  if ( this->DataType == FxRequestBufferMdl )
    return this->u.Mdl.Length;
  if ( this->DataType != FxRequestBufferMemory )
  {
    if ( this->DataType == FxRequestBufferBuffer )
      return this->u.Mdl.Length;
    if ( this->DataType != FxRequestBufferReferencedMdl )
      return 0LL;
  }
  Offsets = this->u.Memory.Offsets;
  if ( !Offsets )
    return this->u.Memory.Memory->GetBufferSize(this->u.Memory.Memory);
  BufferOffset = Offsets->BufferOffset;
  if ( !Offsets->BufferOffset )
  {
    if ( Offsets->BufferLength )
      return Offsets->BufferLength;
    return this->u.Memory.Memory->GetBufferSize(this->u.Memory.Memory);
  }
  result = Offsets->BufferLength;
  if ( !result )
    return (unsigned int)this->u.Memory.Memory->GetBufferSize(this->u.Memory.Memory) - (unsigned int)BufferOffset;
  return result;
}
