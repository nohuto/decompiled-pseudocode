/*
 * XREFs of ?SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z @ 0x1802334F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetForegroundWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@@Z @ 0x1800AD91C (-SetForegroundWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@@Z.c)
 *     ?CanChangeForeground@@YAJXZ @ 0x1800AE468 (-CanChangeForeground@@YAJXZ.c)
 *     ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x18018C714 (-SiteUnk@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     ?_GetLastActiveModernTimestamp@CApplicationManager@@AEAAJPEAU_FILETIME@@@Z @ 0x180221518 (-_GetLastActiveModernTimestamp@CApplicationManager@@AEAAJPEAU_FILETIME@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUpdateViewValueSet@@@WRL@Microsoft@@IEAAKXZ @ 0x180297034 (-InternalRelease@-$ComPtr@UIUpdateViewValueSet@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z @ 0x1802B16BC (-_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z.c)
 *     ?SwitchToThisWindow@CApplicationManagerUtility@@YAXPEAUHWND__@@@Z @ 0x1802B1C94 (-SwitchToThisWindow@CApplicationManagerUtility@@YAXPEAUHWND__@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x1802E7978 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::SetActiveApp(__int64 a1, int a2, HWND a3)
{
  IUnknown **v6; // rax
  unsigned int v7; // ebx
  int v8; // eax
  int LastActiveModernWindowForActivation; // esi
  __int64 v11; // rcx
  HWND v12; // rdx
  int v13; // edi
  int v14; // edi
  void *ppvOut; // [rsp+30h] [rbp-10h] BYREF
  FILETIME FileTime1; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  HWND v19; // [rsp+78h] [rbp+38h] BYREF

  v19 = 0LL;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl)
    || (unsigned int)(a2 - 1) > 1
    || !(unsigned int)IsGamingFullScreenExperienceActive() )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( *(_DWORD *)(a1 - 240 + 960) == 2 )
    {
      LastActiveModernWindowForActivation = 0;
      v11 = *(_QWORD *)(a1 + 296);
      if ( v11 )
      {
        if ( a2 == 2 )
        {
          FileTime1 = 0LL;
          LastActiveModernWindowForActivation = (*(__int64 (__fastcall **)(__int64, __int64, FILETIME *))(*(_QWORD *)v11 + 96LL))(
                                                  v11,
                                                  1LL,
                                                  &FileTime1);
          if ( LastActiveModernWindowForActivation < 0
            || (ppvOut = 0LL,
                (int)CApplicationManager::_GetLastActiveModernTimestamp(
                       (CApplicationManager *)(a1 - 240),
                       (struct _FILETIME *)&ppvOut) < 0)
            || CompareFileTime(&FileTime1, (const FILETIME *)&ppvOut) >= 0 )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64, HWND *))(**(_QWORD **)(a1 - 240 + 536) + 104LL))(
              *(_QWORD *)(a1 - 240 + 536),
              0LL,
              1LL,
              &v19);
          }
          else
          {
            CApplicationManager::_GetLastActiveModernWindowForActivation((CApplicationManager *)(a1 - 240), &v19);
          }
        }
        else if ( a2 == 8 )
        {
          v19 = a3;
        }
        else
        {
          LastActiveModernWindowForActivation = CApplicationManager::_GetLastActiveModernWindowForActivation(
                                                  (CApplicationManager *)(a1 - 240),
                                                  &v19);
        }
      }
    }
    else
    {
      LastActiveModernWindowForActivation = -2147024891;
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( LastActiveModernWindowForActivation < 0 || !*(_QWORD *)(a1 + 296) )
      return (unsigned int)LastActiveModernWindowForActivation;
    v13 = a2 - 1;
    if ( !v13 )
      goto LABEL_25;
    v14 = v13 - 1;
    if ( !v14 )
    {
      CApplicationManagerUtility::SwitchToThisWindow((CApplicationManagerUtility *)v19, v12);
      return (unsigned int)LastActiveModernWindowForActivation;
    }
    if ( v14 == 6 )
    {
LABEL_25:
      if ( v19 )
        return (unsigned int)CApplicationManagerUtility::SetForegroundWindow((CApplicationManagerUtility *)v19, v12);
      LastActiveModernWindowForActivation = CanChangeForeground();
      if ( LastActiveModernWindowForActivation >= 0 )
        return (unsigned int)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 328) + 40LL))(*(_QWORD *)(a1 + 328));
    }
    return (unsigned int)LastActiveModernWindowForActivation;
  }
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IUpdateViewValueSet>::InternalRelease(&ppvOut);
  v6 = (IUnknown **)CWRLObjectWithGITSite::SiteUnk(a1 - 192, &FileTime1);
  v7 = (unsigned int)IUnknown_QueryService(
                       *v6,
                       &GUID_e0e78cc4_82f7_4d70_bd5c_217e39804a26,
                       &GUID_e0e78cc4_82f7_4d70_bd5c_217e39804a26,
                       &ppvOut) >> 31;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&FileTime1);
  if ( (unsigned __int8)v7 != 1 )
  {
    v8 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ppvOut + 80LL))(ppvOut);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xCD6,
        (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v8);
  }
  Microsoft::WRL::ComPtr<IUpdateViewValueSet>::InternalRelease(&ppvOut);
  return 0LL;
}
