/*
 * XREFs of ?UnsubscribeFromServices@CMultitaskingViewServiceProvider@@UEAAJPEAUIServiceProvider@@@Z @ 0x180134690
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_ShutdownChildServices@CMultitaskingViewServiceProvider@@AEAAXXZ @ 0x1801346F4 (-_ShutdownChildServices@CMultitaskingViewServiceProvider@@AEAAXXZ.c)
 *     ?_StopMTVThread@CMultitaskingViewServiceProvider@@AEAAXXZ @ 0x1802BE3EC (-_StopMTVThread@CMultitaskingViewServiceProvider@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMultitaskingViewServiceProvider::UnsubscribeFromServices(
        CMultitaskingViewServiceProvider *this,
        struct IServiceProvider *a2)
{
  __int64 v3; // rcx

  CMultitaskingViewServiceProvider::_ShutdownChildServices((CMultitaskingViewServiceProvider *)((char *)this - 24));
  CMultitaskingViewServiceProvider::_StopMTVThread((CMultitaskingViewServiceProvider *)((char *)this - 24));
  v3 = *((_QWORD *)this + 18);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 18);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 25);
  return 0LL;
}
