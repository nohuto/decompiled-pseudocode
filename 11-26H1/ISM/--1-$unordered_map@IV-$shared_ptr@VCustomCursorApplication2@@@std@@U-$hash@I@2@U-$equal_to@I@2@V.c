/*
 * XREFs of ??1?$unordered_map@IV?$shared_ptr@VCustomCursorApplication2@@@std@@U?$hash@I@2@U?$equal_to@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800D4830
 * Callers:
 *     _GestureServices::GestureServices_::_1_::dtor$9 @ 0x1801D573F (_GestureServices--GestureServices_--_1_--dtor$9.c)
 *     _GestureServices::GestureServices_::_1_::dtor$10 @ 0x1801D5758 (_GestureServices--GestureServices_--_1_--dtor$10.c)
 *     _SpatialRimDeviceCollection::SpatialRimDeviceCollection_::_1_::dtor$7 @ 0x1801D656E (_SpatialRimDeviceCollection--SpatialRimDeviceCollection_--_1_--dtor$7.c)
 *     _SystemCursorService2::SystemCursorService2_::_1_::dtor$3 @ 0x1801DA94D (_SystemCursorService2--SystemCursorService2_--_1_--dtor$3.c)
 *     _SystemCursorService2::SystemCursorService2_::_1_::dtor$4 @ 0x1801DA963 (_SystemCursorService2--SystemCursorService2_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::unordered_map<unsigned int,std::shared_ptr<CustomCursorApplication2>>::~unordered_map<unsigned int,std::shared_ptr<CustomCursorApplication2>>(
        __int64 *a1)
{
  std::_Hash<std::_Umap_traits<unsigned long,std::shared_ptr<LegacyDeviceInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::shared_ptr<LegacyDeviceInfo>>>,0>>::~_Hash<std::_Umap_traits<unsigned long,std::shared_ptr<LegacyDeviceInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::shared_ptr<LegacyDeviceInfo>>>,0>>(a1);
}
