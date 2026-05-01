/*
 * XREFs of wistd::__function::__func__lambda_56f82e2d72bc142b92699b1566ad23a5__void___cdecl(unsigned_long_const_&)_::operator() @ 0x18039A7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18018F20C (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?CheckAndUpdateHostedAumid@CScreenClippingExperienceManager@@AEAAJXZ @ 0x18039AB20 (-CheckAndUpdateHostedAumid@CScreenClippingExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wistd::__function::__func__lambda_56f82e2d72bc142b92699b1566ad23a5__void___cdecl_unsigned_long_const____::operator()(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax
  struct IInspectable *v4; // [rsp+30h] [rbp+8h] BYREF

  if ( !*a2 )
  {
    v4 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v4);
    Microsoft::WRL::WeakRef::InternalResolve(
      (Microsoft::WRL::WeakRef *)(a1 + 16),
      &GUID_93acf1bc_b1c9_423a_9fa5_d80c0935ddee,
      &v4);
    if ( v4 )
      CScreenClippingExperienceManager::CheckAndUpdateHostedAumid(*(CScreenClippingExperienceManager **)(a1 + 8));
    return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v4);
  }
  return result;
}
