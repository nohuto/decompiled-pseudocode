/*
 * XREFs of BiEnumerateDiskPartitions @ 0x1408920E0
 * Callers:
 *     BiResolveLocate @ 0x140892F3C (BiResolveLocate.c)
 *     BiResolveLocateFileCallback @ 0x140893270 (BiResolveLocateFileCallback.c)
 * Callees:
 *     swprintf_s @ 0x14053B0E0 (swprintf_s.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     BiGetDriveLayoutBlock @ 0x1408922C0 (BiGetDriveLayoutBlock.c)
 *     BiResolveLocatePartitionCallback @ 0x140893368 (BiResolveLocatePartitionCallback.c)
 *     BiLogMessage @ 0x1409D490C (BiLogMessage.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiEnumerateDiskPartitions(unsigned int a1)
{
  int DriveLayoutBlock; // eax
  _DWORD *v3; // rbx
  unsigned int v4; // ebp
  __int64 v5; // rdi
  __int64 v7; // [rsp+20h] [rbp-C8h]
  PVOID P[2]; // [rsp+30h] [rbp-B8h] BYREF
  wchar_t Dst[56]; // [rsp+40h] [rbp-A8h] BYREF

  P[0] = 0LL;
  swprintf_s(Dst, 0x35uLL, L"\\Device\\Harddisk%lu\\Partition%lu", a1, 0LL);
  DriveLayoutBlock = BiGetDriveLayoutBlock(Dst, P, 0LL);
  v3 = P[0];
  v4 = DriveLayoutBlock;
  if ( DriveLayoutBlock >= 0 )
  {
    v5 = 0LL;
    if ( *((_DWORD *)P[0] + 1) )
    {
      do
      {
        if ( v3[36 * v5 + 18] )
        {
          LODWORD(v7) = v3[36 * v5 + 18];
          swprintf_s(Dst, 0x35uLL, L"\\Device\\Harddisk%lu\\Partition%lu", a1, v7);
          if ( (unsigned __int8)BiResolveLocatePartitionCallback(Dst) )
            break;
        }
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < v3[1] );
    }
  }
  else
  {
    BiLogMessage(
      3LL,
      L"BiEnumerateDiskPartitions: Failed to get DriveLayout for %ws. Status: %x",
      Dst,
      (unsigned int)DriveLayoutBlock);
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
  return v4;
}
