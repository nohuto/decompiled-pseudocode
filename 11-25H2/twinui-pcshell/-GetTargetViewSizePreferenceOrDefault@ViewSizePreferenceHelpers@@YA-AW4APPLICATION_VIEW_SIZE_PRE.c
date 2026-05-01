/*
 * XREFs of ?GetTargetViewSizePreferenceOrDefault@ViewSizePreferenceHelpers@@YA?AW4APPLICATION_VIEW_SIZE_PREFERENCE@@PEAUIUnknown@@@Z @ 0x1802BE5CC
 * Callers:
 *     ?GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18010B3F0 (-GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collect.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewSizePreferenceHelpers::GetTargetViewSizePreferenceOrDefault(IUnknown *a1)
{
  unsigned int v2; // ebx
  void *v4; // rcx
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF
  void *ppvOut; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  if ( IUnknown_QueryService(
         a1,
         (const GUID *const)&SID_LaunchTargetViewSizePreference,
         &GUID_2f0666c6_12f7_4360_b511_a394a0553725,
         &ppvOut) < 0
    || (*(int (__fastcall **)(void *, unsigned int *))(*(_QWORD *)ppvOut + 24LL))(ppvOut, &v5) < 0 )
  {
    v4 = ppvOut;
    if ( ppvOut )
    {
      ppvOut = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL))(v4);
    }
    return 0LL;
  }
  else
  {
    v2 = v5;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    return v2;
  }
}
