/*
 * XREFs of IoCheckQuotaBufferValidity @ 0x140798B10
 * Callers:
 *     IopSetEaOrQuotaInformationFile @ 0x140797D78 (IopSetEaOrQuotaInformationFile.c)
 * Callees:
 *     RtlLengthSid @ 0x140480CA0 (RtlLengthSid.c)
 *     RtlValidSid @ 0x1408FFE80 (RtlValidSid.c)
 */

NTSTATUS __stdcall IoCheckQuotaBufferValidity(
        PFILE_QUOTA_INFORMATION QuotaBuffer,
        ULONG QuotaLength,
        PULONG ErrorOffset)
{
  ULONG v4; // edi
  int v5; // esi
  PFILE_QUOTA_INFORMATION v6; // rbx
  NTSTATUS result; // eax
  ULONG v8; // eax
  unsigned int v9; // ecx
  __int64 NextEntryOffset; // rax

  v4 = QuotaLength;
  v5 = (int)QuotaBuffer;
  v6 = QuotaBuffer;
  if ( QuotaLength > 0x7FFFFFFF )
  {
    result = -2147483628;
LABEL_5:
    *ErrorOffset = 0;
    return result;
  }
  if ( ((unsigned __int8)QuotaBuffer & 7) != 0 )
  {
    result = -2147483646;
    goto LABEL_5;
  }
  while ( v4 >= 0x34 )
  {
    if ( !RtlValidSid(&v6->Sid) )
      break;
    v8 = RtlLengthSid(&v6->Sid);
    v9 = v8 + 40;
    if ( v4 < v8 + 40 || v6->SidLength != v8 )
      break;
    NextEntryOffset = v6->NextEntryOffset;
    if ( !(_DWORD)NextEntryOffset )
      return 0;
    if ( v9 > (unsigned int)NextEntryOffset
      || (NextEntryOffset & 7) != 0
      || (int)NextEntryOffset < 0
      || v4 < (unsigned int)NextEntryOffset )
    {
      break;
    }
    v4 -= NextEntryOffset;
    v6 = (PFILE_QUOTA_INFORMATION)((char *)v6 + NextEntryOffset);
  }
  result = -1073741210;
  *ErrorOffset = (_DWORD)v6 - v5;
  return result;
}
