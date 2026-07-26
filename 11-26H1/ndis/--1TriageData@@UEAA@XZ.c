/*
 * XREFs of ??1TriageData@@UEAA@XZ @ 0x1400E7B0C
 * Callers:
 *     ??1?$ObjectTriageData@X@@UEAA@XZ @ 0x140093110 (--1-$ObjectTriageData@X@@UEAA@XZ.c)
 *     ??_ETriageData@@UEAAPEAXI@Z @ 0x1400E7B40 (--_ETriageData@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@U_KTRIAGE_DUMP_DATA_ARRAY@@U?$KFreePoolNP@U_KTRIAGE_DUMP_DATA_ARRAY@@@@@wistd@@QEAAXPEAU_KTRIAGE_DUMP_DATA_ARRAY@@@Z @ 0x140094B2C (-reset@-$unique_ptr@U_KTRIAGE_DUMP_DATA_ARRAY@@U-$KFreePoolNP@U_KTRIAGE_DUMP_DATA_ARRAY@@@@@wist.c)
 *     ?Unregister@TriageData@@IEAAXXZ @ 0x1400E7CD8 (-Unregister@TriageData@@IEAAXXZ.c)
 */

void __fastcall TriageData::~TriageData(TriageData *this)
{
  this->__vftable = (TriageData_vtbl *)&TriageData::`vftable';
  TriageData::Unregister(this);
  wistd::unique_ptr<_KTRIAGE_DUMP_DATA_ARRAY,KFreePoolNP<_KTRIAGE_DUMP_DATA_ARRAY>>::reset(
    (void **)&this->m_triageDumpDataArray.__ptr_.__value_,
    0LL);
}
