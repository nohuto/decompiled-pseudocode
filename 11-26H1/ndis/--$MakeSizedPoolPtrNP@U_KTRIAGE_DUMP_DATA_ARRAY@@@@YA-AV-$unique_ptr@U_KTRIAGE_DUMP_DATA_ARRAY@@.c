/*
 * XREFs of ??$MakeSizedPoolPtrNP@U_KTRIAGE_DUMP_DATA_ARRAY@@@@YA?AV?$unique_ptr@U_KTRIAGE_DUMP_DATA_ARRAY@@U?$KFreePoolNP@U_KTRIAGE_DUMP_DATA_ARRAY@@@@@wistd@@K_K@Z @ 0x140001964
 * Callers:
 *     ?Make@?$ObjectTriageData@U_NDIS_MINIPORT_BLOCK@@@@SAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU?$TriageDataCollector@U_NDIS_MINIPORT_BLOCK@@@@_KPEAPEAVTriageData@@@Z @ 0x140093E88 (-Make@-$ObjectTriageData@U_NDIS_MINIPORT_BLOCK@@@@SAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU-$TriageDataC.c)
 *     ?Make@?$ObjectTriageData@U_NDIS_M_DRIVER_BLOCK@@@@SAJPEAU_NDIS_M_DRIVER_BLOCK@@PEBU?$TriageDataCollector@U_NDIS_M_DRIVER_BLOCK@@@@_KPEAPEAVTriageData@@@Z @ 0x1400940A8 (-Make@-$ObjectTriageData@U_NDIS_M_DRIVER_BLOCK@@@@SAJPEAU_NDIS_M_DRIVER_BLOCK@@PEBU-$TriageDataC.c)
 *     ?Make@?$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@SAJPEAU_NDIS_FILTER_BLOCK@@PEBU?$TriageDataCollector@U_NDIS_FILTER_BLOCK@@@@_KPEAPEAVTriageData@@@Z @ 0x14009A3B0 (-Make@-$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@SAJPEAU_NDIS_FILTER_BLOCK@@PEBU-$TriageDataColle.c)
 *     ?Make@?$ObjectTriageData@X@@SAJPEAXPEBU?$TriageDataCollector@X@@_KPEAPEAVTriageData@@@Z @ 0x14009AD2C (-Make@-$ObjectTriageData@X@@SAJPEAXPEBU-$TriageDataCollector@X@@_KPEAPEAVTriageData@@@Z.c)
 *     ?Make@?$ObjectTriageData@U_NDIS_FILTER_DRIVER_BLOCK@@@@SAJPEAU_NDIS_FILTER_DRIVER_BLOCK@@PEBU?$TriageDataCollector@U_NDIS_FILTER_DRIVER_BLOCK@@@@_KPEAPEAVTriageData@@@Z @ 0x14009C1D4 (-Make@-$ObjectTriageData@U_NDIS_FILTER_DRIVER_BLOCK@@@@SAJPEAU_NDIS_FILTER_DRIVER_BLOCK@@PEBU-$T.c)
 *     ?Make@?$ObjectTriageData@U_NDIS_COMMON_OPEN_BLOCK@@@@SAJPEAU_NDIS_COMMON_OPEN_BLOCK@@PEBU?$TriageDataCollector@U_NDIS_COMMON_OPEN_BLOCK@@@@_KPEAPEAVTriageData@@@Z @ 0x1400BAD44 (-Make@-$ObjectTriageData@U_NDIS_COMMON_OPEN_BLOCK@@@@SAJPEAU_NDIS_COMMON_OPEN_BLOCK@@PEBU-$Triag.c)
 *     ?Make@?$ObjectTriageData@U_NDIS_PROTOCOL_BLOCK@@@@SAJPEAU_NDIS_PROTOCOL_BLOCK@@PEBU?$TriageDataCollector@U_NDIS_PROTOCOL_BLOCK@@@@_KPEAPEAVTriageData@@@Z @ 0x1400BAF64 (-Make@-$ObjectTriageData@U_NDIS_PROTOCOL_BLOCK@@@@SAJPEAU_NDIS_PROTOCOL_BLOCK@@PEBU-$TriageDataC.c)
 * Callees:
 *     memset @ 0x1400EA4C0 (memset.c)
 */

_QWORD *__fastcall MakeSizedPoolPtrNP<_KTRIAGE_DUMP_DATA_ARRAY>(_QWORD *a1, __int64 a2, __int64 a3)
{
  void *Pool2; // rax
  void *v5; // rdi

  Pool2 = (void *)ExAllocatePool2(64LL, a3, 1096049742LL);
  v5 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, 0x40uLL);
    *a1 = v5;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
