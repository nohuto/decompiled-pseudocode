/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@U_PROCESSOR_POWER_INFORMATION@@V?$allocator@U_PROCESSOR_POWER_INFORMATION@@@std@@@std@@@std@@QEAA@XZ @ 0x18034108C
 * Callers:
 *     ??0?$vector@U_PROCESSOR_POWER_INFORMATION@@V?$allocator@U_PROCESSOR_POWER_INFORMATION@@@std@@@std@@QEAA@_KAEBV?$allocator@U_PROCESSOR_POWER_INFORMATION@@@1@@Z @ 0x18034098C (--0-$vector@U_PROCESSOR_POWER_INFORMATION@@V-$allocator@U_PROCESSOR_POWER_INFORMATION@@@std@@@st.c)
 * Callees:
 *     ??1?$vector@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@@2@@std@@QEAA@XZ @ 0x180352750 (--1-$vector@U-$pair@_KURect@Foundation@Windows@winrt@@@std@@V-$allocator@U-$pair@_KURect@Foundat.c)
 */

__int64 __fastcall std::_Tidy_guard<std::vector<_PROCESSOR_POWER_INFORMATION>>::~_Tidy_guard<std::vector<_PROCESSOR_POWER_INFORMATION>>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>::~vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>();
  return result;
}
