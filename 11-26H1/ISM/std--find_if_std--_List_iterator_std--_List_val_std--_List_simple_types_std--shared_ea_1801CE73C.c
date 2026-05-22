/*
 * XREFs of std::find_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_7cc4ca75940c0ea695d2d6398f0fa979___ @ 0x1801CE73C
 * Callers:
 *     ?RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z @ 0x1801D0CC0 (-RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BB00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800CEB28 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 *     ?FindRegisteredClient@HotKeyProcessor@@AEAAJAEBUMessageObjectID@@PEAPEAVHotkeyClientRegistration@@@Z @ 0x1801D02BC (-FindRegisteredClient@HotKeyProcessor@@AEAAJAEBUMessageObjectID@@PEAPEAVHotkeyClientRegistration.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::find_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_7cc4ca75940c0ea695d2d6398f0fa979___(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        HotKeyProcessor *a4)
{
  const struct MessageObjectID **v8; // r15
  bool v9; // bp
  std::_Ref_count_base *v10; // rcx
  _QWORD v12[7]; // [rsp+20h] [rbp-38h] BYREF
  struct HotkeyClientRegistration *v13; // [rsp+60h] [rbp+8h] BYREF
  const struct MessageObjectID **v14; // [rsp+68h] [rbp+10h]

  while ( a2 != a3 )
  {
    v8 = (const struct MessageObjectID **)std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(
                                            v12,
                                            a2 + 2);
    v14 = v8;
    v13 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
    HotKeyProcessor::FindRegisteredClient(a4, *v8, &v13);
    v9 = v13 && !*((_BYTE *)v13 + 80);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
    v10 = v8[1];
    if ( v10 )
      std::_Ref_count_base::_Decref(v10);
    if ( v9 )
      break;
    a2 = (_QWORD *)*a2;
  }
  *a1 = a2;
  return a1;
}
