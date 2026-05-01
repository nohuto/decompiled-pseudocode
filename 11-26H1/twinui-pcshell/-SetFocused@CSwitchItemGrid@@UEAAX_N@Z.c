/*
 * XREFs of ?SetFocused@CSwitchItemGrid@@UEAAX_N@Z @ 0x1804C7780
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?SetFocused@CMultitaskingViewElementBase@@UEAAX_N@Z @ 0x1804C3190 (-SetFocused@CMultitaskingViewElementBase@@UEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSwitchItemGrid::SetFocused(CSwitchItemGrid *this, char a2)
{
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  CMultitaskingViewElementBase::SetFocused(this, a2);
  if ( *((_BYTE *)this + 176) && !*((_QWORD *)this + 21) )
  {
    (*(void (__fastcall **)(CSwitchItemGrid *, __int64 *, _QWORD, __int64, _DWORD))(*(_QWORD *)this + 272LL))(
      this,
      &v3,
      0LL,
      7LL,
      0);
    if ( v3 )
      (*(void (__fastcall **)(CSwitchItemGrid *))(*(_QWORD *)this + 288LL))(this);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v3);
  }
}
