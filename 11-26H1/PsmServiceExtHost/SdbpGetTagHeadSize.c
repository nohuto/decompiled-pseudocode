/*
 * XREFs of SdbpGetTagHeadSize @ 0x180093BA8
 * Callers:
 *     SdbpGetNextTagId @ 0x18008F22C (SdbpGetNextTagId.c)
 *     SdbpGetMappedTagData @ 0x1800939AC (SdbpGetMappedTagData.c)
 *     SdbpReadTagData @ 0x180093D4C (SdbpReadTagData.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x18008D264 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline.c)
 *     SdbpReadMappedData @ 0x18008F444 (SdbpReadMappedData.c)
 */

__int64 __fastcall SdbpGetTagHeadSize(__int64 a1, unsigned int a2)
{
  int v3; // eax
  unsigned __int16 v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  if ( !(unsigned int)SdbpReadMappedData(a1, a2, &v4, 2u) )
  {
    AslLogCallPrintf(1LL, "SdbpGetTagHeadSize", 100LL, "Error reading tag");
    return 0LL;
  }
  if ( !(unsigned int)Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline() )
    return (v4 & 0xF000u) < 0x7000 ? 2 : 6;
  v3 = v4 & 0xF000;
  if ( v3 == 4096 || v3 == 0x2000 || v3 == 12288 || v3 == 0x4000 || v3 == 20480 || v3 == 24576 )
    return 2LL;
  if ( v3 != 28672 && v3 != 0x8000 && v3 != 36864 )
  {
    AslLogCallPrintf(1LL, "SdbpGetTagHeadSize", 121LL, "Invalid TAG_TYPE encountered. TAG: [%x]", v4);
    return 0LL;
  }
  return 6LL;
}
