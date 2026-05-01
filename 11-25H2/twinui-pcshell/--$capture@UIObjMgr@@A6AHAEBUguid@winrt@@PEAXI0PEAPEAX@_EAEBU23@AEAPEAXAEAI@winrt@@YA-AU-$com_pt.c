/*
 * XREFs of ??$capture@UIObjMgr@@A6AHAEBUguid@winrt@@PEAXI0PEAPEAX@_EAEBU23@AEAPEAXAEAI@winrt@@YA?AU?$com_ptr@UIObjMgr@@@0@A6AHAEBUguid@0@PEAXI0PEAPEAX@_E0AEAPEAXAEAI@Z @ 0x1801B56C0
 * Callers:
 *     ?LoadMetadata@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1801B52A4 (-LoadMetadata@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAA.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     CoCreateInstance_0 @ 0x1802D3650 (CoCreateInstance_0.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 */

LPVOID *__fastcall ___capture_UIObjMgr__A6AHAEBUguid_winrt__PEAXI0PEAPEAX__EAEBU23_AEAPEAXAEAI_winrt__YA_AU__com_ptr_UIObjMgr___0_A6AHAEBUguid_0_PEAXI0PEAPEAX__E0AEAPEAXAEAI_Z(
        LPVOID *a1,
        __int64 a2,
        const IID *a3,
        IUnknown **a4,
        DWORD *a5)
{
  IUnknown *v5; // rdx
  DWORD v8; // r8d
  unsigned int v9; // eax
  LPVOID *result; // rax
  _BYTE v11[4]; // [rsp+34h] [rbp-34h] BYREF
  int v12; // [rsp+38h] [rbp-30h] BYREF
  __int128 v13; // [rsp+40h] [rbp-28h]
  LPVOID ppv; // [rsp+50h] [rbp-18h] BYREF

  v5 = *a4;
  ppv = 0LL;
  v12 = 0;
  v8 = *a5;
  v13 = 0LL;
  v9 = CoCreateInstance_0(a3, v5, v8, &winrt::impl::guid_v<IObjMgr>, &ppv);
  winrt::check_hresult(v11, v9, &v12);
  result = a1;
  *a1 = ppv;
  return result;
}
