/*
 * XREFs of ?_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1800D8E98
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x18003D6F0 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1801F0B58 (-_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     CDelayIAMOperations::AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___ @ 0x1800D901C (CDelayIAMOperations--AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___.c)
 *     ?_CloakRogueWindow@CApplicationManager@@AEAAXPEAUHWND__@@@Z @ 0x180228104 (-_CloakRogueWindow@CApplicationManager@@AEAAXPEAUHWND__@@@Z.c)
 *     ?_HandleUncloakableWindow@CApplicationManager@@AEAA_NQEBUHSHELL_DATA@1@@Z @ 0x1802ED1B0 (-_HandleUncloakableWindow@CApplicationManager@@AEAA_NQEBUHSHELL_DATA@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplicationManager::_HandleWindowCreation(
        CApplicationManager *this,
        const struct CApplicationManager::HSHELL_DATA *const a2)
{
  HWND v4; // rbp
  HWND ForegroundWindow; // rax
  __int64 v6; // rcx
  CApplicationManager *v7; // rcx
  _QWORD v8[2]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v9; // [rsp+78h] [rbp+10h] BYREF

  if ( *((_DWORD *)a2 + 4) == 1 )
  {
    v9 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
    v4 = (HWND)*((_QWORD *)a2 + 1);
    v9 = 0LL;
    if ( GetShellWindow() != v4
      && !(unsigned int)GetPropW(v4, L"MultimonitorActivationException")
      && (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 94) + 24LL))(*((_QWORD *)this + 94)) != v4 )
    {
      (*(void (__fastcall **)(_QWORD, HWND, GUID *, GUID *, __int64 *))(**((_QWORD **)this + 70) + 88LL))(
        *((_QWORD *)this + 70),
        v4,
        &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
        &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
        &v9);
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64, _DWORD, _DWORD, _QWORD))(**((_QWORD **)this + 67)
                                                                                             + 24LL))(
      *((_QWORD *)this + 67),
      *((_QWORD *)a2 + 1),
      *((unsigned int *)a2 + 6),
      1LL,
      v9,
      0,
      0,
      0LL);
    ForegroundWindow = GetForegroundWindow();
    if ( ForegroundWindow == *((HWND *)a2 + 1) )
    {
      v8[0] = this;
      v8[1] = ForegroundWindow;
      CDelayIAMOperations::AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___(*((_QWORD *)this + 100), v8);
    }
    v6 = v9;
    if ( v9 )
    {
      v9 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  else if ( *((_DWORD *)a2 + 4) == 2 )
  {
    if ( (*(_QWORD *)a2 == 26LL || *(_QWORD *)a2 == 29LL) && !CApplicationManager::_HandleUncloakableWindow(this, a2) )
      CApplicationManager::_CloakRogueWindow(v7, *((HWND *)a2 + 1));
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 74) + 24LL))(
      *((_QWORD *)this + 74),
      *((_QWORD *)a2 + 1));
  }
}
