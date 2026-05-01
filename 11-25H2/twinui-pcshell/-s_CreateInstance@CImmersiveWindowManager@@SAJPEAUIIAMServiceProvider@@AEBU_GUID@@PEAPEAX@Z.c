/*
 * XREFs of ?s_CreateInstance@CImmersiveWindowManager@@SAJPEAUIIAMServiceProvider@@AEBU_GUID@@PEAPEAX@Z @ 0x1802B9FE8
 * Callers:
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x18004BEB0 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$MakeAndInitialize@VCImmersiveWindowManager@@UIImmersiveWindowManager@@AEAPEAUIIAMServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIImmersiveWindowManager@@AEAPEAUIIAMServiceProvider@@@Z @ 0x18023F9D0 (--$MakeAndInitialize@VCImmersiveWindowManager@@UIImmersiveWindowManager@@AEAPEAUIIAMServiceProvi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveWindowManager::s_CreateInstance(
        struct IIAMServiceProvider *a1,
        const struct _GUID *a2,
        void **a3)
{
  int v4; // ebx
  __int64 v5; // rcx
  struct IIAMServiceProvider *v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 (__fastcall ***v8)(_QWORD, GUID *, void **); // [rsp+38h] [rbp+10h] BYREF

  v7 = a1;
  *a3 = 0LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<CImmersiveWindowManager,IImmersiveWindowManager,IIAMServiceProvider * &>(
         &v8,
         &v7);
  if ( v4 >= 0 )
    v4 = (**v8)(v8, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, a3);
  v5 = (__int64)v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return (unsigned int)v4;
}
