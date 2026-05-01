/*
 * XREFs of ??1?$ObservableProperty@V?$ComPtr@UIWICBitmap@@@WRL@Microsoft@@@@QEAA@XZ @ 0x1804BD194
 * Callers:
 *     ??1SwitchItem@@UEAA@XZ @ 0x1804BD294 (--1SwitchItem@@UEAA@XZ.c)
 * Callees:
 *     ??_G?$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x1802F0AD8 (--_G-$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall ObservableProperty<Microsoft::WRL::ComPtr<IWICBitmap>>::~ObservableProperty<Microsoft::WRL::ComPtr<IWICBitmap>>(
        __int64 a1)
{
  unsigned __int64 *v1; // rdi
  unsigned __int64 i; // rsi

  v1 = (unsigned __int64 *)(a1 + 16);
  if ( *(_QWORD *)(a1 + 8) )
  {
    for ( i = 0LL; i < *v1; ++i )
      Microsoft::WRL::ComPtr<IObservablePropertyCallback>::`scalar deleting destructor'((__int64 *)(*(_QWORD *)(a1 + 8)
                                                                                                  + 8 * i));
    CoTaskMemFree(*(LPVOID *)(a1 + 8));
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *v1 = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  return Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)a1);
}
