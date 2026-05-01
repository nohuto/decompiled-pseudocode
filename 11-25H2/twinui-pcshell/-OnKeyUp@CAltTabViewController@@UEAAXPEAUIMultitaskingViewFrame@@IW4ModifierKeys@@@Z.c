/*
 * XREFs of ?OnKeyUp@CAltTabViewController@@UEAAXPEAUIMultitaskingViewFrame@@IW4ModifierKeys@@@Z @ 0x1804A5620
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CAltTabViewController::OnKeyUp(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  void (__fastcall *v4)(__int64, GUID *, _QWORD); // rbx
  void (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rbx
  void (__fastcall *v6)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF
  void (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 && a3 == 18 )
  {
    v8 = 0LL;
    v4 = *(void (__fastcall **)(__int64, GUID *, _QWORD))(*(_QWORD *)v3 + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
    v4(v3, &GUID_23a47bb4_c26c_4ecf_a5e8_5fbeefdb55d6, &v8);
    if ( !((unsigned __int8 (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v8)[3])(v8) )
    {
      v7[0] = 0LL;
      v5 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v8;
      v6 = **v8;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v7);
      v6(v5, &GUID_405444d2_baa5_48ed_abfe_a673f70be863, v7);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7[0] + 64LL))(v7[0]);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v7);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
  }
}
