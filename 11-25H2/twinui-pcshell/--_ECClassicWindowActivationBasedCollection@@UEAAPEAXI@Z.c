/*
 * XREFs of ??_ECClassicWindowActivationBasedCollection@@UEAAPEAXI@Z @ 0x1802F1730
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CClassicWindowActivationBasedCollection *__fastcall CClassicWindowActivationBasedCollection::`vector deleting destructor'(
        CClassicWindowActivationBasedCollection *this,
        char a2)
{
  unsigned __int64 *v3; // rdi
  unsigned __int64 i; // rsi

  *(_QWORD *)this = &CClassicWindowActivationBasedCollection::`vftable';
  v3 = (unsigned __int64 *)((char *)this + 16);
  if ( *((_QWORD *)this + 1) )
  {
    for ( i = 0LL; i < *v3; ++i )
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(*((_QWORD *)this + 1) + 8 * i));
    CoTaskMemFree(*((LPVOID *)this + 1));
    *((_QWORD *)this + 1) = 0LL;
  }
  *v3 = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
