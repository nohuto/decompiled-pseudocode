/*
 * XREFs of SdbpGetRegistryMatchingAttributes @ 0x14088AAC8
 * Callers:
 *     SdbpCheckMatchingRegistry @ 0x1408890B0 (SdbpCheckMatchingRegistry.c)
 *     SdbpCheckMatchingWildcardRegistry @ 0x140889E90 (SdbpCheckMatchingWildcardRegistry.c)
 * Callees:
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 *     SdbGetBinaryTagData @ 0x14088BE70 (SdbGetBinaryTagData.c)
 *     SdbReadQWORDTag @ 0x14088BF50 (SdbReadQWORDTag.c)
 *     SdbGetStringTagPtr @ 0x1409D4804 (SdbGetStringTagPtr.c)
 *     SdbGetTagDataSize @ 0x1409D4C00 (SdbGetTagDataSize.c)
 *     SdbFindFirstTag @ 0x1409D4F20 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     SdbReadDWORDTag @ 0x1409D5464 (SdbReadDWORDTag.c)
 */

__int64 __fastcall SdbpGetRegistryMatchingAttributes(
        __int64 a1,
        __int64 a2,
        unsigned __int16 **a3,
        __int64 *a4,
        _DWORD *a5,
        __int64 *a6,
        _DWORD *a7,
        __int64 *a8,
        __int64 *a9,
        _QWORD *a10)
{
  int v10; // ebx
  unsigned int v11; // esi
  int v13; // ebp
  __int64 BinaryTagData; // r13
  __int64 TagDataSize; // r12
  unsigned int v16; // r15d
  unsigned int FirstTag; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  const char *v20; // r9
  int v21; // r8d
  unsigned __int64 StringTagPtr; // rax
  unsigned __int16 *v23; // r14
  unsigned __int16 UShortFromUser; // ax
  unsigned int v25; // eax
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int v28; // eax
  __int64 v29; // r9
  int DWORDTag; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  unsigned int v36; // eax
  __int64 v37; // r9
  __int64 v38; // rax
  unsigned int v39; // eax
  __int64 v40; // r9
  unsigned int v41; // eax
  unsigned int v42; // esi
  unsigned int v43; // eax
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v47; // [rsp+28h] [rbp-50h]
  __int64 QWORDTag; // [rsp+30h] [rbp-48h]

  v10 = 0;
  *a3 = 0LL;
  v11 = a2;
  v47 = 0LL;
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
  FirstTag = SdbFindFirstTag(a1, a2, 24577LL);
  if ( !FirstTag )
  {
    v20 = "Failed to get key path tag";
    v21 = 1042;
LABEL_39:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetRegistryMatchingAttributes", v21, (_DWORD)v20);
    return v16;
  }
  StringTagPtr = SdbGetStringTagPtr(a1, FirstTag, v18, v19);
  v23 = (unsigned __int16 *)StringTagPtr;
  if ( !StringTagPtr
    || (!MmIsUserAddress(StringTagPtr) ? (UShortFromUser = *v23) : (UShortFromUser = RtlReadUShortFromUser(v23)),
        !UShortFromUser) )
  {
    v20 = "Failed to read key path";
    v21 = 1054;
    goto LABEL_39;
  }
  v25 = SdbFindFirstTag(a1, v11, 24624LL);
  if ( v25 )
    v47 = SdbGetStringTagPtr(a1, v25, v26, v27);
  v28 = SdbFindFirstTag(a1, v11, 16465LL);
  if ( !v28 )
    goto LABEL_23;
  DWORDTag = SdbReadDWORDTag(a1, v28, 0LL, v29);
  v13 = DWORDTag;
  if ( !DWORDTag )
  {
    v20 = "Failed to read value type";
    v21 = 1073;
    goto LABEL_39;
  }
  v31 = DWORDTag - 1;
  if ( !v31 || (v32 = v31 - 1) == 0 )
  {
LABEL_34:
    v43 = SdbFindFirstTag(a1, v11, 24625LL);
    if ( !v43 )
    {
      v20 = "Failed to get TAG_REG_VALUE_DATA_SZ";
      v21 = 1086;
      goto LABEL_39;
    }
    v38 = SdbGetStringTagPtr(a1, v43, v44, v45);
    if ( !v38 )
    {
      v20 = "Failed to read value data";
      v21 = 1092;
      goto LABEL_39;
    }
    goto LABEL_24;
  }
  v33 = v32 - 1;
  if ( !v33 )
  {
    v41 = SdbFindFirstTag(a1, v11, 36882LL);
    v42 = v41;
    if ( !v41 )
    {
      v20 = "Failed to get TAG_REG_VALUE_DATA_BINARY";
      v21 = 1120;
      goto LABEL_39;
    }
    BinaryTagData = SdbGetBinaryTagData(a1, v41);
    if ( !BinaryTagData )
    {
      v20 = "Failed to read value data";
      v21 = 1126;
      goto LABEL_39;
    }
    TagDataSize = (unsigned int)SdbGetTagDataSize(a1, v42);
    if ( TagDataSize == 0x20000000 )
    {
      v20 = "Failed to read value data size";
      v21 = 1132;
      goto LABEL_39;
    }
LABEL_23:
    v38 = 0LL;
    goto LABEL_24;
  }
  v34 = v33 - 1;
  if ( v34 )
  {
    v35 = v34 - 3;
    if ( v35 )
    {
      if ( v35 != 4 )
      {
        v20 = "Unknown registry value type";
        v21 = 1138;
        goto LABEL_39;
      }
      v36 = SdbFindFirstTag(a1, v11, 20507LL);
      if ( !v36 )
      {
        v20 = "Failed to get TAG_REG_VALUE_DATA_QWORD";
        v21 = 1110;
        goto LABEL_39;
      }
      QWORDTag = SdbReadQWORDTag(a1, v36, 0LL, v37);
      goto LABEL_23;
    }
    goto LABEL_34;
  }
  v39 = SdbFindFirstTag(a1, v11, 16466LL);
  if ( !v39 )
  {
    v20 = "Failed to get TAG_REG_VALUE_DATA_DWORD";
    v21 = 1100;
    goto LABEL_39;
  }
  v10 = SdbReadDWORDTag(a1, v39, 0LL, v40);
  v38 = 0LL;
LABEL_24:
  v16 = 1;
  *a3 = v23;
  *a4 = v47;
  *a5 = v13;
  *a6 = v38;
  *a7 = v10;
  *a8 = QWORDTag;
  *a9 = BinaryTagData;
  *a10 = TagDataSize;
  return v16;
}
