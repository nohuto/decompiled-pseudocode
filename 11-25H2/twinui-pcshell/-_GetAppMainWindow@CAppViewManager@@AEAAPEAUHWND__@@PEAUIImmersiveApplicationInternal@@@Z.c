/*
 * XREFs of ?_GetAppMainWindow@CAppViewManager@@AEAAPEAUHWND__@@PEAUIImmersiveApplicationInternal@@@Z @ 0x1802FB2B8
 * Callers:
 *     ?GetAppMainWindow@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUHWND__@@@Z @ 0x1802F7120 (-GetAppMainWindow@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAppViewManager::_GetAppMainWindow(
        CAppViewManager *this,
        int (__fastcall ***a2)(struct IImmersiveApplicationInternal *, GUID *, __int64 *))
{
  __int64 v4; // rsi
  int (__fastcall *v5)(struct IImmersiveApplicationInternal *, GUID *, __int64 *); // rbx
  __int64 v6; // rdi
  int (__fastcall *v7)(__int64, __int64, __int64 *); // rbx
  __int64 v9; // [rsp+58h] [rbp+38h] BYREF
  __int64 v10; // [rsp+60h] [rbp+40h] BYREF
  __int64 v11; // [rsp+68h] [rbp+48h] BYREF

  v4 = 0LL;
  v10 = 0LL;
  v5 = **a2;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
  if ( v5((struct IImmersiveApplicationInternal *)a2, &GUID_b00297dd_eb90_48c8_99c0_f0b2d68213d3, &v10) >= 0 )
  {
    v11 = -1LL;
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 24LL))(v10, &v11) >= 0 )
    {
      v9 = 0LL;
      v6 = *((_QWORD *)this + 15);
      v7 = *(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v6 + 64LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
      if ( v7(v6, v11, &v9) >= 0 )
        v4 = *(_QWORD *)(v9 + 24);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
  return v4;
}
