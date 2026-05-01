/*
 * XREFs of ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x1800437F8
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x1800425B0 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?IsClassicApplication@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4ZBID@@@Z @ 0x180094778 (-IsClassicApplication@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4ZBID@@@Z.c)
 *     ?IsForcedAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180094830 (-IsForcedAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180094858 (-IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800955AC (-IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1801562F8 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ?_AnalyzeProxyShellNotification@CApplicationManager@@AEAAXPEAUHSHELL_DATA@1@@Z @ 0x180163A38 (-_AnalyzeProxyShellNotification@CApplicationManager@@AEAAXPEAUHSHELL_DATA@1@@Z.c)
 *     ?IsModernAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18016FC1C (-IsModernAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?AcquireShared@CIAMGlobals@@QEAA?AVCAutoSRWSharedLock@@XZ @ 0x18018E910 (-AcquireShared@CIAMGlobals@@QEAA-AVCAutoSRWSharedLock@@XZ.c)
 *     ?ShouldTreatShellManagedWindowAsNotShellManaged@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z @ 0x1801D995C (-ShouldTreatShellManagedWindowAsNotShellManaged@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z.c)
 *     ?_ComputeApplicationId@CApplicationManager@@AEAAJPEAUHSHELL_DATA@1@@Z @ 0x1801EB0BC (-_ComputeApplicationId@CApplicationManager@@AEAAJPEAUHSHELL_DATA@1@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801EB174 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@Q.c)
 *     ?GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z @ 0x1801F024C (-GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z.c)
 *     ?ShouldTreatShellManagedWindowAsCharm@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z @ 0x1802E5A80 (-ShouldTreatShellManagedWindowAsCharm@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_58645534@@@details@wil@@QEAA_NXZ @ 0x1802E79B8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_58645534@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall CApplicationManager::_AnalyzeShellNotification(
        CApplicationManager **this,
        ShellManagedWindowHelper **a2)
{
  char v4; // di
  ShellManagedWindowHelper *v5; // rcx
  unsigned int *v6; // rsi
  HWND v7; // rdx
  HWND v8; // rdx
  HWND v9; // rdx
  HWND v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rcx
  int v13; // ecx
  CApplicationManager *v14; // rcx
  ShellManagedWindowHelper *v15; // rax
  char *v16; // rax
  char *v17; // rax
  char *v18; // rax
  CApplicationManagerUtility *v19; // rcx
  bool IsForcedAppWindow; // al
  char *v22; // rax
  char *v23; // rax
  char *v24; // rax
  char *v25; // rax
  char *v26; // rax
  __int64 v27; // rdx
  HWND v28; // rdx
  char v29[8]; // [rsp+30h] [rbp-20h] BYREF
  ShellManagedWindowHelper *v30; // [rsp+38h] [rbp-18h] BYREF
  int v31; // [rsp+40h] [rbp-10h]
  int v32; // [rsp+88h] [rbp+38h] BYREF
  __int64 v33; // [rsp+90h] [rbp+40h] BYREF
  char v34; // [rsp+98h] [rbp+48h] BYREF

  if ( *a2 == (ShellManagedWindowHelper *)18 || *a2 == (ShellManagedWindowHelper *)22 )
    return 1;
  v4 = 0;
  CApplicationManager::_AnalyzeProxyShellNotification(
    (CApplicationManager *)this,
    (struct CApplicationManager::HSHELL_DATA *)a2);
  v5 = a2[1];
  if ( !v5 )
    return v4;
  v6 = (unsigned int *)(a2 + 3);
  if ( !(unsigned int)GetWindowBand(v5, a2 + 3) )
    return v4;
  if ( !CApplicationManagerUtility::IsModernAppWindow(a2[1], v7)
    || ShellManagedWindowHelper::ShouldTreatShellManagedWindowAsNotShellManaged(a2[1], v8) )
  {
    if ( (unsigned __int8)CApplicationManagerUtility::IsClassicApplication(a2[1], *v6)
      || ShellManagedWindowHelper::ShouldTreatShellManagedWindowAsNotShellManaged(a2[1], v10) )
    {
      *((_DWORD *)a2 + 4) = 1;
      goto LABEL_20;
    }
    v11 = *v6;
    if ( *v6 == 13 )
    {
      *((_DWORD *)a2 + 4) = 3;
      LOBYTE(v10) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetImpl'::`2'::impl,
        v10);
      CIAMGlobals::AcquireShared(v12, &v34);
      v33 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
      v30 = a2[1];
      v31 = 2;
      if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(this, &v30, &v33, v29) >= 0 )
        *((_DWORD *)a2 + 4) = 2;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
    }
    else
    {
      if ( v11 > 0x11 || (v13 = 131344, !_bittest(&v13, v11)) )
      {
        *((_DWORD *)a2 + 4) = 4;
        goto LABEL_20;
      }
      CIAMGlobals::AcquireShared(131344LL, &v34);
      v33 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
      v30 = a2[1];
      v31 = 2;
      *((_DWORD *)a2 + 4) = (((int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(
                                     this,
                                     &v30,
                                     &v33,
                                     v29) >> 31) & 2)
                          + 2;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v34);
  }
  else
  {
    *((_DWORD *)a2 + 4) = ShellManagedWindowHelper::ShouldTreatShellManagedWindowAsCharm(a2[1], v9) + 2;
  }
LABEL_20:
  *((_BYTE *)a2 + 28) = 0;
  v32 = 0;
  v14 = this[97];
  if ( v14
    && (*(int (__fastcall **)(CApplicationManager *, _QWORD, _QWORD, int *))(*(_QWORD *)v14 + 48LL))(
         v14,
         *((unsigned int *)a2 + 2),
         0LL,
         &v32) >= 0
    && v32 == 1 )
  {
    *((_BYTE *)a2 + 28) = 1;
  }
  if ( *((_DWORD *)a2 + 4) == 2 || *((_DWORD *)a2 + 4) == 3 )
  {
    if ( !*((_BYTE *)a2 + 20) )
    {
      if ( *a2 == (ShellManagedWindowHelper *)32 && CApplicationManagerUtility::IsOwnedWindow(a2[1], v10) )
        a2[1] = (ShellManagedWindowHelper *)CApplicationManagerUtility::GetVisibleRootOwner(a2[1], 0LL);
      goto LABEL_63;
    }
    if ( *a2 == (ShellManagedWindowHelper *)21 )
    {
      v27 = 1LL;
    }
    else
    {
      if ( *a2 == (ShellManagedWindowHelper *)24 )
      {
        a2[1] = 0LL;
LABEL_63:
        if ( a2[1] )
        {
          *((_BYTE *)a2 + 21) = 1;
          return (int)CApplicationManager::_ComputeApplicationId(v14, (struct CApplicationManager::HSHELL_DATA *)a2) >= 0;
        }
        return v4;
      }
      v27 = 0LL;
    }
    a2[1] = (ShellManagedWindowHelper *)CApplicationManagerUtility::GetVisibleRootOwner(a2[1], v27);
    *((_BYTE *)a2 + 20) = 0;
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_58645534>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_58645534>::GetImpl'::`2'::impl)
      && *((_DWORD *)a2 + 4) == 3
      && !ShellManagedWindowHelper::ShouldTreatShellManagedWindowAsCharm(a2[1], v28) )
    {
      *((_DWORD *)a2 + 4) = 2;
    }
    goto LABEL_63;
  }
  v15 = *a2;
  if ( *a2 != (ShellManagedWindowHelper *)34 )
  {
    if ( *((_DWORD *)a2 + 4) != 1 )
    {
      if ( v15 == (ShellManagedWindowHelper *)20 )
      {
        if ( a2[1] != this[96] )
          return v4;
      }
      else
      {
        v22 = (char *)v15 - 19;
        if ( v22 )
        {
          v23 = v22 - 4;
          if ( v23 )
          {
            v24 = v23 - 2;
            if ( v24 )
            {
              v25 = v24 - 1;
              if ( v25 )
              {
                v26 = v25 - 1;
                if ( v26 )
                {
                  if ( v26 != (char *)65506 )
                    return v4;
                  *a2 = (ShellManagedWindowHelper *)19;
                }
              }
            }
          }
        }
      }
      return 1;
    }
    v16 = (char *)v15 - 17;
    if ( v16 )
    {
      v17 = v16 - 3;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( !v18 )
        {
LABEL_37:
          *((_BYTE *)a2 + 21) = v4;
          return 1;
        }
        if ( v18 != (char *)1 )
        {
          v19 = a2[1];
          if ( *((_BYTE *)a2 + 20) )
            IsForcedAppWindow = CApplicationManagerUtility::IsForcedAppWindow(v19, v10);
          else
            IsForcedAppWindow = CApplicationManagerUtility::IsTrayWindowStyleCheck((HWND)v19, v10);
          v4 = IsForcedAppWindow;
          goto LABEL_37;
        }
      }
    }
    v4 = 1;
    goto LABEL_37;
  }
  return v4;
}
