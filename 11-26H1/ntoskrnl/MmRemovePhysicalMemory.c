/*
 * XREFs of MmRemovePhysicalMemory @ 0x14086D840
 * Callers:
 *     WheapClearPoison @ 0x14084EF00 (WheapClearPoison.c)
 * Callees:
 *     MiFindContiguousPagesEx @ 0x14028E660 (MiFindContiguousPagesEx.c)
 *     MiAcquireNonPagedResources @ 0x1402D6AD0 (MiAcquireNonPagedResources.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     MiReleaseNonPagedResourcesNotExposed @ 0x1403CCED8 (MiReleaseNonPagedResourcesNotExposed.c)
 *     MiFreeContiguousPages @ 0x1403CD758 (MiFreeContiguousPages.c)
 *     MiReferencePagePartition @ 0x1406F56DC (MiReferencePagePartition.c)
 *     MiRemoveBadPages @ 0x1406F6410 (MiRemoveBadPages.c)
 *     MiReturnBadPagesToBadList @ 0x1406F6894 (MiReturnBadPagesToBadList.c)
 *     MiAddRangeToPartitionTree @ 0x14070CED0 (MiAddRangeToPartitionTree.c)
 *     MiDeletePartitionPageNodes @ 0x14070D7B4 (MiDeletePartitionPageNodes.c)
 *     MiRemovePhysicalMemory @ 0x14086D13C (MiRemovePhysicalMemory.c)
 *     MiInsertPartitionPages @ 0x1408825C4 (MiInsertPartitionPages.c)
 *     MiSpecialPurposeMemoryRemoved @ 0x140885030 (MiSpecialPurposeMemoryRemoved.c)
 */

NTSTATUS __stdcall MmRemovePhysicalMemory(PPHYSICAL_ADDRESS StartAddress, PLARGE_INTEGER NumberOfBytes)
{
  unsigned __int64 QuadPart; // rsi
  unsigned __int64 v3; // rdi
  bool v4; // r15
  ULONG_PTR v5; // rsi
  int v6; // r12d
  NTSTATUS inserted; // ebx
  int v8; // eax
  ULONG *v9; // r14
  int ContiguousPages; // eax
  int v12; // ecx
  int v13; // [rsp+20h] [rbp-59h]
  LONGLONG *v14; // [rsp+70h] [rbp-9h] BYREF
  __int128 v15; // [rsp+78h] [rbp-1h]
  int v16; // [rsp+88h] [rbp+Fh]
  int v17; // [rsp+8Ch] [rbp+13h]
  LONGLONG v18; // [rsp+E0h] [rbp+67h] BYREF
  PLARGE_INTEGER v19; // [rsp+E8h] [rbp+6Fh]
  ULONG *v20; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v21; // [rsp+F8h] [rbp+7Fh] BYREF

  v19 = NumberOfBytes;
  QuadPart = StartAddress->QuadPart;
  v3 = (unsigned __int64)NumberOfBytes->QuadPart >> 12;
  v18 = StartAddress->QuadPart;
  v21 = 0LL;
  v20 = 0LL;
  v4 = (v18 & 1) != 0 && (v18 & 0xFFF) != 0;
  if ( v4 )
  {
    LODWORD(v18) = v18 & 0xFFFFFFFE;
    QuadPart = v18;
  }
  v5 = QuadPart >> 12;
  v6 = 0;
  if ( v5 >= v5 + v3 )
    return -1073741585;
  v8 = MiReferencePagePartition(48 * v5 - 0x220000000000LL, 0, &v20);
  v9 = v20;
  inserted = v8;
  if ( v8 >= 0 )
  {
    if ( v4 )
    {
      if ( v20 != &MiSystemPartition )
      {
        inserted = -1073741637;
        goto LABEL_21;
      }
      ContiguousPages = MiRemoveBadPages(v20, v5, v3);
    }
    else
    {
      if ( (int)MiAcquireNonPagedResources(v20, v3, 0LL, 8LL) < 0 )
      {
        inserted = -1073741670;
        goto LABEL_21;
      }
      v6 = 1;
      ContiguousPages = MiFindContiguousPagesEx(
                          (__int64)v9,
                          v5,
                          v5 + v3 - 1,
                          0LL,
                          v13,
                          v3,
                          1,
                          0x80000000,
                          255,
                          739246080,
                          1,
                          0LL,
                          0LL,
                          &v21);
    }
    inserted = ContiguousPages;
    if ( ContiguousPages >= 0 )
    {
      if ( v9 == &MiSystemPartition )
      {
        inserted = MiRemovePhysicalMemory(v5, v3, 2097184);
        if ( inserted >= 0 )
        {
LABEL_16:
          v19->QuadPart = v3 << 12;
          goto LABEL_21;
        }
LABEL_29:
        if ( v4 )
          MiReturnBadPagesToBadList(v5, v3);
        else
          MiFreeContiguousPages(v5, v3, 32);
        goto LABEL_21;
      }
      v17 = 0;
      v18 = 0LL;
      if ( (unsigned int)MiAddRangeToPartitionTree((unsigned __int64 *)&v18, v5, v3, 2) )
      {
        v12 = 519;
        v14 = &v18;
        if ( (v9[1] & 0x20) != 0 )
          v12 = 775;
        v16 = v12;
        v15 = 0LL;
        inserted = MiInsertPartitionPages(v9, &MiSystemPartition, &v14, v3);
        MiDeletePartitionPageNodes((unsigned __int64 *)&v18);
        if ( inserted >= 0 )
        {
          if ( (v9[1] & 0x20) != 0 )
            MiSpecialPurposeMemoryRemoved(v9);
          goto LABEL_16;
        }
        goto LABEL_29;
      }
      inserted = -1073741670;
    }
    if ( v6 )
      MiReleaseNonPagedResourcesNotExposed((__int64)v9, v3);
  }
LABEL_21:
  if ( v9 )
    PsDereferencePartition(*((_QWORD *)v9 + 32));
  return inserted;
}
