/*
 * XREFs of ?_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@W4GetLastActiveClassicWindowReason@@PEAPEAUIClassicWindow@@@Z @ 0x1800ADD14
 * Callers:
 *     ?GetLastActiveClassicWindowForActivation@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@W4GetLastActiveClassicWindowReason@@PEAPEAUHWND__@@@Z @ 0x1800ADBB0 (-GetLastActiveClassicWindowForActivation@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@W4Ge.c)
 *     ?GetLastActiveClassicTimestamp@CClassicWindowManager@@UEAAJW4GetLastActiveClassicWindowReason@@PEAU_FILETIME@@@Z @ 0x1800ADC70 (-GetLastActiveClassicTimestamp@CClassicWindowManager@@UEAAJW4GetLastActiveClassicWindowReason@@P.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_GetLastActiveClassicWindow@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@W4GetLastActiveClassicWindowReason@@PEAPEAUIClassicWindow@@@Z @ 0x1800ADE00 (-_GetLastActiveClassicWindow@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@W4GetLastActiveC.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CClassicWindowManager::_GetLastActiveClassicWindowWithValidation(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  int v8; // esi
  __int64 v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-10h] BYREF
  __int64 v12; // [rsp+28h] [rbp-8h] BYREF
  int v13; // [rsp+68h] [rbp+38h] BYREF

  v11 = 0LL;
  *a4 = 0LL;
  while ( 1 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
    CClassicWindowManager::_GetLastActiveClassicWindow(a1, a2, a3, &v11);
    v13 = 0;
    v12 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *, int *))(*(_QWORD *)v11 + 40LL))(v11, &v12, &v13);
    if ( v8 < 0 )
    {
      v9 = v11;
      goto LABEL_4;
    }
    if ( v13 )
      break;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 72) + 72LL))(a1 + 72, v12);
  }
  v9 = 0LL;
  *a4 = v11;
LABEL_4:
  if ( v9 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return (unsigned int)v8;
}
