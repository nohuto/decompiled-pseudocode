/*
 * XREFs of AslpFileGetVersionAttributes @ 0x140893E0C
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x140892080 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslpFileGetVersionBlock @ 0x140893EF8 (AslpFileGetVersionBlock.c)
 *     AslpFileGetVersionBlockImageOnly @ 0x140894790 (AslpFileGetVersionBlockImageOnly.c)
 *     AslpFileMakeBinVersionAttributes @ 0x140894E44 (AslpFileMakeBinVersionAttributes.c)
 *     AslpFileMakeStringVersionAttributes @ 0x140894F58 (AslpFileMakeStringVersionAttributes.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileGetVersionAttributes(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // zf
  int VersionBlock; // eax
  const char *v7; // r9
  int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r11
  int StringVersionAttributes; // ebx
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF

  v3 = *(_DWORD *)(a2 + 80) == 0;
  v14 = 0LL;
  v15 = 0LL;
  if ( v3 )
    VersionBlock = AslpFileGetVersionBlock(&v14, &v15, a2);
  else
    VersionBlock = AslpFileGetVersionBlockImageOnly(&v14, &v15, a3, a2);
  if ( VersionBlock >= 0 )
  {
    v9 = v15;
  }
  else
  {
    if ( (unsigned int)(VersionBlock + 1073741687) > 2 )
    {
      if ( *(_DWORD *)(a2 + 80) )
      {
        v7 = "AslpFileGetVersionBlockImageOnly failed [%x]";
        v8 = 1423;
      }
      else
      {
        v7 = "AslpFileGetVersionBlock failed [%x]";
        v8 = 1426;
      }
      AslLogCallPrintf(3, (unsigned int)"AslpFileGetVersionAttributes", v8, (_DWORD)v7);
    }
    v9 = 0LL;
  }
  AslpFileMakeBinVersionAttributes(a1, v9);
  StringVersionAttributes = AslpFileMakeStringVersionAttributes(v10, v11);
  if ( StringVersionAttributes >= 0 )
    return 0;
  else
    AslLogCallPrintf(
      1,
      (unsigned int)"AslpFileGetVersionAttributes",
      1450,
      (unsigned int)"AslpFileMakeStringVersionAttributes failed [%x]");
  return (unsigned int)StringVersionAttributes;
}
