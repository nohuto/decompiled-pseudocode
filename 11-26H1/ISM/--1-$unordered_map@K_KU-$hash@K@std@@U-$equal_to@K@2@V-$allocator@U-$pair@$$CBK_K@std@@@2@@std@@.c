/*
 * XREFs of ??1?$unordered_map@K_KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBK_K@std@@@2@@std@@QEAA@XZ @ 0x18008A588
 * Callers:
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$6 @ 0x1801D504F (_DWMInputRouter--DWMInputRouter_--_1_--dtor$6.c)
 *     _SystemCursorController2::SystemCursorController2_::_1_::dtor$3 @ 0x1801D5609 (_SystemCursorController2--SystemCursorController2_--_1_--dtor$3.c)
 *     _ControllerNavigationManager::ControllerNavigationManager_::_1_::dtor$1 @ 0x1801D71FA (_ControllerNavigationManager--ControllerNavigationManager_--_1_--dtor$1.c)
 *     _DWMCursorBroker::DWMCursorBroker_::_1_::dtor$2 @ 0x1801D7210 (_DWMCursorBroker--DWMCursorBroker_--_1_--dtor$2.c)
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$7 @ 0x1801DB60A (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$7.c)
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$8 @ 0x1801DB623 (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$8.c)
 *     _ResizeProcessor::ResizeProcessor_::_1_::dtor$6 @ 0x1801DB8AD (_ResizeProcessor--ResizeProcessor_--_1_--dtor$6.c)
 *     _EdgyProcessor::EdgyProcessor_::_1_::dtor$2 @ 0x1801DBA13 (_EdgyProcessor--EdgyProcessor_--_1_--dtor$2.c)
 *     _EdgyProcessor::EdgyProcessor_::_1_::dtor$4 @ 0x1801DBA42 (_EdgyProcessor--EdgyProcessor_--_1_--dtor$4.c)
 *     _EdgyProcessor::EdgyProcessor_::_1_::dtor$9 @ 0x1801DBABF (_EdgyProcessor--EdgyProcessor_--_1_--dtor$9.c)
 *     _PenHapticDevice::UpdateBamoProperties_::_1_::dtor$3 @ 0x1801DC36D (_PenHapticDevice--UpdateBamoProperties_--_1_--dtor$3.c)
 *     _PenHapticInterface::PenHapticInterface_::_1_::dtor$1 @ 0x1801DC60C (_PenHapticInterface--PenHapticInterface_--_1_--dtor$1.c)
 *     _InputInfoValidator::ValidatePointerInput_::_1_::dtor$0 @ 0x1801DCA90 (_InputInfoValidator--ValidatePointerInput_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 std::unordered_map<unsigned long,unsigned __int64>::~unordered_map<unsigned long,unsigned __int64>()
{
  return std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::~_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>();
}
