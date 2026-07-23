/*
 * XREFs of AslpFileLargeGetCrcChecksum @ 0x140895D1C
 * Callers:
 *     AslpFileLargeGetChecksumAttributes @ 0x140895C20 (AslpFileLargeGetChecksumAttributes.c)
 * Callees:
 *     AslComputeCrc32 @ 0x14088E458 (AslComputeCrc32.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileLargeGetCrcChecksum(_DWORD *a1, unsigned __int64 *a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r14
  unsigned int v9; // eax

  *a1 = 0;
  v4 = *(_QWORD *)(*a2 + 16);
  if ( v4 < 0x100000 )
    return 3221225485LL;
  if ( !a2[6] )
    return 3221225485LL;
  v5 = a2[7];
  if ( v5 < 0x1000 || !a2[2] || a2[3] < 0x1000 || a2[4] )
    return 3221225485LL;
  v6 = v4 - a2[8];
  v7 = v6 - 4096;
  if ( v6 <= v5 )
  {
    v9 = AslComputeCrc32(0, a2[2], 0x1000u);
    *a1 = AslComputeCrc32(v9, v7 + a2[6], 0x1000u);
    return 0LL;
  }
  else
  {
    AslLogCallPrintf(0, (unsigned int)"AslpFileLargeGetCrcChecksum", 887, (unsigned int)"FileSize      : %I64u");
    AslLogCallPrintf(0, (unsigned int)"AslpFileLargeGetCrcChecksum", 888, (unsigned int)"CrcFileStart  : %I64u");
    AslLogCallPrintf(0, (unsigned int)"AslpFileLargeGetCrcChecksum", 889, (unsigned int)"ViewFileOffset: %I64u");
    AslLogCallPrintf(0, (unsigned int)"AslpFileLargeGetCrcChecksum", 890, (unsigned int)"ViewFileSize  : %u");
    AslLogCallPrintf(0, (unsigned int)"AslpFileLargeGetCrcChecksum", 891, (unsigned int)"CrcViewOffset : %I64u");
    AslLogCallPrintf(
      1,
      (unsigned int)"AslpFileLargeGetCrcChecksum",
      895,
      (unsigned int)"Alignment error in the end of file view for CRC checksum");
    return 3221226016LL;
  }
}
