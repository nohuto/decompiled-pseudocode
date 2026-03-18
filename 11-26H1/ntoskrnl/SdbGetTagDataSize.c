/*
 * XREFs of SdbGetTagDataSize @ 0x1409E81F0
 * Callers:
 *     KsepDbReadKData @ 0x1407BCDE0 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x140881ED8 (SdbQueryDataExTagID.c)
 *     SdbpGetMatchingTextAttributes @ 0x1408843F0 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x1408846C8 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbMergeIsEntryUpdated @ 0x1408877E4 (SdbMergeIsEntryUpdated.c)
 *     SdbpMergeAreTagValuesEqual @ 0x140887BB0 (SdbpMergeAreTagValuesEqual.c)
 *     SdbpGetFirstIndexedRecord @ 0x1409E5EDC (SdbpGetFirstIndexedRecord.c)
 *     SdbpGetNextTagId @ 0x1409E79BC (SdbpGetNextTagId.c)
 *     SdbpReadTagData @ 0x1409E8130 (SdbpReadTagData.c)
 *     SdbpGetNextIndexedRecord @ 0x140B27DC8 (SdbpGetNextIndexedRecord.c)
 *     SdbpGetIndex @ 0x140B38224 (SdbpGetIndex.c)
 * Callees:
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x1404B9F54 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline.c)
 *     SdbGetTagFromTagID @ 0x1409E8584 (SdbGetTagFromTagID.c)
 *     SdbpReadMappedData @ 0x1409E85D8 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetTagDataSize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  int v6; // ebx
  __int64 result; // rax
  const char *v8; // r9
  int v9; // r8d
  unsigned int v10; // [rsp+58h] [rbp+28h] BYREF

  v4 = a2;
  v6 = SdbGetTagFromTagID(a1, a2, a3, a4) & 0xF000;
  if ( (unsigned int)Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline() )
  {
    switch ( v6 )
    {
      case 36864:
LABEL_3:
        v10 = 0;
        if ( !(unsigned int)SdbpReadMappedData(a1, (unsigned int)(v4 + 2), &v10, 4LL) )
        {
          v10 = 0x20000000;
          AslLogCallPrintf(1, (unsigned int)"SdbGetTagDataSize", 311, (unsigned int)"Error reading size data [%x]");
        }
        result = v10;
        goto LABEL_6;
      case 16384:
        goto LABEL_13;
      case 12288:
        result = 2LL;
        break;
      case 20480:
        result = 8LL;
        break;
      case 24576:
LABEL_13:
        result = 4LL;
        break;
      case 4096:
        result = 0LL;
        break;
      case 8192:
        result = 1LL;
        break;
      case 28672:
      case 32768:
        goto LABEL_3;
      default:
        v8 = "Invalid TAG_TYPE encountered TAG: [0x%x]";
        v9 = 318;
LABEL_10:
        AslLogCallPrintf(1, (unsigned int)"SdbGetTagDataSize", v9, (_DWORD)v8);
        return 0x20000000LL;
    }
    v10 = result;
LABEL_6:
    if ( (int)result + v4 >= (unsigned int)result && (unsigned int)(result + v4) <= *(_DWORD *)(a1 + 20) )
      return result;
    v8 = "Error reading size data [%x]";
    v9 = 329;
    goto LABEL_10;
  }
  switch ( v6 )
  {
    case 24576:
      goto LABEL_26;
    case 12288:
      result = 2LL;
      goto LABEL_27;
    case 16384:
LABEL_26:
      result = 4LL;
LABEL_27:
      v10 = result;
      goto LABEL_28;
    case 4096:
      result = 0LL;
      goto LABEL_27;
    case 8192:
      result = 1LL;
      goto LABEL_27;
    case 20480:
      result = 8LL;
      goto LABEL_27;
  }
  v10 = 0;
  if ( !(unsigned int)SdbpReadMappedData(a1, (unsigned int)(v4 + 2), &v10, 4LL) )
    AslLogCallPrintf(1, (unsigned int)"SdbGetTagDataSize", 364, (unsigned int)"Error reading size data");
  result = v10;
LABEL_28:
  if ( (int)result + v4 < (unsigned int)result || (unsigned int)(result + v4) > *(_DWORD *)(a1 + 20) )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbGetTagDataSize", 375, (unsigned int)"Error reading size data");
    return 0x20000000LL;
  }
  return result;
}
