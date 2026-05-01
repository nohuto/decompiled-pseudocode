/*
 * XREFs of ?s_CreateInstance@CVisibilityOverride@@SAJPEAUIImmersiveApplicationVisibilityOverride@@AEBU_GUID@@PEAPEAX@Z @ 0x1802E9970
 * Callers:
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180092E50 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$MakeAndInitialize@VCVisibilityOverride@@UIVisibilityOverride@@AEAPEAUIImmersiveApplicationVisibilityOverride@@@Details@WRL@Microsoft@@YAJPEAPEAUIVisibilityOverride@@AEAPEAUIImmersiveApplicationVisibilityOverride@@@Z @ 0x1800D5E10 (--$MakeAndInitialize@VCVisibilityOverride@@UIVisibilityOverride@@AEAPEAUIImmersiveApplicationVis.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVisibilityOverride::s_CreateInstance(
        struct IImmersiveApplicationVisibilityOverride *a1,
        const struct _GUID *a2,
        void **a3)
{
  int v4; // ebx
  struct IImmersiveApplicationVisibilityOverride *v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 (__fastcall ***v7)(_QWORD, GUID *, void **); // [rsp+38h] [rbp+10h] BYREF

  v6 = a1;
  *a3 = 0LL;
  v7 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<CVisibilityOverride,IVisibilityOverride,IImmersiveApplicationVisibilityOverride * &>(
         &v7,
         (__int64 *)&v6);
  if ( v4 >= 0 )
    v4 = (**v7)(v7, &GUID_328dedb7_8f68_4e6c_a210_a6c2c37504e8, a3);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
  return (unsigned int)v4;
}
