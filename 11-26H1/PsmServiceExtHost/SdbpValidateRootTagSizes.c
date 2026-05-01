/*
 * XREFs of SdbpValidateRootTagSizes @ 0x18008F814
 * Callers:
 *     SdbpOpenDatabaseInMemory @ 0x18008F2B8 (SdbpOpenDatabaseInMemory.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x18008F700 (SdbpValidateAndApplyCompatFlags.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbpReadMappedData @ 0x18008F444 (SdbpReadMappedData.c)
 */

__int64 __fastcall SdbpValidateRootTagSizes(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // eax
  __int64 v4; // rdi
  unsigned int v5; // r14d
  int v6; // r13d
  int v7; // r15d
  int v8; // r12d
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rax
  unsigned __int16 v13; // [rsp+70h] [rbp+40h] BYREF
  unsigned int v14; // [rsp+78h] [rbp+48h] BYREF
  int v15; // [rsp+80h] [rbp+50h]

  v1 = 0;
  v2 = *(_DWORD *)(a1 + 2608) & 1;
  v14 = 0;
  v15 = v2;
  v4 = 12LL;
  v13 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  while ( 1 )
  {
    if ( v6 > 256 || v4 <= v5 )
      return 3221225700LL;
    if ( v4 == *(_DWORD *)(a1 + 20) )
      return 0LL;
    v5 = v4;
    if ( !(unsigned int)SdbpReadMappedData(a1, v4, &v13, 2u) )
      break;
    if ( v13 <= 0x1000u )
    {
      if ( !v8 || !v7 )
        return (unsigned int)-1073741596;
      return v1;
    }
    v8 |= v13 == 28673;
    v9 = v4 + 2;
    v7 |= v13 == 30721;
    v10 = v13 & 0xF000;
    switch ( v10 )
    {
      case 4096:
        v11 = 0LL;
        v14 = 0;
        break;
      case 8192:
        v11 = 1LL;
        goto LABEL_20;
      case 12288:
        v11 = 2LL;
        goto LABEL_20;
      case 16384:
        goto LABEL_19;
      case 20480:
        v11 = 8LL;
        goto LABEL_20;
      case 24576:
LABEL_19:
        v11 = 4LL;
LABEL_20:
        v14 = v11;
        goto LABEL_26;
      case 28672:
      case 32768:
      case 36864:
        if ( v9 + 3 > (unsigned __int64)*(unsigned int *)(a1 + 20) )
          return 3221225503LL;
        if ( !(unsigned int)SdbpReadMappedData(a1, v9, &v14, 4u) )
          return 3221225816LL;
        v11 = v14;
        v9 += 4LL;
        break;
      default:
        if ( !v8 || !v7 )
        {
          AslLogCallPrintf(
            1LL,
            "SdbpValidateRootTagSizes",
            2339LL,
            "Unknown root TAG_TYPE encountered (corrupt SDB): 0x%X",
            v13 & 0xF000);
          return 3221225700LL;
        }
        goto LABEL_41;
    }
    if ( (unsigned int)v11 >= 0xFFFFFFF )
      return 3221225700LL;
LABEL_26:
    if ( !v15 && (v11 & 1) != 0 )
    {
      v11 = (unsigned int)(v11 + 1);
      v14 = v11;
    }
    v4 = v11 + v9;
    ++v6;
  }
  if ( !v8 || !v7 )
    return 3221225816LL;
LABEL_41:
  *(_DWORD *)(a1 + 20) = v5;
  return 0LL;
}
