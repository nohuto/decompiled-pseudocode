/*
 * XREFs of ??1AppInventoryData@@QEAA@XZ @ 0x1805767C4
 * Callers:
 *     ?ComputeAppIdFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180576934 (-ComputeAppIdFromExePath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG.c)
 *     ?GetDisplayNameFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180576B90 (-GetDisplayNameFromExePath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PE.c)
 *     _ComputeAppIdFromExePath_::_1_::dtor$1 @ 0x1806F5251 (_ComputeAppIdFromExePath_--_1_--dtor$1.c)
 *     _GetAppInventoryData_::_1_::dtor$0 @ 0x1806F5263 (_GetAppInventoryData_--_1_--dtor$0.c)
 *     _GetDisplayNameFromExePath_::_1_::dtor$4 @ 0x1806F52CF (_GetDisplayNameFromExePath_--_1_--dtor$4.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall AppInventoryData::~AppInventoryData(AppInventoryData *this)
{
  std::wstring::_Tidy_deallocate((_QWORD *)this + 8);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 4);
  std::wstring::_Tidy_deallocate(this);
}
