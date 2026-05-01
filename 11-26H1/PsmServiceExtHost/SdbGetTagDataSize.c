/*
 * XREFs of SdbGetTagDataSize @ 0x180093454
 * Callers:
 *     SdbpGetNextTagId @ 0x18008F22C (SdbpGetNextTagId.c)
 *     SdbpGetFirstIndexedRecord @ 0x180092DD8 (SdbpGetFirstIndexedRecord.c)
 *     SdbpGetNextIndexedRecord @ 0x180092F50 (SdbpGetNextIndexedRecord.c)
 *     SdbpReadTagData @ 0x180093D4C (SdbpReadTagData.c)
 *     SdbpGetMatchingTextAttributes @ 0x1800963F8 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x18009665C (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x18008D264 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline.c)
 *     SdbGetTagFromTagID @ 0x18008DA4C (SdbGetTagFromTagID.c)
 *     SdbpReadMappedData @ 0x18008F444 (SdbpReadMappedData.c)
 */

__int64 __fastcall SdbGetTagDataSize(__int64 a1, __int64 a2)
{
  int v2; // r14d
  unsigned __int16 TagFromTagID; // ax
  int v5; // r12d
  int v6; // ebx
  unsigned int v8; // ebx
  unsigned int v9; // [rsp+58h] [rbp+10h] BYREF

  v2 = a2;
  TagFromTagID = SdbGetTagFromTagID(a1, a2);
  v5 = TagFromTagID;
  v6 = TagFromTagID & 0xF000;
  if ( !(unsigned int)Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline() )
  {
    switch ( v6 )
    {
      case 4096:
        v8 = 0;
        break;
      case 8192:
        v8 = 1;
        break;
      case 12288:
        v8 = 2;
        break;
      default:
        if ( v6 != 0x4000 )
        {
          if ( v6 == 20480 )
          {
            v8 = 8;
            break;
          }
          if ( v6 != 24576 )
          {
            v9 = 0;
            if ( !(unsigned int)SdbpReadMappedData(a1, v2 + 2, &v9, 4u) )
              AslLogCallPrintf(1LL, "SdbGetTagDataSize", 364LL, "Error reading size data");
            v8 = v9;
            break;
          }
        }
        v8 = 4;
        break;
    }
    if ( v8 + v2 >= v8 && v8 + v2 <= *(_DWORD *)(a1 + 20) )
      return v8;
    AslLogCallPrintf(1LL, "SdbGetTagDataSize", 375LL, "Error reading size data");
    return 0x20000000;
  }
  switch ( v6 )
  {
    case 4096:
      v8 = 0;
      break;
    case 8192:
      v8 = 1;
      break;
    case 12288:
      v8 = 2;
      break;
    default:
      if ( v6 != 0x4000 )
      {
        if ( v6 == 20480 )
        {
          v8 = 8;
          break;
        }
        if ( v6 != 24576 )
        {
          if ( v6 != 28672 && v6 != 0x8000 && v6 != 36864 )
          {
            AslLogCallPrintf(1LL, "SdbGetTagDataSize", 318LL, "Invalid TAG_TYPE encountered TAG: [0x%x]", v5);
            return 0x20000000LL;
          }
          v9 = 0;
          if ( (unsigned int)SdbpReadMappedData(a1, v2 + 2, &v9, 4u) )
          {
            v8 = v9;
          }
          else
          {
            v8 = 0x20000000;
            AslLogCallPrintf(1LL, "SdbGetTagDataSize", 311LL, "Error reading size data [%x]", -1073741789);
          }
          break;
        }
      }
      v8 = 4;
      break;
  }
  if ( v8 + v2 >= v8 && v8 + v2 <= *(_DWORD *)(a1 + 20) )
    return v8;
  AslLogCallPrintf(1LL, "SdbGetTagDataSize", 329LL, "Error reading size data [%x]", -1073741675);
  return 0x20000000;
}
