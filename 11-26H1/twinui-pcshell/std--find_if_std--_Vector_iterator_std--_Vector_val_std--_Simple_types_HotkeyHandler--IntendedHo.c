/*
 * XREFs of std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_HotkeyHandler::IntendedHotKeySnapInfo_______lambda_a0a5f8761721dd83cfa02b3467d33818___ @ 0x1805AE2C4
 * Callers:
 *     ?GetAndRemoveIntendedHotKeySnapInfo@HotkeyHandler@@AEAA?AUIntendedHotKeySnapInfo@1@PEAUHWND__@@@Z @ 0x1805AF000 (-GetAndRemoveIntendedHotKeySnapInfo@HotkeyHandler@@AEAA-AUIntendedHotKeySnapInfo@1@PEAUHWND__@@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 **__fastcall std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_HotkeyHandler::IntendedHotKeySnapInfo_______lambda_a0a5f8761721dd83cfa02b3467d33818___(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *i; // r14
  __int64 v8; // rbx
  __int64 v9; // rbp
  bool v10; // bl
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  for ( i = a2; i != a3; i += 7 )
  {
    v8 = *i;
    v12 = v8;
    v10 = 0;
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      v9 = *a4;
      if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 80LL))(v8) == v9 )
        v10 = 1;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
    if ( v10 )
      break;
  }
  *a1 = i;
  return a1;
}
