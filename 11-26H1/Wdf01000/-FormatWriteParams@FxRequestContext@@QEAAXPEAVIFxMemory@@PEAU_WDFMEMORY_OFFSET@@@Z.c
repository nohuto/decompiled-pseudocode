/*
 * XREFs of ?FormatWriteParams@FxRequestContext@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x14006BE00
 * Callers:
 *     FxIoTargetFormatIo @ 0x14002CCC8 (FxIoTargetFormatIo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxRequestContext::FormatWriteParams(
        FxRequestContext *this,
        IFxMemory *WriteMemory,
        _WDFMEMORY_OFFSET *WriteOffsets)
{
  unsigned __int64 BufferOffset; // rbx

  BufferOffset = 0LL;
  this->m_CompletionParams.Type = WdfRequestTypeWrite;
  if ( WriteMemory )
    this->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)WriteMemory->GetHandle(WriteMemory);
  if ( WriteOffsets )
    BufferOffset = WriteOffsets->BufferOffset;
  this->m_CompletionParams.Parameters.Write.Offset = BufferOffset;
}
