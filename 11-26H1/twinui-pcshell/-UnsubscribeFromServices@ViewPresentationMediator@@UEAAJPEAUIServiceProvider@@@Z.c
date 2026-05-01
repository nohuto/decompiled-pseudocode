/*
 * XREFs of ?UnsubscribeFromServices@ViewPresentationMediator@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801B88F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ViewPresentationMediator::UnsubscribeFromServices(
        ViewPresentationMediator *this,
        struct IServiceProvider *a2)
{
  __int64 *v2; // rsi
  __int64 v4; // rcx

  v2 = (__int64 *)((char *)this + 160);
  v4 = *((_QWORD *)this + 20);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v4 + 64LL))(
      v4,
      ((unsigned __int64)this + 80) & -(__int64)(this != (ViewPresentationMediator *)40));
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)*v2 + 136LL))(
      *v2,
      ((unsigned __int64)this + 88) & -(__int64)(this != (ViewPresentationMediator *)40));
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)*v2 + 160LL))(
      *v2,
      ((unsigned __int64)this + 96) & -(__int64)(this != (ViewPresentationMediator *)40));
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v2);
  }
  return 0LL;
}
