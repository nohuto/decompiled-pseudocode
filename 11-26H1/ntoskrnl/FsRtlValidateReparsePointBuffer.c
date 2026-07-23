/*
 * XREFs of FsRtlValidateReparsePointBuffer @ 0x14046D2C0
 * Callers:
 *     IopValidateJunctionTarget @ 0x140B62430 (IopValidateJunctionTarget.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall FsRtlValidateReparsePointBuffer(ULONG BufferLength, PREPARSE_DATA_BUFFER ReparseBuffer)
{
  signed int ReparseTag; // eax
  unsigned int ReparseDataLength; // ecx
  unsigned int v5; // r10d
  unsigned int v6; // r9d
  NTSTATUS result; // eax
  USHORT v8; // r8
  USHORT v9; // ax
  USHORT SubstituteNameOffset; // cx
  USHORT SubstituteNameLength; // r9
  USHORT PrintNameOffset; // bx
  USHORT PrintNameLength; // r11

  if ( BufferLength - 8 > 0x3FF8 )
    return -1073741192;
  ReparseTag = ReparseBuffer->ReparseTag;
  if ( (ReparseBuffer->ReparseTag & 0xFFF0000) != 0
    || (unsigned int)ReparseTag <= 2
    || (ReparseTag & 0xC0000000) == 0x40000000
    || (ReparseTag & 0x30000000) == 0x30000000
    || ReparseTag == -1610612711 )
  {
    return -1073741194;
  }
  ReparseDataLength = ReparseBuffer->ReparseDataLength;
  v5 = ReparseDataLength + 8;
  v6 = ReparseDataLength + 24;
  if ( ReparseDataLength + 8 != BufferLength )
  {
    if ( v6 != BufferLength )
      return -1073741192;
LABEL_15:
    if ( ReparseTag >= 0
      && !ReparseBuffer->AppExecLinkReparseBuffer.StringCount
      && !ReparseBuffer->SymbolicLinkReparseBuffer.PrintNameOffset
      && !ReparseBuffer->SymbolicLinkReparseBuffer.PrintNameLength
      && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 8)
      && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 9)
      && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 10)
      && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 11)
      && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 12)
      && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 13)
      && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 14)
      && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 15)
      || ReparseTag == -1610612733 )
    {
      return -1073741192;
    }
    if ( ReparseTag != -1610612724 )
      return 0;
    return -1073741192;
  }
  if ( ReparseTag >= 0 )
    return -1073741192;
  if ( v6 == BufferLength )
    goto LABEL_15;
  if ( ReparseTag != -1610612733 )
  {
    if ( ReparseTag != -1610612724 )
      return 0;
    if ( ReparseDataLength < 0xC )
      return -1073741192;
    SubstituteNameOffset = ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameOffset;
    SubstituteNameLength = ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameLength;
    if ( (unsigned __int16)(SubstituteNameLength + SubstituteNameOffset) >= SubstituteNameOffset )
    {
      PrintNameOffset = ReparseBuffer->SymbolicLinkReparseBuffer.PrintNameOffset;
      PrintNameLength = ReparseBuffer->SymbolicLinkReparseBuffer.PrintNameLength;
      if ( (unsigned __int16)(PrintNameOffset + PrintNameLength) >= PrintNameOffset )
      {
        if ( v5 >= (unsigned int)(unsigned __int16)(SubstituteNameLength + SubstituteNameOffset) + 20
          && v5 >= (unsigned int)(unsigned __int16)(PrintNameOffset + PrintNameLength) + 20
          && SubstituteNameLength
          && PrintNameLength )
        {
          result = 0;
          if ( (((unsigned __int8)PrintNameOffset | (unsigned __int8)(PrintNameLength | SubstituteNameLength | SubstituteNameOffset)) & 1) != 0 )
            return -1073741192;
          return result;
        }
        return -1073741192;
      }
    }
    return -1073741675;
  }
  if ( ReparseDataLength < 8 )
    return -1073741192;
  v8 = ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameLength;
  v9 = ReparseBuffer->SymbolicLinkReparseBuffer.PrintNameLength + v8;
  if ( v9 < v8 || (unsigned __int16)(v8 + 2) < v8 )
    return -1073741675;
  if ( ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameOffset
    || ReparseBuffer->SymbolicLinkReparseBuffer.PrintNameOffset != v8 + 2 )
  {
    return -1073741192;
  }
  if ( ReparseDataLength == v9 + 12 )
    return 0;
  return -1073741192;
}
