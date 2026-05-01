/*
 * XREFs of ?_AllowForegroundRights@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18036F2B8
 * Callers:
 *     ?EnsureForegroundRights@CortanaSharedExperienceManager@@UEAAJXZ @ 0x18036B710 (-EnsureForegroundRights@CortanaSharedExperienceManager@@UEAAJXZ.c)
 *     ?OnAllowForegroundRightsRequested@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x18036C8C0 (-OnAllowForegroundRightsRequested@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetRegisteredForForegroundControl@CortanaSharedExperienceManager@@AEAAJPEAPEAUITrustedComponentForegroundControl@@@Z @ 0x18036FB7C (-_GetRegisteredForForegroundControl@CortanaSharedExperienceManager@@AEAAJPEAPEAUITrustedComponen.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaSharedExperienceManager::_AllowForegroundRights(CortanaSharedExperienceManager *this)
{
  int RegisteredForForegroundControl; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct ITrustedComponentForegroundControl *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
  RegisteredForForegroundControl = CortanaSharedExperienceManager::_GetRegisteredForForegroundControl(this, &v7);
  v3 = RegisteredForForegroundControl;
  if ( RegisteredForForegroundControl >= 0 )
  {
    RegisteredForForegroundControl = (*(__int64 (__fastcall **)(struct ITrustedComponentForegroundControl *))(*(_QWORD *)v7 + 24LL))(v7);
    v3 = RegisteredForForegroundControl;
    if ( RegisteredForForegroundControl >= 0 )
    {
      v3 = 0;
      goto LABEL_7;
    }
    v4 = 847LL;
  }
  else
  {
    v4 = 846LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
    (const char *)(unsigned int)RegisteredForForegroundControl);
LABEL_7:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
  return v3;
}
