/*
 * XREFs of SdbReadQWORDTag @ 0x140885B50
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x140714174 (SdbpCheckApplicationTypeAttributes.c)
 *     KsepDbReadKData @ 0x1407BCDE0 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x140881ED8 (SdbQueryDataExTagID.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x1408846C8 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchOsVersion @ 0x140A92A84 (SdbpMatchOsVersion.c)
 *     SdbpCheckAllAttributes @ 0x140B45B64 (SdbpCheckAllAttributes.c)
 *     KsepDbReadKFlag @ 0x140B67D04 (KsepDbReadKFlag.c)
 * Callees:
 *     SdbpReadTagData @ 0x1409E8130 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x1409E8584 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadQWORDTag(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = a3;
  v5 = a2;
  if ( (SdbGetTagFromTagID(a1, a2, a3, a4) & 0xF000) == 0x5000 )
  {
    v10 = SdbpReadTagData(a1, v5, &v12, 8LL);
    v11 = v12;
    if ( !v10 )
      return a3;
    return v11;
  }
  else
  {
    SdbGetTagFromTagID(a1, v5, v7, v8);
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbReadQWORDTag",
      186,
      (unsigned int)"TagID 0x%X, Tag 0x%X not of the expected type");
    return a3;
  }
}
