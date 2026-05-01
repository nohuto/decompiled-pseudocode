/*
 * XREFs of ?HandleCreation@CCharmsWindowManager@@UEAAXPEAUHWND__@@@Z @ 0x1802EE780
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?s_CreateInstance@CTaskWindow@@SAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4TASK_WINDOW_TYPE@@PEAUIImmersiveApplicationInternal@@PEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@AEBU_GUID@@PEAPEAX@Z @ 0x1801C0580 (-s_CreateInstance@CTaskWindow@@SAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal.c)
 *     ?ValidateWindowProcess@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4WINDOW_BELONGS_TO_PROCESSTYPE@1@@Z @ 0x1802E90E4 (-ValidateWindowProcess@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4WINDOW_BELONGS_TO_PROCESSTY.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CCharmsWindowManager::HandleCreation(CCharmsWindowManager *this, CallerIdentity *a2, void **a3)
{
  CTaskWindow *v5; // [rsp+30h] [rbp-18h]
  __int64 v6; // [rsp+60h] [rbp+18h] BYREF

  if ( CApplicationManagerUtility::ValidateWindowProcess(a2, 0, a3) )
  {
    v6 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
    if ( (int)CTaskWindow::s_CreateInstance((__int64)a2, 0LL, 2u, 0LL, 0LL, 0LL, v5, &v6) >= 0 )
      (*(void (__fastcall **)(char *, __int64 *))(*((_QWORD *)this + 2) + 8LL))((char *)this + 16, &v6);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
  }
}
