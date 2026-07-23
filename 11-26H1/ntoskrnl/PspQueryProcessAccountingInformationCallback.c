/*
 * XREFs of PspQueryProcessAccountingInformationCallback @ 0x1409CDD60
 * Callers:
 *     <none>
 * Callees:
 *     PsAddProcessEnergyValues @ 0x140414930 (PsAddProcessEnergyValues.c)
 *     PoEnergyEstimationEnabled @ 0x140475F40 (PoEnergyEstimationEnabled.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PsQueryStatisticsProcess @ 0x1409CDFC0 (PsQueryStatisticsProcess.c)
 *     PspAddAccountingValues @ 0x1409CE260 (PspAddAccountingValues.c)
 *     PsQueryProcessEnergyValues @ 0x1409CE2C0 (PsQueryProcessEnergyValues.c)
 */

__int64 __fastcall PspQueryProcessAccountingInformationCallback(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  _BYTE v7[448]; // [rsp+20h] [rbp-1D8h] BYREF

  memset_0(v7, 0, 0x1B8uLL);
  if ( (*(_DWORD *)(a1 + 496) & 2) == 0 )
  {
    PsQueryStatisticsProcess(a1, a2);
    PspAddAccountingValues(a2 + 104, a2);
    *(_DWORD *)(a2 + 248) += *(_DWORD *)(a1 + 1028);
    v4 = *(_QWORD **)(a1 + 1592);
    if ( v4 )
    {
      *(_QWORD *)(a2 + 208) += *v4;
      *(_QWORD *)(a2 + 216) += v4[1];
      *(_QWORD *)(a2 + 224) += v4[2];
      *(_QWORD *)(a2 + 232) += v4[3];
      *(_QWORD *)(a2 + 240) += v4[4];
    }
    v5 = *(_QWORD **)(a1 + 2032);
    if ( v5 )
    {
      *(_QWORD *)(a2 + 696) = *v5;
      *(_QWORD *)(a2 + 704) = *(_QWORD *)(*(_QWORD *)(a1 + 2032) + 8LL);
    }
    if ( (unsigned __int8)PoEnergyEstimationEnabled() )
    {
      PsQueryProcessEnergyValues(a1, v7);
      PsAddProcessEnergyValues((_QWORD *)(a2 + 256), (__int64)v7);
    }
  }
  return 0LL;
}
