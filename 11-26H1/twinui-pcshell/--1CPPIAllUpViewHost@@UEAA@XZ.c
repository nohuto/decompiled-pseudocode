/*
 * XREFs of ??1CPPIAllUpViewHost@@UEAA@XZ @ 0x1804AF56C
 * Callers:
 *     ??_ECPPIAllUpViewHost@@UEAAPEAXI@Z @ 0x1804AF600 (--_ECPPIAllUpViewHost@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$CWeakRefSource@VCSwitchItemElement@@@WeakReference@@QEAA@XZ @ 0x1802C76F4 (--1-$CWeakRefSource@VCSwitchItemElement@@@WeakReference@@QEAA@XZ.c)
 */

void __fastcall CPPIAllUpViewHost::~CPPIAllUpViewHost(CPPIAllUpViewHost *this)
{
  WeakReference::CWeakRefSource<CSwitchItemElement>::~CWeakRefSource<CSwitchItemElement>((__int64 *)this + 21);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 20);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 19);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 18);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 17);
  *((_DWORD *)this + 33) = -1073741823;
  CMultitaskingViewHostBase<ISnapAssistViewHost>::~CMultitaskingViewHostBase<ISnapAssistViewHost>((__int64)this);
}
