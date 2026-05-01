/*
 * XREFs of ??$try_get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@AEBUhstring@param@1@PEAUhresult_error@1@@Z @ 0x1802BAD08
 * Callers:
 *     ??$try_get_activation_factory@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIActivationFactory@Foundation@Windows@5@@winrt@@YA?A_PXZ @ 0x1802BACA8 (--$try_get_activation_factory@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIA.c)
 * Callees:
 *     ??$get_runtime_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x1801FEAD4 (--$get_runtime_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@impl@winrt@@YA-.c)
 *     ??1hresult_error@winrt@@QEAA@XZ @ 0x1802D4E34 (--1hresult_error@winrt@@QEAA@XZ.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1802D87F0 (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@im.c)
 */

_QWORD *__fastcall winrt::impl::try_get_activation_factory<winrt::Windows::Foundation::IActivationFactory>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r8
  int v6; // [rsp+20h] [rbp-38h] BYREF
  __int128 v7; // [rsp+28h] [rbp-30h]
  _BYTE v8[32]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF

  v10 = a3;
  v9 = 0LL;
  winrt::impl::get_runtime_activation_factory<winrt::Windows::Foundation::IActivationFactory>(
    (__int64)&v10,
    a2,
    (__int64)&v9);
  if ( (int)v10 < 0 )
  {
    v6 = 0;
    v7 = 0LL;
    ((void (__fastcall *)(_BYTE *, _QWORD, __int64, int *))winrt::hresult_error::hresult_error)(
      v8,
      (unsigned int)v10,
      v4,
      &v6);
    winrt::hresult_error::~hresult_error((winrt::hresult_error *)v8);
  }
  *a1 = v9;
  return a1;
}
