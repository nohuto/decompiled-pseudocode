/*
 * XREFs of ?_StopMTVThread@CMultitaskingViewServiceProvider@@AEAAXXZ @ 0x1802BE3EC
 * Callers:
 *     ?UnsubscribeFromServices@CMultitaskingViewServiceProvider@@UEAAJPEAUIServiceProvider@@@Z @ 0x180134690 (-UnsubscribeFromServices@CMultitaskingViewServiceProvider@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CMultitaskingViewServiceProvider::_StopMTVThread(CMultitaskingViewServiceProvider *this)
{
  __int64 *v1; // rdi
  __int64 v3; // rcx
  void *v4; // rcx

  v1 = (__int64 *)((char *)this + 160);
  v3 = *((_QWORD *)this + 20);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 64LL))(v3);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v1);
  }
  v4 = (void *)*((_QWORD *)this + 30);
  if ( v4 )
    SetEvent(v4);
}
