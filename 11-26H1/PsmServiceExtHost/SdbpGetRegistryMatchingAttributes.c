/*
 * XREFs of SdbpGetRegistryMatchingAttributes @ 0x18009665C
 * Callers:
 *     SdbpCheckMatchingRegistry @ 0x180094EE0 (SdbpCheckMatchingRegistry.c)
 *     SdbpCheckMatchingWildcardRegistry @ 0x180095F00 (SdbpCheckMatchingWildcardRegistry.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbFindFirstTag @ 0x1800930BC (SdbFindFirstTag.c)
 *     SdbGetBinaryTagData @ 0x180093330 (SdbGetBinaryTagData.c)
 *     SdbGetStringTagPtr @ 0x1800933A4 (SdbGetStringTagPtr.c)
 *     SdbGetTagDataSize @ 0x180093454 (SdbGetTagDataSize.c)
 *     SdbReadDWORDTag @ 0x180093760 (SdbReadDWORDTag.c)
 *     SdbReadQWORDTag @ 0x1800937FC (SdbReadQWORDTag.c)
 */

__int64 __fastcall SdbpGetRegistryMatchingAttributes(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        __int64 *a4,
        _DWORD *a5,
        __int64 *a6,
        _DWORD *a7,
        __int64 *a8,
        __int64 *a9,
        _QWORD *a10)
{
  int v10; // ebx
  int v13; // ebp
  __int64 BinaryTagData; // r13
  __int64 TagDataSize; // r12
  unsigned int v16; // r15d
  unsigned int FirstTag; // eax
  _WORD *StringTagPtr; // rax
  _WORD *v19; // r14
  unsigned int v20; // eax
  unsigned int v21; // eax
  int DWORDTag; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  unsigned int v28; // eax
  __int64 v29; // rax
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // esi
  unsigned int v33; // eax
  __int64 v35; // [rsp+28h] [rbp-50h]
  __int64 QWORDTag; // [rsp+30h] [rbp-48h]

  v10 = 0;
  *a3 = 0LL;
  v35 = 0LL;
  QWORDTag = 0LL;
  *a5 = 0;
  v13 = 0;
  BinaryTagData = 0LL;
  TagDataSize = 0LL;
  *a4 = 0LL;
  v16 = 0;
  *a6 = 0LL;
  *a7 = 0;
  *a8 = 0LL;
  *a9 = 0LL;
  *a10 = 0LL;
  FirstTag = SdbFindFirstTag(a1, a2, 24577);
  if ( FirstTag )
  {
    StringTagPtr = (_WORD *)SdbGetStringTagPtr(a1, FirstTag);
    v19 = StringTagPtr;
    if ( !StringTagPtr || !*StringTagPtr )
    {
      AslLogCallPrintf(1LL, "SdbpGetRegistryMatchingAttributes", 1054LL, "Failed to read key path");
      return v16;
    }
    v20 = SdbFindFirstTag(a1, a2, 24624);
    if ( v20 )
      v35 = SdbGetStringTagPtr(a1, v20);
    v21 = SdbFindFirstTag(a1, a2, 16465);
    if ( v21 )
    {
      DWORDTag = SdbReadDWORDTag(a1, v21, 0);
      v13 = DWORDTag;
      if ( !DWORDTag )
      {
        AslLogCallPrintf(1LL, "SdbpGetRegistryMatchingAttributes", 1073LL, "Failed to read value type");
        return v16;
      }
      v23 = DWORDTag - 1;
      if ( !v23 )
        goto LABEL_31;
      v24 = v23 - 1;
      if ( !v24 )
        goto LABEL_31;
      v25 = v24 - 1;
      if ( v25 )
      {
        v26 = v25 - 1;
        if ( !v26 )
        {
          v30 = SdbFindFirstTag(a1, a2, 16466);
          if ( !v30 )
          {
            AslLogCallPrintf(1LL, "SdbpGetRegistryMatchingAttributes", 1100LL, "Failed to get TAG_REG_VALUE_DATA_DWORD");
            return v16;
          }
          v10 = SdbReadDWORDTag(a1, v30, 0);
          v29 = 0LL;
          goto LABEL_21;
        }
        v27 = v26 - 3;
        if ( v27 )
        {
          if ( v27 != 4 )
          {
            AslLogCallPrintf(1LL, "SdbpGetRegistryMatchingAttributes", 1138LL, "Unknown registry value type");
            return v16;
          }
          v28 = SdbFindFirstTag(a1, a2, 20507);
          if ( !v28 )
          {
            AslLogCallPrintf(1LL, "SdbpGetRegistryMatchingAttributes", 1110LL, "Failed to get TAG_REG_VALUE_DATA_QWORD");
            return v16;
          }
          QWORDTag = SdbReadQWORDTag(a1, v28, 0LL);
          goto LABEL_20;
        }
LABEL_31:
        v33 = SdbFindFirstTag(a1, a2, 24625);
        if ( !v33 )
        {
          AslLogCallPrintf(1LL, "SdbpGetRegistryMatchingAttributes", 1086LL, "Failed to get TAG_REG_VALUE_DATA_SZ");
          return v16;
        }
        v29 = SdbGetStringTagPtr(a1, v33);
        if ( !v29 )
        {
          AslLogCallPrintf(1LL, "SdbpGetRegistryMatchingAttributes", 1092LL, "Failed to read value data");
          return v16;
        }
        goto LABEL_21;
      }
      v31 = SdbFindFirstTag(a1, a2, 36882);
      v32 = v31;
      if ( !v31 )
      {
        AslLogCallPrintf(1LL, "SdbpGetRegistryMatchingAttributes", 1120LL, "Failed to get TAG_REG_VALUE_DATA_BINARY");
        return v16;
      }
      BinaryTagData = SdbGetBinaryTagData(a1, v31);
      if ( !BinaryTagData )
      {
        AslLogCallPrintf(1LL, "SdbpGetRegistryMatchingAttributes", 1126LL, "Failed to read value data");
        return v16;
      }
      TagDataSize = (unsigned int)SdbGetTagDataSize(a1, v32);
      if ( TagDataSize == 0x20000000 )
      {
        AslLogCallPrintf(1LL, "SdbpGetRegistryMatchingAttributes", 1132LL, "Failed to read value data size");
        return v16;
      }
    }
LABEL_20:
    v29 = 0LL;
LABEL_21:
    v16 = 1;
    *a3 = v19;
    *a4 = v35;
    *a5 = v13;
    *a6 = v29;
    *a7 = v10;
    *a8 = QWORDTag;
    *a9 = BinaryTagData;
    *a10 = TagDataSize;
    return v16;
  }
  AslLogCallPrintf(1LL, "SdbpGetRegistryMatchingAttributes", 1042LL, "Failed to get key path tag");
  return v16;
}
