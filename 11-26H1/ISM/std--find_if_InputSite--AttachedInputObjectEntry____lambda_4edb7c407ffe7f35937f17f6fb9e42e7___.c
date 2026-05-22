/*
 * XREFs of std::find_if_InputSite::AttachedInputObjectEntry____lambda_4edb7c407ffe7f35937f17f6fb9e42e7___ @ 0x18003FF50
 * Callers:
 *     ?RemoveAllObjectsForElement@InputSite@@QEAAXPEAVInputSiteElementProxy@@@Z @ 0x18003FE84 (-RemoveAllObjectsForElement@InputSite@@QEAAXPEAVInputSiteElementProxy@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall std::find_if_InputSite::AttachedInputObjectEntry____lambda_4edb7c407ffe7f35937f17f6fb9e42e7___(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v3; // rsi
  int (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v6)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v7; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  if ( a1 != a2 )
  {
    while ( *v3 != *a3 )
    {
      v3 += 2;
      if ( v3 == a2 )
        return v3;
    }
    v8 = 0LL;
    v5 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))v3[1];
    v6 = **v5;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
    if ( v6(v5, &GUID_fc9627fe_ee9e_4718_b797_19522e5898d2, &v8) >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
    v7 = v8;
    if ( v8 )
    {
      v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  return v3;
}
