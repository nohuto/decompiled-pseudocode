/*
 * XREFs of ?SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z @ 0x180242480
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CanChangeForeground@@YAJXZ @ 0x1800D9C18 (-CanChangeForeground@@YAJXZ.c)
 *     ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x1801935A0 (-SiteUnk@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     ?SetForegroundWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@@Z @ 0x1801C973C (-SetForegroundWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@@Z.c)
 *     ?_GetLastActiveModernTimestamp@CApplicationManager@@AEAAJPEAU_FILETIME@@@Z @ 0x18023067C (-_GetLastActiveModernTimestamp@CApplicationManager@@AEAAJPEAU_FILETIME@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIGameInput@@@WRL@Microsoft@@IEAAKXZ @ 0x18029E6C0 (-InternalRelease@-$ComPtr@UIGameInput@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z @ 0x1802BA5E8 (-_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z.c)
 *     ?SwitchToThisWindow@CApplicationManagerUtility@@YAXPEAUHWND__@@@Z @ 0x1802BAE68 (-SwitchToThisWindow@CApplicationManagerUtility@@YAXPEAUHWND__@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x1802ED918 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::SetActiveApp(__int64 a1, int a2, HWND a3)
{
  IUnknown **v6; // rax
  HRESULT v7; // ebx
  int v8; // eax
  _QWORD *v10; // rsi
  int LastActiveModernWindowForActivation; // edi
  __int64 v12; // rcx
  HWND v13; // rdx
  int v14; // ebx
  int v15; // ebx
  void *ppvOut; // [rsp+30h] [rbp-10h] BYREF
  FILETIME FileTime1; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  HWND v20; // [rsp+78h] [rbp+38h] BYREF

  v20 = 0LL;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl)
    || (unsigned int)(a2 - 1) > 1
    || !(unsigned int)IsGamingFullScreenExperienceActive() )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v10 = (_QWORD *)(a1 + 296);
    if ( *(_DWORD *)(a1 + 720) == 2 )
    {
      LastActiveModernWindowForActivation = 0;
      v12 = *v10;
      if ( *v10 )
      {
        if ( a2 == 2 )
        {
          FileTime1 = 0LL;
          LastActiveModernWindowForActivation = (*(__int64 (__fastcall **)(__int64, __int64, FILETIME *))(*(_QWORD *)v12 + 96LL))(
                                                  v12,
                                                  1LL,
                                                  &FileTime1);
          if ( LastActiveModernWindowForActivation < 0
            || (ppvOut = 0LL,
                (int)CApplicationManager::_GetLastActiveModernTimestamp(
                       (CApplicationManager *)(a1 - 240),
                       (struct _FILETIME *)&ppvOut) < 0)
            || CompareFileTime(&FileTime1, (const FILETIME *)&ppvOut) >= 0 )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64, HWND *))(*(_QWORD *)*v10 + 104LL))(*v10, 0LL, 1LL, &v20);
          }
          else
          {
            CApplicationManager::_GetLastActiveModernWindowForActivation((CApplicationManager *)(a1 - 240), &v20);
          }
        }
        else if ( a2 == 8 )
        {
          v20 = a3;
        }
        else
        {
          LastActiveModernWindowForActivation = CApplicationManager::_GetLastActiveModernWindowForActivation(
                                                  (CApplicationManager *)(a1 - 240),
                                                  &v20);
        }
      }
    }
    else
    {
      LastActiveModernWindowForActivation = -2147024891;
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( LastActiveModernWindowForActivation < 0 || !*v10 )
      return (unsigned int)LastActiveModernWindowForActivation;
    v14 = a2 - 1;
    if ( !v14 )
      goto LABEL_25;
    v15 = v14 - 1;
    if ( !v15 )
    {
      CApplicationManagerUtility::SwitchToThisWindow((CApplicationManagerUtility *)v20, v13);
      return (unsigned int)LastActiveModernWindowForActivation;
    }
    if ( v15 == 6 )
    {
LABEL_25:
      if ( v20 )
        return (unsigned int)CApplicationManagerUtility::SetForegroundWindow((CApplicationManagerUtility *)v20, v13);
      LastActiveModernWindowForActivation = CanChangeForeground();
      if ( LastActiveModernWindowForActivation >= 0 )
        return (unsigned int)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 328) + 40LL))(*(_QWORD *)(a1 + 328));
    }
    return (unsigned int)LastActiveModernWindowForActivation;
  }
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IGameInput>::InternalRelease(&ppvOut);
  v6 = (IUnknown **)CWRLObjectWithGITSite::SiteUnk(a1 - 192, &FileTime1);
  v7 = IUnknown_QueryService(
         *v6,
         &GUID_e0e78cc4_82f7_4d70_bd5c_217e39804a26,
         &GUID_e0e78cc4_82f7_4d70_bd5c_217e39804a26,
         &ppvOut);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&FileTime1);
  if ( v7 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ppvOut + 80LL))(ppvOut);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xCD9,
        (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v8);
  }
  Microsoft::WRL::ComPtr<IGameInput>::InternalRelease(&ppvOut);
  return 0LL;
}
