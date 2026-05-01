/*
 * XREFs of ??$capture@UIServiceProvider@@A6AHAEBUguid@winrt@@PEAXI0PEAPEAX@_EAEBU23@AEAPEAXAEAI@winrt@@YA?AU?$com_ptr@UIServiceProvider@@@0@A6AHAEBUguid@0@PEAXI0PEAPEAX@_E0AEAPEAXAEAI@Z @ 0x180208DC8
 * Callers:
 *     ?InsertAfter@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAAJ_K@Z @ 0x180025660 (-InsertAfter@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt.c)
 *     ??$create_instance@UIServiceProvider@@@winrt@@YA?A_PAEBUguid@0@IPEAX@Z @ 0x180208D68 (--$create_instance@UIServiceProvider@@@winrt@@YA-A_PAEBUguid@0@IPEAX@Z.c)
 * Callees:
 *     ??$capture_to@UIServiceProvider@@P6AHAEBUguid@winrt@@PEAXI0PEAPEAX@_EAEBU23@AEAPEAXAEAI@impl@winrt@@YAHPEAPEAXP6AHAEBUguid@1@PEAXI10@_E1AEAPEAXAEAI@Z @ 0x180242D48 (--$capture_to@UIServiceProvider@@P6AHAEBUguid@winrt@@PEAXI0PEAPEAX@_EAEBU23@AEAPEAXAEAI@impl@win.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 */

_QWORD *__fastcall ___capture_UIServiceProvider__A6AHAEBUguid_winrt__PEAXI0PEAPEAX__EAEBU23_AEAPEAXAEAI_winrt__YA_AU__com_ptr_UIServiceProvider___0_A6AHAEBUguid_0_PEAXI0PEAPEAX__E0AEAPEAXAEAI_Z(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5)
{
  unsigned int v6; // eax
  _QWORD *result; // rax
  _BYTE v8[4]; // [rsp+34h] [rbp-34h] BYREF
  int v9; // [rsp+38h] [rbp-30h] BYREF
  __int128 v10; // [rsp+40h] [rbp-28h]
  __int64 v11; // [rsp+50h] [rbp-18h] BYREF

  v11 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v6 = ___capture_to_UIServiceProvider__P6AHAEBUguid_winrt__PEAXI0PEAPEAX__EAEBU23_AEAPEAXAEAI_impl_winrt__YAHPEAPEAXP6AHAEBUguid_1_PEAXI10__E1AEAPEAXAEAI_Z(
         (unsigned int)&v11,
         (unsigned int)CoCreateInstance_0,
         a3,
         a4,
         a5);
  winrt::check_hresult(v8, v6, &v9);
  result = a1;
  *a1 = v11;
  return result;
}
