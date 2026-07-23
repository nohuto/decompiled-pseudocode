/*
 * XREFs of SdbpReadMappedData @ 0x1409D4FE8
 * Callers:
 *     SdbOpenDatabaseEx @ 0x140887068 (SdbOpenDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x14088D444 (SdbpOpenCompressedDatabase.c)
 *     SdbpReadTagData @ 0x1409D4B40 (SdbpReadTagData.c)
 *     SdbGetTagDataSize @ 0x1409D4C00 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x1409D4F94 (SdbGetTagFromTagID.c)
 *     SdbpGetTagHeadSize @ 0x1409D52D0 (SdbpGetTagHeadSize.c)
 *     SdbpValidateRootTagSizes @ 0x1409D616C (SdbpValidateRootTagSizes.c)
 *     SdbpOpenDatabaseInMemory @ 0x1409D8A34 (SdbpOpenDatabaseInMemory.c)
 * Callees:
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlCopyToUserFromUser @ 0x140781DE8 (RtlCopyToUserFromUser.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpReadMappedData(__int64 a1, unsigned int a2, void *a3, unsigned int a4)
{
  void *v6; // rbx
  bool IsUserAddress; // r14

  if ( a2 + a4 < a4 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpReadMappedData",
      833,
      (unsigned int)"Offset and region size add up to cause an integer overflow or underflow");
    return 0LL;
  }
  if ( *(_DWORD *)(a1 + 20) < a2 + a4 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpReadMappedData",
      838,
      (unsigned int)"Attempt to read past the end of the database offset 0x%lx size 0x%lx (0x%lx)");
    return 0LL;
  }
  v6 = (void *)(a2 + *(_QWORD *)(a1 + 8));
  IsUserAddress = MmIsUserAddress((unsigned __int64)a3);
  if ( MmIsUserAddress((unsigned __int64)v6) )
  {
    if ( IsUserAddress )
      RtlCopyToUserFromUser(a3, v6, a4);
    else
      RtlCopyFromUser(a3, v6, a4);
  }
  else if ( IsUserAddress )
  {
    RtlCopyToUser(a3, v6, a4);
  }
  else
  {
    memmove(a3, v6, a4);
  }
  return 1LL;
}
