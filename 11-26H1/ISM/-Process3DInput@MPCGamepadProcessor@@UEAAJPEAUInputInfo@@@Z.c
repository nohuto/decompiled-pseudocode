/*
 * XREFs of ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801C49D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x18000BF50 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x18000CB74 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18000DD50 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x180024560 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x180024D74 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAULegacyInputInfo@@@Z @ 0x1800476A0 (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     ?Process2DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18005F5B0 (-Process2DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?ShouldHandleMPCInput@MPCGamepadInputHelper@@QEAA_NXZ @ 0x1800B2850 (-ShouldHandleMPCInput@MPCGamepadInputHelper@@QEAA_NXZ.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x1800C5F34 (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 *     ?Copy@GameControllerInputInfo@@QEBAPEAU1@XZ @ 0x1801339E4 (-Copy@GameControllerInputInfo@@QEBAPEAU1@XZ.c)
 *     ?AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ @ 0x1801C3310 (-AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ.c)
 *     ?ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@_K@Z @ 0x1801C34EC (-ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@_K@Z.c)
 *     ?ProcessInteractionMode@MPCGamepadProcessor@@IEAAXPEAUKeyboardInputInfo@@@Z @ 0x1801C4C9C (-ProcessInteractionMode@MPCGamepadProcessor@@IEAAXPEAUKeyboardInputInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCGamepadProcessor::Process3DInput(unsigned __int64 this, struct InputInfo *a2)
{
  struct InputInfo *v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  const char *v6; // r9
  struct GameControllerInputInfo *v8; // rax
  void *v9; // rcx
  __int64 v10; // rax
  MPCGamepadInputHelper *Instance; // rax
  char ShouldHandleMPCInput; // al
  char v13; // si
  int v14; // eax
  unsigned int v15; // esi
  _DWORD *v16; // rsi
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  const char *v20; // r9
  MPCHolographicInputManager *v21; // rbx
  int v22; // eax
  unsigned int v23; // ebx
  __int64 v24; // rcx
  struct IMPCTarget *v25[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v26[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+50h] [rbp-B0h]
  int v28; // [rsp+58h] [rbp-A8h]
  __int64 v29; // [rsp+60h] [rbp-A0h]
  int v30; // [rsp+80h] [rbp-80h]
  wil::details::in1diag3 *retaddr; // [rsp+C28h] [rbp+B28h]

  v2 = a2;
  if ( (*(_BYTE *)a2 & 0x40) != 0 )
  {
    if ( *((_DWORD *)MPCHolographicInputManager::GetInstance() + 912) != 1 )
      return MPCGamepadProcessor::Process2DInput((MPCGamepadProcessor *)this, v2);
    v8 = GameControllerInputInfo::Copy(v2, v4, v5, v6);
    v9 = *(void **)(this + 3664);
    *(_QWORD *)(this + 3664) = v8;
    if ( v9 )
      operator delete(v9, (const struct std::nothrow_t *)0x58);
    v10 = *(_QWORD *)(this - 32 + 3696);
    *(_OWORD *)(this + 3676) = *(_OWORD *)(v10 + 48);
    *(_QWORD *)(this + 3692) = *(_QWORD *)(v10 + 64);
    *(_DWORD *)(this + 3700) = *(_DWORD *)(v10 + 72);
    Instance = MPCGamepadInputHelper::GetInstance();
    ShouldHandleMPCInput = MPCGamepadInputHelper::ShouldHandleMPCInput(Instance);
    v13 = ShouldHandleMPCInput;
    if ( *(_BYTE *)(this + 4157) && !ShouldHandleMPCInput )
      MPCGamepadProcessor::ClearControllerProcessorState((MPCGamepadProcessor *)(this - 32), v2, *((_QWORD *)v2 + 4));
    *(_BYTE *)(this + 4157) = v13;
    MPCButtonHoldHelper::UpdateState(
      *(MPCButtonHoldHelper **)(this + 4248),
      *(_BYTE *)(this + 3676) & 1,
      *((_QWORD *)v2 + 2));
    if ( v13 )
    {
      memset_0(v26, 0, 0xBC0uLL);
      v28 = 3008;
      v14 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0, 0, 0, *((_DWORD *)v2 + 1), (__int64)v26);
      v15 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9B,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
          (const char *)(unsigned int)v14);
        return v15;
      }
      v26[2] = *((_DWORD *)v2 + 2);
      v27 = *((_QWORD *)v2 + 2);
      v28 = 3008;
      v29 = *((_QWORD *)v2 + 4);
      v16 = (_DWORD *)(this + 3672);
      if ( (*(_BYTE *)(this + 3676) & 4) != 0 )
      {
        v17 = v30;
        if ( (*(_DWORD *)(this + 3672) & 4) == 0 )
          v17 = 2;
        v30 = v17;
      }
      if ( !MPCInputProviderBase::IsPrimary(this) )
      {
        if ( MPCGamepadProcessor::AnyInputPressed((MPCGamepadProcessor *)(this - 32), v18, v19, v20) )
          MPCInputProviderBase::SetRequestingPrimary((MPCInputProviderBase *)(this - 24));
      }
      v25[0] = 0LL;
      v21 = MPCHolographicInputManager::GetInstance();
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v25);
      v22 = MPCHolographicInputManager::Process3DInput(
              v21,
              (struct LegacyInputInfo *)v26,
              (struct IMPCInputProviderBase *)(this & -(__int64)(this != 32)),
              v25);
      v23 = v22;
      if ( v22 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB8,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
          (const char *)(unsigned int)v22);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v25);
        return v23;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v25);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(this + 3640) + 48LL))(
        *(_QWORD *)(this + 3640),
        *(_QWORD *)(this + 3664));
      v16 = (_DWORD *)(this + 3672);
    }
    *v16 = *(_DWORD *)(this + 3676);
  }
  else
  {
    if ( *(char *)a2 >= 0 )
    {
      if ( (*(_BYTE *)a2 & 4) == 0 )
        return 0LL;
      MPCGamepadProcessor::ProcessInteractionMode((MPCGamepadProcessor *)(this - 32), a2);
      if ( *((_WORD *)v2 + 30) == 7 )
        return 0LL;
      v24 = *(_QWORD *)(this + 3640);
      a2 = v2;
    }
    else
    {
      v24 = *(_QWORD *)(this + 3640);
    }
    (*(void (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v24 + 48LL))(v24, a2);
  }
  return 0LL;
}
