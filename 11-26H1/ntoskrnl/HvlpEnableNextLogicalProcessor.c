/*
 * XREFs of HvlpEnableNextLogicalProcessor @ 0x1405BC94C
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x1405BC1D8 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140365B60 (MmMapIoSpaceEx.c)
 *     HvlpGetVpIndexFromApicId @ 0x1405BCA74 (HvlpGetVpIndexFromApicId.c)
 *     HvlpMapStatisticsPage @ 0x1405BCD60 (HvlpMapStatisticsPage.c)
 *     HvlpStartLogicalProcessor @ 0x1405BDB6C (HvlpStartLogicalProcessor.c)
 */

__int64 __fastcall HvlpEnableNextLogicalProcessor(__int64 a1, unsigned __int16 a2)
{
  int v2; // edi
  int v3; // esi
  __int64 v4; // rbp
  char *v5; // rbx
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int16 v9; // cx
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v2 = HvlpLogicalProcessorCount;
  v3 = a1;
  v4 = a2;
  v5 = (char *)HvlpLogicalProcessorRegions + 104 * (unsigned int)HvlpLogicalProcessorCount;
  v11 = 0;
  v12 = 0LL;
  if ( (HvlpRootFlags & 0x20) != 0 )
  {
    result = HvlpStartLogicalProcessor((unsigned int)HvlpLogicalProcessorCount, (unsigned int)a1, a2, v5 + 40);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    result = HvlpGetVpIndexFromApicId(a1, &v11);
    if ( (int)result < 0 )
      return result;
    v2 = v11;
  }
  if ( (HvlpRootFlags & 0x10) != 0 )
  {
    v10 = 0LL;
    LODWORD(v10) = v2;
    result = HvlpMapStatisticsPage(2LL, &v10, &v12);
    if ( (int)result < 0 )
      return result;
    v7 = MmMapIoSpaceEx(v12, 4096LL, 2u);
    if ( !v7 )
      return 3221225626LL;
    *((_QWORD *)v5 + 3) = v7;
  }
  *((_DWORD *)v5 + 1) = v2;
  v8 = KeNodeBlock[v4];
  *((_DWORD *)v5 + 2) = v3;
  *((_WORD *)v5 + 1) = v4;
  v9 = *(_WORD *)(v8 + 2);
  result = 0LL;
  *((_WORD *)v5 + 48) = v9;
  *((_DWORD *)v5 + 5) = -1;
  *v5 = 1;
  return result;
}
