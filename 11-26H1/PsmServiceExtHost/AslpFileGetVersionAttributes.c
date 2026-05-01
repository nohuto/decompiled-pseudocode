/*
 * XREFs of AslpFileGetVersionAttributes @ 0x18009CA48
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x18009ADE0 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     AslpFileGetVersionBlock @ 0x18009CB34 (AslpFileGetVersionBlock.c)
 *     AslpFileGetVersionBlockImageOnly @ 0x18009D410 (AslpFileGetVersionBlockImageOnly.c)
 *     AslpFileMakeBinVersionAttributes @ 0x18009D97C (AslpFileMakeBinVersionAttributes.c)
 *     AslpFileMakeStringVersionAttributes @ 0x18009DA90 (AslpFileMakeStringVersionAttributes.c)
 */

__int64 __fastcall AslpFileGetVersionAttributes(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // zf
  int VersionBlock; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r11
  int StringVersionAttributes; // eax
  unsigned int v11; // ebx
  int v13; // [rsp+20h] [rbp-18h]
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF

  v3 = *(_DWORD *)(a2 + 72) == 0;
  v14 = 0LL;
  v15 = 0LL;
  if ( v3 )
    VersionBlock = AslpFileGetVersionBlock(&v14, &v15, a2);
  else
    VersionBlock = AslpFileGetVersionBlockImageOnly(&v14, &v15, a3, a2);
  if ( VersionBlock >= 0 )
  {
    v7 = v15;
  }
  else
  {
    if ( (unsigned int)(VersionBlock + 1073741687) > 2 )
    {
      v13 = VersionBlock;
      if ( *(_DWORD *)(a2 + 72) )
        AslLogCallPrintf(
          3LL,
          "AslpFileGetVersionAttributes",
          1423LL,
          "AslpFileGetVersionBlockImageOnly failed [%x]",
          v13);
      else
        AslLogCallPrintf(3LL, "AslpFileGetVersionAttributes", 1426LL, "AslpFileGetVersionBlock failed [%x]", v13);
    }
    v7 = 0LL;
  }
  AslpFileMakeBinVersionAttributes(a1, v7);
  StringVersionAttributes = AslpFileMakeStringVersionAttributes(v8, v9);
  v11 = StringVersionAttributes;
  if ( StringVersionAttributes >= 0 )
    return 0;
  else
    AslLogCallPrintf(
      1LL,
      "AslpFileGetVersionAttributes",
      1450LL,
      "AslpFileMakeStringVersionAttributes failed [%x]",
      StringVersionAttributes);
  return v11;
}
