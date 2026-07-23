/*
 * XREFs of SdbpGetTagHeadSize @ 0x1409D52D0
 * Callers:
 *     SdbpGetNextTagId @ 0x1409D43D4 (SdbpGetNextTagId.c)
 *     SdbpGetMappedTagData @ 0x1409D4464 (SdbpGetMappedTagData.c)
 *     SdbpReadTagData @ 0x1409D4B40 (SdbpReadTagData.c)
 * Callees:
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x1404B37E4 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline.c)
 *     SdbpReadMappedData @ 0x1409D4FE8 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetTagHeadSize(__int64 a1, unsigned int a2)
{
  int v2; // eax
  __int16 v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  if ( !(unsigned int)SdbpReadMappedData(a1, a2, &v4, 2u) )
  {
LABEL_12:
    AslLogCallPrintf(1LL, (__int64)"SdbpGetTagHeadSize");
    return 0LL;
  }
  if ( (unsigned int)Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline() )
  {
    v2 = v4 & 0xF000;
    if ( v2 == 24576 || v2 == 4096 || v2 == 0x2000 || v2 == 12288 || v2 == 0x4000 || v2 == 20480 )
      return 2LL;
    if ( v2 == 36864 || v2 == 28672 || v2 == 0x8000 )
      return 6LL;
    goto LABEL_12;
  }
  return (v4 & 0xF000u) < 0x7000 ? 2 : 6;
}
