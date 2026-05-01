/*
 * XREFs of ??1CAppViewManager@@UEAA@XZ @ 0x1802F4F80
 * Callers:
 *     ??_GCAppViewManager@@UEAAPEAXI@Z @ 0x1802F5D90 (--_GCAppViewManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?DestroyMem@CTContainer_PolicyLocalMem@@SAHPEAX@Z @ 0x1802F0984 (-DestroyMem@CTContainer_PolicyLocalMem@@SAHPEAX@Z.c)
 *     ??_G?$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x1802F5B88 (--_G-$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 */

void __fastcall CAppViewManager::~CAppViewManager(CAppViewManager *this)
{
  unsigned __int64 *v2; // rdi
  unsigned __int64 i; // rsi
  unsigned __int64 j; // rdi

  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 23);
  v2 = (unsigned __int64 *)((char *)this + 144);
  if ( *((_QWORD *)this + 17) )
  {
    for ( i = 0LL; i < *v2; ++i )
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(*((_QWORD *)this + 17) + 8 * i));
    CoTaskMemFree(*((LPVOID *)this + 17));
    *((_QWORD *)this + 17) = 0LL;
  }
  *v2 = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 15);
  if ( *((_QWORD *)this + 11) )
  {
    for ( j = 0LL; j < *((_QWORD *)this + 12); ++j )
      Microsoft::WRL::ComPtr<IObservablePropertyCallback>::`scalar deleting destructor'(*((_QWORD *)this + 11) + 8 * j);
    CTContainer_PolicyLocalMem::DestroyMem(*((void **)this + 11));
    *((_QWORD *)this + 11) = 0LL;
  }
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 19) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 3);
}
