/*
 * XREFs of NdisQueryNetBufferPhysicalCount @ 0x140041600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall NdisQueryNetBufferPhysicalCount(PNET_BUFFER NetBuffer)
{
  _MDL *MdlChain; // rax
  ULONG v2; // r8d
  unsigned int DataLength; // r9d
  unsigned int i; // r10d
  ULONG ByteCount; // edx
  unsigned int v6; // ecx
  ULONG v7; // r11d
  unsigned __int64 v8; // rcx

  MdlChain = NetBuffer->MdlChain;
  v2 = 0;
  DataLength = NetBuffer->DataLength;
  for ( i = NetBuffer->DataOffset; MdlChain; i -= ByteCount )
  {
    ByteCount = MdlChain->ByteCount;
    if ( i < ByteCount )
      break;
    MdlChain = MdlChain->Next;
  }
  NetBuffer->Link.Region = (unsigned __int64)MdlChain;
  for ( NetBuffer->CurrentMdlOffset = i; MdlChain; v2 += v8 )
  {
    if ( !DataLength )
      break;
    v6 = MdlChain->ByteCount;
    if ( i )
    {
      v7 = i + DataLength;
      if ( v6 <= i + DataLength )
        v7 = MdlChain->ByteCount;
      DataLength += i - v7;
      i = 0;
    }
    else
    {
      v7 = DataLength;
      if ( v6 <= DataLength )
        v7 = MdlChain->ByteCount;
      DataLength -= v7;
    }
    if ( v6 )
      v8 = (((LODWORD(MdlChain->StartVa) + MdlChain->ByteOffset) & 0xFFF) + (unsigned __int64)v7 + 4095) >> 12;
    else
      LODWORD(v8) = 1;
    MdlChain = MdlChain->Next;
  }
  return v2;
}
