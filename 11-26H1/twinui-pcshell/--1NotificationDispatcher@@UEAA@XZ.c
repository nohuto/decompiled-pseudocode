/*
 * XREFs of ??1NotificationDispatcher@@UEAA@XZ @ 0x180307CBC
 * Callers:
 *     ??_ENotificationDispatcher@@UEAAPEAXI@Z @ 0x180308540 (--_ENotificationDispatcher@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall NotificationDispatcher::~NotificationDispatcher(NotificationDispatcher *this)
{
  unsigned __int64 *v1; // rdi
  unsigned __int64 i; // rsi

  v1 = (unsigned __int64 *)((char *)this + 56);
  if ( *((_QWORD *)this + 6) )
  {
    for ( i = 0LL; i < *v1; ++i )
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(*((_QWORD *)this + 6) + 8 * i));
    CoTaskMemFree(*((LPVOID *)this + 6));
    *((_QWORD *)this + 6) = 0LL;
  }
  *v1 = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 9) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 3);
}
