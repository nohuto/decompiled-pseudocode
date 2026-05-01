/*
 * XREFs of ??0?$producers_base@VWindowRegistration@@V?$tuple@UIClosable@Foundation@Windows@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x1805D6C48
 * Callers:
 *     ??0WindowRegistration@@QEAA@PEAUHWND__@@AEBVCorrelationVector@@@Z @ 0x1805D6C60 (--0WindowRegistration@@QEAA@PEAUHWND__@@AEBVCorrelationVector@@@Z.c)
 * Callees:
 *     ??0?$producer_convert@VWindowRegistration@@UIClosable@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x1805D6C30 (--0-$producer_convert@VWindowRegistration@@UIClosable@Foundation@Windows@winrt@@X@impl@winrt@@QE.c)
 */

__int64 winrt::impl::producers_base<WindowRegistration,std::tuple<winrt::Windows::Foundation::IClosable>>::producers_base<WindowRegistration,std::tuple<winrt::Windows::Foundation::IClosable>>()
{
  __int64 v0; // rcx

  winrt::impl::producer_convert<WindowRegistration,winrt::Windows::Foundation::IClosable,void>::producer_convert<WindowRegistration,winrt::Windows::Foundation::IClosable,void>();
  return v0;
}
