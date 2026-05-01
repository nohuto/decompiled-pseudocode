/*
 * XREFs of ??1CGITCallbackArray@@UEAA@XZ @ 0x1800867D8
 * Callers:
 *     ??_GCGITCallbackArray@@UEAAPEAXI@Z @ 0x1800867A0 (--_GCGITCallbackArray@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@UIPenWorkspaceScreenCaptureBroker@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1801A9874 (--1-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMark_ea_1801A9874.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CGITCallbackArray::~CGITCallbackArray(CGITCallbackArray *this)
{
  unsigned __int64 *v2; // rdi
  unsigned __int64 i; // rsi

  v2 = (unsigned __int64 *)((char *)this + 56);
  if ( *((_QWORD *)this + 6) )
  {
    for ( i = 0LL; i < *v2; ++i )
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(*((_QWORD *)this + 6) + 8 * i));
    CoTaskMemFree(*((LPVOID *)this + 6));
    *((_QWORD *)this + 6) = 0LL;
  }
  *v2 = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 11) = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IPenWorkspaceScreenCaptureBroker>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IPenWorkspaceScreenCaptureBroker>(this);
}
