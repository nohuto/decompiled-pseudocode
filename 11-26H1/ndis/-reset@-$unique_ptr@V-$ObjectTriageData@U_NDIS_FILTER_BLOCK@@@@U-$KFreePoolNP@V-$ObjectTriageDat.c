/*
 * XREFs of ?reset@?$unique_ptr@V?$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@U?$KFreePoolNP@V?$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@@@@wistd@@QEAAXPEAV?$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@@Z @ 0x140094B58
 * Callers:
 *     ?Make@?$ObjectTriageData@U_NDIS_MINIPORT_BLOCK@@@@SAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU?$TriageDataCollector@U_NDIS_MINIPORT_BLOCK@@@@_KPEAPEAVTriageData@@@Z @ 0x140093E88 (-Make@-$ObjectTriageData@U_NDIS_MINIPORT_BLOCK@@@@SAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU-$TriageDataC.c)
 *     ?Make@?$ObjectTriageData@U_NDIS_M_DRIVER_BLOCK@@@@SAJPEAU_NDIS_M_DRIVER_BLOCK@@PEBU?$TriageDataCollector@U_NDIS_M_DRIVER_BLOCK@@@@_KPEAPEAVTriageData@@@Z @ 0x1400940A8 (-Make@-$ObjectTriageData@U_NDIS_M_DRIVER_BLOCK@@@@SAJPEAU_NDIS_M_DRIVER_BLOCK@@PEBU-$TriageDataC.c)
 *     ?Make@?$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@SAJPEAU_NDIS_FILTER_BLOCK@@PEBU?$TriageDataCollector@U_NDIS_FILTER_BLOCK@@@@_KPEAPEAVTriageData@@@Z @ 0x14009A3B0 (-Make@-$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@SAJPEAU_NDIS_FILTER_BLOCK@@PEBU-$TriageDataColle.c)
 *     ?Make@?$ObjectTriageData@X@@SAJPEAXPEBU?$TriageDataCollector@X@@_KPEAPEAVTriageData@@@Z @ 0x14009AD2C (-Make@-$ObjectTriageData@X@@SAJPEAXPEBU-$TriageDataCollector@X@@_KPEAPEAVTriageData@@@Z.c)
 *     ?Make@?$ObjectTriageData@U_NDIS_FILTER_DRIVER_BLOCK@@@@SAJPEAU_NDIS_FILTER_DRIVER_BLOCK@@PEBU?$TriageDataCollector@U_NDIS_FILTER_DRIVER_BLOCK@@@@_KPEAPEAVTriageData@@@Z @ 0x14009C1D4 (-Make@-$ObjectTriageData@U_NDIS_FILTER_DRIVER_BLOCK@@@@SAJPEAU_NDIS_FILTER_DRIVER_BLOCK@@PEBU-$T.c)
 *     ?Make@?$ObjectTriageData@U_NDIS_COMMON_OPEN_BLOCK@@@@SAJPEAU_NDIS_COMMON_OPEN_BLOCK@@PEBU?$TriageDataCollector@U_NDIS_COMMON_OPEN_BLOCK@@@@_KPEAPEAVTriageData@@@Z @ 0x1400BAD44 (-Make@-$ObjectTriageData@U_NDIS_COMMON_OPEN_BLOCK@@@@SAJPEAU_NDIS_COMMON_OPEN_BLOCK@@PEBU-$Triag.c)
 *     ?Make@?$ObjectTriageData@U_NDIS_PROTOCOL_BLOCK@@@@SAJPEAU_NDIS_PROTOCOL_BLOCK@@PEBU?$TriageDataCollector@U_NDIS_PROTOCOL_BLOCK@@@@_KPEAPEAVTriageData@@@Z @ 0x1400BAF64 (-Make@-$ObjectTriageData@U_NDIS_PROTOCOL_BLOCK@@@@SAJPEAU_NDIS_PROTOCOL_BLOCK@@PEBU-$TriageDataC.c)
 * Callees:
 *     ??_G?$ObjectTriageData@U_NDIS_COMMON_OPEN_BLOCK@@@@UEAAPEAXI@Z @ 0x140093200 (--_G-$ObjectTriageData@U_NDIS_COMMON_OPEN_BLOCK@@@@UEAAPEAXI@Z.c)
 */

void __fastcall wistd::unique_ptr<ObjectTriageData<_NDIS_FILTER_BLOCK>,KFreePoolNP<ObjectTriageData<_NDIS_FILTER_BLOCK>>>::reset(
        TriageData **a1,
        TriageData *a2)
{
  TriageData *v2; // rbx

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
  {
    ObjectTriageData<_NDIS_COMMON_OPEN_BLOCK>::`scalar deleting destructor'(v2, 0);
    ExFreePoolWithTag(v2, 0);
  }
}
