/*
 * XREFs of ??_G?$ObjectTriageData@U_NDIS_COMMON_OPEN_BLOCK@@@@UEAAPEAXI@Z @ 0x140093200
 * Callers:
 *     ?reset@?$unique_ptr@V?$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@U?$KFreePoolNP@V?$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@@@@wistd@@QEAAXPEAV?$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@@Z @ 0x140094B58 (-reset@-$unique_ptr@V-$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@U-$KFreePoolNP@V-$ObjectTriageDat.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14008EAB0 (--3@YAXPEAX@Z.c)
 *     ??1?$ObjectTriageData@X@@UEAA@XZ @ 0x140093110 (--1-$ObjectTriageData@X@@UEAA@XZ.c)
 */

TriageData *__fastcall ObjectTriageData<_NDIS_COMMON_OPEN_BLOCK>::`scalar deleting destructor'(TriageData *a1, char a2)
{
  ObjectTriageData<void>::~ObjectTriageData<void>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
