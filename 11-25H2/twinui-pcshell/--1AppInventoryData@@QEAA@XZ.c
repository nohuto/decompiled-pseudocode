/*
 * XREFs of ??1AppInventoryData@@QEAA@XZ @ 0x180552570
 * Callers:
 *     ?ComputeAppIdFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1805526F4 (-ComputeAppIdFromExePath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG.c)
 *     ?GetDisplayNameFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1805529B4 (-GetDisplayNameFromExePath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PE.c)
 *     _ComputeAppIdFromExePath_::_1_::dtor$1 @ 0x1806CCCB4 (_ComputeAppIdFromExePath_--_1_--dtor$1.c)
 *     _GetAppInventoryData_::_1_::dtor$0 @ 0x1806CCCC6 (_GetAppInventoryData_--_1_--dtor$0.c)
 *     _GetDisplayNameFromExePath_::_1_::dtor$4 @ 0x1806CCD32 (_GetDisplayNameFromExePath_--_1_--dtor$4.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall AppInventoryData::~AppInventoryData(void **this)
{
  std::wstring::_Tidy_deallocate(this + 8);
  std::wstring::_Tidy_deallocate(this + 4);
  std::wstring::_Tidy_deallocate(this);
}
