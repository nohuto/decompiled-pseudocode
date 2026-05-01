/*
 * XREFs of ?ButtonClicked@CScrollButtonContainer@@UEAAXPEAUIGlyphButton@@@Z @ 0x1804D7B00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CScrollButtonContainer::ButtonClicked(CScrollButtonContainer *this, struct IUnknown *a2)
{
  __int64 v4; // rdi
  int (__fastcall *v5)(__int64, GUID *, __int64 *); // rbx
  __int64 v6; // rdx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v4 = *((_QWORD *)this + 27);
  v5 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v4 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
  if ( v5(v4, &GUID_f85ba9ec_771f_4806_ba39_f860056371e5, &v7) >= 0 )
  {
    if ( SHIsSameObject(a2, *((struct IUnknown **)this + 25)) )
    {
      v6 = 2 * (*((_DWORD *)this + 6) & 1u) + 1;
LABEL_6:
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 24LL))(v7, v6);
      goto LABEL_7;
    }
    if ( SHIsSameObject(a2, *((struct IUnknown **)this + 26)) )
    {
      v6 = 2 * (*((_DWORD *)this + 6) & 1u) + 2;
      goto LABEL_6;
    }
  }
LABEL_7:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
}
