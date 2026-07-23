/*
 * XREFs of AslpFileMappingGetFileKind @ 0x140B40C0C
 * Callers:
 *     AslFileMappingCreateFromImageView @ 0x14088EC98 (AslFileMappingCreateFromImageView.c)
 *     AslFileMappingEnsure @ 0x14088EDE8 (AslFileMappingEnsure.c)
 *     AslFileMappingEnsureMappedAs @ 0x14088EEB8 (AslFileMappingEnsureMappedAs.c)
 *     AslpFileLargeAssignViewAndDelete @ 0x140895ABC (AslpFileLargeAssignViewAndDelete.c)
 *     AslFileMappingCreate @ 0x140A37E7C (AslFileMappingCreate.c)
 * Callees:
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileMappingGetFileKind(_QWORD *a1, int *a2)
{
  unsigned __int64 v4; // rax
  unsigned int v5; // ebx
  unsigned __int64 v6; // r14
  int v7; // edi
  bool IsUserAddress; // al
  bool v9; // r12
  unsigned __int16 UShortFromUser; // ax
  unsigned int v11; // eax
  unsigned int *v12; // r14
  unsigned int ULongFromUser; // r15d
  __int16 v14; // ax

  v4 = a1[2];
  v5 = 0;
  if ( !v4 || !a1[4] )
  {
    *a2 = 1;
    return 0LL;
  }
  if ( v4 < 0x40 )
  {
    *a2 = 3;
    return 0LL;
  }
  v6 = a1[3];
  v7 = 3;
  IsUserAddress = MmIsUserAddress(v6);
  v9 = IsUserAddress;
  if ( !v6 || v6 == -1LL )
  {
    v5 = -1073741811;
    AslLogCallPrintf(1LL, (__int64)"AslpFileMappingGetFileKind");
  }
  else
  {
    if ( IsUserAddress )
      UShortFromUser = RtlReadUShortFromUser((unsigned __int16 *)v6);
    else
      UShortFromUser = *(_WORD *)v6;
    if ( a1[2] >= 0x40uLL && UShortFromUser == 23117 )
    {
      v7 = 4;
      v11 = v9 ? RtlReadULongFromUser((unsigned int *)(v6 + 60)) : *(_DWORD *)(v6 + 60);
      if ( a1[2] >= (unsigned __int64)v11 + 4 )
      {
        v12 = (unsigned int *)(v11 + v6);
        if ( v9 )
        {
          ULongFromUser = RtlReadULongFromUser(v12);
          v14 = RtlReadUShortFromUser((unsigned __int16 *)v12);
        }
        else
        {
          ULongFromUser = *v12;
          v14 = *v12;
        }
        if ( ULongFromUser == 17744 )
        {
          v7 = 6;
        }
        else if ( v14 == 17742 )
        {
          v7 = 5;
        }
      }
    }
  }
  *a2 = v7;
  return v5;
}
