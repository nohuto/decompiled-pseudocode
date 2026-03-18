/*
 * XREFs of ??1DataSourcePropertySet@@QEAA@XZ @ 0x180242BE0
 * Callers:
 *     ??1DataSourceProxy@@UEAA@XZ @ 0x180242C08 (--1DataSourceProxy@@UEAA@XZ.c)
 * Callees:
 *     ??1?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA@XZ @ 0x1800AD0AC (--1-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA@XZ.c)
 */

void __fastcall DataSourcePropertySet::~DataSourcePropertySet(DataSourcePropertySet *this)
{
  PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::~PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>((__int64)this + 64);
  std::_Hash<std::_Umap_traits<DCOMPOSITION_PROPERTY_ID,DCOMPOSITION_PROPERTY_ID,std::_Uhash_compare<DCOMPOSITION_PROPERTY_ID,std::hash<DCOMPOSITION_PROPERTY_ID>,std::equal_to<DCOMPOSITION_PROPERTY_ID>>,std::allocator<std::pair<DCOMPOSITION_PROPERTY_ID const,DCOMPOSITION_PROPERTY_ID>>,0>>::~_Hash<std::_Umap_traits<DCOMPOSITION_PROPERTY_ID,DCOMPOSITION_PROPERTY_ID,std::_Uhash_compare<DCOMPOSITION_PROPERTY_ID,std::hash<DCOMPOSITION_PROPERTY_ID>,std::equal_to<DCOMPOSITION_PROPERTY_ID>>,std::allocator<std::pair<DCOMPOSITION_PROPERTY_ID const,DCOMPOSITION_PROPERTY_ID>>,0>>((__int64)this);
}
