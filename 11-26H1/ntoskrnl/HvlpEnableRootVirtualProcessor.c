/*
 * XREFs of HvlpEnableRootVirtualProcessor @ 0x140794748
 * Callers:
 *     HvlInitializeProcessor @ 0x1407943F4 (HvlInitializeProcessor.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140365B60 (MmMapIoSpaceEx.c)
 *     HvlpGetLpcbByApicId @ 0x1405BCA4C (HvlpGetLpcbByApicId.c)
 *     HvlpMapStatisticsPage @ 0x1405BCD60 (HvlpMapStatisticsPage.c)
 *     HvlpCreateRootVirtualProcessor @ 0x140794608 (HvlpCreateRootVirtualProcessor.c)
 */

__int64 __fastcall HvlpEnableRootVirtualProcessor(__int64 a1, int a2)
{
  _DWORD *LpcbByApicId; // rax
  int *v4; // rsi
  _DWORD *v5; // rbx
  __int64 result; // rax
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  HIDWORD(v10) = 0;
  v11 = 0LL;
  LpcbByApicId = HvlpGetLpcbByApicId(a2);
  v4 = (int *)(a1 + 36);
  v5 = LpcbByApicId;
  if ( (HvlpRootFlags & 0x40) == 0
    || (result = HvlpCreateRootVirtualProcessor((__int64)LpcbByApicId, *v4), (int)result >= 0) )
  {
    *(_QWORD *)(a1 + 35856) = *((_QWORD *)v5 + 3);
    v7 = *v4;
    v5[5] = *v4;
    if ( v7 != v5[1] )
      byte_140E0A91C = 0;
    if ( (HvlpRootFlags & 0x10) == 0 )
      return 0LL;
    DWORD2(v10) = *v4;
    *(_QWORD *)&v10 = -1LL;
    result = HvlpMapStatisticsPage(65538, &v10, &v11);
    if ( (int)result < 0 )
      return result;
    v8 = (unsigned int)*v4;
    v9 = HvlpVpStatsPages;
    *(_QWORD *)(v9 + 8 * v8) = MmMapIoSpaceEx(v11, 4096LL, 2u);
    if ( *(_QWORD *)(HvlpVpStatsPages + 8LL * (unsigned int)*v4) )
      return 0LL;
    else
      return 3221225626LL;
  }
  return result;
}
