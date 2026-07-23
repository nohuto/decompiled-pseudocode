/*
 * XREFs of MiAllocatePartitionPhysicalPages @ 0x140B632C4
 * Callers:
 *     MiReleasePartitionHugeIoSpace @ 0x1406F2314 (MiReleasePartitionHugeIoSpace.c)
 *     MmManagePartitionMoveMemory @ 0x1408834C8 (MmManagePartitionMoveMemory.c)
 * Callees:
 *     MiReleaseNonPagedResourcesNotExposed @ 0x1403CCED8 (MiReleaseNonPagedResourcesNotExposed.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiPartitionTransferAllocateFinish @ 0x140882BEC (MiPartitionTransferAllocateFinish.c)
 *     MiPartitionTransferAllocateHugeRange @ 0x140882D00 (MiPartitionTransferAllocateHugeRange.c)
 *     MiPartitionTransferAllocateLargePages @ 0x140882E30 (MiPartitionTransferAllocateLargePages.c)
 *     MiPartitionTransferAllocateSmallPages @ 0x140882FB4 (MiPartitionTransferAllocateSmallPages.c)
 *     MiPartitionTransferAllocatePrepare @ 0x140B633E0 (MiPartitionTransferAllocatePrepare.c)
 */

__int64 __fastcall MiAllocatePartitionPhysicalPages(ULONG *a1, __int64 a2, __int64 a3, int a4, int a5)
{
  ULONG *v9; // rax
  __int64 result; // rax
  int SmallPages; // ebx
  __int64 v12; // rcx
  __int64 v13; // rdx
  int HugeRange; // eax
  unsigned __int64 v15; // rdx
  __int64 v16[2]; // [rsp+20h] [rbp-81h] BYREF
  __int64 v17; // [rsp+30h] [rbp-71h]
  int v18; // [rsp+38h] [rbp-69h]
  int v19; // [rsp+3Ch] [rbp-65h]
  _BYTE v20[32]; // [rsp+40h] [rbp-61h] BYREF
  __int64 v21; // [rsp+60h] [rbp-41h]
  __int64 v22; // [rsp+68h] [rbp-39h]
  int v23; // [rsp+70h] [rbp-31h]

  memset_0(v20, 0, 0x78uLL);
  v16[1] = a2;
  v9 = &MiSystemPartition;
  v17 = a3;
  if ( a1 )
    v9 = a1;
  v18 = a4;
  v16[0] = (__int64)v9;
  v19 = a5;
  result = MiPartitionTransferAllocatePrepare(v16);
  SmallPages = result;
  if ( (int)result >= 0 )
  {
    while ( 1 )
    {
      v12 = v21;
      v13 = v17;
      if ( v21 == v17 || (unsigned __int64)(v17 - v21) < 0x200 )
        break;
      if ( (a5 & 0x200) != 0 )
        HugeRange = MiPartitionTransferAllocateHugeRange((__int64)v16);
      else
        HugeRange = MiPartitionTransferAllocateLargePages((__int64)v16);
      SmallPages = HugeRange;
      if ( HugeRange < 0 )
      {
        v12 = v21;
        v13 = v17;
        break;
      }
    }
    if ( v12 != a3 )
    {
      if ( (v19 & 0x200) == 0 )
      {
        v15 = v13 - v22 - v12;
        if ( v15 )
          MiReleaseNonPagedResourcesNotExposed(v16[0], v15);
      }
      if ( v23 )
      {
        if ( SmallPages >= 0 )
          SmallPages = -1073741670;
      }
      else
      {
        SmallPages = MiPartitionTransferAllocateSmallPages((__int64)v16);
      }
    }
    return MiPartitionTransferAllocateFinish((__int64)v16, SmallPages);
  }
  return result;
}
