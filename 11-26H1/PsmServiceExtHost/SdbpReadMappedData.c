/*
 * XREFs of SdbpReadMappedData @ 0x18008F444
 * Callers:
 *     SdbGetTagFromTagID @ 0x18008DA4C (SdbGetTagFromTagID.c)
 *     SdbOpenDatabaseEx @ 0x18008DAA0 (SdbOpenDatabaseEx.c)
 *     SdbpOpenDatabaseInMemory @ 0x18008F2B8 (SdbpOpenDatabaseInMemory.c)
 *     SdbpValidateRootTagSizes @ 0x18008F814 (SdbpValidateRootTagSizes.c)
 *     SdbGetTagDataSize @ 0x180093454 (SdbGetTagDataSize.c)
 *     SdbpGetTagHeadSize @ 0x180093BA8 (SdbpGetTagHeadSize.c)
 *     SdbpReadTagData @ 0x180093D4C (SdbpReadTagData.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     memcpy_0 @ 0x1800A28C2 (memcpy_0.c)
 */

__int64 __fastcall SdbpReadMappedData(__int64 a1, unsigned int a2, void *a3, unsigned int a4)
{
  if ( a2 + a4 < a4 )
  {
    AslLogCallPrintf(
      1LL,
      "SdbpReadMappedData",
      833LL,
      "Offset and region size add up to cause an integer overflow or underflow");
  }
  else
  {
    if ( *(_DWORD *)(a1 + 20) >= a2 + a4 )
    {
      memcpy_0(a3, (const void *)(*(_QWORD *)(a1 + 8) + a2), a4);
      return 1LL;
    }
    AslLogCallPrintf(
      1LL,
      "SdbpReadMappedData",
      838LL,
      "Attempt to read past the end of the database offset 0x%lx size 0x%lx (0x%lx)",
      a2,
      a4,
      *(_DWORD *)(a1 + 20));
  }
  return 0LL;
}
