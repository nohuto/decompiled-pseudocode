/*
 * XREFs of ?_TransferAllWindowsToNextGlom@CAppViewManager@@AEAAJPEAUIImmersiveApplication@@0W4ApplicationDisappearReason@@@Z @ 0x1802A25EC
 * Callers:
 *     ?ConsolidateView@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@0@Z @ 0x1802F1230 (-ConsolidateView@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@0@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9___1_long_::Invoke @ 0x1802F2B40 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1802F2B40.c)
 *     ?OnAppRemovedFromSwitchers@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@W4SWITCHER_REMOVAL_REASON@@@Z @ 0x1802F3060 (-OnAppRemovedFromSwitchers@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@W4SWITCHER_REMOVAL_R.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_TransferAllWindowsToNextGlomWorker@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIImmersiveApplication@@W4ApplicationDisappearReason@@@Z @ 0x1802F83E0 (-_TransferAllWindowsToNextGlomWorker@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAppViewManager::_TransferAllWindowsToNextGlom(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 a3,
        unsigned int a4)
{
  RTL_SRWLOCK *v8; // rbx
  __int64 (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rdi
  int GlomWorker; // edi
  __int64 v11; // rcx
  PSRWLOCK v13; // [rsp+20h] [rbp-28h]
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v8 = CApplicationManagerUtility::g_pIAMGlobals;
  v13 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v14 = 0LL;
  v9 = **a2;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  GlomWorker = v9(a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v14);
  if ( GlomWorker >= 0 )
    GlomWorker = CAppViewManager::_TransferAllWindowsToNextGlomWorker(a1, v14, a3, a4, v13);
  v11 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  return (unsigned int)GlomWorker;
}
