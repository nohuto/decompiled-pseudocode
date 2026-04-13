/*
 * XREFs of ??0?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@QEAA@AEBV_Locinfo@1@_K@Z @ 0x1800B5380
 * Callers:
 *     ?_Getcat@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x1800B595C (-_Getcat@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@SA_KPEAPEBVfac.c)
 * Callees:
 *     ?_Init@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@IEAAXAEBV_Locinfo@2@@Z @ 0x1800B5D50 (-_Init@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@IEAAXAEBV_Locinf.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>(
        __int64 a1,
        __int64 a2,
        int a3)
{
  *(_DWORD *)(a1 + 8) = a3;
  *(_QWORD *)a1 = &std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::`vftable';
  std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Init(a1, a2);
  return a1;
}
