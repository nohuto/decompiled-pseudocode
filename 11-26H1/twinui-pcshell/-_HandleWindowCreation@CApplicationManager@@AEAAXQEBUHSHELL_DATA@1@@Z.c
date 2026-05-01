/*
 * XREFs of ?_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1800AEE34
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x1800425B0 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1801E6860 (-_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     CDelayIAMOperations::AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___ @ 0x1800AEFE0 (CDelayIAMOperations--AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___.c)
 *     ?_CloakRogueWindow@CApplicationManager@@AEAAXPEAUHWND__@@@Z @ 0x180218F9C (-_CloakRogueWindow@CApplicationManager@@AEAAXPEAUHWND__@@@Z.c)
 *     _lambda_e4f37fdae08429a84761ade0db4bdd38_::_lambda_e4f37fdae08429a84761ade0db4bdd38_ @ 0x1802DCED0 (_lambda_e4f37fdae08429a84761ade0db4bdd38_--_lambda_e4f37fdae08429a84761ade0db4bdd38_.c)
 *     ?_HandleUncloakableWindow@CApplicationManager@@AEAA_NQEBUHSHELL_DATA@1@@Z @ 0x1802E7204 (-_HandleUncloakableWindow@CApplicationManager@@AEAA_NQEBUHSHELL_DATA@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplicationManager::_HandleWindowCreation(
        CApplicationManager *this,
        const struct CApplicationManager::HSHELL_DATA *const a2)
{
  HWND v4; // rbp
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // rcx
  CApplicationManager *v8; // rcx
  _BYTE v9[16]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+10h] BYREF
  HWND ForegroundWindow; // [rsp+80h] [rbp+18h] BYREF

  if ( *((_DWORD *)a2 + 4) == 1 )
  {
    v10 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
    v4 = (HWND)*((_QWORD *)a2 + 1);
    v10 = 0LL;
    if ( GetShellWindow() != v4
      && !(unsigned int)GetPropW(v4, L"MultimonitorActivationException")
      && (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 94) + 24LL))(*((_QWORD *)this + 94)) != v4 )
    {
      (*(void (__fastcall **)(_QWORD, HWND, GUID *, GUID *, __int64 *))(**((_QWORD **)this + 70) + 88LL))(
        *((_QWORD *)this + 70),
        v4,
        &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
        &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
        &v10);
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64, _DWORD, _DWORD, _QWORD))(**((_QWORD **)this + 67)
                                                                                             + 24LL))(
      *((_QWORD *)this + 67),
      *((_QWORD *)a2 + 1),
      *((unsigned int *)a2 + 6),
      1LL,
      v10,
      0,
      0,
      0LL);
    ForegroundWindow = GetForegroundWindow();
    if ( ForegroundWindow == *((HWND *)a2 + 1) )
    {
      v5 = lambda_e4f37fdae08429a84761ade0db4bdd38_::_lambda_e4f37fdae08429a84761ade0db4bdd38_(
             v9,
             this,
             &ForegroundWindow,
             *((_QWORD *)this + 100));
      CDelayIAMOperations::AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___(v6, v5);
    }
    v7 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  else if ( *((_DWORD *)a2 + 4) == 2 )
  {
    if ( (*(_QWORD *)a2 == 26LL || *(_QWORD *)a2 == 29LL) && !CApplicationManager::_HandleUncloakableWindow(this, a2) )
      CApplicationManager::_CloakRogueWindow(v8, *((HWND *)a2 + 1));
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 74) + 24LL))(
      *((_QWORD *)this + 74),
      *((_QWORD *)a2 + 1));
  }
}
