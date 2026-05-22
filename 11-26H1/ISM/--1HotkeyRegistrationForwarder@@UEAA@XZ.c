/*
 * XREFs of ??1HotkeyRegistrationForwarder@@UEAA@XZ @ 0x180108030
 * Callers:
 *     ??_GHotkeyRegistrationForwarder@@UEAAPEAXI@Z @ 0x1801080E0 (--_GHotkeyRegistrationForwarder@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall HotkeyRegistrationForwarder::~HotkeyRegistrationForwarder(HotkeyRegistrationForwarder *this)
{
  void *v2; // rcx

  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 5);
  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (struct std::nothrow_t *)(4 * ((__int64)(*((_QWORD *)this + 4) - (_QWORD)v2) >> 2)));
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
  }
  *((_DWORD *)this + 3) = -1073741823;
}
