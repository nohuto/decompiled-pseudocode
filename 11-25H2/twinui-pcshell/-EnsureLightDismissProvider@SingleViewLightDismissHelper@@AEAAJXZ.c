/*
 * XREFs of ?EnsureLightDismissProvider@SingleViewLightDismissHelper@@AEAAJXZ @ 0x1802C5F0C
 * Callers:
 *     ?InternalRegisterWithLightDismiss@SingleViewLightDismissHelper@@AEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180206698 (-InternalRegisterWithLightDismiss@SingleViewLightDismissHelper@@AEAAJW4LIGHT_DISMISS_FLAGS@@PEAU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SingleViewLightDismissHelper::EnsureLightDismissProvider(SingleViewLightDismissHelper *this)
{
  HRESULT v3; // eax
  unsigned int v4; // ebx
  LPVOID v5; // rbx
  __int64 (__fastcall *v6)(LPVOID, __int64 *); // rdi
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v9; // [rsp+50h] [rbp+20h] BYREF
  LPVOID ppv; // [rsp+58h] [rbp+28h] BYREF

  if ( *(_QWORD *)this )
    return 0LL;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  v3 = CoCreateInstance(
         &GUID_228826af_02e1_4226_a9e0_99a855e455a6,
         0LL,
         4u,
         &GUID_9767060c_9476_42e2_8f7b_2f10fd13765c,
         &ppv);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v9 = 0LL;
    v5 = ppv;
    v6 = *(__int64 (__fastcall **)(LPVOID, __int64 *))(*(_QWORD *)ppv + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
    v7 = v6(v5, &v9);
    v4 = v7;
    if ( v7 >= 0 )
    {
      if ( !*(_QWORD *)this )
      {
        *(_QWORD *)this = v9;
        v9 = 0LL;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
      v4 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2A,
        (int)"shell\\twinui\\experiencemanagers\\corelib\\lightdismisshelper.cpp",
        (const char *)(unsigned int)v7);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23,
      (int)"shell\\twinui\\experiencemanagers\\corelib\\lightdismisshelper.cpp",
      (const char *)(unsigned int)v3);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  return v4;
}
