/*
 * XREFs of ?_ImmersiveShellQueryService@SearchAppExperienceManager@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18039C0B0
 * Callers:
 *     ?_RegisterMessages@SearchAppExperienceManager@@AEAAJXZ @ 0x18039CC64 (-_RegisterMessages@SearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetImmersiveShell@SearchAppExperienceManager@@AEAAJPEAPEAUIServiceProvider@@@Z @ 0x18039BF90 (-_GetImmersiveShell@SearchAppExperienceManager@@AEAAJPEAPEAUIServiceProvider@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchAppExperienceManager::_ImmersiveShellQueryService(
        SearchAppExperienceManager *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  int ImmersiveShell; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IServiceProvider *v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
  ImmersiveShell = SearchAppExperienceManager::_GetImmersiveShell(this, &v11);
  v7 = ImmersiveShell;
  if ( ImmersiveShell >= 0 )
  {
    ImmersiveShell = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, void **))v11->lpVtbl->QueryService)(
                       v11,
                       &IID_IImmersiveWindowMessageService,
                       &GUID_fc62ce95_8396_401a_b74f_88df0d75e112,
                       a4);
    v7 = ImmersiveShell;
    if ( ImmersiveShell >= 0 )
    {
      v7 = 0;
      goto LABEL_7;
    }
    v8 = 758LL;
  }
  else
  {
    v8 = 757LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
    (const char *)(unsigned int)ImmersiveShell);
LABEL_7:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
  return v7;
}
