/*
 * XREFs of IoCheckEaBufferValidity @ 0x140AA4F50
 * Callers:
 *     NtSetEaFile @ 0x140980DA0 (NtSetEaFile.c)
 *     IopCreateFile @ 0x140984B18 (IopCreateFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoCheckEaBufferValidity(PFILE_FULL_EA_INFORMATION EaBuffer, ULONG EaLength, PULONG ErrorOffset)
{
  ULONG v3; // r10d
  PFILE_FULL_EA_INFORMATION v4; // r9
  __int64 EaNameLength; // rdx
  ULONG v6; // r11d
  __int64 NextEntryOffset; // rdx

  v3 = EaLength;
  v4 = EaBuffer;
  if ( EaLength > 0x7FFFFFFF )
  {
    *ErrorOffset = 0;
  }
  else
  {
    while ( v3 >= 8 )
    {
      EaNameLength = v4->EaNameLength;
      v6 = v4->EaValueLength + EaNameLength + 9;
      if ( v3 < v6 || v4->EaName[EaNameLength] )
        break;
      NextEntryOffset = v4->NextEntryOffset;
      if ( !(_DWORD)NextEntryOffset )
        return 0;
      if ( ((v6 + 3) & 0xFFFFFFFC) != (_DWORD)NextEntryOffset
        || (int)NextEntryOffset < 0
        || v3 < (unsigned int)NextEntryOffset )
      {
        break;
      }
      v3 -= NextEntryOffset;
      v4 = (PFILE_FULL_EA_INFORMATION)((char *)v4 + NextEntryOffset);
    }
    *ErrorOffset = (_DWORD)v4 - (_DWORD)EaBuffer;
  }
  return -2147483628;
}
