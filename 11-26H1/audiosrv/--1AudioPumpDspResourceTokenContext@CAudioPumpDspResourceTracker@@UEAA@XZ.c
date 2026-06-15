/*
 * XREFs of ??1AudioPumpDspResourceTokenContext@CAudioPumpDspResourceTracker@@UEAA@XZ @ 0x1800C16B8
 * Callers:
 *     ??_GAudioPumpDspResourceTokenContext@CAudioPumpDspResourceTracker@@UEAAPEAXI@Z @ 0x1800C1910 (--_GAudioPumpDspResourceTokenContext@CAudioPumpDspResourceTracker@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800160F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??1?$com_ptr_t@VCAudioPumpDspResourceTracker@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C1604 (--1-$com_ptr_t@VCAudioPumpDspResourceTracker@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CAudioPumpDspResourceTracker::AudioPumpDspResourceTokenContext::~AudioPumpDspResourceTokenContext(
        CAudioPumpDspResourceTracker::AudioPumpDspResourceTokenContext *this)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 4);
  wil::com_ptr_t<CAudioPumpDspResourceTracker,wil::err_returncode_policy>::~com_ptr_t<CAudioPumpDspResourceTracker,wil::err_returncode_policy>((volatile signed __int32 **)this + 3);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
