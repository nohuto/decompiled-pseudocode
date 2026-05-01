/*
 * XREFs of AslpFileGetCrcChecksum @ 0x18009BB88
 * Callers:
 *     AslpFileGetChecksumAttributes @ 0x18009B668 (AslpFileGetChecksumAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     RtlULongLongSub @ 0x18006EA68 (RtlULongLongSub.c)
 */

__int64 __fastcall AslpFileGetCrcChecksum(unsigned int *a1, __int64 a2)
{
  unsigned int v3; // r10d
  __int64 v4; // r8
  int v5; // ebx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r9
  unsigned int v8; // r10d
  __int64 v9; // r11
  __int64 i; // rdx
  unsigned __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  v3 = -1;
  v4 = 0LL;
  if ( *(_QWORD *)(a2 + 16) >= 0x2000uLL )
  {
    while ( (unsigned int)v4 < 0x1000 )
    {
      v3 = AslpCrc32Table[(unsigned __int8)(v3 ^ *(_BYTE *)(v4 + *(_QWORD *)(a2 + 24)))] ^ (v3 >> 8);
      v4 = (unsigned int)(v4 + 1);
    }
    v6 = *(_QWORD *)(a2 + 24);
    v7 = v6 + *(_QWORD *)(a2 + 16);
    if ( v7 < v6 )
    {
      v7 = -1LL;
      v5 = -1073741675;
    }
    else
    {
      v5 = 0;
    }
    v12 = v7;
    if ( v5 < 0 || (v5 = RtlULongLongSub(v7, 0x1000uLL, (__int64 *)&v12), v5 < 0) )
    {
      AslLogCallPrintf(
        1LL,
        "AslpFileGetCrcChecksum",
        5005LL,
        "Overflow/underflow encountered computing position for CRC_CHECKSUM [%x]",
        v5);
      return (unsigned int)v5;
    }
    for ( i = 0LL; (unsigned int)i < 0x1000; i = (unsigned int)(i + 1) )
      v8 = *(_DWORD *)(v9 + 4LL * (unsigned __int8)(v8 ^ *(_BYTE *)(i + v12))) ^ (v8 >> 8);
    *a1 = ~v8;
  }
  else
  {
    while ( (unsigned int)v4 < *(_DWORD *)(a2 + 32) )
    {
      v3 = AslpCrc32Table[(unsigned __int8)(v3 ^ *(_BYTE *)(*(_QWORD *)(a2 + 24) + v4))] ^ (v3 >> 8);
      v4 = (unsigned int)(v4 + 1);
    }
    *a1 = ~v3;
  }
  return 0;
}
