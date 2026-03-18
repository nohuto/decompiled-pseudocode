/*
 * XREFs of SdbpOpenDatabaseInMemory @ 0x1409E4018
 * Callers:
 *     SdbpOpenCompressedDatabase @ 0x140887044 (SdbpOpenCompressedDatabase.c)
 *     SdbInitDatabaseInMemory @ 0x1409E62EC (SdbInitDatabaseInMemory.c)
 * Callees:
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x1404B9F54 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x1409E3A44 (SdbpValidateAndApplyCompatFlags.c)
 *     AslAlloc @ 0x1409E4C90 (AslAlloc.c)
 *     SdbpValidateRootTagSizes @ 0x1409E6A38 (SdbpValidateRootTagSizes.c)
 *     AslFree @ 0x1409E6BD8 (AslFree.c)
 *     SdbpReadMappedData @ 0x1409E85D8 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpOpenDatabaseInMemory(__int64 a1, int a2, char a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  const char *v10; // r9
  int v11; // r8d
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+38h] [rbp-20h]

  v12 = 0LL;
  v13 = 0;
  v6 = AslAlloc(a1, 2688LL);
  v7 = v6;
  if ( !v6 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpOpenDatabaseInMemory", 2673, (unsigned int)"Failed to allocate DB structure");
    return 0LL;
  }
  *(_DWORD *)(v6 + 20) = a2;
  *(_DWORD *)(v6 + 16) = 0;
  *(_DWORD *)(v6 + 24) |= 1u;
  *(_QWORD *)(v6 + 8) = a1;
  *(_QWORD *)v6 = 0LL;
  if ( (unsigned int)SdbpReadMappedData(v6, 0LL, &v12, 12LL) )
  {
    if ( (unsigned int)Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline()
      && v13 != 1717724275
      && (a3 & 2) == 0 )
    {
      v10 = "Magic does not match a valid value: [0x%lx]";
      v11 = 2690;
LABEL_13:
      AslLogCallPrintf(1, (unsigned int)"SdbpOpenDatabaseInMemory", v11, (_DWORD)v10);
      goto LABEL_9;
    }
    if ( (unsigned int)SdbpValidateAndApplyCompatFlags(v7, &v12, a3) )
    {
      if ( !(unsigned int)Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline()
        || (int)SdbpValidateRootTagSizes(v7) >= 0 )
      {
        return v7;
      }
      v10 = "SdbpValidateAndApplyCompatFlags failed [%x]";
      v11 = 2702;
      goto LABEL_13;
    }
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpOpenDatabaseInMemory", 2684, (unsigned int)"Can't read database header");
  }
LABEL_9:
  AslFree(v8, v7);
  return 0LL;
}
