/*
 * XREFs of ?Initialize@?$NaiveSplitView@PEAUHSTRING__@@PEAU1@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U73456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJPEAU?$IMapView@PEAUHSTRING__@@PEAU1@@345@@Z @ 0x18056E6B8
 * Callers:
 *     ?Split@?$NaiveSplitView@PEAUHSTRING__@@PEAU1@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U73456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@SAJPEAU?$IMapView@PEAUHSTRING__@@PEAU1@@345@PEAPEAU6345@1AEBU?$DefaultEqualityPredicate@PEAUHSTRING__@@@2345@@Z @ 0x1805703C4 (-Split@-$NaiveSplitView@PEAUHSTRING__@@PEAU1@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Interna.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Initialize(
        __int64 a1,
        __int64 a2)
{
  int v4; // ebx
  int v5; // eax
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64 *); // rdi
  int v8; // edi
  __int64 v9; // rbx
  int v11; // [rsp+48h] [rbp+28h] BYREF
  __int64 v12; // [rsp+50h] [rbp+30h] BYREF
  __int64 v13; // [rsp+58h] [rbp+38h] BYREF

  v11 = 0;
  v13 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 56LL))(a2, &v11);
  if ( v4 >= 0 )
  {
    v12 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
    v5 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))a2)(
           a2,
           &GUID_e9bdaaf0_cbf6_5c72_be90_29cbf3a1319b,
           &v12);
    v4 = v5;
    if ( v5 == -2147467262 )
    {
      v4 = -2147418113;
      RoOriginateError(2147549183LL, 0LL);
      RoTransformError(2147500034LL, 2147549183LL, 0LL);
    }
    else if ( v5 >= 0 )
    {
      v6 = v12;
      v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 48LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
      v4 = v7(v6, &v13);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
    if ( v4 >= 0 )
    {
      v8 = v11;
      v9 = v13;
      if ( *(_QWORD *)(a1 + 96) != v13 )
      {
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
        v12 = *(_QWORD *)(a1 + 96);
        *(_QWORD *)(a1 + 96) = v9;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
      }
      *(_DWORD *)(a1 + 104) = v8;
      *(_BYTE *)(a1 + 109) = 1;
      v4 = 0;
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  return (unsigned int)v4;
}
