/*
 * XREFs of ?SwitchItemDragStarted@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z @ 0x1804C4CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMultitaskingViewControllerBase::SwitchItemDragStarted(
        CMultitaskingViewControllerBase *this,
        void (__fastcall ***a2)(struct ISwitchItem *, GUID *, __int64 *))
{
  char v4; // al
  void (__fastcall *v5)(struct ISwitchItem *, GUID *, __int64 *); // rbx
  __int64 v6; // rsi
  void (__fastcall *v7)(__int64, _QWORD, char *); // rdi
  _QWORD *v8; // rax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v4 = (*(__int64 (__fastcall **)(CMultitaskingViewControllerBase *))(*(_QWORD *)this + 32LL))(this);
  if ( *((_QWORD *)this + 6) )
  {
    if ( (v4 & 2) != 0 )
    {
      v9 = 0LL;
      v5 = **a2;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
      v5((struct ISwitchItem *)a2, &GUID_de9754c3_efc7_4024_99ca_fbded7bee7cb, &v9);
      v6 = *((_QWORD *)this + 6);
      v7 = *(void (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v6 + 32LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 7);
      v8 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 24LL))(v9, &v10);
      v7(v6, *v8, (char *)this + 56);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
    }
  }
}
