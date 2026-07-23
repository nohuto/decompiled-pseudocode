/*
 * XREFs of BiGetDriveLayoutBlock @ 0x1408986BC
 * Callers:
 *     BiEnumerateDiskPartitions @ 0x1408984DC (BiEnumerateDiskPartitions.c)
 *     BiGetNtPartitionPathCallback @ 0x1408988F0 (BiGetNtPartitionPathCallback.c)
 * Callees:
 *     BiGetPhysicalDriveName @ 0x140898CE0 (BiGetPhysicalDriveName.c)
 *     BiGetDriveLayoutInformation @ 0x140B151FC (BiGetDriveLayoutInformation.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiGetDriveLayoutBlock(const WCHAR *a1, PVOID *a2, __int64 a3)
{
  int DriveLayoutInformation; // edi
  _DWORD *v7; // rax
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  P = 0LL;
  *a2 = 0LL;
  if ( a3 )
  {
    *(_OWORD *)a3 = 0LL;
    *(_OWORD *)(a3 + 16) = 0LL;
    *(_QWORD *)(a3 + 32) = 0LL;
  }
  DriveLayoutInformation = BiGetDriveLayoutInformation(a1);
  if ( DriveLayoutInformation >= 0
    || (DriveLayoutInformation = BiGetPhysicalDriveName(a1, &P), DriveLayoutInformation >= 0)
    && (DriveLayoutInformation = BiGetDriveLayoutInformation((PCWSTR)P),
        ExFreePoolWithTag(P, 0x4B444342u),
        DriveLayoutInformation >= 0) )
  {
    if ( !a3 )
      return (unsigned int)DriveLayoutInformation;
    v7 = *a2;
    *(_DWORD *)a3 = 0;
    if ( !*v7 )
    {
      *(_DWORD *)(a3 + 4) = 1;
      *(_DWORD *)(a3 + 8) = v7[2];
      return (unsigned int)DriveLayoutInformation;
    }
    if ( *v7 == 1 )
    {
      *(_DWORD *)(a3 + 4) = 0;
      *(_OWORD *)(a3 + 8) = *(_OWORD *)(v7 + 2);
      return (unsigned int)DriveLayoutInformation;
    }
    DriveLayoutInformation = -1073741811;
  }
  if ( *a2 )
  {
    ExFreePoolWithTag(*a2, 0x4B444342u);
    *a2 = 0LL;
  }
  return (unsigned int)DriveLayoutInformation;
}
