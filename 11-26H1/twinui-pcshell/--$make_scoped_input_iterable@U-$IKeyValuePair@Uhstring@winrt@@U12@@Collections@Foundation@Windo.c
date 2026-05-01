/*
 * XREFs of ??$make_scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@YA?A_PPEBU?$pair@$$CBUhstring@winrt@@U12@@std@@0@Z @ 0x1802AEC78
 * Callers:
 *     ?Show@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@EEEE_K11@Z @ 0x180172130 (-Show@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@EEEE_K11@Z.c)
 * Callees:
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180029578 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ??0?$atomic@I@std@@QEAA@I@Z @ 0x1800DC258 (--0-$atomic@I@std@@QEAA@I@Z.c)
 *     ??0?$producers_base@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@V?$tuple@U?$IIterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x1802AED20 (--0-$producers_base@U-$scoped_input_iterable@U-$IKeyValuePair@Uhstring@winrt@@U12@@Collections@F.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
winrt *__fastcall winrt::impl::make_scoped_input_iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,std::pair<winrt::hstring const,winrt::hstring> const *>(
        winrt *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  _QWORD *v8; // r8
  struct IUnknown *v9; // rdx
  char *v11; // [rsp+50h] [rbp+8h]

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  v11 = (char *)operator new(0x30uLL);
  v11[24] = 0;
  winrt::impl::producers_base<winrt::impl::scoped_input_iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,std::pair<winrt::hstring const,winrt::hstring> const *>,std::tuple<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>>>::producers_base<winrt::impl::scoped_input_iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,std::pair<winrt::hstring const,winrt::hstring> const *>,std::tuple<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>>>(
    v11 + 16,
    v6,
    v11);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  std::atomic<unsigned int>::atomic<unsigned int>(v7 + 8, 1);
  *v8 = &winrt::impl::scoped_input_iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,std::pair<winrt::hstring const,winrt::hstring> const *>::`vftable';
  v8[4] = a2;
  v8[5] = a3;
  *winrt::put_abi(this, v9) = v11 + 16;
  *((_QWORD *)this + 1) = v11 + 24;
  return this;
}
