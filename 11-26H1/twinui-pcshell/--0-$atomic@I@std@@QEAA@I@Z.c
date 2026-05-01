/*
 * XREFs of ??0?$atomic@I@std@@QEAA@I@Z @ 0x1800DC258
 * Callers:
 *     ??0atomic_ref_count@impl@winrt@@QEAA@I@Z @ 0x1800DC238 (--0atomic_ref_count@impl@winrt@@QEAA@I@Z.c)
 *     ??0TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAA@XZ @ 0x1801083A0 (--0TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAA@XZ.c)
 *     ??0?$weak_ref@$00$00@impl@winrt@@QEAA@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@I@Z @ 0x1801D1C3C (--0-$weak_ref@$00$00@impl@winrt@@QEAA@PEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@I@.c)
 *     ??$make_scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@YA?A_PPEBU?$pair@$$CBUhstring@winrt@@U12@@std@@0@Z @ 0x1802AEC78 (--$make_scoped_input_iterable@U-$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windo.c)
 *     ??0?$weak_ref@$0A@$00@impl@winrt@@QEAA@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@I@Z @ 0x1802BD234 (--0-$weak_ref@$0A@$00@impl@winrt@@QEAA@PEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@I.c)
 * Callees:
 *     ??0?$_Atomic_storage@W4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@winrt@@$03@std@@QEAA@AEBW4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@winrt@@@Z @ 0x1802A6E24 (--0-$_Atomic_storage@W4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@winrt@@$03@std.c)
 */

__int64 __fastcall std::atomic<unsigned int>::atomic<unsigned int>(__int64 a1, int a2)
{
  __int64 v2; // rcx
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  std::_Atomic_storage<enum winrt::Windows::Internal::Shell::TouchKeyboard::TapInvokeSettingValue,4>::_Atomic_storage<enum winrt::Windows::Internal::Shell::TouchKeyboard::TapInvokeSettingValue,4>(
    a1,
    &v4);
  return v2;
}
