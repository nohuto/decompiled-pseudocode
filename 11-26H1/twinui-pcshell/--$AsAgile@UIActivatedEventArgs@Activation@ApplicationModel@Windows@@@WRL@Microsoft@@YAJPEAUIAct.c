/*
 * XREFs of ??$AsAgile@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@@WRL@Microsoft@@YAJPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAVAgileRef@01@@Z @ 0x1801287B8
 * Callers:
 *     ??R_lambda_7ef6cf09cd6767662dbbd6a639c92cb6_@@QEBA@XZ @ 0x180128270 (--R_lambda_7ef6cf09cd6767662dbbd6a639c92cb6_@@QEBA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::AsAgile<Windows::ApplicationModel::Activation::IActivatedEventArgs>(
        __int64 a1,
        __int64 *a2)
{
  unsigned int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( a1 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
    return (unsigned int)RoGetAgileReference(0LL, &GUID_cf651713_cd08_4fd8_b697_a281b6544e2e, a1, a2);
  }
  else
  {
    v7 = 0LL;
    v6 = *a2;
    *a2 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
  }
  return v4;
}
