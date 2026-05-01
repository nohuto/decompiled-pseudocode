/*
 * XREFs of AslpFileLargeGetCrcChecksum @ 0x1800A21C8
 * Callers:
 *     AslpFileLargeGetChecksumAttributes @ 0x1800A20CC (AslpFileLargeGetChecksumAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileLargeGetCrcChecksum(unsigned int *a1, _QWORD *a2)
{
  unsigned __int64 v3; // rdx
  __int64 v4; // r10
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rsi
  unsigned int v8; // edx
  unsigned int i; // r8d
  unsigned int j; // r8d

  *a1 = 0;
  v3 = *(_QWORD *)(*a2 + 16LL);
  if ( v3 < 0x100000 )
    return 3221225485LL;
  if ( !a2[5] )
    return 3221225485LL;
  if ( a2[6] < 0x1000uLL )
    return 3221225485LL;
  v4 = a2[2];
  if ( !v4 || a2[3] < 0x1000uLL || a2[4] )
    return 3221225485LL;
  v5 = v3 - a2[7];
  v6 = v5 - 4096;
  if ( v5 <= a2[6] )
  {
    v8 = -1;
    for ( i = 0; i < 0x1000; ++i )
      v8 = AslpCrc32Table[(unsigned __int8)(v8 ^ *(_BYTE *)(i + v4))] ^ (v8 >> 8);
    for ( j = 0; j < 0x1000; ++j )
      v8 = AslpCrc32Table[(unsigned __int8)(v8 ^ *(_BYTE *)(a2[5] + j + v6))] ^ (v8 >> 8);
    *a1 = ~v8;
    return 0LL;
  }
  else
  {
    AslLogCallPrintf(0LL, "AslpFileLargeGetCrcChecksum", 887LL, "FileSize      : %I64u", v3);
    AslLogCallPrintf(
      0LL,
      "AslpFileLargeGetCrcChecksum",
      888LL,
      "CrcFileStart  : %I64u",
      *(_QWORD *)(*a2 + 16LL) - 4096LL);
    AslLogCallPrintf(0LL, "AslpFileLargeGetCrcChecksum", 889LL, "ViewFileOffset: %I64u", a2[7]);
    AslLogCallPrintf(0LL, "AslpFileLargeGetCrcChecksum", 890LL, "ViewFileSize  : %u", *((_DWORD *)a2 + 12));
    AslLogCallPrintf(0LL, "AslpFileLargeGetCrcChecksum", 891LL, "CrcViewOffset : %I64u", v6);
    AslLogCallPrintf(
      1LL,
      "AslpFileLargeGetCrcChecksum",
      895LL,
      "Alignment error in the end of file view for CRC checksum");
    return 3221226016LL;
  }
}
