/*
 * XREFs of ??1?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@KU?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@@2@@std@@QEAA@XZ @ 0x18008B4DC
 * Callers:
 *     __lambda_f42f6b7dc2f8f00e06af073ba952cab2_::operator()_::_1_::dtor$12 @ 0x1801D54A3 (__lambda_f42f6b7dc2f8f00e06af073ba952cab2_--operator()_--_1_--dtor$12.c)
 *     __lambda_2f33fc4b0ac679fd125de0d601496fc7_::operator()_::_1_::dtor$5 @ 0x1801D914A (__lambda_2f33fc4b0ac679fd125de0d601496fc7_--operator()_--_1_--dtor$5.c)
 *     _HapticProcessor::HapticProcessor_::_1_::dtor$1 @ 0x1801D930B (_HapticProcessor--HapticProcessor_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::map<std::wstring,unsigned long>::~map<std::wstring,unsigned long>(__int64 a1)
{
  return std::_Tree<std::_Tmap_traits<std::wstring,unsigned long,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,unsigned long>>,0>>::~_Tree<std::_Tmap_traits<std::wstring,unsigned long,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,unsigned long>>,0>>(a1);
}
