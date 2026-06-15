/*
 * XREFs of ??0CAudioPumpDspResourceTracker@@QEAA@XZ @ 0x1800C1430
 * Callers:
 *     _dynamic_initializer_for__s_DspResourceTracker__ @ 0x180008470 (_dynamic_initializer_for__s_DspResourceTracker__.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001E210 (--2@YAPEAX_K@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x18007A818 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$TokenManager@VCAudioPumpDspResourceTracker@@@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$TokenManager@VCAudioPumpDspResourceTracker@@@@@std@@@std@@@std@@@2@@Z @ 0x1800BCB40 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_1800BCB40.c)
 *     ??$emplace@AEBQEBGPEAVCAudioPumpDspResourceTracker@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$TokenManager@VCAudioPumpDspResourceTracker@@@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$TokenManager@VCAudioPumpDspResourceTracker@@@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$TokenManager@VCAudioPumpDspResourceTracker@@@@@std@@@std@@@std@@@std@@_N@1@AEBQEBG$$QEAPEAVCAudioPumpDspResourceTracker@@@Z @ 0x1800C1204 (--$emplace@AEBQEBGPEAVCAudioPumpDspResourceTracker@@@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-.c)
 */

// Hidden C++ exception states: #wind=4
CAudioPumpDspResourceTracker *__fastcall CAudioPumpDspResourceTracker::CAudioPumpDspResourceTracker(
        CAudioPumpDspResourceTracker *this)
{
  _QWORD *v1; // rax
  __int64 v2; // r8
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF
  int *v5; // [rsp+40h] [rbp+8h] BYREF
  void *v6; // [rsp+48h] [rbp+10h]

  v5 = (int *)this;
  v6 = &s_DspResourceTracker;
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>(&s_DspResourceTracker);
  s_DspResourceTracker = &CAudioPumpDspResourceTracker::`vftable';
  stru_1801D65C0.Ptr = 0LL;
  v5 = &dword_1801D65C8;
  dword_1801D65C8 = 0;
  qword_1801D65D0 = 0LL;
  qword_1801D65D8 = 0LL;
  v1 = operator new(0x60uLL);
  *v1 = v1;
  v1[1] = v1;
  qword_1801D65D0 = (__int64)v1;
  xmmword_1801D65E0 = 0LL;
  qword_1801D65F0 = 0LL;
  qword_1801D65F8 = 7LL;
  qword_1801D6600 = 8LL;
  dword_1801D65C8 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,TokenManager<CAudioPumpDspResourceTracker>>>>>>>::_Assign_grow(
    (__int64)&xmmword_1801D65E0,
    0x10uLL,
    (unsigned __int64)v1);
  v5 = (int *)&s_DspResourceTracker;
  std::_Hash<std::_Umap_traits<std::wstring,TokenManager<CAudioPumpDspResourceTracker>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,TokenManager<CAudioPumpDspResourceTracker>>>,0>>::emplace<unsigned short const * const &,CAudioPumpDspResourceTracker *>(
    &dword_1801D65C8,
    (__int64)v4,
    v2,
    (__int64 *)&v5);
  *(_DWORD *)(v4[0] + 80LL) = -1;
  return (CAudioPumpDspResourceTracker *)&s_DspResourceTracker;
}
