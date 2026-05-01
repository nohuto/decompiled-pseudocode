/*
 * XREFs of ?_RecoverApplicationViews@CApplicationManager@@AEAAXPEAUIViewEventDispatcherCrashRecovery@@@Z @ 0x1801FCF60
 * Callers:
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180092E50 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x180061BB8 (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CApplicationManager::_RecoverApplicationViews(
        CApplicationManager *this,
        struct IViewEventDispatcherCrashRecovery *a2)
{
  int (__fastcall *v4)(struct IViewEventDispatcherCrashRecovery *, _QWORD, __int64 *); // rbx
  unsigned int i; // esi
  __int64 v6; // rbx
  int (__fastcall *v7)(__int64, _QWORD, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **); // rdi
  __int64 v8; // rcx
  unsigned int v9; // [rsp+60h] [rbp+30h] BYREF
  __int64 v10; // [rsp+68h] [rbp+38h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v11; // [rsp+70h] [rbp+40h] BYREF

  v10 = 0LL;
  v4 = *(int (__fastcall **)(struct IViewEventDispatcherCrashRecovery *, _QWORD, __int64 *))(*(_QWORD *)a2 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
  if ( v4(a2, *((_QWORD *)this + 103), &v10) >= 0 )
  {
    v9 = 0;
    if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v10 + 24LL))(v10, &v9) >= 0 )
    {
      for ( i = 0; i < v9; ++i )
      {
        v11 = 0LL;
        v6 = v10;
        v7 = *(int (__fastcall **)(__int64, _QWORD, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)v10 + 32LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
        if ( v7(v6, i, &GUID_79eaeb1a_4280_4be7_b345_9f7a790149f5, &v11) >= 0 )
          CApplicationManager::_HandleViewCreation(this, v11, 0LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
      }
    }
  }
  v8 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
}
