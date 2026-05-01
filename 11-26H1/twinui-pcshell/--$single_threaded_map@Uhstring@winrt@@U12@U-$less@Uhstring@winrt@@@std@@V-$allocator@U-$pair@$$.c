/*
 * XREFs of ??$single_threaded_map@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@@winrt@@YA?AU?$IMap@Uhstring@winrt@@U12@@Collections@Foundation@Windows@0@XZ @ 0x180337CBC
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1 @ 0x1803391B0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureSystemDialog-.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??$_Erase_head@V?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@1@@Z @ 0x180337710 (--$_Erase_head@V-$allocator@U-$_Tree_node@U-$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@std@@.c)
 *     ??0?$map@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@@std@@QEAA@XZ @ 0x180337E20 (--0-$map@Uhstring@winrt@@U12@U-$less@Uhstring@winrt@@@std@@V-$allocator@U-$pair@$$CBUhstring@win.c)
 *     ??0?$map_impl@Uhstring@winrt@@U12@V?$map@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@QEAA@$$QEAV?$map@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@@std@@@Z @ 0x180337E50 (--0-$map_impl@Uhstring@winrt@@U12@V-$map@Uhstring@winrt@@U12@U-$less@Uhstring@winrt@@@std@@V-$al.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::single_threaded_map<winrt::hstring,winrt::hstring,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,winrt::hstring>>>(
        _QWORD *a1)
{
  __int64 v2; // rbx
  void *v4[4]; // [rsp+28h] [rbp-20h] BYREF
  _QWORD *v5; // [rsp+50h] [rbp+8h]

  v2 = std::map<winrt::hstring,winrt::hstring>::map<winrt::hstring,winrt::hstring>(v4);
  v5 = operator new(0x40uLL);
  winrt::impl::map_impl<winrt::hstring,winrt::hstring,std::map<winrt::hstring,winrt::hstring>,winrt::impl::single_threaded_collection_base>::map_impl<winrt::hstring,winrt::hstring,std::map<winrt::hstring,winrt::hstring>,winrt::impl::single_threaded_collection_base>(
    v5,
    v2);
  *v5 = &winrt::impl::map_impl<winrt::hstring,winrt::hstring,std::map<winrt::hstring,winrt::hstring>,winrt::impl::single_threaded_collection_base>::`vftable';
  *a1 = v5 + 2;
  std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>::_Erase_head<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,winrt::hstring>,void *>>>(
    v4,
    (__int64)v4);
  return a1;
}
