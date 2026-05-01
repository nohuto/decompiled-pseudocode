/*
 * XREFs of ?_ImmersiveShellQueryService@CortanaSharedExperienceManager@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18036FCEC
 * Callers:
 *     ?_GetRegisteredForForegroundControl@CortanaSharedExperienceManager@@AEAAJPEAPEAUITrustedComponentForegroundControl@@@Z @ 0x18036FB7C (-_GetRegisteredForForegroundControl@CortanaSharedExperienceManager@@AEAAJPEAPEAUITrustedComponen.c)
 *     ?_RegisterMessages@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180370904 (-_RegisterMessages@CortanaSharedExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetImmersiveShell@CortanaSharedExperienceManager@@AEAAJPEAPEAUIServiceProvider@@@Z @ 0x18036FA08 (-_GetImmersiveShell@CortanaSharedExperienceManager@@AEAAJPEAPEAUIServiceProvider@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaSharedExperienceManager::_ImmersiveShellQueryService(
        CortanaSharedExperienceManager *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  int ImmersiveShell; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  struct IServiceProvider *v12[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v12[0] = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v12);
  ImmersiveShell = CortanaSharedExperienceManager::_GetImmersiveShell(this, v12);
  v9 = ImmersiveShell;
  if ( ImmersiveShell >= 0 )
  {
    ImmersiveShell = ((__int64 (__fastcall *)(struct IServiceProvider *, const struct _GUID *, const struct _GUID *, void **))v12[0]->lpVtbl->QueryService)(
                       v12[0],
                       a2,
                       a3,
                       a4);
    v9 = ImmersiveShell;
    if ( ImmersiveShell >= 0 )
    {
      v9 = 0;
      goto LABEL_7;
    }
    v10 = 826LL;
  }
  else
  {
    v10 = 825LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
    (const char *)(unsigned int)ImmersiveShell);
LABEL_7:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v12);
  return v9;
}
