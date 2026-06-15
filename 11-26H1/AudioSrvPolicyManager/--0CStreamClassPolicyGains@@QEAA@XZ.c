/*
 * XREFs of ??0CStreamClassPolicyGains@@QEAA@XZ @ 0x180029268
 * Callers:
 *     ?GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamClassPolicyGains@@@Z @ 0x18000DE30 (-GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamCla.c)
 *     ??0CStreamClassPolicyGainsWrapper@@QEAA@XZ @ 0x18002D398 (--0CStreamClassPolicyGainsWrapper@@QEAA@XZ.c)
 * Callees:
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18002FD1C (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

CStreamClassPolicyGains *__fastcall CStreamClassPolicyGains::CStreamClassPolicyGains(CStreamClassPolicyGains *this)
{
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this, 0, 0);
  `eh vector constructor iterator'(
    (char *)this + 40,
    8uLL,
    0x18uLL,
    (void (*)(void *))wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,
    std::forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::~forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>);
  `eh vector constructor iterator'(
    (char *)this + 232,
    8uLL,
    0x18uLL,
    (void (*)(void *))wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,
    std::forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::~forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>);
  return this;
}
