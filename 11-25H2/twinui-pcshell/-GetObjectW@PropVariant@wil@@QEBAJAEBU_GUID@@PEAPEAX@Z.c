/*
 * XREFs of ?GetObjectW@PropVariant@wil@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1805C2718
 * Callers:
 *     ?GetUnpackagedAppPinnableItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@AEBVPropertyStoreHelper@wil@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1802904F4 (-GetUnpackagedAppPinnableItem@@YA-AU-$com_ptr@UIShellItem@@@winrt@@AEBVPropertyStoreHelper@wil@@.c)
 *     ?GetAsShellItem@Impl@TaskbarPinHelper@@YAJAEAVPropVariant@wil@@PEAPEAUIShellItem@@@Z @ 0x1805C1ABC (-GetAsShellItem@Impl@TaskbarPinHelper@@YAJAEAVPropVariant@wil@@PEAPEAUIShellItem@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::PropVariant::GetObjectW(wil::PropVariant *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 (__fastcall ***v4)(_QWORD, GUID *); // rcx

  *a3 = 0LL;
  result = 2147500034LL;
  if ( *(_WORD *)this == 13 || *(_WORD *)this == 66 )
  {
    v4 = (__int64 (__fastcall ***)(_QWORD, GUID *))*((_QWORD *)this + 1);
    if ( v4 )
      return (**v4)(v4, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe);
  }
  return result;
}
