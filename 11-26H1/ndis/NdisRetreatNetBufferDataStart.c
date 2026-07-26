/*
 * XREFs of NdisRetreatNetBufferDataStart @ 0x1400407B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

NDIS_STATUS __stdcall NdisRetreatNetBufferDataStart(
        PNET_BUFFER NetBuffer,
        ULONG DataOffsetDelta,
        ULONG DataBackFill,
        NET_BUFFER_ALLOCATE_MDL_HANDLER AllocateMdlHandler)
{
  unsigned int DataOffset; // ecx
  unsigned int v7; // ecx
  _MDL *MdlChain; // rdx
  ULONG ByteCount; // eax
  NDIS_STATUS result; // eax
  __int64 (__fastcall *v11)(ULONG *); // rax
  _MDL *v12; // rax
  ULONG v13; // eax
  ULONG v14; // [rsp+38h] [rbp+10h] BYREF

  DataOffset = NetBuffer->DataOffset;
  if ( DataOffset >= DataOffsetDelta )
  {
    NetBuffer->DataLength += DataOffsetDelta;
    v7 = DataOffset - DataOffsetDelta;
    MdlChain = NetBuffer->MdlChain;
    for ( NetBuffer->DataOffset = v7; MdlChain; v7 -= ByteCount )
    {
      ByteCount = MdlChain->ByteCount;
      if ( v7 < ByteCount )
        break;
      MdlChain = MdlChain->Next;
    }
    goto LABEL_4;
  }
  v14 = DataBackFill + DataOffsetDelta - DataOffset;
  v11 = (__int64 (__fastcall *)(ULONG *))ndisAllocateMdlInternal;
  if ( AllocateMdlHandler )
    v11 = (__int64 (__fastcall *)(ULONG *))AllocateMdlHandler;
  v12 = (_MDL *)v11(&v14);
  MdlChain = v12;
  if ( v12 )
  {
    v12->Next = NetBuffer->MdlChain;
    v13 = v14 - DataOffsetDelta;
    NetBuffer->MdlChain = MdlChain;
    NetBuffer->DataOffset += v13;
    NetBuffer->DataLength += DataOffsetDelta;
    v7 = NetBuffer->DataOffset;
LABEL_4:
    NetBuffer->Link.Region = (unsigned __int64)MdlChain;
    result = 0;
    NetBuffer->CurrentMdlOffset = v7;
    return result;
  }
  return -1073741670;
}
