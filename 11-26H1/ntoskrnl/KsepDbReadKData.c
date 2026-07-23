/*
 * XREFs of KsepDbReadKData @ 0x1407BFE40
 * Callers:
 *     KsepDbCacheReadDeviceInternal @ 0x1409D767C (KsepDbCacheReadDeviceInternal.c)
 * Callees:
 *     SdbReadQWORDTag @ 0x14088BF50 (SdbReadQWORDTag.c)
 *     SdbpGetMappedTagData @ 0x1409D4464 (SdbpGetMappedTagData.c)
 *     SdbGetStringTagPtr @ 0x1409D4804 (SdbGetStringTagPtr.c)
 *     SdbGetTagDataSize @ 0x1409D4C00 (SdbGetTagDataSize.c)
 *     SdbFindFirstTag @ 0x1409D4F20 (SdbFindFirstTag.c)
 *     SdbReadDWORDTag @ 0x1409D5464 (SdbReadDWORDTag.c)
 */

__int64 __fastcall KsepDbReadKData(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebp
  unsigned int v6; // ebx
  unsigned int FirstTag; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 StringTagPtr; // r14
  unsigned int v11; // eax
  __int64 v12; // r9
  int DWORDTag; // eax
  unsigned int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rbx
  __int64 v21; // r9
  unsigned int v22; // eax
  __int64 v23; // r9
  __int64 v24; // r15
  __int64 MappedTagData; // rbp
  int TagDataSize; // eax

  v4 = a2;
  v6 = -1073741823;
  if ( !(_DWORD)a2 )
    return v6;
  FirstTag = SdbFindFirstTag(a1, a2, 24577LL);
  if ( !FirstTag )
    return v6;
  StringTagPtr = SdbGetStringTagPtr(a1, FirstTag, v8, v9);
  if ( !StringTagPtr )
    return v6;
  v11 = SdbFindFirstTag(a1, v4, 16408LL);
  if ( !v11 )
    return v6;
  DWORDTag = SdbReadDWORDTag(a1, v11, 0LL, v12);
  if ( DWORDTag != 1 )
  {
    switch ( DWORDTag )
    {
      case 4:
        v19 = SdbFindFirstTag(a1, v4, 16409LL);
        *(_QWORD *)a3 = StringTagPtr;
        *(_DWORD *)(a3 + 8) = 4;
        *(_DWORD *)(a3 + 12) = 4;
        v20 = a3 + 24;
        *(_DWORD *)(a3 + 24) = SdbReadDWORDTag(a1, v19, 0LL, v21);
        break;
      case 11:
        v22 = SdbFindFirstTag(a1, v4, 20487LL);
        *(_QWORD *)a3 = StringTagPtr;
        *(_DWORD *)(a3 + 8) = 11;
        *(_DWORD *)(a3 + 12) = 8;
        v20 = a3 + 32;
        *(_QWORD *)(a3 + 32) = SdbReadQWORDTag(a1, v22, 0LL, v23);
        break;
      case 3:
        v24 = (unsigned int)SdbFindFirstTag(a1, v4, 36869LL);
        MappedTagData = SdbpGetMappedTagData(a1, v24);
        if ( !MappedTagData )
          return v6;
        *(_QWORD *)a3 = StringTagPtr;
        *(_DWORD *)(a3 + 8) = 3;
        TagDataSize = SdbGetTagDataSize(a1, (unsigned int)v24);
        *(_DWORD *)(a3 + 12) = TagDataSize;
        if ( TagDataSize == 0x20000000 )
          return v6;
        *(_QWORD *)(a3 + 16) = MappedTagData;
        return 0;
      default:
        return (unsigned int)-1073741811;
    }
    *(_QWORD *)(a3 + 16) = v20;
    return 0;
  }
  v14 = SdbFindFirstTag(a1, v4, 24606LL);
  v17 = SdbGetStringTagPtr(a1, v14, v15, v16);
  if ( v17 )
  {
    *(_QWORD *)a3 = StringTagPtr;
    v18 = -1LL;
    *(_DWORD *)(a3 + 8) = 1;
    do
      ++v18;
    while ( *(_WORD *)(v17 + 2 * v18) );
    *(_QWORD *)(a3 + 16) = v17;
    *(_DWORD *)(a3 + 12) = 2 * v18 + 2;
    return 0;
  }
  return v6;
}
