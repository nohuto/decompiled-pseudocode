/*
 * XREFs of ??1CAudioPumpDspResourceTracker@@UEAA@XZ @ 0x1800C1718
 * Callers:
 *     ??_ECAudioPumpDspResourceTracker@@UEAAPEAXI@Z @ 0x1800C1950 (--_ECAudioPumpDspResourceTracker@@UEAAPEAXI@Z.c)
 *     _dynamic_atexit_destructor_for__s_DspResourceTracker__ @ 0x18016D240 (_dynamic_atexit_destructor_for__s_DspResourceTracker__.c)
 * Callees:
 *     ??1?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$TokenManager@VCAudioPumpDspResourceTracker@@@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$TokenManager@VCAudioPumpDspResourceTracker@@@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x1800C1578 (--1-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$Toke.c)
 */

void __fastcall CAudioPumpDspResourceTracker::~CAudioPumpDspResourceTracker(CAudioPumpDspResourceTracker *this)
{
  std::_Hash<std::_Umap_traits<std::wstring,TokenManager<CAudioPumpDspResourceTracker>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,TokenManager<CAudioPumpDspResourceTracker>>>,0>>::~_Hash<std::_Umap_traits<std::wstring,TokenManager<CAudioPumpDspResourceTracker>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,TokenManager<CAudioPumpDspResourceTracker>>>,0>>((__int64 *)this + 3);
  *((_DWORD *)this + 3) = -1073741823;
}
