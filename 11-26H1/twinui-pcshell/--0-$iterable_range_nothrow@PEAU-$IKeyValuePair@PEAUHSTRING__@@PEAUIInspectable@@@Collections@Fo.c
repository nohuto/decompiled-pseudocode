/*
 * XREFs of ??0?$iterable_range_nothrow@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@wil@@QEAA@PEAU?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@PEAJ@Z @ 0x1804E7E18
 * Callers:
 *     ?Update@CopyToViewValueSetBase@@UEAAJPEAUIUnknown@@@Z @ 0x1804E8E90 (-Update@CopyToViewValueSetBase@@UEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall wil::iterable_range_nothrow<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>::iterable_range_nothrow<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 *v5; // r15
  __int64 (__fastcall *v6)(__int64, _QWORD *); // rdi
  _DWORD *v7; // rbx
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(__int64, __int64 *); // rdi
  _DWORD *v10; // rbx
  char v12; // [rsp+48h] [rbp+10h] BYREF

  *a1 = 0LL;
  v5 = a1 + 1;
  a1[1] = 0LL;
  if ( !a3 )
    a3 = a1 + 3;
  a1[2] = a3;
  *((_DWORD *)a1 + 6) = 0;
  v6 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a2 + 48LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
  v7 = (_DWORD *)a1[2];
  *v7 = v6(a2, a1);
  if ( *(int *)a1[2] >= 0 )
  {
    v12 = 0;
    *(_DWORD *)a1[2] = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*a1 + 56LL))(*a1, &v12);
    if ( *(int *)a1[2] < 0
      || !v12
      || (v8 = *a1,
          v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*a1 + 48LL),
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v5),
          v10 = (_DWORD *)a1[2],
          *v10 = v9(v8, v5),
          *(int *)a1[2] < 0) )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
    }
  }
  return a1;
}
