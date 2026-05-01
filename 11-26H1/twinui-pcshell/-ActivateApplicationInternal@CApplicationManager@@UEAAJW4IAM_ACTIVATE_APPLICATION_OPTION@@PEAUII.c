/*
 * XREFs of ?ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUIImmersiveApplication@@@Z @ 0x1800AD970
 * Callers:
 *     ?ActivateApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4IAM_ACTIVATE_APPLICATION_OPTION@@@Z @ 0x1800AD950 (-ActivateApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4IAM_ACTIVATE_APPLICA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x1800A63B8 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 *     ?GetLastActiveVisiblePopupOrSelf@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@@Z @ 0x1800ADB64 (-GetLastActiveVisiblePopupOrSelf@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@@Z.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByApplication@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1800AEC4C (--$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImme.c)
 *     ?_AttemptPendingActivationTracking@CApplicationManager@@AEAAXPEAUHWND__@@PEAUIImmersiveApplication@@@Z @ 0x1802E6AA8 (-_AttemptPendingActivationTracking@CApplicationManager@@AEAAXPEAUHWND__@@PEAUIImmersiveApplicati.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::ActivateApplicationInternal(
        __int64 a1,
        unsigned int a2,
        struct IImmersiveApplication *a3)
{
  CApplicationManager *v6; // r14
  int First; // ebx
  CApplicationManagerUtility *v8; // rdi
  HWND v9; // rdx
  HWND LastActiveVisiblePopupOrSelf; // rsi
  struct IImmersiveApplicationInternal *v12; // rcx
  int v13; // eax
  struct IImmersiveApplicationInternal *v14; // [rsp+60h] [rbp+30h] BYREF
  CApplicationManagerUtility *v15; // [rsp+78h] [rbp+48h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v6 = (CApplicationManager *)(a1 - 240);
  if ( *((_DWORD *)v6 + 240) == 2 )
  {
    v14 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
    v15 = a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
    First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByApplication>(v6, &v15, &v14, 0LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
    v8 = 0LL;
    if ( First >= 0 )
    {
      v15 = 0LL;
      v13 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *, _QWORD, CApplicationManagerUtility **))(*(_QWORD *)v14 + 312LL))(
              v14,
              a2,
              &v15);
      First = v13;
      if ( v13 == -2147023598 )
      {
        CApplicationManager::_ForgetApplicationNoLock(v6, v14, 1u);
      }
      else if ( v13 >= 0 )
      {
        v8 = v15;
      }
    }
    v12 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  else
  {
    First = -2147024891;
    v8 = 0LL;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( First >= 0 )
  {
    LastActiveVisiblePopupOrSelf = CApplicationManagerUtility::GetLastActiveVisiblePopupOrSelf(v8, v9);
    if ( SetForegroundWindow(LastActiveVisiblePopupOrSelf) )
    {
      First = 0;
      if ( IsIconic((HWND)v8) )
        SwitchToThisWindow((HWND)v8, 1);
      if ( !(unsigned int)IsShellFrameWindow(LastActiveVisiblePopupOrSelf) )
      {
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        CApplicationManager::_AttemptPendingActivationTracking(v6, LastActiveVisiblePopupOrSelf, a3);
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      }
      (*(void (__fastcall **)(PVOID, HWND, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[18].Ptr + 24LL))(
        CApplicationManagerUtility::g_pIAMGlobals[18].Ptr,
        LastActiveVisiblePopupOrSelf,
        3LL);
    }
    else
    {
      return (unsigned int)-2147024891;
    }
  }
  return (unsigned int)First;
}
