/*
 * XREFs of AslpFileLargeGetChecksumAttributes @ 0x1800A20CC
 * Callers:
 *     AslpFileLargeEnsureLargeFileMapping @ 0x1800A1E40 (AslpFileLargeEnsureLargeFileMapping.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     AslpFileLargeGetChecksum @ 0x1800A1FEC (AslpFileLargeGetChecksum.c)
 *     AslpFileLargeGetCrcChecksum @ 0x1800A21C8 (AslpFileLargeGetCrcChecksum.c)
 */

__int64 __fastcall AslpFileLargeGetChecksumAttributes(__int64 a1, _QWORD *a2)
{
  int Checksum; // eax
  unsigned int v5; // edi
  __int64 v6; // rax
  int CrcChecksum; // eax
  __int64 v8; // rax
  unsigned int v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = 0;
  Checksum = AslpFileLargeGetChecksum(&v10, a2);
  v5 = Checksum;
  if ( Checksum >= 0 )
  {
    v6 = v10;
    *(_DWORD *)(a1 + 88) |= 1u;
    *(_QWORD *)(a1 + 80) = v6;
    *(_DWORD *)(a1 + 64) = 2;
    *(_QWORD *)(a1 + 72) = 4LL;
    v10 = 0;
    CrcChecksum = AslpFileLargeGetCrcChecksum(&v10, a2);
    v5 = CrcChecksum;
    if ( CrcChecksum >= 0 )
    {
      v8 = v10;
      *(_DWORD *)(a1 + 856) |= 1u;
      *(_QWORD *)(a1 + 848) = v8;
      v5 = 0;
      *(_DWORD *)(a1 + 832) = 2;
      *(_QWORD *)(a1 + 840) = 4LL;
      return v5;
    }
    AslLogCallPrintf(
      1LL,
      "AslpFileLargeGetChecksumAttributes",
      695LL,
      "AslpFileGetCrcChecksum failed [%x]",
      CrcChecksum);
  }
  else
  {
    AslLogCallPrintf(1LL, "AslpFileLargeGetChecksumAttributes", 674LL, "AslpFileLargeGetChecksum failed [%x]", Checksum);
    *(_DWORD *)(a1 + 88) |= 2u;
  }
  *(_DWORD *)(a1 + 856) |= 2u;
  return v5;
}
