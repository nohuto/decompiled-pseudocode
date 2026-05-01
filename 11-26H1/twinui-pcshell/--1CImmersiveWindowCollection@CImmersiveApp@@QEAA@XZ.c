/*
 * XREFs of ??1CImmersiveWindowCollection@CImmersiveApp@@QEAA@XZ @ 0x1802FC158
 * Callers:
 *     ??1CImmersiveApp@@MEAA@XZ @ 0x1802FBFE4 (--1CImmersiveApp@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D120 (-InternalRelease@-$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CImmersiveApp::CImmersiveWindowCollection::~CImmersiveWindowCollection(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  unsigned __int64 *v1; // rdi
  unsigned __int64 i; // rsi
  unsigned __int64 j; // rdi

  v1 = (unsigned __int64 *)((char *)this + 256);
  if ( *((_QWORD *)this + 31) )
  {
    for ( i = 0LL; i < *v1; ++i )
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(*((_QWORD *)this + 31) + 8 * i));
    CoTaskMemFree(*((LPVOID *)this + 31));
    *((_QWORD *)this + 31) = 0LL;
  }
  *v1 = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease((__int64 *)this + 30);
  if ( *((_QWORD *)this + 20) )
  {
    for ( j = 0LL; j < *((_QWORD *)this + 21); ++j )
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(*((_QWORD *)this + 20) + 8 * j));
    CoTaskMemFree(*((LPVOID *)this + 20));
    *((_QWORD *)this + 20) = 0LL;
  }
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 18);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 15);
}
