/*
 * XREFs of NdisAdvanceNetBufferDataStart @ 0x140040120
 * Callers:
 *     NdisAllocateFragmentNetBufferList @ 0x14002AEB0 (NdisAllocateFragmentNetBufferList.c)
 *     NdisRetreatNetBufferListDataStart @ 0x14003FDD0 (NdisRetreatNetBufferListDataStart.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __stdcall NdisAdvanceNetBufferDataStart(
        PNET_BUFFER NetBuffer,
        ULONG DataOffsetDelta,
        BOOLEAN FreeMdl,
        NET_BUFFER_FREE_MDL_HANDLER FreeMdlHandler)
{
  void (__fastcall *v5)(struct _NET_BUFFER *, _MDL *); // rdi
  unsigned int v6; // ecx
  struct _NET_BUFFER *MdlChain; // rcx
  _MDL *CurrentMdl; // rax
  unsigned int i; // ecx
  _MDL *v10; // rdx
  _MDL *v11; // rax
  unsigned int DataOffset; // r8d
  unsigned int v13; // eax
  ULONG ByteCount; // edx

  v5 = (void (__fastcall *)(struct _NET_BUFFER *, _MDL *))ndisFreeMdlInternal;
  v6 = DataOffsetDelta + NetBuffer->DataOffset;
  NetBuffer->DataLength -= DataOffsetDelta;
  NetBuffer->DataOffset = v6;
  MdlChain = (struct _NET_BUFFER *)NetBuffer->MdlChain;
  if ( FreeMdlHandler )
    v5 = (void (__fastcall *)(struct _NET_BUFFER *, _MDL *))FreeMdlHandler;
  if ( FreeMdl )
  {
    v10 = NetBuffer->MdlChain;
    if ( MdlChain )
    {
      v11 = NetBuffer->MdlChain;
      do
      {
        DataOffset = NetBuffer->DataOffset;
        v10 = v11;
        if ( MdlChain->DataOffset > DataOffset )
          break;
        if ( MdlChain == &NetBuffer[1] )
          break;
        NetBuffer->MdlChain = (_MDL *)MdlChain->Link.Alignment;
        NetBuffer->DataOffset = DataOffset - MdlChain->DataOffset;
        v5(MdlChain, v11);
        MdlChain = (struct _NET_BUFFER *)NetBuffer->MdlChain;
        v11 = (_MDL *)MdlChain;
        v10 = (_MDL *)MdlChain;
      }
      while ( MdlChain );
    }
    v13 = NetBuffer->DataOffset;
    NetBuffer->Link.Region = (unsigned __int64)v10;
    NetBuffer->CurrentMdlOffset = v13;
  }
  else
  {
    CurrentMdl = NetBuffer->CurrentMdl;
    for ( i = DataOffsetDelta + NetBuffer->CurrentMdlOffset; CurrentMdl; i -= ByteCount )
    {
      ByteCount = CurrentMdl->ByteCount;
      if ( ByteCount > i )
        break;
      CurrentMdl = CurrentMdl->Next;
    }
    NetBuffer->Link.Region = (unsigned __int64)CurrentMdl;
    NetBuffer->CurrentMdlOffset = i;
  }
}
