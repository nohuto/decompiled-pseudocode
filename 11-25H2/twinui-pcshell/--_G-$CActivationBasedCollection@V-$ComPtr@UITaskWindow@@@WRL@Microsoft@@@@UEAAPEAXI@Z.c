/*
 * XREFs of ??_G?$CActivationBasedCollection@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@UEAAPEAXI@Z @ 0x1802F3720
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

char *__fastcall CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>::`scalar deleting destructor'(
        char *a1,
        char a2)
{
  unsigned __int64 *v3; // rdi
  unsigned __int64 i; // rsi

  *(_QWORD *)a1 = &CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>::`vftable';
  v3 = (unsigned __int64 *)(a1 + 16);
  if ( *((_QWORD *)a1 + 1) )
  {
    for ( i = 0LL; i < *v3; ++i )
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(*((_QWORD *)a1 + 1) + 8 * i));
    CoTaskMemFree(*((LPVOID *)a1 + 1));
    *((_QWORD *)a1 + 1) = 0LL;
  }
  *v3 = 0LL;
  *((_QWORD *)a1 + 4) = 0LL;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
