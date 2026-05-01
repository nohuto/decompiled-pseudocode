/*
 * XREFs of ?LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGW4_BCASTDVR_COMMAND@@@Z @ 0x180349B9C
 * Callers:
 *     GamingOverlayExperienceManager::GameBarFseWarmLaunch$_ResumeCoro$1 @ 0x1803443B0 (GamingOverlayExperienceManager--GameBarFseWarmLaunch$_ResumeCoro$1.c)
 *     ?HandleShellViewDismissRequested@GamingOverlayExperienceManager@@AEAAXAEBUDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@Z @ 0x180347D68 (-HandleShellViewDismissRequested@GamingOverlayExperienceManager@@AEAAXAEBUDismissShellViewReques.c)
 *     ?HandleShellViewShowRequested@GamingOverlayExperienceManager@@AEAAXAEBUShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@Z @ 0x180347DD0 (-HandleShellViewShowRequested@GamingOverlayExperienceManager@@AEAAXAEBUShowShellViewRequestedEve.c)
 *     ?OnMessage@GamingOverlayExperienceManager@@UEAAJI_K_J@Z @ 0x18034B060 (-OnMessage@GamingOverlayExperienceManager@@UEAAJI_K_J@Z.c)
 *     GamingOverlayExperienceManager::SendGamepadCommand$_ResumeCoro$1 @ 0x18034EAD0 (GamingOverlayExperienceManager--SendGamepadCommand$_ResumeCoro$1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004E0F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18010C19C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIPackageFamilyStatics@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackageFamilyStatics@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18033BFEC (--$GetActivationFactory@V-$ComPtr@UIPackageFamilyStatics@StateRepository@Internal@Windows@@@WRL@.c)
 *     ?GameBarSupportsDirectUriActivation@GamingOverlayExperienceManager@@AEAA_NXZ @ 0x180344690 (-GameBarSupportsDirectUriActivation@GamingOverlayExperienceManager@@AEAA_NXZ.c)
 *     ?LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x180349854 (-LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGPEAPEAU-$IAsyncOperation@_N@Foundation@W.c)
 *     ?LaunchGameBarLegacy@GamingOverlayExperienceManager@@AEAAJW4_BCASTDVR_COMMAND@@@Z @ 0x180349D10 (-LaunchGameBarLegacy@GamingOverlayExperienceManager@@AEAAJW4_BCASTDVR_COMMAND@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GamingOverlayExperienceManager::LaunchGameBar(
        GamingOverlayExperienceManager *a1,
        const WCHAR *a2,
        unsigned int a3)
{
  unsigned int v6; // esi
  int v7; // eax
  unsigned int v8; // r8d
  char v9; // r14
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, _QWORD, PVOID, char *); // rdi
  HSTRING_HEADER *v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // rdx
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-38h] BYREF
  __int64 v19; // [rsp+50h] [rbp-20h]
  char v20[8]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v21; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v6 = 0;
  v21 = 0LL;
  v19 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.StateRepository.PackageFamily",
    0x2Fu,
    0x2Eu);
  v7 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackageFamilyStatics>>(
         v19,
         &v21);
  if ( v7 >= 0 )
  {
    v9 = 1;
    v20[0] = 1;
    v10 = v21;
    v11 = *(__int64 (__fastcall **)(__int64, _QWORD, PVOID, char *))(*(_QWORD *)v21 + 184LL);
    v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)&c_GamingOverlayPfn,
            v8);
    v13 = v11(v10, 0LL, v12[1].Reserved.Reserved1, v20);
    if ( v13 >= 0 )
    {
      if ( !v20[0] )
        goto LABEL_7;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x666,
        (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)(unsigned int)v13);
    }
    v9 = 0;
LABEL_7:
    if ( v9 )
      goto LABEL_14;
    goto LABEL_8;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x663,
    (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
    (const char *)(unsigned int)v7);
LABEL_8:
  if ( GamingOverlayExperienceManager::GameBarSupportsDirectUriActivation(a1) )
  {
    v15 = GamingOverlayExperienceManager::LaunchGameBar(v14, a2, 0LL);
    if ( v15 < 0 )
    {
      v16 = 1652LL;
      goto LABEL_13;
    }
  }
  else
  {
    v15 = GamingOverlayExperienceManager::LaunchGameBarLegacy(a1, a3);
    if ( v15 < 0 )
    {
      v16 = 1648LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)(unsigned int)v15);
      v6 = v15;
    }
  }
LABEL_14:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
  return v6;
}
