/*
 * XREFs of SdbpOpenDatabaseInMemory @ 0x1409D8A34
 * Callers:
 *     SdbpOpenCompressedDatabase @ 0x14088D444 (SdbpOpenCompressedDatabase.c)
 *     SdbInitDatabaseInMemory @ 0x1409D6974 (SdbInitDatabaseInMemory.c)
 * Callees:
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x1404B37E4 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     SdbpReadMappedData @ 0x1409D4FE8 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 *     SdbpValidateRootTagSizes @ 0x1409D616C (SdbpValidateRootTagSizes.c)
 *     AslAlloc @ 0x1409D8260 (AslAlloc.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x1409D87A8 (SdbpValidateAndApplyCompatFlags.c)
 */

void *__fastcall SdbpOpenDatabaseInMemory(__int64 a1, int a2, char a3)
{
  __int64 v6; // rax
  void *v7; // rbx
  __int64 v8; // rcx
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+38h] [rbp-20h]

  v10 = 0LL;
  v11 = 0;
  v6 = AslAlloc();
  v7 = (void *)v6;
  if ( !v6 )
  {
    AslLogCallPrintf(1LL, (__int64)"SdbpOpenDatabaseInMemory");
    return 0LL;
  }
  *(_DWORD *)(v6 + 20) = a2;
  *(_DWORD *)(v6 + 16) = 0;
  *(_DWORD *)(v6 + 24) |= 1u;
  *(_QWORD *)(v6 + 8) = a1;
  *(_QWORD *)v6 = 0LL;
  if ( !(unsigned int)SdbpReadMappedData(v6, 0, &v10, 0xCu)
    || (unsigned int)Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline()
    && v11 != 1717724275
    && (a3 & 2) == 0 )
  {
    goto LABEL_8;
  }
  if ( (unsigned int)SdbpValidateAndApplyCompatFlags((__int64)v7, &v10, a3) )
  {
    if ( !(unsigned int)Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline()
      || (int)SdbpValidateRootTagSizes((__int64)v7) >= 0 )
    {
      return v7;
    }
LABEL_8:
    AslLogCallPrintf(1LL, (__int64)"SdbpOpenDatabaseInMemory");
  }
  AslFree(v8, v7);
  return 0LL;
}
