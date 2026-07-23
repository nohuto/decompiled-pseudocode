/*
 * XREFs of AslpFileGetCrcChecksum @ 0x140892EA4
 * Callers:
 *     AslpFileGetChecksumAttributes @ 0x140892980 (AslpFileGetChecksumAttributes.c)
 * Callees:
 *     RtlULongLongSub @ 0x1404A8EE4 (RtlULongLongSub.c)
 *     AslComputeCrc32 @ 0x14088E458 (AslComputeCrc32.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileGetCrcChecksum(_DWORD *a1, __int64 a2)
{
  unsigned int v4; // ecx
  unsigned int v5; // r8d
  ULONGLONG v6; // rdx
  NTSTATUS v7; // ebx
  ULONGLONG v8; // rdx
  ULONGLONG v9; // rcx
  unsigned int v10; // edx
  unsigned int v11; // r10d
  ULONGLONG pullResult; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  if ( *(_QWORD *)(a2 + 16) >= 0x2000uLL )
  {
    AslComputeCrc32(0, *(_QWORD *)(a2 + 24), 0x1000u);
    v8 = *(_QWORD *)(a2 + 24);
    v9 = v8 + *(_QWORD *)(a2 + 16);
    if ( v9 < v8 )
    {
      v9 = -1LL;
      v7 = -1073741675;
    }
    else
    {
      v7 = 0;
    }
    pullResult = v9;
    if ( v7 < 0 || (v7 = RtlULongLongSub(v9, 0x1000uLL, &pullResult), v7 < 0) )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"AslpFileGetCrcChecksum",
        5005,
        (unsigned int)"Overflow/underflow encountered computing position for CRC_CHECKSUM [%x]");
      return (unsigned int)v7;
    }
    v5 = v10;
    v6 = pullResult;
    v4 = v11;
  }
  else
  {
    v5 = *(_DWORD *)(a2 + 32);
    v6 = *(_QWORD *)(a2 + 24);
  }
  *a1 = AslComputeCrc32(v4, v6, v5);
  return 0;
}
